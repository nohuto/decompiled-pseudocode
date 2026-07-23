/*
 * XREFs of ExpWorkQueueManagerStart @ 0x1408465D4
 * Callers:
 *     ExpNodeHotAddProcessorWorker @ 0x140845B80 (ExpNodeHotAddProcessorWorker.c)
 *     ExpPartitionStart @ 0x140846088 (ExpPartitionStart.c)
 * Callees:
 *     ExpPartitionCreateSystemThread @ 0x140A78A64 (ExpPartitionCreateSystemThread.c)
 */

__int64 __fastcall ExpWorkQueueManagerStart(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int SystemThread; // ecx

  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 264), 1LL, 0LL) )
  {
    return 0;
  }
  else
  {
    SystemThread = ExpPartitionCreateSystemThread(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), a3, a4);
    _InterlockedExchange64((volatile __int64 *)(a1 + 264), 0LL);
  }
  return SystemThread;
}
