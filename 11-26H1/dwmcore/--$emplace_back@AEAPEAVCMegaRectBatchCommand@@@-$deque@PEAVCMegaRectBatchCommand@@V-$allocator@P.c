/*
 * XREFs of ??$emplace_back@AEAPEAVCMegaRectBatchCommand@@@?$deque@PEAVCMegaRectBatchCommand@@V?$allocator@PEAVCMegaRectBatchCommand@@@std@@@std@@QEAAAEAPEAVCMegaRectBatchCommand@@AEAPEAV2@@Z @ 0x18025EC10
 * Callers:
 *     ?SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x1800C48D0 (-SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete@VCBa.c)
 * Callees:
 *     ??$_Emplace_back_internal@AEAPEAVCMegaRectBatchCommand@@@?$deque@PEAVCMegaRectBatchCommand@@V?$allocator@PEAVCMegaRectBatchCommand@@@std@@@std@@AEAAXAEAPEAVCMegaRectBatchCommand@@@Z @ 0x1800E92AC (--$_Emplace_back_internal@AEAPEAVCMegaRectBatchCommand@@@-$deque@PEAVCMegaRectBatchCommand@@V-$a.c)
 */

__int64 __fastcall std::deque<CMegaRectBatchCommand *>::emplace_back<CMegaRectBatchCommand * &>(
        _QWORD *a1,
        __int64 *a2)
{
  std::deque<CMegaRectBatchCommand *>::_Emplace_back_internal<CMegaRectBatchCommand * &>((__int64)a1, a2);
  return *(_QWORD *)(a1[1] + 8 * ((a1[2] - 1LL) & ((unsigned __int64)(a1[4] - 1LL + a1[3]) >> 1)))
       + 8LL * ((*((_DWORD *)a1 + 8) - 1 + *((_DWORD *)a1 + 6)) & 1);
}
