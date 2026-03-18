/*
 * XREFs of KiWaitForContextSwap @ 0x1404109FC
 * Callers:
 *     KiOutSwapKernelStacks @ 0x1404102F4 (KiOutSwapKernelStacks.c)
 *     KeDeleteThread @ 0x1404106F4 (KeDeleteThread.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
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
