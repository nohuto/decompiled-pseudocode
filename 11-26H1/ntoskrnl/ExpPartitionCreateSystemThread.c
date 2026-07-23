/*
 * XREFs of ExpPartitionCreateSystemThread @ 0x140A78A64
 * Callers:
 *     ExpWorkQueueManagerStart @ 0x1408465D4 (ExpWorkQueueManagerStart.c)
 * Callees:
 *     ExpNodeCreateSystemThread @ 0x140A78BB8 (ExpNodeCreateSystemThread.c)
 */

__int64 __fastcall ExpPartitionCreateSystemThread(__int64 a1, int a2, int a3)
{
  return ExpNodeCreateSystemThread(a2, a2, a3, *(_QWORD *)(*(_QWORD *)a1 + 128LL));
}
