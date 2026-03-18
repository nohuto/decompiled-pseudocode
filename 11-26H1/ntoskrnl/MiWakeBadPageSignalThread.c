/*
 * XREFs of MiWakeBadPageSignalThread @ 0x1402A61DC
 * Callers:
 *     MiSystemPeriodicTick @ 0x1402A6FA0 (MiSystemPeriodicTick.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void MiWakeBadPageSignalThread()
{
  KIRQL v0; // bl

  if ( stru_140E2EAE8.Header.SignalState
    && ((unsigned __int8)MiFlags & 0x30u) >= 0x20
    && HIBYTE(stru_140E2EB88.AffinityPrimaryGroup) == 1 )
  {
    v0 = ExAcquireSpinLockExclusive(&dword_140E399E0);
    if ( HIBYTE(stru_140E2EB88.AffinityPrimaryGroup) == 1 )
    {
      HIBYTE(stru_140E2EB88.AffinityPrimaryGroup) = 2;
      stru_140E2EB88.SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)MiBadPageSignaler;
      stru_140E2EB88.SchedulerApc.Reserved[0] = 0LL;
      stru_140E2EB88.SchedulerApc.Thread = 0LL;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)&stru_140E2EB88.SchedulerApcFill5[8], DelayedWorkQueue);
    }
    if ( v0 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E399E0);
    else
      ExReleaseSpinLockExclusive(&dword_140E399E0, v0);
  }
}
