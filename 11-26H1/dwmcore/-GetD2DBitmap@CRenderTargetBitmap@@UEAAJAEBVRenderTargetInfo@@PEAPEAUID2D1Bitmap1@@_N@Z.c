/*
 * XREFs of ?GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802AB380
 * Callers:
 *     ?GetD2DBitmap@CDecodeBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802AB9B0 (-GetD2DBitmap@CDecodeBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802AB9D0 (-GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID.c)
 *     ?GetD2DBitmap@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802AF200 (-GetD2DBitmap@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ValidateRenderTargetInfo@CRenderTargetBitmap@@IEBAJAEBVRenderTargetInfo@@@Z @ 0x180181A10 (-ValidateRenderTargetInfo@CRenderTargetBitmap@@IEBAJAEBVRenderTargetInfo@@@Z.c)
 *     ?GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1801C6690 (-GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x1801D4C5C (-GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetD2DBitmap(
        CRenderTargetBitmap *this,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        char a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  CComposition *v10; // rcx
  __int64 v11; // r8
  struct IBitmapResource *StockBlackBitmap; // rax
  struct IBitmapResource *v13; // rdi
  __int64 (__fastcall *v14)(struct IBitmapResource *, __int64 *); // rbx
  int v15; // eax
  __int64 v16; // r9
  int v17; // eax
  int CachedBitmap; // eax
  int v19; // eax
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  *a3 = 0LL;
  v8 = CRenderTargetBitmap::ValidateRenderTargetInfo((CRenderTargetBitmap *)((char *)this - 88), a2);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0xDBu, 0LL);
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 160LL))(*((_QWORD *)this + 4))
         && *((_BYTE *)g_pComposition + 6458) )
  {
    StockBlackBitmap = CComposition::GetStockBlackBitmap(v10);
    v21 = 0LL;
    v13 = StockBlackBitmap;
    v14 = *(__int64 (__fastcall **)(struct IBitmapResource *, __int64 *))(*(_QWORD *)StockBlackBitmap + 64LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v21);
    v15 = v14(v13, &v21);
    v9 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0xF1u, 0LL);
    }
    else
    {
      LOBYTE(v16) = a4;
      v17 = (*(__int64 (__fastcall **)(__int64, const struct RenderTargetInfo *, struct ID2D1Bitmap1 **, __int64))(*(_QWORD *)v21 + 120LL))(
              v21,
              a2,
              a3,
              v16);
      v9 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0xF5u, 0LL);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v21);
  }
  else if ( *((_BYTE *)this + 40) )
  {
    LOBYTE(v11) = a4;
    v19 = (*(__int64 (__fastcall **)(char *, struct ID2D1Bitmap1 **, __int64))(*((_QWORD *)this - 1) + 152LL))(
            (char *)this - 8,
            a3,
            v11);
    v9 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0xE9u, 0LL);
  }
  else
  {
    CachedBitmap = CD2DBitmapCache::GetCachedBitmap((CRenderTargetBitmap *)((char *)this - 88), a2, a3, a4);
    v9 = CachedBitmap;
    if ( CachedBitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CachedBitmap, 0xE5u, 0LL);
  }
  return v9;
}
