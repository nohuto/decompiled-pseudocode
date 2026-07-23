/*
 * XREFs of MiWakeBadPageSignalThread @ 0x1402A55D4
 * Callers:
 *     MiSystemPeriodicTick @ 0x1402A63BC (MiSystemPeriodicTick.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void MiWakeBadPageSignalThread()
{
  KIRQL v0; // bl

  if ( stru_140E2EC68.Header.SignalState
    && ((unsigned __int8)MiFlags & 0x30u) >= 0x20
    && HIBYTE(stru_140E2ED08.AffinityPrimaryGroup) == 1 )
  {
    v0 = ExAcquireSpinLockExclusive(&dword_140E39B60);
    if ( HIBYTE(stru_140E2ED08.AffinityPrimaryGroup) == 1 )
    {
      HIBYTE(stru_140E2ED08.AffinityPrimaryGroup) = 2;
      stru_140E2ED08.SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)MiBadPageSignaler;
      stru_140E2ED08.SchedulerApc.Reserved[0] = 0LL;
      stru_140E2ED08.SchedulerApc.Thread = 0LL;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)&stru_140E2ED08.SchedulerApcFill5[8], DelayedWorkQueue);
    }
    if ( v0 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E39B60);
    else
      ExReleaseSpinLockExclusive(&dword_140E39B60, v0);
  }
}
