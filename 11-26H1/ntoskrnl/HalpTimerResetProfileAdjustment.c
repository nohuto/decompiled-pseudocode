/*
 * XREFs of HalpTimerResetProfileAdjustment @ 0x1402C7C10
 * Callers:
 *     HalCalibratePerformanceCounter @ 0x140576AC0 (HalCalibratePerformanceCounter.c)
 *     HalpTimerNotifyProcessorFreeze @ 0x140577B20 (HalpTimerNotifyProcessorFreeze.c)
 *     HalProcessorIdle @ 0x140722A90 (HalProcessorIdle.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x1402C7D00 (HalpDisableInterrupts.c)
 */

__int64 __fastcall HalpTimerResetProfileAdjustment(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = HalpDisableInterrupts(a1, a2, a3);
  if ( HalpProfileData )
    *(_DWORD *)(296LL * KeGetPcr()->Prcb.Number + HalpProfileData + 20) = 0;
  if ( (_BYTE)result )
    _enable();
  return result;
}
