/*
 * XREFs of RtlStdLogStackTrace @ 0x140260150
 * Callers:
 *     CcAllocateInitializeBcb @ 0x140219DA4 (CcAllocateInitializeBcb.c)
 *     ExInitializeResourceLite @ 0x14021A0F0 (ExInitializeResourceLite.c)
 *     ExInitializeFastResource2 @ 0x14025FFE0 (ExInitializeFastResource2.c)
 *     CcPinFileData @ 0x1402C1530 (CcPinFileData.c)
 *     SepCreateTokenEx @ 0x140405564 (SepCreateTokenEx.c)
 *     RtlpCreateHeap @ 0x1404DCF18 (RtlpCreateHeap.c)
 *     DifExInitializeResourceLiteWrapper @ 0x140655FF0 (DifExInitializeResourceLiteWrapper.c)
 *     ExInitializeResourceLite2 @ 0x1406D2760 (ExInitializeResourceLite2.c)
 *     FsRtlInitSystem @ 0x140CBEAB0 (FsRtlInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 *     PnpInitPhase0 @ 0x140CC97F8 (PnpInitPhase0.c)
 *     PiDeviceDependencyInit @ 0x140CC9B0C (PiDeviceDependencyInit.c)
 *     PpInitializeBootDDB @ 0x140CCB264 (PpInitializeBootDDB.c)
 *     PiSwInit @ 0x140CCC9EC (PiSwInit.c)
 *     PiDmaGuardQueueInitialize @ 0x140CCDCAC (PiDmaGuardQueueInitialize.c)
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 *     PopInitializeAdpm @ 0x140CDCA70 (PopInitializeAdpm.c)
 *     PopDripsWatchdogInitialize @ 0x140CDCC40 (PopDripsWatchdogInitialize.c)
 *     SepInitializeWorkList @ 0x140CE0EAC (SepInitializeWorkList.c)
 *     SepRmDbInitialization @ 0x140CE48BC (SepRmDbInitialization.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x140CE6318 (WmipGetSMBiosFromLoaderBlock.c)
 *     ExpInitSystemPhase0 @ 0x140CEA460 (ExpInitSystemPhase0.c)
 *     MiInitializeLoadedModuleList @ 0x140D06810 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140260E90 (RtlCaptureStackBackTrace.c)
 *     RtlpStdLogCapturedStackTrace @ 0x14061C128 (RtlpStdLogCapturedStackTrace.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall RtlStdLogStackTrace(PKSPIN_LOCK SpinLock, int a2)
{
  _BYTE v5[14]; // [rsp+20h] [rbp-118h] BYREF
  PVOID BackTrace; // [rsp+30h] [rbp-108h] BYREF
  ULONG BackTraceHash; // [rsp+148h] [rbp+10h] BYREF

  memset_0(v5, 0, 0x110uLL);
  BackTraceHash = 0;
  if ( RtlCaptureStackBackTrace(a2 + 1, 0x20u, &BackTrace, &BackTraceHash) )
    return RtlpStdLogCapturedStackTrace(SpinLock);
  else
    return 0LL;
}
