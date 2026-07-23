/*
 * XREFs of HalpTimerResetProfileAdjustment @ 0x1403128B0
 * Callers:
 *     HalCalibratePerformanceCounter @ 0x140578FF0 (HalCalibratePerformanceCounter.c)
 *     HalpTimerNotifyProcessorFreeze @ 0x14057A050 (HalpTimerNotifyProcessorFreeze.c)
 *     HalProcessorIdle @ 0x140727660 (HalProcessorIdle.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x1403129A0 (HalpDisableInterrupts.c)
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
