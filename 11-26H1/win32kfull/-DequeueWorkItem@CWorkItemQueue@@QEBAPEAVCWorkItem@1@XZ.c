/*
 * XREFs of ?DequeueWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@XZ @ 0x1400CE724
 * Callers:
 *     ?WaitForWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@XZ @ 0x1400CFBA4 (-WaitForWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@XZ.c)
 *     ?UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z @ 0x1400D0F00 (-UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z.c)
 *     ?UmfdCancelServerOutstandingRequests@@YAJPEAX@Z @ 0x140295AC0 (-UmfdCancelServerOutstandingRequests@@YAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

struct CWorkItemQueue::CWorkItem *__fastcall CWorkItemQueue::DequeueWorkItem(union _SLIST_HEADER *this)
{
  struct CWorkItemQueue::CWorkItem *result; // rax
  signed __int32 v2[10]; // [rsp+0h] [rbp-28h] BYREF

  result = (struct CWorkItemQueue::CWorkItem *)ExpInterlockedPopEntrySList(this + 1);
  _InterlockedOr(v2, 0);
  if ( result )
    *((_DWORD *)result + 2) = 2;
  return result;
}
