/*
 * XREFs of RtlRaiseStatus @ 0x1402E84A0
 * Callers:
 *     CcCopyReadEx @ 0x14021CC00 (CcCopyReadEx.c)
 *     CcMapAndCopyInToCache @ 0x14026D270 (CcMapAndCopyInToCache.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     FsRtlPrivateLock @ 0x1402C0190 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInitializeFileLock @ 0x1402C1BB8 (FsRtlPrivateInitializeFileLock.c)
 *     CcPinFileData @ 0x1402DF720 (CcPinFileData.c)
 *     CcGetVacbMiss @ 0x1402E1EA0 (CcGetVacbMiss.c)
 *     CcMapAndRead @ 0x1402E6670 (CcMapAndRead.c)
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 *     RtlUnwindEx @ 0x1402E8510 (RtlUnwindEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035D330 (MmMapLockedPagesSpecifyCache.c)
 *     CcAsyncCopyRead @ 0x1403877D0 (CcAsyncCopyRead.c)
 *     KeWaitForMultipleObjects @ 0x140396440 (KeWaitForMultipleObjects.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     ExAllocateHeapPool @ 0x1403987D0 (ExAllocateHeapPool.c)
 *     CcSetFileSizesEx @ 0x14039E300 (CcSetFileSizesEx.c)
 *     CcZeroDataInCache @ 0x14039EF58 (CcZeroDataInCache.c)
 *     MmProbeAndLockSelectedPages @ 0x14039F2E0 (MmProbeAndLockSelectedPages.c)
 *     MmProbeAndLockPages @ 0x14039FC20 (MmProbeAndLockPages.c)
 *     KeReleaseSemaphore @ 0x1403B1D20 (KeReleaseSemaphore.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x1403B5030 (FsRtlAddBaseMcbEntryEx.c)
 *     FsRtlAddEntry @ 0x1403B58C0 (FsRtlAddEntry.c)
 *     PsChargePoolQuota @ 0x1403BD330 (PsChargePoolQuota.c)
 *     KiWaitForAllObjects @ 0x1403C0E68 (KiWaitForAllObjects.c)
 *     RtlIsNameInExpression @ 0x1403CF800 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x1403CF880 (RtlIsNameInUnUpcasedExpression.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1403CF940 (RtlpIsNameInExpressionPrivate.c)
 *     RtlAreNamesEqual @ 0x1403D0060 (RtlAreNamesEqual.c)
 *     RtlDispatchException @ 0x1403D5F30 (RtlDispatchException.c)
 *     ??$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@@@YAJ_K00VCDirectFnEnt@@PEAU_CONTEXT@@PEAEPEAV0@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x1403D77F8 (--$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@.c)
 *     KeReleaseMutantEx @ 0x1403DD130 (KeReleaseMutantEx.c)
 *     CcInitializeCacheMapInternal @ 0x1403E1230 (CcInitializeCacheMapInternal.c)
 *     CcMdlWriteComplete2 @ 0x14040F680 (CcMdlWriteComplete2.c)
 *     ??$RtlpxLookupPrimaryFunctionEntry@VCUmaFnEnt@@VCUmaUnwindInfo@@@@YA?AVCUmaFnEnt@@V0@_KPEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x14041AC98 (--$RtlpxLookupPrimaryFunctionEntry@VCUmaFnEnt@@VCUmaUnwindInfo@@@@YA-AVCUmaFnEnt@@V0@_KPEBU_AMD6.c)
 *     ??$RtlpUnwindPrologue@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJ_K00VCUmaFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAV0@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x14041AD6C (--$RtlpUnwindPrologue@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKW.c)
 *     ??$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJ_K00VCDirectFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAV0@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x14041B300 (--$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_F.c)
 *     RtlpUnwindOpSlots @ 0x14041BA30 (RtlpUnwindOpSlots.c)
 *     KeReleaseSemaphoreEx @ 0x1404396D0 (KeReleaseSemaphoreEx.c)
 *     KiInitializeUserApc @ 0x140446248 (KiInitializeUserApc.c)
 *     RtlpLookupDynamicUserFunctionTable @ 0x14046B388 (RtlpLookupDynamicUserFunctionTable.c)
 *     CcZeroData @ 0x14046D2D0 (CcZeroData.c)
 *     CcZeroDataOnDisk @ 0x14046D690 (CcZeroDataOnDisk.c)
 *     FsRtlInitializeLargeMcb @ 0x14047C430 (FsRtlInitializeLargeMcb.c)
 *     FsRtlInitializeBaseMcbEx @ 0x14047C4A0 (FsRtlInitializeBaseMcbEx.c)
 *     CcCopyToCacheHelper @ 0x1404875B4 (CcCopyToCacheHelper.c)
 *     InitializeSListHead @ 0x140499200 (InitializeSListHead.c)
 *     MmProbeAndLockPagesPrivate @ 0x1404CCA58 (MmProbeAndLockPagesPrivate.c)
 *     CcPrepareMdlWrite @ 0x1404CDA40 (CcPrepareMdlWrite.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x140523030 (RtlpLookupPrimaryFunctionEntry.c)
 *     ??$RtlpxTrivialFunction@VCUmaFnEnt@@VCUmaUnwindInfo@@@@YAKVCUmaFnEnt@@_KVCUmaUnwindInfo@@PEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x14052D19C (--$RtlpxTrivialFunction@VCUmaFnEnt@@VCUmaUnwindInfo@@@@YAKVCUmaFnEnt@@_KVCUmaUnwindInfo@@PEBU_AM.c)
 *     ??$RtlpxLookupPrimaryFunctionEntry@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YA?AVCDirectFnEnt@@V0@_KPEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x140531EE0 (--$RtlpxLookupPrimaryFunctionEntry@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YA-AVCDirectFnEnt@@V0@_K.c)
 *     ??$RtlpxTrivialFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YAKVCDirectFnEnt@@_KVCDirectUnwindInfo@@PEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x140532AE0 (--$RtlpxTrivialFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YAKVCDirectFnEnt@@_KVCDirectUnwindI.c)
 *     FsRtlAllocatePool @ 0x1405B5DD0 (FsRtlAllocatePool.c)
 *     FsRtlAllocatePoolWithQuota @ 0x1405B5E00 (FsRtlAllocatePoolWithQuota.c)
 *     FsRtlAllocatePoolWithQuotaTag @ 0x1405B5E30 (FsRtlAllocatePoolWithQuotaTag.c)
 *     FsRtlAllocatePoolWithTag @ 0x1405B5E60 (FsRtlAllocatePoolWithTag.c)
 *     FsRtlpPostStackOverflow @ 0x1405B8130 (FsRtlpPostStackOverflow.c)
 *     RtlRaiseException @ 0x140619230 (RtlRaiseException.c)
 *     DifExRaiseStatusWrapper @ 0x140653640 (DifExRaiseStatusWrapper.c)
 *     _purecall @ 0x1406D0F70 (_purecall.c)
 *     MiZeroPageCalibrate @ 0x140710F80 (MiZeroPageCalibrate.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140795248 (IopSetEaOrQuotaInformationFile.c)
 *     ObpInitStackAndObjectTables @ 0x1407C4BE8 (ObpInitStackAndObjectTables.c)
 *     EtwpInitializeStackLookasideList @ 0x14082A3C4 (EtwpInitializeStackLookasideList.c)
 *     EtwpInitializeLastBranchTracing @ 0x140830184 (EtwpInitializeLastBranchTracing.c)
 *     NtSetUuidSeed @ 0x1408411C0 (NtSetUuidSeed.c)
 *     CmpInitCallbacks @ 0x14085099C (CmpInitCallbacks.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x1408F5DA0 (ExRaiseAccessViolation.c)
 *     NtQueryMultipleValueKey @ 0x14097D340 (NtQueryMultipleValueKey.c)
 *     NtSetEaFile @ 0x1409AFCE0 (NtSetEaFile.c)
 *     NtQueryVolumeInformationFile @ 0x1409B13A0 (NtQueryVolumeInformationFile.c)
 *     IopCreateFile @ 0x1409B3A58 (IopCreateFile.c)
 *     RtlRunOnceExecuteOnce @ 0x1409E7CD0 (RtlRunOnceExecuteOnce.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140A36470 (IoCreateStreamFileObjectEx2.c)
 *     CcMapAndCopyFromCache @ 0x140A64900 (CcMapAndCopyFromCache.c)
 *     MmProbeAndLockProcessPages @ 0x140A9A0D0 (MmProbeAndLockProcessPages.c)
 *     CcMdlRead @ 0x140AED790 (CcMdlRead.c)
 *     IopWriteFileGather @ 0x140B01CE0 (IopWriteFileGather.c)
 *     IopReadFileScatter @ 0x140B0D3D8 (IopReadFileScatter.c)
 *     PopEndMirroring @ 0x140C03D50 (PopEndMirroring.c)
 *     ExAllocatePool3 @ 0x140C10010 (ExAllocatePool3.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ViIovInitialization @ 0x140C2AC6C (ViIovInitialization.c)
 *     VerifierExAllocatePool @ 0x140C2F790 (VerifierExAllocatePool.c)
 *     VerifierExAllocatePool3 @ 0x140C2F8B0 (VerifierExAllocatePool3.c)
 *     VerifierExAllocatePoolWithQuota @ 0x140C2FA50 (VerifierExAllocatePoolWithQuota.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x140C2FAF0 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierExAllocatePoolWithTag @ 0x140C2FB90 (VerifierExAllocatePoolWithTag.c)
 *     VerifierExAllocatePoolWithTagPriority @ 0x140C2FCC0 (VerifierExAllocatePoolWithTagPriority.c)
 *     ViRlrsMmProbeAndLockProcessPages_Entry @ 0x140C3E5E0 (ViRlrsMmProbeAndLockProcessPages_Entry.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140C3F950 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VfHandlePoolAlloc @ 0x140C44300 (VfHandlePoolAlloc.c)
 *     VerifierExAllocatePool2 @ 0x140C44E00 (VerifierExAllocatePool2.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140CB0424 (HalpDmaAllocateReservedMappingArray.c)
 *     ExpWorkerFactoryInitialization @ 0x140CE7508 (ExpWorkerFactoryInitialization.c)
 *     WheapInitializeEventing @ 0x140CE84C0 (WheapInitializeEventing.c)
 *     MiInitNucleus @ 0x140CF2CBC (MiInitNucleus.c)
 *     MiInitializePhysicalMemoryBlocks @ 0x140CF36E4 (MiInitializePhysicalMemoryBlocks.c)
 *     MiInitializeSystemPteTracker @ 0x140D01888 (MiInitializeSystemPteTracker.c)
 *     MiInitializeDecayPfns @ 0x140D018DC (MiInitializeDecayPfns.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 *     RtlRaiseNoncontinuableException @ 0x140535190 (RtlRaiseNoncontinuableException.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void __fastcall __noreturn RtlRaiseStatus(int a1)
{
  __int64 v2; // r8
  char v3; // bl
  unsigned int v4; // eax
  _DWORD v5[2]; // [rsp+20h] [rbp-578h] BYREF
  __int64 v6; // [rsp+28h] [rbp-570h]
  __int64 v7; // [rsp+30h] [rbp-568h]
  int v8; // [rsp+38h] [rbp-560h]
  _BYTE v9[132]; // [rsp+3Ch] [rbp-55Ch] BYREF
  _BYTE v10[1240]; // [rsp+C0h] [rbp-4D8h] BYREF

  memset_0(v9, 0, 0x7CuLL);
  v5[0] = a1;
  v3 = 1;
  v6 = 0LL;
  v8 = 0;
  v5[1] = 129;
  v7 = -1LL;
  do
  {
    LOBYTE(v2) = v3;
    v4 = RtlRaiseNoncontinuableException(v5, v10, v2);
    --v3;
  }
  while ( !v3 );
  RtlRaiseStatus(v4);
}
