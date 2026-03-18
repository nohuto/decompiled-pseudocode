/*
 * XREFs of ?UmfdCancelServerOutstandingRequests@@YAJPEAX@Z @ 0x14026E2D8
 * Callers:
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXW4ThreadTerminationType@1@@Z @ 0x140161938 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXW4ThreadTerminationType@1@@Z.c)
 *     ?ResetUmfdHostReadiness@UmfdHostLifeTimeManager@@CAXXZ @ 0x14026899C (-ResetUmfdHostReadiness@UmfdHostLifeTimeManager@@CAXXZ.c)
 * Callees:
 *     ?DequeueWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@XZ @ 0x140177160 (-DequeueWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@XZ.c)
 *     ?Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1403416E8 (-Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ.c)
 */

CMultipleConsumerWorkQueue::CWaitableWorkItem *__fastcall UmfdCancelServerOutstandingRequests(union _SLIST_HEADER **a1)
{
  union _SLIST_HEADER *i; // rcx
  CMultipleConsumerWorkQueue::CWaitableWorkItem *result; // rax

  for ( i = *a1; ; i = *a1 )
  {
    result = CWorkItemQueue::DequeueWorkItem(i);
    if ( !result )
      break;
    CMultipleConsumerWorkQueue::CWaitableWorkItem::Cancel(result);
  }
  return result;
}
