/*
 * XREFs of MmDeterminePoolType @ 0x14021A220
 * Callers:
 *     CcAllocateInitializeBcb @ 0x140219DA4 (CcAllocateInitializeBcb.c)
 *     ExInitializeResourceLite @ 0x14021A0F0 (ExInitializeResourceLite.c)
 *     CcPinFileData @ 0x1402C1530 (CcPinFileData.c)
 *     ExpFreeHeapSpecialPool @ 0x140347BA8 (ExpFreeHeapSpecialPool.c)
 *     ExFreeHeapPool @ 0x1403A9910 (ExFreeHeapPool.c)
 *     SepCreateTokenEx @ 0x140405564 (SepCreateTokenEx.c)
 *     RtlpCreateHeap @ 0x1404DCF18 (RtlpCreateHeap.c)
 *     ExpSizeHeapPool @ 0x1404FDF40 (ExpSizeHeapPool.c)
 *     ExAllocateHeapSpecialPool @ 0x1405140E8 (ExAllocateHeapSpecialPool.c)
 *     DifExInitializeResourceLiteWrapper @ 0x140655FF0 (DifExInitializeResourceLiteWrapper.c)
 *     ExQueryPoolBlockSize @ 0x1406CFFC0 (ExQueryPoolBlockSize.c)
 *     ExInitializeResourceLite2 @ 0x1406D2760 (ExInitializeResourceLite2.c)
 *     VfPtAddStackInfoIfNotExist @ 0x140C2FAC8 (VfPtAddStackInfoIfNotExist.c)
 *     VfMiscMmBuildMdlForNonPagedPool_Entry @ 0x140C43100 (VfMiscMmBuildMdlForNonPagedPool_Entry.c)
 *     ExFreePoolSanityChecks @ 0x140C4946C (ExFreePoolSanityChecks.c)
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
 *     <none>
 */

__int64 __fastcall MmDeterminePoolType(unsigned __int64 a1)
{
  if ( a1 >= 0xFFFF800000000000uLL && byte_140E37BF0[((a1 >> 39) & 0x1FF) - 256] == 5 )
    return 256LL;
  else
    return 64LL;
}
