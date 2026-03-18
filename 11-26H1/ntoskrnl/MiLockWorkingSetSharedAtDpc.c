/*
 * XREFs of MiLockWorkingSetSharedAtDpc @ 0x1403654E4
 * Callers:
 *     MiUnlockWorkingSetExclusive @ 0x14027E758 (MiUnlockWorkingSetExclusive.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x140282A34 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiMapWithLargePages @ 0x1402A2694 (MiMapWithLargePages.c)
 *     MiReleaseLargePdeMappings @ 0x1402A2D84 (MiReleaseLargePdeMappings.c)
 *     MiDeleteSystemPageTables @ 0x1402A477C (MiDeleteSystemPageTables.c)
 *     MiMakeZeroedPageTablesEx @ 0x1402A515C (MiMakeZeroedPageTablesEx.c)
 *     MiInitializeProbePacketVm @ 0x1402E578C (MiInitializeProbePacketVm.c)
 *     MiMapMdlCommon @ 0x140312C2C (MiMapMdlCommon.c)
 *     MiFastTrimWorkingSet @ 0x14031F690 (MiFastTrimWorkingSet.c)
 *     MiWalkPageTablesRecursively @ 0x1403270E0 (MiWalkPageTablesRecursively.c)
 *     MiDeleteShadowStackPtes @ 0x1403407F4 (MiDeleteShadowStackPtes.c)
 *     MiDecommitLockNewPageTable @ 0x1403615D8 (MiDecommitLockNewPageTable.c)
 *     MiBeginDeleteNonPagedPtes @ 0x140363C8C (MiBeginDeleteNonPagedPtes.c)
 *     MiLockPoolCommitWs @ 0x1403642F8 (MiLockPoolCommitWs.c)
 *     MiCommitPoolMemory @ 0x140364AE0 (MiCommitPoolMemory.c)
 *     MiReleaseFaultState @ 0x14038DD90 (MiReleaseFaultState.c)
 *     MmProbeAndLockSelectedPages @ 0x14039F2E0 (MmProbeAndLockSelectedPages.c)
 *     MiFaultInProbeAddress @ 0x1403A04D0 (MiFaultInProbeAddress.c)
 *     MiAllocateKernelStackPages @ 0x1403D1778 (MiAllocateKernelStackPages.c)
 *     MiJumpStackTarget @ 0x1403E4C40 (MiJumpStackTarget.c)
 *     MmMapDriverTablePage @ 0x14040E640 (MmMapDriverTablePage.c)
 *     MiLockProbePacketWorkingSet @ 0x14048AFAC (MiLockProbePacketWorkingSet.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404DDD28 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiZeroAndFlushGoodCitizen @ 0x1404F9384 (MiZeroAndFlushGoodCitizen.c)
 *     MiMapMdlWithLargePages @ 0x140502900 (MiMapMdlWithLargePages.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140514568 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiUnmapMdlCommon @ 0x14051D098 (MiUnmapMdlCommon.c)
 *     MiAddRangeToCrashDump @ 0x1406F61BC (MiAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x1406F6C48 (MmRemoveSystemCacheFromDump.c)
 *     MiUnmapLegacyAwePage @ 0x140702C2C (MiUnmapLegacyAwePage.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402EDFB0 (ExAcquireSpinLockSharedAtDpcLevel.c)
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
    v2 = &qword_140E37800;
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
