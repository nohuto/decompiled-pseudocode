/*
 * XREFs of PpmMediaBufferingWorker @ 0x140396C50
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmReleaseLock @ 0x14037CD6C (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     PpmEventMediaBufferingNotify @ 0x140397CF8 (PpmEventMediaBufferingNotify.c)
 *     PpmPdcNotifyMediaBufferingUpdate @ 0x140AEFD20 (PpmPdcNotifyMediaBufferingUpdate.c)
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
    v3 = KeAcquireSpinLockRaiseToDpc(&PpmMediaBufferingWork);
    v4 = byte_140F12569;
    if ( byte_140F12569 == *((_BYTE *)&PpmIdlePolicyLock.ForegroundLossTime + 4) )
      break;
    *((_BYTE *)&PpmIdlePolicyLock.ForegroundLossTime + 4) = byte_140F12569;
    KeReleaseSpinLock(&PpmMediaBufferingWork, v3);
    LOBYTE(v0) = v4;
    PpmEventMediaBufferingNotify(v0);
    PpmAcquireLock(&PpmIdlePolicyLock.ThreadLock);
    v1 = 1;
    if ( !PopDirectedDripsDiagLock.OtherOperationCount )
    {
      if ( v4 )
        v1 = 0;
      else
        v1 = PpmPdcMediaEngaged != 0;
    }
    PpmReleaseLock((__int64 *)&PpmIdlePolicyLock.ThreadLock);
    if ( v1 )
    {
      LOBYTE(v2) = v4;
      PpmPdcMediaEngaged = v4;
      PpmPdcNotifyMediaBufferingUpdate(v2);
    }
  }
  byte_140F12568 = 0;
  KeReleaseSpinLock(&PpmMediaBufferingWork, v3);
}
