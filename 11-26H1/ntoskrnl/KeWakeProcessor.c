/*
 * XREFs of KeWakeProcessor @ 0x1405F3900
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402F87D0 (PpmIdleExecuteTransition.c)
 *     KxIsrLinkage @ 0x1407307F0 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x1407318A0 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140731C30 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140731FC0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140732350 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1407326E0 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x1407333C0 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x1407342D0 (KiIpiInterrupt.c)
 *     KiNmiInterruptStart @ 0x1407386C0 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x14073CC80 (KiMcheckAbort.c)
 * Callees:
 *     KeInterlockedClearProcessorAffinityEx @ 0x140420840 (KeInterlockedClearProcessorAffinityEx.c)
 */

unsigned __int64 KeWakeProcessor()
{
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int64 v1; // rcx
  unsigned __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  CurrentPrcb->DeepSleep = 0;
  KeInterlockedClearProcessorAffinityEx((__int64)&KiDpcCorralLock.Header.WaitListHead.Blink, CurrentPrcb->Number);
  v1 = __readcr4();
  if ( (v1 & 0x20080) != 0 )
  {
    result = v1 ^ 0x80;
    __writecr4(v1 ^ 0x80);
    __writecr4(v1);
  }
  else
  {
    result = __readcr3();
    __writecr3(result);
  }
  return result;
}
