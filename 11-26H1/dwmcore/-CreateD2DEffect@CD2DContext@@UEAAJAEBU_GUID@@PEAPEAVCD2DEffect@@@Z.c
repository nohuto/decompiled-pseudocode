/*
 * XREFs of ?CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z @ 0x180102130
 * Callers:
 *     ?CreateResource@CFilterEffect@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DEffect@@@Z @ 0x18026720C (-CreateResource@CFilterEffect@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DEffect@@@Z.c)
 *     ?GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@PEAVCCompositionSurfaceBitmap@@PEAPEAUID2D1Effect@@@Z @ 0x180267314 (-GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@HUtagR.c)
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x180290C5C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x1800AEB40 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD2DContext@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180102B5C (-TranslateDXGIorD3DErrorInContext@CD2DContext@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z @ 0x180102CC4 (-Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::CreateD2DEffect(CD2DContext *this, const struct _GUID *a2, struct CD2DEffect **a3)
{
  __int64 v4; // rax
  int v6; // ebx
  unsigned int v8; // eax
  struct ID2D1Effect *v9; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v9 = 0LL;
  v4 = (__int64)this + 1108;
  if ( !this )
    v4 = 1124LL;
  if ( *(_DWORD *)v4 )
  {
    v6 = -2003304307;
    v8 = 1269;
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, struct ID2D1Effect **))(**((_QWORD **)this + 25)
                                                                                        + 504LL))(
           *((_QWORD *)this + 25),
           a2,
           &v9);
    if ( v6 < 0 )
    {
      v8 = 1271;
    }
    else
    {
      v6 = CD2DEffect::Create(*((struct CD2DResourceManager **)this + 21), v9, a3);
      if ( v6 >= 0 )
        goto LABEL_6;
      v8 = 1272;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, v8, 0LL);
  *a3 = 0LL;
LABEL_6:
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v9);
  return CD2DContext::TranslateDXGIorD3DErrorInContext(this, (unsigned int)v6);
}
