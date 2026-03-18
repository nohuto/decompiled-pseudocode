/*
 * XREFs of ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802AB9D0
 * Callers:
 *     ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802ABAF0 (-GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1801C6690 (-GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802AB380 (-GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802AC16C (-UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::GetD2DBitmap(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        char a4)
{
  char v8; // al
  CDxHandleAdvancedDirectFlipBitmapRealization *v9; // rcx
  int updated; // eax
  unsigned int D2DBitmap; // ebx
  int v12; // r9d
  unsigned int v14; // [rsp+20h] [rbp-18h]

  *a3 = 0LL;
  v8 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 40) + 24LL))((char *)this + 320);
  v9 = (CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this - 80);
  if ( v8 )
  {
    updated = CDxHandleAdvancedDirectFlipBitmapRealization::UpdateDecodeBitmap(v9);
    D2DBitmap = updated;
    if ( updated < 0 )
    {
      v14 = 117;
      goto LABEL_11;
    }
    if ( *(_BYTE *)(*((_QWORD *)this + 26) + 136LL) )
    {
      D2DBitmap = CRenderTargetBitmap::GetD2DBitmap((CRenderTargetBitmap *)(*((_QWORD *)this + 26) + 88LL), a2, a3, a4);
      v12 = D2DBitmap;
      if ( (D2DBitmap & 0x80000000) == 0 )
        return D2DBitmap;
    }
    else
    {
      D2DBitmap = -2003292412;
      *a3 = 0LL;
      v12 = -2003292412;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x79u, 0LL);
    return D2DBitmap;
  }
  updated = CD2DBitmapCache::GetCachedBitmap(v9, a2, a3, a4);
  D2DBitmap = updated;
  if ( updated < 0 )
  {
    v14 = 113;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, v14, 0LL);
  }
  return D2DBitmap;
}
