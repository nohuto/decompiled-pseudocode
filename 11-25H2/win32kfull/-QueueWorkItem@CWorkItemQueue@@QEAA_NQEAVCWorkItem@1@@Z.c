/*
 * XREFs of ?QueueWorkItem@CWorkItemQueue@@QEAA_NQEAVCWorkItem@1@@Z @ 0x14018C89C
 * Callers:
 *     ?UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z @ 0x1400B1A40 (-UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CWorkItemQueue::QueueWorkItem(union _SLIST_HEADER *this, struct CWorkItemQueue::CWorkItem *const a2)
{
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( LOBYTE(this->Alignment) )
    return 0;
  *((_DWORD *)a2 + 2) = 1;
  ExpInterlockedPushEntrySList(this + 1, (PSLIST_ENTRY)a2);
  _InterlockedOr(v3, 0);
  return 1;
}
