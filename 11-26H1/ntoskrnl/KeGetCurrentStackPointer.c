/*
 * XREFs of KeGetCurrentStackPointer @ 0x14072BF60
 * Callers:
 *     EtwpTraceStackWalk @ 0x14020A6A0 (EtwpTraceStackWalk.c)
 *     RtlWalkFrameChain @ 0x1402622E0 (RtlWalkFrameChain.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x140262F40 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     RtlpGetStackLimits @ 0x140263230 (RtlpGetStackLimits.c)
 *     EtwpTraceLastBranchRecord @ 0x140263280 (EtwpTraceLastBranchRecord.c)
 *     KeQueryCurrentStackInformation @ 0x140263490 (KeQueryCurrentStackInformation.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140263870 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x140263D20 (RtlEnoughStackSpaceForStackCapture.c)
 *     RtlUnwindEx @ 0x1402CA550 (RtlUnwindEx.c)
 *     MiDoStackCopy @ 0x1403E7C50 (MiDoStackCopy.c)
 *     RtlpIsFrameInBoundsEx @ 0x140412060 (RtlpIsFrameInBoundsEx.c)
 *     KasanWrapperRtlRestoreContext @ 0x1404777B0 (KasanWrapperRtlRestoreContext.c)
 *     PnprGetStackLimits @ 0x1405250F0 (PnprGetStackLimits.c)
 *     KasanHibernationGetStackLow @ 0x1405DFFA0 (KasanHibernationGetStackLow.c)
 *     ViDeadlockAnalyze @ 0x140C3CE68 (ViDeadlockAnalyze.c)
 *     MmVerifierTrimMemory @ 0x140C497C8 (MmVerifierTrimMemory.c)
 * Callees:
 *     <none>
 */

char *KeGetCurrentStackPointer()
{
  char v1; // [rsp+8h] [rbp+8h] BYREF

  return &v1;
}
