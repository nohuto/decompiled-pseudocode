/*
 * XREFs of RtlInitializeExceptionLog @ 0x180110E20
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

PVOID RtlInitializeExceptionLog()
{
  PVOID result; // rax

  result = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, 0x11620uLL);
  RtlpExceptionLog2 = (__int64)result;
  if ( result )
  {
    result = memset_thunk_772440563353939046(result, 0, 0x11620uLL);
    RtlpExceptionLogSize = 50;
  }
  return result;
}
