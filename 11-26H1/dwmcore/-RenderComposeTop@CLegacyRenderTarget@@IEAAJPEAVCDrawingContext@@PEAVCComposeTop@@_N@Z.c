/*
 * XREFs of ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801942F0
 * Callers:
 *     ?Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800F0A20 (-Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180063B78 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x1800822E0 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18008BAF0 (-NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_PO.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800C9860 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180158178 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180158220 (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x1801945F8 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?AnyDesktopPlaneScaling@COverlayContext@@QEBA_NXZ @ 0x180194BF8 (-AnyDesktopPlaneScaling@COverlayContext@@QEBA_NXZ.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180194CF0 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 *     ?AddTightDeviceDirtyRect@?$CTargetDirtyBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801E4808 (-AddTightDeviceDirtyRect@-$CTargetDirtyBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 *     ?ReadTexture@CDrawingContext@@QEBAXXZ @ 0x180251040 (-ReadTexture@CDrawingContext@@QEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRenderTarget::RenderComposeTop(
        CLegacyRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3,
        char a4)
{
  unsigned int v4; // ebx
  char v5; // r14
  __int64 v9; // rax
  int v10; // eax
  __int64 i; // rcx
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v20; // r8
  int v21; // eax
  struct D2D_RECT_F v23; // [rsp+38h] [rbp-39h] BYREF
  __int128 v24; // [rsp+48h] [rbp-29h]
  __m128 v25; // [rsp+58h] [rbp-19h] BYREF
  _OWORD v26[4]; // [rsp+68h] [rbp-9h] BYREF
  int v27; // [rsp+A8h] [rbp+37h]

  v4 = 0;
  v5 = 0;
  if ( !a4 )
  {
    if ( !CComposeTop::HasNewContent(a3) )
      goto LABEL_29;
    v23 = 0LL;
    if ( COverlayContext::AnyDesktopPlaneScaling((CLegacyRenderTarget *)((char *)this + 216)) )
    {
      *((_QWORD *)&v24 + 1) = *((_QWORD *)this + 3745);
      *(_QWORD *)&v24 = 0LL;
    }
    else
    {
      v24 = *(_OWORD *)((char *)this + 29944);
    }
    for ( i = 0LL; i < 4; ++i )
      v25.m128_f32[i] = (float)*(int *)((char *)&v24 + i * 4);
    v5 = 1;
    v12 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, &v25, 1, 0);
    v4 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x49Bu, 0LL);
      return v4;
    }
    v13 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 11) + 56LL))((char *)this + 88);
    v14 = CComposeTop::RenderWorker(a3, a2, v13);
    v4 = v14;
    if ( v14 >= 0 )
    {
      if ( v25.m128_f32[0] > v23.left )
        LODWORD(v23.left) = v25.m128_i32[0];
      if ( v25.m128_f32[1] > v23.top )
        LODWORD(v23.top) = v25.m128_i32[1];
      if ( v23.right > v25.m128_f32[2] )
        LODWORD(v23.right) = v25.m128_i32[2];
      if ( v23.bottom > v25.m128_f32[3] )
        LODWORD(v23.bottom) = v25.m128_i32[3];
      if ( IsEmpty(&v23) )
      {
        *(_QWORD *)&v23.right = 0LL;
        *(_QWORD *)&v23.left = 0LL;
      }
      if ( IsEmpty(&v23) )
        goto LABEL_29;
      CLegacyRenderTarget::NotifyRenderedRect((__int64)this, &v23, 1);
      CTargetDirtyBase<8>::AddTightDeviceDirtyRect((char *)this + 30208, &v23);
      v15 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 11) + 56LL))((char *)this + 88);
      v16 = *(_OWORD *)(v15 + 16);
      v26[0] = *(_OWORD *)v15;
      v17 = *(_OWORD *)(v15 + 32);
      v26[1] = v16;
      v18 = *(_OWORD *)(v15 + 48);
      LODWORD(v15) = *(_DWORD *)(v15 + 64);
      v26[2] = v17;
      v26[3] = v18;
      v27 = v15;
      CMILMatrix::Invert((CMILMatrix *)v26, v19, v20);
      v25 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)v26, &v23, v25.m128_f32);
      v21 = CComposeTop::NewContentRendered(a3, (__int64)&v25);
      v4 = v21;
      if ( v21 >= 0 )
        goto LABEL_29;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x4BCu, 0LL);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0xECu, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x4A6u, 0LL);
    }
LABEL_32:
    CDrawingContext::PopGpuClipRectInternal(a2, 0);
    return v4;
  }
  v9 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 11) + 56LL))((char *)this + 88);
  v10 = CComposeTop::FullRender(a3, (__int64)a2, v9);
  v4 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x48Au, 0LL);
    return v4;
  }
LABEL_29:
  if ( g_LockAndReadTarget )
    CDrawingContext::ReadTexture(a2);
  if ( v5 )
    goto LABEL_32;
  return v4;
}
