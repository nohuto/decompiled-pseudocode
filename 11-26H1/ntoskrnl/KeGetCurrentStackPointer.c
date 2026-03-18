/*
 * XREFs of KeGetCurrentStackPointer @ 0x140727390
 * Callers:
 *     EtwpTraceStackWalk @ 0x14020A5C0 (EtwpTraceStackWalk.c)
 *     RtlWalkFrameChain @ 0x140262D70 (RtlWalkFrameChain.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x1402639D0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     RtlpGetStackLimits @ 0x140263CC0 (RtlpGetStackLimits.c)
 *     EtwpTraceLastBranchRecord @ 0x140263D10 (EtwpTraceLastBranchRecord.c)
 *     KeQueryCurrentStackInformation @ 0x140263F20 (KeQueryCurrentStackInformation.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140264300 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x1402647B0 (RtlEnoughStackSpaceForStackCapture.c)
 *     RtlUnwindEx @ 0x1402E8510 (RtlUnwindEx.c)
 *     MiDoStackCopy @ 0x1403E4A60 (MiDoStackCopy.c)
 *     RtlpIsFrameInBoundsEx @ 0x14041A810 (RtlpIsFrameInBoundsEx.c)
 *     KasanWrapperRtlRestoreContext @ 0x14047DE40 (KasanWrapperRtlRestoreContext.c)
 *     PnprGetStackLimits @ 0x140522A84 (PnprGetStackLimits.c)
 *     KasanHibernationGetStackLow @ 0x1405DD630 (KasanHibernationGetStackLow.c)
 *     ViDeadlockAnalyze @ 0x140C36E58 (ViDeadlockAnalyze.c)
 *     MmVerifierTrimMemory @ 0x140C437B8 (MmVerifierTrimMemory.c)
 * Callees:
 *     <none>
 */

char *KeGetCurrentStackPointer()
{
  char v1; // [rsp+8h] [rbp+8h] BYREF

  return &v1;
}
