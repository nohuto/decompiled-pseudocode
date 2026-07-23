/*
 * XREFs of MmContainingPageForReservedMapping @ 0x1405250BC
 * Callers:
 *     PnprCopyReservedMapping @ 0x140507038 (PnprCopyReservedMapping.c)
 *     PnprRecopyMappingReserve @ 0x140524FB0 (PnprRecopyMappingReserve.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 */

unsigned __int64 __fastcall MmContainingPageForReservedMapping(unsigned __int64 a1)
{
  return MiGetContainingPageTable(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
}
