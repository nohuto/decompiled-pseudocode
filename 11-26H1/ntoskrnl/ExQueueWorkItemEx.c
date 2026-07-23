/*
 * XREFs of ExQueueWorkItemEx @ 0x140203FD0
 * Callers:
 *     PopPepIdleTimeoutDpcRoutine @ 0x140202F50 (PopPepIdleTimeoutDpcRoutine.c)
 *     PopFxResidentTimeoutDpcRoutine @ 0x1402031F0 (PopFxResidentTimeoutDpcRoutine.c)
 *     KeTerminateThread @ 0x140203468 (KeTerminateThread.c)
 *     DifExQueueWorkItemExWrapper @ 0x140656C40 (DifExQueueWorkItemExWrapper.c)
 * Callees:
 *     ExpValidateWorkItem @ 0x14020402C (ExpValidateWorkItem.c)
 *     ExpQueueWorkItem @ 0x140383B24 (ExpQueueWorkItem.c)
 *     ExpTypeToPriority @ 0x140384F80 (ExpTypeToPriority.c)
 */

__int64 __fastcall ExQueueWorkItemEx(ULONG_PTR a1, unsigned int a2, int a3)
{
  int v5; // edi
  int v6; // eax

  v5 = a1;
  ExpValidateWorkItem(a1);
  v6 = ExpTypeToPriority(a2);
  return ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), v5, v6, a3, 0);
}
