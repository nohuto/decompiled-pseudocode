/*
 * XREFs of NtRemoveProcessDebug @ 0x140947870
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     PsTestProtectedProcessIncompatibility @ 0x140947588 (PsTestProtectedProcessIncompatibility.c)
 *     DbgkClearProcessDebugObject @ 0x14094B8B8 (DbgkClearProcessDebugObject.c)
 */

NTSTATUS __cdecl NtRemoveProcessDebug(HANDLE ProcessHandle, HANDLE DebugObjectHandle)
{
  char PreviousMode; // si
  NTSTATUS result; // eax
  struct _KPROCESS *v5; // rdi
  _KPROCESS_SECURE_STATE v6; // rbx
  NTSTATUS v7; // ebx
  PVOID Object[2]; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v9[8]; // [rsp+50h] [rbp-98h] BYREF
  unsigned __int64 v10; // [rsp+58h] [rbp-90h]
  __int64 v11; // [rsp+60h] [rbp-88h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object[0] = 0LL;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)ProcessHandle,
             2048,
             (__int64)PsProcessType,
             PreviousMode,
             0x4F676244u,
             Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    v5 = (struct _KPROCESS *)Object[0];
    if ( PsTestProtectedProcessIncompatibility(
           PreviousMode,
           (__int64)KeGetCurrentThread()->ApcState.Process,
           (__int64)Object[0]) )
    {
      v7 = -1073740014;
    }
    else
    {
      v6.EntireField = (unsigned __int64)v5->SecureState;
      if ( (v6.EntireField & 1) == 0
        || (memset_0(v9, 0, 0x68uLL),
            v11 = 0LL,
            v10 = v6.EntireField & 0xFFFFFFFFFFFFFFFCuLL,
            v7 = VslpEnterIumSecureMode(2u, 0xCu, 0, (__int64)v9),
            v7 >= 0) )
      {
        Object[0] = 0LL;
        v7 = ObReferenceObjectByHandle(DebugObjectHandle, 2u, DbgkDebugObjectType, PreviousMode, Object, 0LL);
        if ( v7 >= 0 )
        {
          v7 = DbgkClearProcessDebugObject(v5);
          ObfDereferenceObject(Object[0]);
        }
      }
    }
    ObfDereferenceObjectWithTag(v5, 0x4F676244u);
    return v7;
  }
  return result;
}
