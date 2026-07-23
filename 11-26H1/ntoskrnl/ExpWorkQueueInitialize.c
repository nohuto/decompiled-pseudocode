/*
 * XREFs of ExpWorkQueueInitialize @ 0x1408462E8
 * Callers:
 *     ExpWorkQueueInitializeWithMinimumThreads @ 0x140846480 (ExpWorkQueueInitializeWithMinimumThreads.c)
 * Callees:
 *     ExpGetNodeSubQueueConcurrencyCount @ 0x1404D95F8 (ExpGetNodeSubQueueConcurrencyCount.c)
 *     KeInitializePriQueue @ 0x1405FC02C (KeInitializePriQueue.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall ExpWorkQueueInitialize(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        unsigned __int16 *a5,
        int a6,
        unsigned int a7,
        __int64 a8)
{
  int NodeSubQueueConcurrencyCount; // eax
  unsigned int v13; // eax
  __int64 result; // rax

  memset_0((void *)a1, 0, 0x2F0uLL);
  NodeSubQueueConcurrencyCount = ExpGetNodeSubQueueConcurrencyCount(a5, a7);
  KeInitializePriQueue(a1, NodeSubQueueConcurrencyCount);
  *(_QWORD *)(a1 + 696) = a5;
  v13 = a2 ^ (*(_DWORD *)(a1 + 716) ^ a2) & 0x80000000;
  *(_DWORD *)(a1 + 728) = a7;
  *(_DWORD *)(a1 + 716) = v13;
  *(_DWORD *)(a1 + 724) = a6;
  result = a8;
  *(_QWORD *)(a1 + 744) = a8;
  *(_QWORD *)(a1 + 688) = a4;
  *(_DWORD *)(a1 + 720) = a3;
  return result;
}
