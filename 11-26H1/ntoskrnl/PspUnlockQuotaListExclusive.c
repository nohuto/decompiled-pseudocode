/*
 * XREFs of PspUnlockQuotaListExclusive @ 0x140502E10
 * Callers:
 *     PspRemoveQuotaBlock @ 0x1409B9030 (PspRemoveQuotaBlock.c)
 *     PspLookupProcessQuotaBlock @ 0x140ABA274 (PspLookupProcessQuotaBlock.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspUnlockQuotaListExclusive(__int64 a1, volatile signed __int64 *a2)
{
  if ( (_InterlockedExchangeAdd64(a2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2);
  KeAbPostRelease((unsigned __int64)a2);
  return KeLeaveCriticalRegionThread(a1);
}
