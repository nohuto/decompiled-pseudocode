/*
 * XREFs of KeWakeProcessor @ 0x1405F0F90
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1403EB78C (PpmIdleExecuteTransition.c)
 *     KxIsrLinkage @ 0x14072BC20 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x14072CCD0 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x14072D060 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x14072D3F0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x14072D780 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x14072DB10 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x14072E7F0 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x14072F700 (KiIpiInterrupt.c)
 *     KiNmiInterruptStart @ 0x140733AC0 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x140738080 (KiMcheckAbort.c)
 * Callees:
 *     KeInterlockedClearProcessorAffinityEx @ 0x14042C170 (KeInterlockedClearProcessorAffinityEx.c)
 */

unsigned __int64 KeWakeProcessor()
{
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int64 v1; // rcx
  unsigned __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  CurrentPrcb->DeepSleep = 0;
  KeInterlockedClearProcessorAffinityEx((__int64)&KiDpcCorralLock.SListFaultAddress, CurrentPrcb->Number);
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
