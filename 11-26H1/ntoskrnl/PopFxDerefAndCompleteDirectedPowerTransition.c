/*
 * XREFs of PopFxDerefAndCompleteDirectedPowerTransition @ 0x1404FCBC8
 * Callers:
 *     PopFxNotifyPreDIrpCompletion @ 0x1403B4894 (PopFxNotifyPreDIrpCompletion.c)
 *     PopFxHandleReportDevicePoweredOn @ 0x1404DAFA0 (PopFxHandleReportDevicePoweredOn.c)
 *     PoFxCompleteDirectedPowerDown @ 0x1404FCBB0 (PoFxCompleteDirectedPowerDown.c)
 * Callees:
 *     PopFxBugCheck @ 0x1403B0E54 (PopFxBugCheck.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x140604AB8 (PopFxCompleteDirectedPowerTransition.c)
 */

__int64 __fastcall PopFxDerefAndCompleteDirectedPowerTransition(ULONG_PTR BugCheckParameter3)
{
  __int64 result; // rax

  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 864), 0, 0) & 0x20) == 0 )
    PopFxBugCheck(0x910uLL, 1uLL, BugCheckParameter3, 0LL);
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter3 + 1200));
  if ( !(_DWORD)result )
    return PopFxCompleteDirectedPowerTransition(BugCheckParameter3);
  if ( (int)result < 0 )
    PopFxBugCheck(0x910uLL, 2uLL, BugCheckParameter3, 0LL);
  return result;
}
