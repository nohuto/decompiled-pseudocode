/*
 * XREFs of NtImpersonateThread @ 0x140AE0D70
 * Callers:
 *     DifNtImpersonateThreadWrapper @ 0x14067D8A0 (DifNtImpersonateThreadWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     SeImpersonateClientEx @ 0x1409041F0 (SeImpersonateClientEx.c)
 *     SeCreateClientSecurity @ 0x140905390 (SeCreateClientSecurity.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtImpersonateThread(
        HANDLE ServerThreadHandle,
        HANDLE ClientThreadHandle,
        PSECURITY_QUALITY_OF_SERVICE SecurityQos)
{
  KPROCESSOR_MODE PreviousMode; // bl
  NTSTATUS result; // eax
  int v8; // edi
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
    if ( ((unsigned __int8)SecurityQos & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    RtlCopyFromUser(&ClientSecurityQos, SecurityQos, 0xCuLL);
  }
  else
  {
    RtlCopyVolatileMemory(&ClientSecurityQos, SecurityQos, 0xCuLL);
  }
  Object = 0LL;
  result = ObReferenceObjectByHandle(ClientThreadHandle, 0x200u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v10 = 0LL;
    v8 = ObReferenceObjectByHandle(ServerThreadHandle, 0x100u, (POBJECT_TYPE)PsThreadType, PreviousMode, &v10, 0LL);
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
