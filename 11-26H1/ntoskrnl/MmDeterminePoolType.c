/*
 * XREFs of MmDeterminePoolType @ 0x1402609A0
 * Callers:
 *     ExpSizeHeapPool @ 0x14025ECFC (ExpSizeHeapPool.c)
 *     SepCreateTokenEx @ 0x14025F384 (SepCreateTokenEx.c)
 *     CcAllocateInitializeBcb @ 0x140260530 (CcAllocateInitializeBcb.c)
 *     ExInitializeResourceLite @ 0x140260870 (ExInitializeResourceLite.c)
 *     CcPinFileData @ 0x1402DF720 (CcPinFileData.c)
 *     ExpFreeHeapSpecialPool @ 0x140345B28 (ExpFreeHeapSpecialPool.c)
 *     ExFreeHeapPool @ 0x1403A7BB0 (ExFreeHeapPool.c)
 *     RtlpCreateHeap @ 0x1404E3978 (RtlpCreateHeap.c)
 *     ExAllocateHeapSpecialPool @ 0x14051A678 (ExAllocateHeapSpecialPool.c)
 *     DifExInitializeResourceLiteWrapper @ 0x140652410 (DifExInitializeResourceLiteWrapper.c)
 *     ExQueryPoolBlockSize @ 0x1406CBF90 (ExQueryPoolBlockSize.c)
 *     ExInitializeResourceLite2 @ 0x1406CE730 (ExInitializeResourceLite2.c)
 *     VfPtAddStackInfoIfNotExist @ 0x140C29AB8 (VfPtAddStackInfoIfNotExist.c)
 *     VfMiscMmBuildMdlForNonPagedPool_Entry @ 0x140C3D0F0 (VfMiscMmBuildMdlForNonPagedPool_Entry.c)
 *     ExFreePoolSanityChecks @ 0x140C4345C (ExFreePoolSanityChecks.c)
 *     FsRtlInitSystem @ 0x140CB8A6C (FsRtlInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140CBFDA0 (IopInitializePlugPlayServices.c)
 *     PnpInitPhase0 @ 0x140CC3724 (PnpInitPhase0.c)
 *     PiDeviceDependencyInit @ 0x140CC3A38 (PiDeviceDependencyInit.c)
 *     PpInitializeBootDDB @ 0x140CC5184 (PpInitializeBootDDB.c)
 *     PiSwInit @ 0x140CC68FC (PiSwInit.c)
 *     PiDmaGuardQueueInitialize @ 0x140CC7BBC (PiDmaGuardQueueInitialize.c)
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 *     PopInitializeAdpm @ 0x140CD671C (PopInitializeAdpm.c)
 *     PopDripsWatchdogInitialize @ 0x140CD68EC (PopDripsWatchdogInitialize.c)
 *     SepInitializeWorkList @ 0x140CDAB2C (SepInitializeWorkList.c)
 *     SepRmDbInitialization @ 0x140CDE524 (SepRmDbInitialization.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x140CDFF80 (WmipGetSMBiosFromLoaderBlock.c)
 *     ExpInitSystemPhase0 @ 0x140CE40C0 (ExpInitSystemPhase0.c)
 *     MiInitializeLoadedModuleList @ 0x140D00470 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmDeterminePoolType(unsigned __int64 a1)
{
  if ( a1 >= 0xFFFF800000000000uLL && byte_140E37A70[((a1 >> 39) & 0x1FF) - 256] == 5 )
    return 256LL;
  else
    return 64LL;
}
