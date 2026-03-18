/*
 * XREFs of ExQueueWorkItemEx @ 0x140203EF0
 * Callers:
 *     PopPepIdleTimeoutDpcRoutine @ 0x140202E70 (PopPepIdleTimeoutDpcRoutine.c)
 *     PopFxResidentTimeoutDpcRoutine @ 0x140203110 (PopFxResidentTimeoutDpcRoutine.c)
 *     KeTerminateThread @ 0x140203388 (KeTerminateThread.c)
 *     DifExQueueWorkItemExWrapper @ 0x140653060 (DifExQueueWorkItemExWrapper.c)
 * Callees:
 *     ExpValidateWorkItem @ 0x140203F4C (ExpValidateWorkItem.c)
 *     ExpQueueWorkItem @ 0x140381D74 (ExpQueueWorkItem.c)
 *     ExpTypeToPriority @ 0x1403831D0 (ExpTypeToPriority.c)
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
