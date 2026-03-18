/*
 * XREFs of ??1?$deque@PEAVCMegaRectBatchCommand@@V?$allocator@PEAVCMegaRectBatchCommand@@@std@@@std@@QEAA@XZ @ 0x180151040
 * Callers:
 *     ??1CDrawListEntryBatch@@EEAA@XZ @ 0x180150FDC (--1CDrawListEntryBatch@@EEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$deque@PEAVCMegaRectBatchCommand@@V?$allocator@PEAVCMegaRectBatchCommand@@@std@@@std@@AEAAXXZ @ 0x180151094 (-_Tidy@-$deque@PEAVCMegaRectBatchCommand@@V-$allocator@PEAVCMegaRectBatchCommand@@@std@@@std@@AE.c)
 */

void __fastcall std::deque<CMegaRectBatchCommand *>::~deque<CMegaRectBatchCommand *>(void **a1)
{
  void *v2; // rcx

  std::deque<CMegaRectBatchCommand *>::_Tidy();
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16>(v2, 0x10uLL);
}
