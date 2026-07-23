/*
 * XREFs of HalpHvMceConsumedMemoryErrorRecovery @ 0x140587658
 * Callers:
 *     HalpMceRecoveryMemoryErrorAmd @ 0x140590FC0 (HalpMceRecoveryMemoryErrorAmd.c)
 *     HalpMceRecoveryMemoryErrorIntel @ 0x1405910E4 (HalpMceRecoveryMemoryErrorIntel.c)
 * Callees:
 *     HalpHvGetMachineCheckContext @ 0x1405881D8 (HalpHvGetMachineCheckContext.c)
 *     HalpMemoryErrorDeferredRecovery @ 0x1405918FC (HalpMemoryErrorDeferredRecovery.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HalpHvMceConsumedMemoryErrorRecovery(__int64 a1, int a2, __int16 a3, char a4, char a5)
{
  int v8; // edx
  __int128 v10; // [rsp+50h] [rbp-38h] BYREF
  __int64 v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0;
  if ( (int)HalpHvGetMachineCheckContext(a1, &v10) < 0 )
    return 3221225473LL;
  if ( (_DWORD)v10 != 3 )
    return 3221225659LL;
  LOBYTE(v8) = 1;
  if ( (int)HalpMemoryErrorDeferredRecovery(a2, v8, DWORD2(v10), v11, v12, a3, a4, a5, 0) < 0 )
    return 3221225473LL;
  else
    return 0LL;
}
