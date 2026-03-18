/*
 * XREFs of PspRundownProcess @ 0x140B39B8C
 * Callers:
 *     PspProcessClose @ 0x140A8E3E0 (PspProcessClose.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ExAcquireRundownProtectionEx @ 0x140375100 (ExAcquireRundownProtectionEx.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void __fastcall PspRundownProcess(signed __int64 Object)
{
  struct _WORK_QUEUE_ITEM *v2; // rcx

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
      v2 = (struct _WORK_QUEUE_ITEM *)&PsAltSystemCallRegistrationLock.WaitBlockFill11[104];
      goto LABEL_5;
    }
    if ( _interlockedbittestandset((volatile signed __int32 *)(Object + 496), 8u) )
    {
      ObfDereferenceObjectWithTag((PVOID)Object, 0x77537350u);
      return;
    }
    if ( _InterlockedIncrement(&PspSiloMonitorLock.Timer.Header.SignalState) == 1 )
    {
      v2 = (struct _WORK_QUEUE_ITEM *)&PsAltSystemCallRegistrationLock.WaitBlockFill11[40];
LABEL_5:
      ExQueueWorkItem(v2, NormalWorkQueue);
    }
  }
}
