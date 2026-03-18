/*
 * XREFs of MmUnlockLoadedDataTableEntry @ 0x14051E3A8
 * Callers:
 *     MmVerifyCallbackFunctionCheckFlags @ 0x140514250 (MmVerifyCallbackFunctionCheckFlags.c)
 *     MmProtectDriverSection @ 0x1406E6130 (MmProtectDriverSection.c)
 *     MmWriteSystemImageTracepoint @ 0x1406FCF64 (MmWriteSystemImageTracepoint.c)
 *     KeSetTracepoint @ 0x1407BBB10 (KeSetTracepoint.c)
 *     KsepPatchImportTableEntry @ 0x1407BDD24 (KsepPatchImportTableEntry.c)
 *     MmGetModuleRoutineAddress @ 0x140864A10 (MmGetModuleRoutineAddress.c)
 *     MmGetSectionRange @ 0x140864C1C (MmGetSectionRange.c)
 *     MmCompactServiceTable @ 0x14087B270 (MmCompactServiceTable.c)
 *     MmLockPagableSectionByHandle @ 0x140A9C420 (MmLockPagableSectionByHandle.c)
 *     MiLogPinDriverAddress @ 0x140AB3234 (MiLogPinDriverAddress.c)
 *     MmLockPagableDataSection @ 0x140ABB180 (MmLockPagableDataSection.c)
 *     MmResetDriverPaging @ 0x140AC9400 (MmResetDriverPaging.c)
 *     MmPageEntireDriver @ 0x140AC9AA0 (MmPageEntireDriver.c)
 *     MmChangeImageProtection @ 0x140AD5D10 (MmChangeImageProtection.c)
 *     MmIsDriverVerifyingByAddress @ 0x140C43F40 (MmIsDriverVerifyingByAddress.c)
 *     MmDiscardDriverSection @ 0x140D01280 (MmDiscardDriverSection.c)
 * Callees:
 *     MiUnlockLoadedDataTableEntry @ 0x1404A4B98 (MiUnlockLoadedDataTableEntry.c)
 */

__int64 __fastcall MmUnlockLoadedDataTableEntry(__int64 a1)
{
  return MiUnlockLoadedDataTableEntry(a1, 1);
}
