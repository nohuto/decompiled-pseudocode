/*
 * XREFs of MiLockWorkingSetSharedAtDpc @ 0x140367284
 * Callers:
 *     MiUnlockWorkingSetExclusive @ 0x14027DCC8 (MiUnlockWorkingSetExclusive.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x140281FA4 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiMapWithLargePages @ 0x1402A1BE4 (MiMapWithLargePages.c)
 *     MiReleaseLargePdeMappings @ 0x1402A22D4 (MiReleaseLargePdeMappings.c)
 *     MiDeleteSystemPageTables @ 0x1402A3CCC (MiDeleteSystemPageTables.c)
 *     MiMakeZeroedPageTablesEx @ 0x1402A46AC (MiMakeZeroedPageTablesEx.c)
 *     MiInitializeProbePacketVm @ 0x1402C77CC (MiInitializeProbePacketVm.c)
 *     MiMapMdlCommon @ 0x140314C5C (MiMapMdlCommon.c)
 *     MiFastTrimWorkingSet @ 0x1403216C0 (MiFastTrimWorkingSet.c)
 *     MiWalkPageTablesRecursively @ 0x140329110 (MiWalkPageTablesRecursively.c)
 *     MiDeleteShadowStackPtes @ 0x140342874 (MiDeleteShadowStackPtes.c)
 *     MiDecommitLockNewPageTable @ 0x140363378 (MiDecommitLockNewPageTable.c)
 *     MiBeginDeleteNonPagedPtes @ 0x140365A2C (MiBeginDeleteNonPagedPtes.c)
 *     MiLockPoolCommitWs @ 0x140366098 (MiLockPoolCommitWs.c)
 *     MiCommitPoolMemory @ 0x140366880 (MiCommitPoolMemory.c)
 *     MiReleaseFaultState @ 0x14038FB40 (MiReleaseFaultState.c)
 *     MmProbeAndLockSelectedPages @ 0x1403A1040 (MmProbeAndLockSelectedPages.c)
 *     MiFaultInProbeAddress @ 0x1403A2230 (MiFaultInProbeAddress.c)
 *     MiAllocateKernelStackPages @ 0x1403D4748 (MiAllocateKernelStackPages.c)
 *     MiJumpStackTarget @ 0x1403E7E30 (MiJumpStackTarget.c)
 *     MmMapDriverTablePage @ 0x14045569C (MmMapDriverTablePage.c)
 *     MiLockProbePacketWorkingSet @ 0x140484AEC (MiLockProbePacketWorkingSet.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404D7408 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiZeroAndFlushGoodCitizen @ 0x1404F2994 (MiZeroAndFlushGoodCitizen.c)
 *     MiMapMdlWithLargePages @ 0x1404FC1D0 (MiMapMdlWithLargePages.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x14050DFD8 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiUnmapMdlCommon @ 0x14051F5C4 (MiUnmapMdlCommon.c)
 *     MiAddRangeToCrashDump @ 0x1406FAE2C (MiAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x1406FB8B8 (MmRemoveSystemCacheFromDump.c)
 *     MiUnmapLegacyAwePage @ 0x1407078FC (MiUnmapLegacyAwePage.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

char __fastcall MiLockWorkingSetSharedAtDpc(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rax
  __int64 *v2; // rdx
  __int64 v3; // rbx
  _DWORD *MmInternal; // rcx

  LOBYTE(CurrentPrcb) = *(_DWORD *)(a1 + 184) & 0xF;
  if ( (unsigned __int8)CurrentPrcb < 6u )
  {
    v2 = &qword_140E37980;
    if ( (*(_DWORD *)(a1 + 184) & 0xF) != 1 )
      v2 = (__int64 *)(a1 + 192);
    v3 = (KeGetPcr()->Prcb.Number >> 1) & 3;
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(*v2 + (v3 << 6)));
    CurrentPrcb = KeGetCurrentPrcb();
    MmInternal = CurrentPrcb->MmInternal;
    if ( MmInternal )
      MmInternal[81] = v3;
  }
  return (char)CurrentPrcb;
}
