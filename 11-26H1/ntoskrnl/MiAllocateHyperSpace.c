/*
 * XREFs of MiAllocateHyperSpace @ 0x140458190
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14036E218 (MiCopyDataPageToImagePage.c)
 * Callees:
 *     MiGetUltraMapping @ 0x140287730 (MiGetUltraMapping.c)
 */

unsigned __int64 __fastcall MiAllocateHyperSpace(__int64 a1)
{
  _QWORD *MmInternal; // rbx
  unsigned __int64 result; // rax

  MmInternal = KeGetCurrentPrcb()->MmInternal;
  result = MiGetUltraMapping((__int64)(MmInternal + 13), 3uLL, a1, 4);
  *MmInternal = ((result >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  return result;
}
