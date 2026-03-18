/*
 * XREFs of ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x18022CF50
 * Callers:
 *     ?Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800EDCF8 (-Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800F0A20 (-Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800197F0 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x18005FB24 (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18006010C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E360 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800F2210 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x18016C2C0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1801BCE20 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV3@@Z @ 0x18022D26C (-DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV-$TMilRect_@MUD2D_RECT_F.c)
 */

__int64 __fastcall CDisplayDebugFrameCounter::Display(
        CDisplayDebugFrameCounter *this,
        unsigned int a2,
        unsigned int a3,
        CDrawingContext *a4,
        __int64 a5,
        struct D2D_RECT_F *a6,
        int a7,
        _OWORD *a8)
{
  _OWORD *v12; // r14
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  int v16; // eax
  struct D2D_RECT_F v17; // xmm0
  const struct D2D_RECT_F *v18; // r10
  int v19; // eax
  unsigned int v20; // ebx
  int v21; // eax
  int v22; // eax
  __int64 v24[2]; // [rsp+48h] [rbp-C0h] BYREF
  struct D2D_RECT_F v25; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v26[4]; // [rsp+68h] [rbp-A0h] BYREF
  int v27; // [rsp+A8h] [rbp-60h]
  _BYTE v28[20]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v29; // [rsp+CCh] [rbp-3Ch]
  int v30; // [rsp+DCh] [rbp-2Ch]
  _OWORD v31[4]; // [rsp+E8h] [rbp-20h] BYREF
  int v32; // [rsp+128h] [rbp+20h]

  v27 = 0;
  v12 = 0LL;
  v13 = *(_OWORD *)(a5 + 16);
  v31[0] = *(_OWORD *)a5;
  v14 = *(_OWORD *)(a5 + 32);
  v31[1] = v13;
  v15 = *(_OWORD *)(a5 + 48);
  v16 = *(_DWORD *)(a5 + 64);
  v31[2] = v14;
  v17 = *a6;
  v32 = v16;
  v31[3] = v15;
  v25 = v17;
  if ( !CMILMatrix::IsIdentity<0>((__int64)v31) )
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v31, v18, &v25.left);
  if ( a7 == 1 )
  {
    v26[0] = _mm_load_si128((const __m128i *)&_xmm);
    v26[1] = _mm_load_si128((const __m128i *)&_xmm);
    BYTE1(v27) = BYTE1(v27) & 0xC0 | 0x29;
    v26[2] = _mm_load_si128((const __m128i *)&_xmm);
    v26[3] = _mm_load_si128((const __m128i *)&_xmm);
    LOBYTE(v27) = -86;
    CMILMatrix::Rotate90((CMILMatrix *)v26);
    CMILMatrix::Translate((CMILMatrix *)v26, v25.right, 0.0);
    CMILMatrix::Multiply((CMILMatrix *)v31, (const struct CMILMatrix *)v26);
    v12 = v26;
  }
  *(_OWORD *)v24 = 0uLL;
  *(_OWORD *)&v28[4] = 0LL;
  *(_QWORD *)v28 = 2LL;
  v30 = 0;
  v29 = 0LL;
  v19 = CDrawingContext::PushRenderOptionsInternal(a4, 0LL, (const struct MilRenderOptions *)v28, 1);
  v20 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x3Eu, 0LL);
  }
  else
  {
    v21 = CDrawingContext::PushTransformInternal((const void **)a4, 0LL, (const struct CMILMatrix *)v31, 0, 1);
    v20 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x41u, 0LL);
    }
    else
    {
      v22 = CDisplayDebugFrameCounter::DisplayText(this, a2, a3, a4, (__int64)&v25, a7, (__int64)v24);
      v20 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0x44u, 0LL);
      }
      else if ( v12 )
      {
        v25 = *(struct D2D_RECT_F *)v24;
        CMILMatrix::Transform2DBoundsHelper<0>((__int64)v12, &v25, (float *)v24);
      }
      CDrawingContext::PopTransformInternal(a4, 1);
    }
    CDrawingContext::PopRenderOptionsInternal(a4, 1);
  }
  if ( a8 )
    *a8 = *(_OWORD *)v24;
  return v20;
}
