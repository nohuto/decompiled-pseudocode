/*
 * XREFs of ?NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800ED6B8
 * Callers:
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800ED0CC (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800EDCF8 (-Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1802543B0 (-RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18008AF90 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniq.c)
 *     ?NotifyRenderedRect@COverlaySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800ECB30 (-NotifyRenderedRect@COverlaySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTAN.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x1800ECDBC (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDDisplayRenderTarget::NotifyRenderedRect(__int64 a1, struct D2D_RECT_F *a2, char a3)
{
  double v3; // xmm2_8
  unsigned int v4; // ebx
  char v6; // al
  int *v7; // rax
  const struct FastRegion::Internal::CRgnData **v8; // rsi
  __m128i v9; // xmm6
  const struct FastRegion::Internal::CRgnData *v10; // rax
  __int64 v11; // rax
  unsigned int v12; // r15d
  __int64 v13; // r14
  int v14; // eax
  int v15; // edx
  signed __int32 v16; // xmm0_4
  int v17; // r12d
  int v18; // eax
  __int64 v19; // rax
  __m128i v20; // [rsp+28h] [rbp-59h] BYREF
  __int128 v21; // [rsp+38h] [rbp-49h] BYREF
  FastRegion::CRegion *v22; // [rsp+48h] [rbp-39h] BYREF
  _DWORD v23[18]; // [rsp+50h] [rbp-31h] BYREF

  v4 = 0;
  if ( a2 )
  {
    if ( !a3 )
    {
      v21 = 0LL;
      if ( !*(_BYTE *)(a1 + 19284) || (v6 = 1, !*(_DWORD *)(a1 + 19280)) )
        v6 = 0;
      CMILMatrix::Transform2DBoundsHelper<0>(a1 + (v6 != 0 ? 30140LL : 30004LL), a2, (float *)&v21);
      a2 = (struct D2D_RECT_F *)&v21;
    }
    v7 = PixelAlign(v20.m128i_i32, (unsigned int *)a2, v3);
    v8 = (const struct FastRegion::Internal::CRgnData **)(*(_QWORD *)(a1 + 216) + 24LL);
    v9 = *(__m128i *)v7;
    v10 = *v8;
    v20 = v9;
    v11 = (*((__int64 (__fastcall **)(const struct FastRegion::Internal::CRgnData **))v10 + 14))(v8);
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 88LL))(v11, &v21);
    v12 = (*((__int64 (__fastcall **)(const struct FastRegion::Internal::CRgnData **))*v8 + 12))(v8);
    v13 = (*((__int64 (__fastcall **)(const struct FastRegion::Internal::CRgnData **))*v8 + 26))(v8);
    v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 88LL))(v13);
    v15 = _mm_cvtsi128_si32(v9);
    v16 = _mm_srli_si128(v9, 8).m128i_u32[0];
    v17 = v14;
    v22 = (FastRegion::CRegion *)v23;
    if ( v15 >= v16 || (v18 = _mm_cvtsi128_si32(_mm_srli_si128(v9, 12)), v20.m128i_i32[1] >= v18) )
    {
      v23[0] = 0;
    }
    else
    {
      v23[3] = v20.m128i_i32[1];
      v23[4] = 16;
      v23[6] = 16;
      v23[0] = 2;
      v23[1] = v15;
      v23[2] = v16;
      v23[7] = v15;
      v23[8] = v16;
      v23[5] = v18;
    }
    CRegion::Union(v8 + 20, &v22);
    (*(void (__fastcall **)(__int64, FastRegion::CRegion **))(*(_QWORD *)v13 + 120LL))(v13, &v22);
    if ( v12 )
    {
      do
      {
        if ( v4 != v17 )
        {
          v19 = (*((__int64 (__fastcall **)(const struct FastRegion::Internal::CRgnData **, _QWORD))*v8 + 28))(v8, v4);
          (*(void (__fastcall **)(__int64, FastRegion::CRegion **))(*(_QWORD *)v19 + 104LL))(v19, &v22);
        }
        ++v4;
      }
      while ( v4 < v12 );
    }
    FastRegion::CRegion::FreeMemory(&v22);
  }
  else
  {
    COverlaySwapChain::NotifyRenderedRect(*(_QWORD *)(a1 + 216) + 24LL, 0LL);
  }
  *(_BYTE *)(a1 + 32528) = 1;
}
