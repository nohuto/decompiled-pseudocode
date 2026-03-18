/*
 * XREFs of PspUnlockQuotaListExclusive @ 0x140509360
 * Callers:
 *     PspRemoveQuotaBlock @ 0x1409E0DC0 (PspRemoveQuotaBlock.c)
 *     PspLookupProcessQuotaBlock @ 0x140AB8E5C (PspLookupProcessQuotaBlock.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspUnlockQuotaListExclusive(__int64 a1, volatile signed __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8

  if ( (_InterlockedExchangeAdd64(a2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2);
  KeAbPostRelease((unsigned __int64)a2);
  return KeLeaveCriticalRegionThread(a1, v4, v5);
}
