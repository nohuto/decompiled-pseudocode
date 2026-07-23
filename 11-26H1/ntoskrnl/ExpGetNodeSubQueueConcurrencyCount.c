/*
 * XREFs of ExpGetNodeSubQueueConcurrencyCount @ 0x1404D95F8
 * Callers:
 *     ExpWorkQueueInitialize @ 0x1408462E8 (ExpWorkQueueInitialize.c)
 *     ExpWorkQueueManagerThread @ 0x140A77D60 (ExpWorkQueueManagerThread.c)
 * Callees:
 *     KeQueryNodeActiveProcessorCount @ 0x1404D9630 (KeQueryNodeActiveProcessorCount.c)
 */

__int64 __fastcall ExpGetNodeSubQueueConcurrencyCount(unsigned __int16 *a1, unsigned int a2)
{
  unsigned int NodeActiveProcessorCount; // eax
  unsigned int v5; // et2
  unsigned int v6; // ecx
  __int64 result; // rax

  NodeActiveProcessorCount = KeQueryNodeActiveProcessorCount(*a1);
  v5 = NodeActiveProcessorCount % *((_DWORD *)a1 + 30);
  v6 = NodeActiveProcessorCount / *((_DWORD *)a1 + 30);
  result = v6 + 1;
  if ( a2 >= v5 )
    return v6;
  return result;
}
