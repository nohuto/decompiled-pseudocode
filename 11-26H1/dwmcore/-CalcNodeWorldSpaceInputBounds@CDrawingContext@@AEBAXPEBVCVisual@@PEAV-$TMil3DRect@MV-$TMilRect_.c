/*
 * XREFs of ?CalcNodeWorldSpaceInputBounds@CDrawingContext@@AEBAXPEBVCVisual@@PEAV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002A850
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180029120 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 */

void __fastcall CDrawingContext::CalcNodeWorldSpaceInputBounds(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  void *v5; // rcx
  __int64 v6; // xmm1_8
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  v3 = *(_DWORD *)(a1 + 288);
  v8 = 0LL;
  v7 = 0LL;
  if ( v3 )
    v5 = (void *)(*(_QWORD *)(a1 + 280) + 68LL * (unsigned int)(v3 - 1));
  else
    v5 = &CMILMatrix::Identity;
  CMILMatrix::Transform3DBoundsHelper<1>((__int64)v5, (float *)(a2 + 172), (float *)&v7);
  v6 = v8;
  *(_OWORD *)a3 = v7;
  *(_QWORD *)(a3 + 16) = v6;
}
