/*
 * XREFs of MiAllocateWorkingSetSwapSupport @ 0x140405C5C
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x140405328 (MmOutSwapVirtualAddresses.c)
 *     MiGetKernelStackSwapSupport @ 0x140405AA8 (MiGetKernelStackSwapSupport.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x140405C04 (MiReAllocateWorkingSetSwapSupport.c)
 *     MmOutSwapWorkingSet @ 0x1404C28B4 (MmOutSwapWorkingSet.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 */

_QWORD *__fastcall MiAllocateWorkingSetSwapSupport(__int64 a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)ExAllocatePoolMm(
                       64LL,
                       16 * a1 + 40,
                       1398238541,
                       KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  if ( result )
  {
    result[1] = a1;
    *result = ((unsigned __int64)result + 47) & 0xFFFFFFFFFFFFFFF8uLL;
  }
  return result;
}
