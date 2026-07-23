/*
 * XREFs of PspRequestDeferredJobNotification @ 0x1404BDAB8
 * Callers:
 *     PspJobCycleTimeNotificationDpcRoutine @ 0x140618790 (PspJobCycleTimeNotificationDpcRoutine.c)
 *     PspSendWakeNotification @ 0x140A88408 (PspSendWakeNotification.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

char __fastcall PspRequestDeferredJobNotification(signed __int64 a1, unsigned int a2)
{
  _KWAIT_BLOCK *WaitBlockList; // rax
  _KWAIT_BLOCK *v3; // rdx

  _m_prefetchw((const void *)(a1 + 1552));
  if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 1552), a2) & 0x22000) != 0 )
    return 0;
  _m_prefetchw(&PsAltSystemCallRegistrationLock.WaitBlockList);
  WaitBlockList = PsAltSystemCallRegistrationLock.WaitBlockList;
  do
  {
    v3 = WaitBlockList;
    *(_QWORD *)(a1 + 1200) = WaitBlockList;
    WaitBlockList = (_KWAIT_BLOCK *)_InterlockedCompareExchange64(
                                      (volatile signed __int64 *)&PsAltSystemCallRegistrationLock.WaitBlockList,
                                      a1,
                                      (signed __int64)WaitBlockList);
  }
  while ( WaitBlockList != v3 );
  if ( !v3 )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)&PsAltSystemCallRegistrationLock.ApcStateFill[24], NormalWorkQueue);
  return 1;
}
