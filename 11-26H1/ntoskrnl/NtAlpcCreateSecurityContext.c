/*
 * XREFs of NtAlpcCreateSecurityContext @ 0x140A9E020
 * Callers:
 *     DifNtAlpcCreateSecurityContextWrapper @ 0x140670580 (DifNtAlpcCreateSecurityContextWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     AlpcpCreateSecurityContext @ 0x14098D530 (AlpcpCreateSecurityContext.c)
 *     AlpcpDereferenceBlobEx @ 0x140991360 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteBlob @ 0x140992A94 (AlpcpDeleteBlob.c)
 */

NTSTATUS __cdecl NtAlpcCreateSecurityContext(HANDLE PortHandle, ULONG Flags, PALPC_SECURITY_ATTR SecurityAttribute)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // di
  NTSTATUS SecurityContext; // ebx
  ULONG_PTR v8; // rsi
  PVOID Object; // [rsp+38h] [rbp-60h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-50h] BYREF
  void *Src[2]; // [rsp+50h] [rbp-48h] BYREF
  int v13; // [rsp+60h] [rbp-38h]
  __int64 v14; // [rsp+68h] [rbp-30h] BYREF
  int v15; // [rsp+70h] [rbp-28h]

  *(_OWORD *)Src = 0LL;
  v13 = 0;
  v14 = 0LL;
  v15 = 0;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( Flags )
  {
    SecurityContext = -1073741811;
  }
  else
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode )
    {
      if ( ((unsigned __int8)SecurityAttribute & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      RtlCopyFromUser(Src, SecurityAttribute, 0x18uLL);
    }
    else
    {
      RtlCopyVolatileMemory(Src, SecurityAttribute, 0x18uLL);
    }
    if ( Src[1] )
    {
      if ( PreviousMode )
        RtlCopyFromUser(&v14, Src[1], 0xCuLL);
      else
        RtlCopyVolatileMemory(&v14, Src[1], 0xCuLL);
    }
    Object = 0LL;
    SecurityContext = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( SecurityContext >= 0 )
    {
      if ( !Src[1] )
      {
        v14 = *(_QWORD *)((char *)Object + 260);
        v15 = *((_DWORD *)Object + 67);
      }
      SecurityContext = AlpcpCreateSecurityContext(
                          (__int64)Object,
                          (__int64)KeGetCurrentThread(),
                          1,
                          (__int64)&v14,
                          (__int64 **)&BugCheckParameter2);
      if ( SecurityContext >= 0 )
      {
        v8 = BugCheckParameter2;
        if ( PreviousMode )
          RtlWriteULong64ToUser(&SecurityAttribute->ContextHandle, *(_QWORD *)(BugCheckParameter2 + 8));
        else
          SecurityAttribute->ContextHandle = *(ALPC_HANDLE *)(BugCheckParameter2 + 8);
        AlpcpDereferenceBlobEx(v8, 1);
      }
      ObfDereferenceObject(Object);
    }
  }
  KeLeaveCriticalRegion();
  return SecurityContext;
}
