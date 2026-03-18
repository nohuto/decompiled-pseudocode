/*
 * XREFs of PspUnlockThreadSecurityExclusive @ 0x140317050
 * Callers:
 *     NtSetInformationThread @ 0x140A833F0 (NtSetInformationThread.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspUnlockThreadSecurityExclusive(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8

  v3 = a1 + 1424;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1424), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 1424);
  KeAbPostRelease(v3);
  return KeLeaveCriticalRegionThread(a2, v4, v5);
}
