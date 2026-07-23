/*
 * XREFs of PopWnfAirplaneModeCallback @ 0x140606870
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExQueryWnfStateData @ 0x1409C4360 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopWnfAirplaneModeCallback(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // ebx
  KIRQL v5; // al
  unsigned int v7; // [rsp+20h] [rbp-38h] BYREF
  int v8; // [rsp+28h] [rbp-30h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+38h] [rbp-20h]

  v8 = a4;
  v7 = 12;
  v9 = 0LL;
  v10 = 0;
  v4 = ExQueryWnfStateData(a1, &v8, &v9, &v7);
  if ( v4 >= 0 )
  {
    if ( v7 >= 0xC )
    {
      v5 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
      BYTE4(PpmIdlePolicyLock.ReadOperationCount) = (_DWORD)v9 == 0;
      KeReleaseSpinLock(&PopCsResiliencyStatsLock, v5);
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v4;
}
