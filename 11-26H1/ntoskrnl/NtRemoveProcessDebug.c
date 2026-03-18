/*
 * XREFs of NtRemoveProcessDebug @ 0x140985870
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     DbgkClearProcessDebugObject @ 0x140957E88 (DbgkClearProcessDebugObject.c)
 *     PsTestProtectedProcessIncompatibility @ 0x140985588 (PsTestProtectedProcessIncompatibility.c)
 */

__int64 __fastcall NtRemoveProcessDebug(ULONG_PTR a1, void *a2)
{
  char PreviousMode; // si
  __int64 result; // rax
  struct _KPROCESS *v5; // rdi
  _KPROCESS_SECURE_STATE v6; // rbx
  int v7; // ebx
  PVOID Object[2]; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v9[8]; // [rsp+50h] [rbp-98h] BYREF
  unsigned __int64 v10; // [rsp+58h] [rbp-90h]
  __int64 v11; // [rsp+60h] [rbp-88h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object[0] = 0LL;
  result = ObpReferenceObjectByHandleWithTag(a1, 2048LL, PsProcessType, PreviousMode, 0x4F676244u, Object, 0LL, 0LL);
  if ( (int)result >= 0 )
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
        v7 = ObReferenceObjectByHandle(a2, 2u, DbgkDebugObjectType, PreviousMode, Object, 0LL);
        if ( v7 >= 0 )
        {
          v7 = DbgkClearProcessDebugObject(v5, (__int64)Object[0]);
          ObfDereferenceObject(Object[0]);
        }
      }
    }
    ObfDereferenceObjectWithTag(v5, 0x4F676244u);
    return (unsigned int)v7;
  }
  return result;
}
