/*
 * XREFs of ?PushColorTransformLayer@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUMilColorTransform@@@Z @ 0x1801E4148
 * Callers:
 *     ?RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180056BA0 (-RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?AlignRectFToPointAndSizeL@@YAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUD2D_POINTANDSIZE_L@@@Z @ 0x18005C0B4 (-AlignRectFToPointAndSizeL@@YAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18005C5A0 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ??_ECColorTransformLayer@@UEAAPEAXI@Z @ 0x18005D0C0 (--_ECColorTransformLayer@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@AEBUMilColorTransform@@PEAPEAV1@@Z @ 0x1800C84F8 (-Create@CColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@AEBUMilColorTransfor.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x1800C86B0 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 */

__int64 __fastcall CDrawingContext::PushColorTransformLayer(
        struct IDeviceTarget **this,
        __int64 a2,
        const struct MilColorTransform *a3)
{
  CColorTransformLayer *v3; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  __int128 v12; // [rsp+40h] [rbp-18h] BYREF
  struct CColorTransformLayer *v13; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0LL;
  v13 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  CDrawingContext::GetClipBoundsWorld((__int64)this, (float *)&v11);
  v6 = AlignRectFToPointAndSizeL((float *)&v11, &v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0xE38u, 0LL);
  }
  else
  {
    v8 = CColorTransformLayer::Create(this[3], (const struct D2D_POINTANDSIZE_L *)&v12, a3, &v13);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0xE3Du, 0LL);
      v3 = v13;
    }
    else
    {
      v3 = v13;
      v9 = CDrawingContext::PushLayer((CDrawingContext *)this, 0LL, v13, 1, 1);
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xE43u, 0LL);
      else
        v3 = 0LL;
    }
  }
  if ( v3 )
    CColorTransformLayer::`vector deleting destructor'(v3, 1);
  return v7;
}
