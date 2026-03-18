/*
 * XREFs of ExpUnlockHandleTableExclusive @ 0x1403151FC
 * Callers:
 *     ExDisableHandleTracing @ 0x1406CB8EC (ExDisableHandleTracing.c)
 *     ExEnableHandleTracing @ 0x1407795D8 (ExEnableHandleTracing.c)
 *     ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x140AEA4E8 (ExEnableRaiseUMExceptionOnInvalidHandleClose.c)
 *     ExEnableHandleExceptions @ 0x140AFA4A8 (ExEnableHandleExceptions.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall ExpUnlockHandleTableExclusive(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8

  v3 = a1 + 56;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 56), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 56);
  KeAbPostRelease(v3);
  return KeLeaveCriticalRegionThread(a2, v4, v5);
}
