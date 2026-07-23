/*
 * XREFs of SshpWorkItemQueue @ 0x1404957B0
 * Callers:
 *     SshpDereferenceBlocker @ 0x1404955E0 (SshpDereferenceBlocker.c)
 *     SshpSessionManagerOpenControlTrace @ 0x1407E959C (SshpSessionManagerOpenControlTrace.c)
 *     SshpSessionManagerSendControlEvent @ 0x140B31D28 (SshpSessionManagerSendControlEvent.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void __fastcall SshpWorkItemQueue(struct _WORK_QUEUE_ITEM *a1)
{
  _m_prefetchw(&a1[1]);
  if ( (_InterlockedOr((volatile signed __int32 *)&a1[1], 3u) & 1) == 0 )
    ExQueueWorkItem(a1, DelayedWorkQueue);
}
