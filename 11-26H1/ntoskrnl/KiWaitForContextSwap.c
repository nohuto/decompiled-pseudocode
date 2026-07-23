/*
 * XREFs of KiWaitForContextSwap @ 0x14041011C
 * Callers:
 *     KiOutSwapKernelStacks @ 0x14040FA14 (KiOutSwapKernelStacks.c)
 *     KeDeleteThread @ 0x14040FE14 (KeDeleteThread.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall KiWaitForContextSwap(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // ebx

  result = *(unsigned __int16 *)(a1 + 114);
  v2 = 0;
  while ( (_WORD)result )
  {
    if ( (++v2 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && KiCheckVpBackingLongSpinWaitHypercall() )
    {
      HvlNotifyLongSpinWait(v2);
    }
    else
    {
      _mm_pause();
    }
    result = *(unsigned __int16 *)(a1 + 114);
  }
  return result;
}
