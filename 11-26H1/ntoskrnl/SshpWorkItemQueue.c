/*
 * XREFs of SshpWorkItemQueue @ 0x14049BC60
 * Callers:
 *     SshpDereferenceBlocker @ 0x14049BA90 (SshpDereferenceBlocker.c)
 *     SshpSessionManagerOpenControlTrace @ 0x1407E4148 (SshpSessionManagerOpenControlTrace.c)
 *     SshpSessionManagerSendControlEvent @ 0x140B2FF48 (SshpSessionManagerSendControlEvent.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void __fastcall SshpWorkItemQueue(struct _WORK_QUEUE_ITEM *a1)
{
  _m_prefetchw(&a1[1]);
  if ( (_InterlockedOr((volatile signed __int32 *)&a1[1], 3u) & 1) == 0 )
    ExQueueWorkItem(a1, DelayedWorkQueue);
}
