/*
 * XREFs of ExpUnlockHandleTableExclusive @ 0x14031722C
 * Callers:
 *     ExDisableHandleTracing @ 0x1406CF91C (ExDisableHandleTracing.c)
 *     ExEnableHandleTracing @ 0x14077C508 (ExEnableHandleTracing.c)
 *     ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x140AECFD8 (ExEnableRaiseUMExceptionOnInvalidHandleClose.c)
 *     ExEnableHandleExceptions @ 0x140AFC710 (ExEnableHandleExceptions.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall ExpUnlockHandleTableExclusive(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx

  v3 = a1 + 56;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 56), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 56);
  KeAbPostRelease(v3);
  return KeLeaveCriticalRegionThread(a2);
}
