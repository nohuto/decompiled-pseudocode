/*
 * XREFs of ?RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1802543B0
 * Callers:
 *     ?Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800EDCF8 (-Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180063B78 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x1800822E0 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800C9860 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800ED6B8 (-NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?GetDeviceTransform@CDDisplayRenderTarget@@UEBAAEBVCMILMatrix@@XZ @ 0x1800EDC30 (-GetDeviceTransform@CDDisplayRenderTarget@@UEBAAEBVCMILMatrix@@XZ.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180158178 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180158220 (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?GetClipBox@CMonitorTransform@@QEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18018C160 (-GetClipBox@CMonitorTransform@@QEBA-AV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x1801945F8 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?AnyDesktopPlaneScaling@COverlayContext@@QEBA_NXZ @ 0x180194BF8 (-AnyDesktopPlaneScaling@COverlayContext@@QEBA_NXZ.c)
 *     ?AddTightDeviceDirtyRect@?$CTargetDirtyBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801E4808 (-AddTightDeviceDirtyRect@-$CTargetDirtyBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 *     ?Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18021AB54 (-Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ?ReadTexture@CDrawingContext@@QEBAXXZ @ 0x180251040 (-ReadTexture@CDrawingContext@@QEBAXXZ.c)
 */

__int64 __fastcall CDDisplayRenderTarget::RenderComposeTop(
        CDDisplayRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3,
        char a4)
{
  double v4; // xmm2_8
  unsigned int v5; // ebx
  char v6; // r15
  const struct CMILMatrix *v10; // rax
  int v11; // eax
  char v12; // al
  float v13; // xmm7_4
  float v14; // xmm8_4
  float v15; // xmm6_4
  float v16; // xmm9_4
  int v17; // eax
  __m128 *DeviceTransform; // rax
  int v19; // eax
  const struct CMILMatrix *v20; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int64 v24; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v25; // r8
  int v26; // eax
  struct D2D_RECT_F v28; // [rsp+38h] [rbp-99h] BYREF
  __m128 v29; // [rsp+48h] [rbp-89h] BYREF
  int v30; // [rsp+58h] [rbp-79h] BYREF
  int v31; // [rsp+5Ch] [rbp-75h]
  int v32; // [rsp+60h] [rbp-71h]
  int v33; // [rsp+64h] [rbp-6Dh]
  _OWORD v34[4]; // [rsp+68h] [rbp-69h] BYREF
  int v35; // [rsp+A8h] [rbp-29h]

  v5 = 0;
  v6 = 0;
  if ( !a4 )
  {
    if ( !CComposeTop::HasNewContent(a3) )
      goto LABEL_24;
    v28 = 0LL;
    v12 = COverlayContext::AnyDesktopPlaneScaling((CDDisplayRenderTarget *)((char *)this + 232));
    CMonitorTransform::GetClipBox((__int64)this + 29936, (__int64)&v30, v12);
    v13 = (float)v31;
    v6 = 1;
    v14 = (float)v32;
    v15 = (float)v30;
    v16 = (float)v33;
    v29.m128_f32[0] = (float)v30;
    v29.m128_f32[1] = (float)v31;
    v29.m128_f32[3] = (float)v33;
    v29.m128_f32[2] = (float)v32;
    v17 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, &v29, 1, 0);
    v5 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x4A0u, 0LL);
      return v5;
    }
    DeviceTransform = (__m128 *)CDDisplayRenderTarget::GetDeviceTransform((CDDisplayRenderTarget *)((char *)this + 88));
    v19 = CComposeTop::Render((__int64)a3, a2, DeviceTransform, &v28);
    v5 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x4ABu, 0LL);
    }
    else
    {
      if ( v15 > v28.left )
        v28.left = v15;
      if ( v13 > v28.top )
        v28.top = v13;
      if ( v28.right > v14 )
        v28.right = v14;
      if ( v28.bottom > v16 )
        v28.bottom = v16;
      if ( IsEmpty(&v28) )
      {
        *(_QWORD *)&v28.right = 0LL;
        *(_QWORD *)&v28.left = 0LL;
      }
      if ( IsEmpty(&v28) )
        goto LABEL_24;
      CDDisplayRenderTarget::NotifyRenderedRect((__int64)this, &v28, 1);
      CTargetDirtyBase<8>::AddTightDeviceDirtyRect((__int64)this + 30224, (unsigned int *)&v28, v4);
      v20 = CDDisplayRenderTarget::GetDeviceTransform((CDDisplayRenderTarget *)((char *)this + 88));
      v21 = *((_OWORD *)v20 + 1);
      v34[0] = *(_OWORD *)v20;
      v22 = *((_OWORD *)v20 + 2);
      v34[1] = v21;
      v23 = *((_OWORD *)v20 + 3);
      LODWORD(v20) = *((_DWORD *)v20 + 16);
      v34[2] = v22;
      v34[3] = v23;
      v35 = (int)v20;
      CMILMatrix::Invert((CMILMatrix *)v34, v24, v25);
      v29 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)v34, &v28, v29.m128_f32);
      v26 = CComposeTop::NewContentRendered(a3, (__int64)&v29);
      v5 = v26;
      if ( v26 >= 0 )
        goto LABEL_24;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v26, 0x4C1u, 0LL);
    }
LABEL_27:
    CDrawingContext::PopGpuClipRectInternal(a2, 0);
    return v5;
  }
  v10 = CDDisplayRenderTarget::GetDeviceTransform((CDDisplayRenderTarget *)((char *)this + 88));
  v11 = CComposeTop::FullRender(a3, (__int64)a2, (__int64)v10);
  v5 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x48Fu, 0LL);
    return v5;
  }
LABEL_24:
  if ( g_LockAndReadTarget )
    CDrawingContext::ReadTexture(a2);
  if ( v6 )
    goto LABEL_27;
  return v5;
}
