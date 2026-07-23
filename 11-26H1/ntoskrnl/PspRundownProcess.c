/*
 * XREFs of PspRundownProcess @ 0x140B3BD9C
 * Callers:
 *     PspProcessClose @ 0x140A930B0 (PspProcessClose.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireRundownProtectionEx @ 0x140376EB0 (ExAcquireRundownProtectionEx.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void __fastcall PspRundownProcess(signed __int64 Object)
{
  struct _WORK_QUEUE_ITEM *p_Spare18; // rcx

  if ( ExAcquireRundownProtectionEx((PEX_RUNDOWN_REF)(Object + 488), 0) )
  {
    ObfReferenceObjectWithTag((PVOID)Object, 0x77537350u);
    if ( !_InterlockedCompareExchange64(
            (volatile signed __int64 *)&PspSiloMonitorLock.UserAffinityPrimaryGroup,
            Object,
            0LL) )
    {
      if ( _InterlockedIncrement(&PspSiloMonitorLock.Timer.Header.LockNV) != 1 )
        return;
      p_Spare18 = (struct _WORK_QUEUE_ITEM *)&PsAltSystemCallRegistrationLock.Spare18;
      goto LABEL_5;
    }
    if ( _interlockedbittestandset((volatile signed __int32 *)(Object + 496), 8u) )
    {
      ObfDereferenceObjectWithTag((PVOID)Object, 0x77537350u);
      return;
    }
    if ( _InterlockedIncrement(&PspSiloMonitorLock.Timer.Header.SignalState) == 1 )
    {
      p_Spare18 = (struct _WORK_QUEUE_ITEM *)&PsAltSystemCallRegistrationLock.QueueListEntry.Blink;
LABEL_5:
      ExQueueWorkItem(p_Spare18, NormalWorkQueue);
    }
  }
}
