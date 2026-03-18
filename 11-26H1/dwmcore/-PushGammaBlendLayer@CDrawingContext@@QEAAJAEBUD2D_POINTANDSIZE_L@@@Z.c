/*
 * XREFs of ?PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUD2D_POINTANDSIZE_L@@@Z @ 0x180236C1C
 * Callers:
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180124D00 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x1800C86B0 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ??_ECOffScreenRenderingLayer@@UEAAPEAXI@Z @ 0x1801A47A0 (--_ECOffScreenRenderingLayer@@UEAAPEAXI@Z.c)
 *     ?Create@CGammaBlendLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAPEAV1@@Z @ 0x180250EF8 (-Create@CGammaBlendLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CDrawingContext::PushGammaBlendLayer(
        struct IDeviceTarget **this,
        const struct D2D_POINTANDSIZE_L *a2)
{
  int v3; // eax
  unsigned int v4; // edi
  COffScreenRenderingLayer *v5; // rbx
  int v6; // eax
  struct CLayer *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  v3 = CGammaBlendLayer::Create(this[3], a2, &v8);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0xF12u, 0LL);
    v5 = v8;
  }
  else
  {
    v5 = v8;
    v6 = CDrawingContext::PushLayer((CDrawingContext *)this, 0LL, v8, 1, 0);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0xF18u, 0LL);
    else
      v5 = 0LL;
  }
  if ( v5 )
    COffScreenRenderingLayer::`vector deleting destructor'(v5, 1);
  return v4;
}
