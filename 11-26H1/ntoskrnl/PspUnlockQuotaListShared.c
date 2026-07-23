/*
 * XREFs of PspUnlockQuotaListShared @ 0x1404CF97C
 * Callers:
 *     PspLookupProcessQuotaBlock @ 0x140ABA274 (PspLookupProcessQuotaBlock.c)
 *     PspAssignProcessQuotaBlock @ 0x140ABA378 (PspAssignProcessQuotaBlock.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 */

_QWORD *__fastcall PspUnlockQuotaListShared(__int64 a1, signed __int64 *a2)
{
  __int64 v4; // rdx

  if ( _InterlockedCompareExchange64(a2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a2);
  KeAbPostRelease((unsigned __int64)a2);
  return KiLeaveCriticalRegionUnsafe(a1, v4);
}
