/*
 * XREFs of IoStartDiskIoAttributionForContext @ 0x140494EF4
 * Callers:
 *     PspSetJobIoAttribution @ 0x140958108 (PspSetJobIoAttribution.c)
 *     PspIoRateEntryActivate @ 0x140AFB4A4 (PspIoRateEntryActivate.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x1403774B0 (RtlRbInsertNodeEx.c)
 *     IopDiskIoAttributionTreeCompare @ 0x140494FEC (IopDiskIoAttributionTreeCompare.c)
 */

void __fastcall IoStartDiskIoAttributionForContext(unsigned __int64 a1)
{
  KIRQL v2; // al
  unsigned __int64 v3; // rdi
  bool v4; // bl
  KIRQL v5; // r15
  int v6; // esi
  unsigned __int64 v7; // rax

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&IopSessionNotificationLock.TrapFrame + 1);
  v3 = *(_QWORD *)&IopSessionNotificationLock.SchedulerApcFill5[80];
  v4 = 0;
  v5 = v2;
  if ( (IopSessionNotificationLock.SuspendEvent.Header.Type & 1) != 0 )
  {
    if ( *(_QWORD *)&IopSessionNotificationLock.SchedulerApcFill5[80] )
      v3 = (unsigned __int64)&IopSessionNotificationLock.SchedulerApcFill5[80] ^ *(_QWORD *)&IopSessionNotificationLock.SchedulerApcFill5[80];
    else
      v3 = 0LL;
  }
  v6 = IopSessionNotificationLock.SuspendEvent.Header.Type & 1;
  if ( v3 )
  {
    while ( 1 )
    {
      if ( (int)IopDiskIoAttributionTreeCompare(a1 + 24, v3) >= 0 )
      {
        v7 = *(_QWORD *)(v3 + 8);
        if ( v6 )
        {
          if ( !v7 )
            goto LABEL_11;
          v7 ^= v3;
        }
        if ( !v7 )
        {
LABEL_11:
          v4 = 1;
          break;
        }
      }
      else
      {
        v7 = *(_QWORD *)v3;
        if ( v6 )
        {
          if ( !v7 )
            break;
          v7 ^= v3;
        }
        if ( !v7 )
          break;
      }
      v3 = v7;
    }
  }
  RtlRbInsertNodeEx((unsigned __int64)&IopSessionNotificationLock.SchedulerApcFill5[80], v3, v4, a1);
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)&IopSessionNotificationLock.TrapFrame + 1, v5);
}
