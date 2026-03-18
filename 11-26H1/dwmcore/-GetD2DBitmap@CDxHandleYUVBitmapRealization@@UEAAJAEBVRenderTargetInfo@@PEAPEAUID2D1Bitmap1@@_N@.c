/*
 * XREFs of ?GetD2DBitmap@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802AF200
 * Callers:
 *     ?GetD2DBitmap@CDxHandleYUVBitmapRealization@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802AF370 (-GetD2DBitmap@CDxHandleYUVBitmapRealization@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@.c)
 * Callees:
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1800133E8 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x1801D4C5C (-GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 *     ?GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802AB380 (-GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::GetD2DBitmap(
        CDxHandleYUVBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        char a4)
{
  CDxHandleYUVBitmapRealization *v5; // rcx
  int v9; // eax
  unsigned int D2DBitmap; // ebx
  int v11; // r9d
  struct IBitmapResource *StockBlackBitmap; // rdi
  __int64 (__fastcall *v13)(struct IBitmapResource *, __int64 *); // rbx
  int v14; // eax
  int v15; // eax
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  *a3 = 0LL;
  v5 = (CDxHandleYUVBitmapRealization *)((char *)this - 80);
  if ( *((_BYTE *)v5 + 393) )
  {
    v9 = CDxHandleYUVBitmapRealization::VPBltToDecodeBitmap(v5);
    D2DBitmap = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x1B5u, 0LL);
      return D2DBitmap;
    }
    if ( !*(_BYTE *)(*((_QWORD *)this + 26) + 136LL) )
    {
      D2DBitmap = -2003292412;
      *a3 = 0LL;
      v11 = -2003292412;
LABEL_7:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x1B9u, 0LL);
      return D2DBitmap;
    }
    D2DBitmap = CRenderTargetBitmap::GetD2DBitmap((CRenderTargetBitmap *)(*((_QWORD *)this + 26) + 88LL), a2, a3, a4);
    v11 = D2DBitmap;
    if ( (D2DBitmap & 0x80000000) != 0 )
      goto LABEL_7;
  }
  else
  {
    v17 = 0LL;
    StockBlackBitmap = CComposition::GetStockBlackBitmap(v5);
    v13 = *(__int64 (__fastcall **)(struct IBitmapResource *, __int64 *))(*(_QWORD *)StockBlackBitmap + 64LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v17);
    v14 = v13(StockBlackBitmap, &v17);
    D2DBitmap = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x1C0u, 0LL);
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(__int64, const struct RenderTargetInfo *, struct ID2D1Bitmap1 **, _QWORD))(*(_QWORD *)v17 + 120LL))(
              v17,
              a2,
              a3,
              0LL);
      D2DBitmap = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x1C2u, 0LL);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v17);
  }
  return D2DBitmap;
}
