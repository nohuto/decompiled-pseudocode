/*
 * XREFs of HalRequestClockInterrupt @ 0x1403EC4D0
 * Callers:
 *     HalpTimerWatchdogTriggerSystemReset @ 0x14021F300 (HalpTimerWatchdogTriggerSystemReset.c)
 *     KiForwardTick @ 0x1403ED6F0 (KiForwardTick.c)
 * Callees:
 *     HalRequestIpiSpecifyVector @ 0x1403EC570 (HalRequestIpiSpecifyVector.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall HalRequestClockInterrupt(unsigned int a1, __int64 a2)
{
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 result; // rax

  BugCheckParameter4 = (int)a1;
  result = HalRequestIpiSpecifyVector(a1, a2, 210LL);
  if ( (int)result < 0 )
    KeBugCheckEx(0x5Cu, 0x201uLL, HalpInterruptController, (int)result, BugCheckParameter4);
  return result;
}
