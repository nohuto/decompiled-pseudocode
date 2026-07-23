/*
 * XREFs of MmLockLoadedDataTableEntry @ 0x1404BD460
 * Callers:
 *     KeSetTracepoint @ 0x1407BEB70 (KeSetTracepoint.c)
 *     KsepPatchImportTableEntry @ 0x1407C0D84 (KsepPatchImportTableEntry.c)
 *     MmGetSectionRange @ 0x14086AFFC (MmGetSectionRange.c)
 *     MmCompactServiceTable @ 0x140881670 (MmCompactServiceTable.c)
 *     MiLogPinDriverAddress @ 0x140AB45D4 (MiLogPinDriverAddress.c)
 * Callees:
 *     MiLockLoadedDataTableEntry @ 0x140701E40 (MiLockLoadedDataTableEntry.c)
 */

__int64 __fastcall MmLockLoadedDataTableEntry(__int64 a1)
{
  return MiLockLoadedDataTableEntry(a1, 1LL);
}
