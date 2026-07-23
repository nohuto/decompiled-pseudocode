/*
 * XREFs of HalRequestClockInterrupt @ 0x1402F9510
 * Callers:
 *     HalpTimerWatchdogTriggerSystemReset @ 0x140220C90 (HalpTimerWatchdogTriggerSystemReset.c)
 *     KiForwardTick @ 0x140452220 (KiForwardTick.c)
 * Callees:
 *     HalRequestIpiSpecifyVector @ 0x1402F95B0 (HalRequestIpiSpecifyVector.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
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
