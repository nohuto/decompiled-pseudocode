/*
 * XREFs of ?RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x180255730
 * Callers:
 *     ?Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180255400 (-Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180158178 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180158220 (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x1801945F8 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?AddTightDeviceDirtyRect@?$CTargetDirtyBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801E4808 (-AddTightDeviceDirtyRect@-$CTargetDirtyBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 *     ?Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18021AB54 (-Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ?ReadTexture@CDrawingContext@@QEBAXXZ @ 0x180251040 (-ReadTexture@CDrawingContext@@QEBAXXZ.c)
 *     ?NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180255294 (-NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_PO.c)
 */

__int64 __fastcall CRemoteRenderTarget::RenderComposeTop(
        __m128 *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3,
        char a4)
{
  double v4; // xmm2_8
  unsigned int v5; // ebx
  int v9; // eax
  float v10; // xmm7_4
  float v11; // xmm6_4
  int v12; // eax
  float v13; // xmm3_4
  float v14; // xmm0_4
  float v15; // xmm2_4
  int v16; // eax
  struct D2D_RECT_F v18; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v19[4]; // [rsp+40h] [rbp-30h] BYREF

  v5 = 0;
  if ( a4 )
  {
    v9 = CComposeTop::FullRender(a3, (__int64)a2, (__int64)&this[15]);
    v5 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x1C8u, 0LL);
      return v5;
    }
  }
  else if ( CComposeTop::HasNewContent(a3) )
  {
    v10 = (float)this[7].m128_i32[2];
    v11 = (float)this[7].m128_i32[3];
    v18 = 0LL;
    v12 = CComposeTop::Render((__int64)a3, a2, this + 15, &v18);
    v5 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x1D6u, 0LL);
      return v5;
    }
    if ( v18.left < 0.0 )
      v18.left = 0.0;
    if ( v18.top < 0.0 )
      v18.top = 0.0;
    if ( v18.right > v10 )
      v18.right = v10;
    if ( v18.bottom > v11 )
      v18.bottom = v11;
    if ( IsEmpty(&v18) )
    {
      *(_QWORD *)&v18.right = 0LL;
      *(_QWORD *)&v18.left = 0LL;
    }
    if ( !IsEmpty(&v18) )
    {
      CRemoteRenderTarget::NotifyRenderedRect((__int64)this, &v18, 1);
      CTargetDirtyBase<8>::AddTightDeviceDirtyRect((__int64)&this[21], (unsigned int *)&v18, v4);
      v13 = this[14].m128_f32[1] + v18.bottom;
      v14 = this[14].m128_f32[0] + v18.left;
      v15 = this[14].m128_f32[0] + v18.right;
      *(float *)&v19[1] = this[14].m128_f32[1] + v18.top;
      *(float *)&v19[3] = v13;
      *(float *)v19 = v14;
      *(float *)&v19[2] = v15;
      v16 = CComposeTop::NewContentRendered(a3, (__int64)v19);
      v5 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x1E8u, 0LL);
        return v5;
      }
    }
  }
  if ( g_LockAndReadTarget )
    CDrawingContext::ReadTexture(a2);
  return v5;
}
