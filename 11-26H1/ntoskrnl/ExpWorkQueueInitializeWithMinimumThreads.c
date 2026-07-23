/*
 * XREFs of ExpWorkQueueInitializeWithMinimumThreads @ 0x140846480
 * Callers:
 *     ExpPartitionCreatePoolInternal @ 0x140B6F508 (ExpPartitionCreatePoolInternal.c)
 * Callees:
 *     ExpWorkQueueInitialize @ 0x1408462E8 (ExpWorkQueueInitialize.c)
 *     ExpCreateWorkerThread @ 0x140A78ABC (ExpCreateWorkerThread.c)
 */

__int64 __fastcall ExpWorkQueueInitializeWithMinimumThreads(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        unsigned __int16 *a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9)
{
  int i; // ebx
  __int64 result; // rax

  ExpWorkQueueInitialize(a1, a2, a3, a4, a5, a6, a7, a8);
  for ( i = 0; i < (2 * *(_DWORD *)(a1 + 716)) >> 1; ++i )
  {
    result = ExpCreateWorkerThread(a1, a9);
    if ( (int)result < 0 )
      return result;
  }
  return 0LL;
}
