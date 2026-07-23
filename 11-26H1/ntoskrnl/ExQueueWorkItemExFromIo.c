/*
 * XREFs of ExQueueWorkItemExFromIo @ 0x140203194
 * Callers:
 *     IoQueueWorkItemToNode @ 0x140202F90 (IoQueueWorkItemToNode.c)
 *     DifExQueueWorkItemExFromIoWrapper @ 0x140656AC0 (DifExQueueWorkItemExFromIoWrapper.c)
 * Callees:
 *     ExpValidateWorkItem @ 0x14020402C (ExpValidateWorkItem.c)
 *     ExpQueueWorkItem @ 0x140383B24 (ExpQueueWorkItem.c)
 *     ExpTypeToPriority @ 0x140384F80 (ExpTypeToPriority.c)
 */

__int64 __fastcall ExQueueWorkItemExFromIo(ULONG_PTR a1, unsigned int a2, int a3)
{
  int v5; // edi
  int v6; // eax

  v5 = a1;
  ExpValidateWorkItem(a1);
  v6 = ExpTypeToPriority(a2);
  return ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), v5, v6, a3, 1);
}
