/*
 * XREFs of NtAlpcCreateSecurityContext @ 0x140A99EA0
 * Callers:
 *     DifNtAlpcCreateSecurityContextWrapper @ 0x14066C9A0 (DifNtAlpcCreateSecurityContextWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     AlpcpCreateSecurityContext @ 0x1409BC550 (AlpcpCreateSecurityContext.c)
 *     AlpcpDereferenceBlobEx @ 0x1409C0380 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteBlob @ 0x1409C1AB4 (AlpcpDeleteBlob.c)
 */

__int64 __fastcall NtAlpcCreateSecurityContext(HANDLE Handle, int a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // di
  int SecurityContext; // ebx
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
  if ( a2 )
  {
    SecurityContext = -1073741811;
  }
  else
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode )
    {
      if ( ((unsigned __int8)a3 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      RtlCopyFromUser(Src, a3, 0x18uLL);
    }
    else
    {
      RtlCopyVolatileMemory(Src, a3, 0x18uLL);
    }
    if ( Src[1] )
    {
      if ( PreviousMode )
        RtlCopyFromUser(&v14, Src[1], 0xCuLL);
      else
        RtlCopyVolatileMemory(&v14, Src[1], 0xCuLL);
    }
    Object = 0LL;
    SecurityContext = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
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
          RtlWriteULong64ToUser(a3 + 2, *(_QWORD *)(BugCheckParameter2 + 8));
        else
          a3[2] = *(_QWORD *)(BugCheckParameter2 + 8);
        AlpcpDereferenceBlobEx(v8, 1);
      }
      ObfDereferenceObject(Object);
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)SecurityContext;
}
