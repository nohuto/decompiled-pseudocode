/*
 * XREFs of PpmMediaBufferingWorker @ 0x140394ED0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmReleaseLock @ 0x14037AFBC (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 *     PpmEventMediaBufferingNotify @ 0x140395F78 (PpmEventMediaBufferingNotify.c)
 *     PpmPdcNotifyMediaBufferingUpdate @ 0x140AECD10 (PpmPdcNotifyMediaBufferingUpdate.c)
 */

void PpmMediaBufferingWorker()
{
  __int64 v0; // rcx
  bool v1; // di
  __int64 v2; // rcx
  KIRQL v3; // al
  char v4; // bl

  while ( 1 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140F11D08.ThreadTimerDelay);
    v4 = BYTE1(stru_140F11D08.TracingPrivate[0]);
    if ( BYTE1(stru_140F11D08.TracingPrivate[0]) == byte_140F1070C )
      break;
    byte_140F1070C = BYTE1(stru_140F11D08.TracingPrivate[0]);
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_140F11D08.ThreadTimerDelay, v3);
    LOBYTE(v0) = v4;
    PpmEventMediaBufferingNotify(v0);
    PpmAcquireLock(&stru_140F10070.SchedulerAssistLastYieldBoostTime);
    v1 = 1;
    if ( !PpmLowPowerProfile )
    {
      if ( v4 )
        v1 = 0;
      else
        v1 = LOBYTE(stru_140F11D08.GlobalUpdateVpThreadPriorityListEntry.Flink) != 0;
    }
    PpmReleaseLock(&stru_140F10070.SchedulerAssistLastYieldBoostTime);
    if ( v1 )
    {
      LOBYTE(v2) = v4;
      LOBYTE(stru_140F11D08.GlobalUpdateVpThreadPriorityListEntry.Flink) = v4;
      PpmPdcNotifyMediaBufferingUpdate(v2);
    }
  }
  LOBYTE(stru_140F11D08.TracingPrivate[0]) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)&stru_140F11D08.ThreadTimerDelay, v3);
}
