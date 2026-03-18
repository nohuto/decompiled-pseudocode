/*
 * XREFs of ?Push@COccluderClipStack@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCShapePtr@@AEBVCMILMatrix@@@Z @ 0x1800DED38
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180089340 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180022120 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FromData@CCornerRects@@QEAAXAEBUCRoundedRectangleGeometryData@@AEBVCMILMatrix@@@Z @ 0x1800DE720 (-FromData@CCornerRects@@QEAAXAEBUCRoundedRectangleGeometryData@@AEBVCMILMatrix@@@Z.c)
 *     ?Push@CBaseClipStack@@IEAAJAEBUD2D_RECT_F@@@Z @ 0x1800DEAF0 (-Push@CBaseClipStack@@IEAAJAEBUD2D_RECT_F@@@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@VCCornerRects@@$07$01$07@@QEBAPEBVCCornerRects@@XZ @ 0x1800DEF20 (-GetTopByReference@-$CWatermarkStack@VCCornerRects@@$07$01$07@@QEBAPEBVCCornerRects@@XZ.c)
 *     ?Push@?$CWatermarkStack@VCCornerRects@@$07$01$07@@QEAAJAEBVCCornerRects@@@Z @ 0x1800DEF3C (-Push@-$CWatermarkStack@VCCornerRects@@$07$01$07@@QEAAJAEBVCCornerRects@@@Z.c)
 *     ?Intersect@CCornerRects@@QEAA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800DEFE8 (-Intersect@CCornerRects@@QEAA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COccluderClipStack::Push(const void **this, __int64 a2, _QWORD *a3, const struct CMILMatrix *a4)
{
  __int64 v5; // rcx
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 TopByReference; // rax
  __int64 v15; // rdx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  int v19; // eax
  struct D2D_RECT_F v20; // [rsp+20h] [rbp-99h] BYREF
  __int128 v21; // [rsp+30h] [rbp-89h] BYREF
  __int128 v22; // [rsp+40h] [rbp-79h] BYREF
  __int128 v23; // [rsp+50h] [rbp-69h] BYREF
  char v24; // [rsp+60h] [rbp-59h]
  struct D2D_RECT_F v25; // [rsp+70h] [rbp-49h] BYREF
  __int128 v26; // [rsp+80h] [rbp-39h] BYREF
  __int128 v27; // [rsp+90h] [rbp-29h] BYREF
  __int128 v28; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v29; // [rsp+B0h] [rbp-9h] BYREF
  int v30; // [rsp+C0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v5 = *a3;
  v25 = 0LL;
  if ( !v5 )
  {
    v9 = -2003304309;
    goto LABEL_12;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, struct D2D_RECT_F *))(*(_QWORD *)v5 + 88LL))(v5, &v25);
  if ( v9 < 0 )
  {
LABEL_12:
    v15 = 148LL;
    goto LABEL_13;
  }
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)a4, &v25, &v25.left);
  v9 = CBaseClipStack::Push(this, &v25);
  if ( v9 < 0 )
  {
    v15 = 151LL;
  }
  else
  {
    v24 = 1;
    v20 = 0LL;
    v22 = 0LL;
    v21 = 0LL;
    v23 = 0LL;
    if ( v25.right > v25.left
      && v25.bottom > v25.top
      && !(*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3) )
    {
      CCornerRects::FromData(&v20, (const struct CRoundedRectangleGeometryData *)(*(_QWORD *)(*a3 + 16LL) + 16LL), a4);
    }
    TopByReference = CWatermarkStack<CCornerRects,8,2,8>::GetTopByReference(this + 3, v10, v11, v12);
    if ( TopByReference && !*(_BYTE *)(TopByReference + 64) )
    {
      v16 = *(_OWORD *)(TopByReference + 16);
      v26 = *(_OWORD *)TopByReference;
      v17 = *(_OWORD *)(TopByReference + 32);
      v27 = v16;
      v18 = *(_OWORD *)(TopByReference + 48);
      v19 = *(_DWORD *)(TopByReference + 64);
      v28 = v17;
      v29 = v18;
      v30 = v19;
      if ( (unsigned __int8)CCornerRects::Intersect(&v26, a2) )
      {
        TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(&v20.left, (float *)&v26);
        TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v21, (float *)&v27);
        TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v22, (float *)&v28);
        TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v23, (float *)&v29);
        v24 = 0;
      }
    }
    v9 = CWatermarkStack<CCornerRects,8,2,8>::Push((int)this + 24);
    if ( v9 >= 0 )
      return 0LL;
    v15 = 175LL;
  }
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\baseclipstack.cpp",
    (const char *)(unsigned int)v9);
  return (unsigned int)v9;
}
