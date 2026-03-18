/*
 * XREFs of MmLockLoadedDataTableEntry @ 0x1404C3C10
 * Callers:
 *     KeSetTracepoint @ 0x1407BBB10 (KeSetTracepoint.c)
 *     KsepPatchImportTableEntry @ 0x1407BDD24 (KsepPatchImportTableEntry.c)
 *     MmGetSectionRange @ 0x140864C1C (MmGetSectionRange.c)
 *     MmCompactServiceTable @ 0x14087B270 (MmCompactServiceTable.c)
 *     MiLogPinDriverAddress @ 0x140AB3234 (MiLogPinDriverAddress.c)
 * Callees:
 *     MiLockLoadedDataTableEntry @ 0x1406FD170 (MiLockLoadedDataTableEntry.c)
 */

__int64 __fastcall MmLockLoadedDataTableEntry(__int64 a1)
{
  return MiLockLoadedDataTableEntry(a1, 1LL);
}
