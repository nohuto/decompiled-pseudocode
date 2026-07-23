/*
 * XREFs of PspUnlockThreadSecurityExclusive @ 0x140319080
 * Callers:
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspUnlockThreadSecurityExclusive(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx

  v3 = a1 + 1424;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1424), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 1424);
  KeAbPostRelease(v3);
  return KeLeaveCriticalRegionThread(a2);
}
