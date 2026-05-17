/*
 * XREFs of RtlInitializeExceptionLog @ 0x180111294
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

void *RtlInitializeExceptionLog()
{
  void *result; // rax

  result = (void *)RtlAllocateHeap_0();
  RtlpExceptionLog2 = (__int64)result;
  if ( result )
  {
    result = memset_thunk_772440563353939046(result, 0, 0x11620uLL);
    RtlpExceptionLogSize = 50;
  }
  return result;
}
