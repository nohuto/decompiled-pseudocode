/*
 * XREFs of ?CollectOcclusionHelper@CWindowNode@@AEAAXPEAVIBitmapResource@@V?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCShape@@@Z @ 0x1802048E8
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800DF2D0 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 * Callees:
 *     ?GetCurrentFlipExSurface@CWindowNode@@QEBAPEAVCCompositionSurfaceBitmap@@XZ @ 0x1800DFBBC (-GetCurrentFlipExSurface@CWindowNode@@QEBAPEAVCCompositionSurfaceBitmap@@XZ.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180202EAC (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 *     ?AddClippedOcclusionRect@COcclusionContext@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCShape@@_N@Z @ 0x18024F880 (-AddClippedOcclusionRect@COcclusionContext@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ?GetAlphaMarginsRect@CWindowNode@@AEAA_NAEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@PEAV2@@Z @ 0x180268354 (-GetAlphaMarginsRect@CWindowNode@@AEAA_NAEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CWindowNode::CollectOcclusionHelper(
        CWindowNode *a1,
        __int64 a2,
        const __m128i *a3,
        __int64 a4,
        __int64 a5)
{
  struct CCompositionSurfaceBitmap *CurrentFlip; // rax
  char v10; // bl
  __int64 v11; // r9
  __m128 v12; // [rsp+20h] [rbp-18h] BYREF

  CurrentFlip = CWindowNode::GetCurrentFlipExSurface(a1);
  if ( a2 == (((unsigned __int64)CurrentFlip + 72) & -(__int64)(CurrentFlip != 0LL)) )
  {
    v10 = 1;
  }
  else
  {
    v10 = 0;
    if ( (*((_BYTE *)a1 + 764) & 1) != 0 )
    {
LABEL_6:
      v12 = *(__m128 *)a3;
      CWindowNode::GetAlphaMarginsRect(a1, &v12, a3);
      goto LABEL_7;
    }
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) )
    return;
  if ( !v10 )
    goto LABEL_6;
LABEL_7:
  v12 = _mm_cvtepi32_ps(_mm_loadu_si128(a3));
  if ( a5 )
  {
    LOBYTE(v11) = v10;
    COcclusionContext::AddClippedOcclusionRect(a4, &v12, a5, v11, v12.m128_u64[0], v12.m128_u64[1]);
  }
  else
  {
    COcclusionContext::CollectRectangleForOcclusion(a4, (const struct D2D_RECT_F *)&v12, v10);
  }
}
