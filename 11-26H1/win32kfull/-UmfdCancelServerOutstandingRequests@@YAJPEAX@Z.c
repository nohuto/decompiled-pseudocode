/*
 * XREFs of ?UmfdCancelServerOutstandingRequests@@YAJPEAX@Z @ 0x140295AC0
 * Callers:
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXW4ThreadTerminationType@1@@Z @ 0x1401C4878 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXW4ThreadTerminationType@1@@Z.c)
 *     ?ResetUmfdHostReadiness@UmfdHostLifeTimeManager@@CAXXZ @ 0x14028C9FC (-ResetUmfdHostReadiness@UmfdHostLifeTimeManager@@CAXXZ.c)
 * Callees:
 *     ?DequeueWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@XZ @ 0x1400CE724 (-DequeueWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@XZ.c)
 *     ?Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x14034EAB8 (-Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ.c)
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
