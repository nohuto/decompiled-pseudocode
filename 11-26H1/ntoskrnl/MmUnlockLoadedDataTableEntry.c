/*
 * XREFs of MmUnlockLoadedDataTableEntry @ 0x1405209B8
 * Callers:
 *     MmVerifyCallbackFunctionCheckFlags @ 0x14050DCC0 (MmVerifyCallbackFunctionCheckFlags.c)
 *     MmProtectDriverSection @ 0x1406EADE0 (MmProtectDriverSection.c)
 *     MmWriteSystemImageTracepoint @ 0x140701C34 (MmWriteSystemImageTracepoint.c)
 *     KeSetTracepoint @ 0x1407BEB70 (KeSetTracepoint.c)
 *     KsepPatchImportTableEntry @ 0x1407C0D84 (KsepPatchImportTableEntry.c)
 *     MmGetModuleRoutineAddress @ 0x14086ADF0 (MmGetModuleRoutineAddress.c)
 *     MmGetSectionRange @ 0x14086AFFC (MmGetSectionRange.c)
 *     MmCompactServiceTable @ 0x140881670 (MmCompactServiceTable.c)
 *     MmLockPagableSectionByHandle @ 0x140A9F220 (MmLockPagableSectionByHandle.c)
 *     MiLogPinDriverAddress @ 0x140AB45D4 (MiLogPinDriverAddress.c)
 *     MmLockPagableDataSection @ 0x140ABC640 (MmLockPagableDataSection.c)
 *     MmResetDriverPaging @ 0x140ACB510 (MmResetDriverPaging.c)
 *     MmPageEntireDriver @ 0x140ACBBB0 (MmPageEntireDriver.c)
 *     MmChangeImageProtection @ 0x140AD2CC0 (MmChangeImageProtection.c)
 *     MmIsDriverVerifyingByAddress @ 0x140C49F50 (MmIsDriverVerifyingByAddress.c)
 *     MmDiscardDriverSection @ 0x140D07620 (MmDiscardDriverSection.c)
 * Callees:
 *     MiUnlockLoadedDataTableEntry @ 0x14049E228 (MiUnlockLoadedDataTableEntry.c)
 */

__int64 __fastcall MmUnlockLoadedDataTableEntry(__int64 a1)
{
  return MiUnlockLoadedDataTableEntry(a1, 1);
}
