/*
 * XREFs of ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800642A4
 * Callers:
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800ED0CC (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180194650 (-RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RestoreRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18024F830 (-RestoreRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderDirtyRegion@CLegacyStereoRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180258C00 (-RenderDirtyRegion@CLegacyStereoRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     gsl::final_action__CStockBitmapProducer::ProduceRealization_::_10_::_lambda_1___::_final_action__CStockBitmapProducer::ProduceRealization_::_10_::_lambda_1___ @ 0x180259684 (gsl--final_action__CStockBitmapProducer--ProduceRealization_--_10_--_lambda_1___--_final_action_.c)
 * Callees:
 *     ?UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ @ 0x180064268 (-UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ.c)
 *     ?PopTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z @ 0x18006A6F0 (-PopTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x18006B470 (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::PopRenderTargetInternal(CDrawingContext *this, char a2)
{
  struct ID2DContextOwner *v4; // rbx
  int v5; // eax
  unsigned int v6; // esi
  __int64 v7; // rcx
  struct IDeviceTarget *v8; // rbx
  struct IDeviceTarget *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v4 = (struct ID2DContextOwner *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
  v5 = CD2DContext::PopTarget((CD2DContext *)(*((_QWORD *)this + 4) + 16LL), v4, &v10);
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xC4u, 0LL);
  if ( g_LockAndReadD2DTarget )
    (*(void (__fastcall **)(_QWORD, struct ID2DContextOwner *))(**((_QWORD **)this + 3) + 112LL))(
      *((_QWORD *)this + 3),
      v4);
  v7 = *((_QWORD *)this + 3);
  if ( a2 )
  {
    *((_QWORD *)this + 3) = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v8 = v10;
  }
  else
  {
    v8 = 0LL;
    *((_QWORD *)this + 3) = v10;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    CDrawingContext::UpdateRenderTargetInfo(this);
    CDrawingContext::PopClippingScope(this, 0);
  }
  *((_BYTE *)this + 8065) = 1;
  if ( v8 )
    (*(void (__fastcall **)(struct IDeviceTarget *))(*(_QWORD *)v8 + 16LL))(v8);
  return v6;
}
