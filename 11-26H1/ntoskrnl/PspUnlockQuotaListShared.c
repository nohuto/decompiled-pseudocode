/*
 * XREFs of PspUnlockQuotaListShared @ 0x1404D61AC
 * Callers:
 *     PspLookupProcessQuotaBlock @ 0x140AB8E5C (PspLookupProcessQuotaBlock.c)
 *     PspAssignProcessQuotaBlock @ 0x140AB8F60 (PspAssignProcessQuotaBlock.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402BA1B0 (KiLeaveCriticalRegionUnsafe.c)
 */

_QWORD *__fastcall PspUnlockQuotaListShared(__int64 a1, signed __int64 *a2)
{
  __int64 v4; // rdx

  if ( _InterlockedCompareExchange64(a2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a2);
  KeAbPostRelease((unsigned __int64)a2);
  return KiLeaveCriticalRegionUnsafe(a1, v4);
}
