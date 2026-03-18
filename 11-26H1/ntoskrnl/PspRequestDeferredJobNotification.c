/*
 * XREFs of PspRequestDeferredJobNotification @ 0x1404C41D8
 * Callers:
 *     PspJobCycleTimeNotificationDpcRoutine @ 0x1406157C0 (PspJobCycleTimeNotificationDpcRoutine.c)
 *     PspSendWakeNotification @ 0x140A82598 (PspSendWakeNotification.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

char __fastcall PspRequestDeferredJobNotification(signed __int64 a1, unsigned int a2)
{
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v3; // rdx

  _m_prefetchw((const void *)(a1 + 1552));
  if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 1552), a2) & 0x22000) != 0 )
    return 0;
  _m_prefetchw(&PsAltSystemCallRegistrationLock.Header.WaitListHead);
  Flink = PsAltSystemCallRegistrationLock.Header.WaitListHead.Flink;
  do
  {
    v3 = Flink;
    *(_QWORD *)(a1 + 1200) = Flink;
    Flink = (struct _LIST_ENTRY *)_InterlockedCompareExchange64(
                                    (volatile signed __int64 *)&PsAltSystemCallRegistrationLock.Header.WaitListHead.Flink,
                                    a1,
                                    (signed __int64)Flink);
  }
  while ( Flink != v3 );
  if ( !v3 )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)&PsAltSystemCallRegistrationLock.InitialStack, NormalWorkQueue);
  return 1;
}
