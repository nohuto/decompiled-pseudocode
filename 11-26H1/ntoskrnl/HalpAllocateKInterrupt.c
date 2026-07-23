/*
 * XREFs of HalpAllocateKInterrupt @ 0x140596C54
 * Callers:
 *     HalpCreateInterrupt @ 0x140596DA0 (HalpCreateInterrupt.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x140433FFC (HalpAcquireHighLevelLock.c)
 *     HalpInterruptSetProblemEx @ 0x140436244 (HalpInterruptSetProblemEx.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

_DWORD *__fastcall HalpAllocateKInterrupt(int a1, int a2)
{
  _DWORD *v4; // rdi
  unsigned __int8 v5; // dl
  _DWORD *v6; // rbx
  __int64 Pool2; // rbx

  v4 = &HalpKInterruptHeap;
  v5 = HalpAcquireHighLevelLock(&HalpInterruptPreAllocatedHeapLock);
  v6 = (_DWORD *)((char *)&HalpKInterruptHeap + 296 * (unsigned int)HalpKInterruptHeapUsed);
  while ( v4 < v6 )
  {
    if ( *v4 == a1 && v4[1] == a2 )
    {
LABEL_6:
      HalpReleaseHighLevelLock(&HalpInterruptPreAllocatedHeapLock, v5);
      return v4 + 2;
    }
    v4 += 74;
  }
  v4 = (_DWORD *)HalpKInterruptPostPhaseZero;
  if ( HalpKInterruptPostPhaseZero )
  {
    while ( (unsigned __int64)v4 < HalpKInterruptPostPhaseZero
                                 + 296 * (unsigned __int64)(unsigned int)HalpKInterruptPostPhaseZeroUsed )
    {
      if ( *v4 == a1 && v4[1] == a2 )
        goto LABEL_6;
      v4 += 74;
    }
  }
  if ( (unsigned int)HalpKInterruptHeapUsed >= 0x10 )
  {
    if ( HalpKInterruptPostPhaseZeroUsed >= (unsigned int)HalpKInterruptPostPhaseZeroTotal )
      v6 = 0LL;
    else
      v6 = (_DWORD *)(HalpKInterruptPostPhaseZero + 296LL * (unsigned int)HalpKInterruptPostPhaseZeroUsed++);
  }
  else
  {
    ++HalpKInterruptHeapUsed;
  }
  HalpReleaseHighLevelLock(&HalpInterruptPreAllocatedHeapLock, v5);
  if ( v6 )
  {
    *v6 = a1;
    v6[1] = a2;
    Pool2 = (__int64)(v6 + 2);
  }
  else
  {
    Pool2 = ExAllocatePool2(0x40uLL);
  }
  if ( !Pool2 )
    HalpInterruptSetProblemEx(0LL, 30, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\kintrupt.c", 0x16Fu);
  return (_DWORD *)Pool2;
}
