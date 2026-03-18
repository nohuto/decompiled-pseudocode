/*
 * XREFs of ExpPartitionCreateSystemThread @ 0x140A03608
 * Callers:
 *     ExpWorkQueueManagerStart @ 0x140840394 (ExpWorkQueueManagerStart.c)
 * Callees:
 *     ExpNodeCreateSystemThread @ 0x140A03568 (ExpNodeCreateSystemThread.c)
 */

__int64 __fastcall ExpPartitionCreateSystemThread(
        __int64 a1,
        USHORT *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _WORD *a8,
        __int64 a9)
{
  __int64 v10; // [rsp+20h] [rbp-38h]

  return ExpNodeCreateSystemThread(a2, (int)a2, a3, *(_QWORD *)(*(_QWORD *)a1 + 128LL), v10, a6, a7, a8, a9);
}
