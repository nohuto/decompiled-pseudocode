/*
 * XREFs of NtImpersonateThread @ 0x140AE31F0
 * Callers:
 *     DifNtImpersonateThreadWrapper @ 0x140679CC0 (DifNtImpersonateThreadWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     SeImpersonateClientEx @ 0x1409286E0 (SeImpersonateClientEx.c)
 *     SeCreateClientSecurity @ 0x140929880 (SeCreateClientSecurity.c)
 */

NTSTATUS __fastcall NtImpersonateThread(HANDLE Handle, HANDLE a2, void *Src)
{
  KPROCESSOR_MODE PreviousMode; // bl
  NTSTATUS result; // eax
  NTSTATUS v8; // edi
  PVOID v9; // rbx
  PVOID v10; // [rsp+38h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+48h] [rbp-90h] BYREF
  struct _SECURITY_CLIENT_CONTEXT ClientContext; // [rsp+50h] [rbp-88h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+A0h] [rbp-38h] BYREF

  *(_QWORD *)&ClientSecurityQos.Length = 0LL;
  *(_DWORD *)&ClientSecurityQos.ContextTrackingMode = 0;
  *((_DWORD *)&ClientContext.SecurityQos + 3) = 0;
  memset_0(&ClientContext, 0, 0x44uLL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    RtlCopyFromUser(&ClientSecurityQos, Src, 0xCuLL);
  }
  else
  {
    RtlCopyVolatileMemory(&ClientSecurityQos, Src, 0xCuLL);
  }
  Object = 0LL;
  result = ObReferenceObjectByHandle(a2, 0x200u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v10 = 0LL;
    v8 = ObReferenceObjectByHandle(Handle, 0x100u, (POBJECT_TYPE)PsThreadType, PreviousMode, &v10, 0LL);
    v9 = Object;
    if ( v8 >= 0 )
    {
      v8 = SeCreateClientSecurity((PETHREAD)Object, &ClientSecurityQos, 0, &ClientContext);
      if ( v8 >= 0 )
      {
        v8 = SeImpersonateClientEx(&ClientContext, (PETHREAD)v10);
        ObfDereferenceObjectWithTag(ClientContext.ClientToken, 0x63436553u);
      }
      ObfDereferenceObject(v10);
    }
    ObfDereferenceObject(v9);
    return v8;
  }
  return result;
}
