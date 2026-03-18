/*
 * XREFs of MmContainingPageForReservedMapping @ 0x140522A50
 * Callers:
 *     PnprCopyReservedMapping @ 0x14050D5C8 (PnprCopyReservedMapping.c)
 *     PnprRecopyMappingReserve @ 0x140522944 (PnprRecopyMappingReserve.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x1402D9BF0 (MiGetContainingPageTable.c)
 */

unsigned __int64 __fastcall MmContainingPageForReservedMapping(unsigned __int64 a1)
{
  return MiGetContainingPageTable(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
}
