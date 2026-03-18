/*
 * XREFs of ?PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180236B20
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800C6AD0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@.c)
 * Callees:
 *     ??_ECColorSpaceLayer@@UEAAPEAXI@Z @ 0x18005D610 (--_ECColorSpaceLayer@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEBAJPEAUD2D_POINTANDSIZE_L@@@Z @ 0x1800C8498 (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEBAJPEAUD2D_POINTANDSIZE_L@@@Z.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x1800C86B0 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?Create@CColorSpaceLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x18024FD1C (-Create@CColorSpaceLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@W4DXGI_COLOR_SPACE_TYPE@.c)
 */

__int64 __fastcall CDrawingContext::PushColorSpaceLayer(
        struct IDeviceTarget **this,
        const struct CVisual *a2,
        enum DXGI_COLOR_SPACE_TYPE a3)
{
  CColorSpaceLayer *v4; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  _OWORD v12[2]; // [rsp+30h] [rbp-28h] BYREF
  struct CLayer *v13; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0LL;
  v12[0] = 0LL;
  v13 = 0LL;
  v7 = CDrawingContext::ComputeExternalLayerOffsetAndBounds((CDrawingContext *)this, (struct D2D_POINTANDSIZE_L *)v12);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0xE10u, 0LL);
  }
  else
  {
    v9 = CColorSpaceLayer::Create(this[3], (const struct D2D_POINTANDSIZE_L *)v12, a3, &v13);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xE15u, 0LL);
      v4 = v13;
    }
    else
    {
      v4 = v13;
      v10 = CDrawingContext::PushLayer((CDrawingContext *)this, a2, v13, 1, 1);
      v8 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xE1Bu, 0LL);
      else
        v4 = 0LL;
    }
  }
  if ( v4 )
    CColorSpaceLayer::`vector deleting destructor'(v4, 1);
  return v8;
}
