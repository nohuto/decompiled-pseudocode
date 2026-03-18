/*
 * XREFs of ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180159A24
 * Callers:
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800ED0CC (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180194650 (-RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180255400 (-Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z @ 0x180009D20 (-reset@-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CMilRectLFromD2D_RECT_F@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18009DFF0 (-CMilRectLFromD2D_RECT_F@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRe.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DB760 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x1800E9C24 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x1800EA480 (--1CRegionShape@@UEAA@XZ.c)
 *     ?ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z @ 0x180158E4C (-ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposeTop::SubtractOverdraw(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 (__fastcall ****v3)(_QWORD, __int64); // rdi
  const struct tagRECT *v5; // rax
  __int64 (__fastcall ***v6)(_QWORD, __int64); // rcx
  __int64 v7; // rdx
  struct CShape *v8; // rdx
  struct CShape *v10; // [rsp+30h] [rbp-49h] BYREF
  struct CShape **v11; // [rsp+38h] [rbp-41h] BYREF
  CComplexShape *v12; // [rsp+40h] [rbp-39h] BYREF
  char v13; // [rsp+48h] [rbp-31h]
  _QWORD v14[3]; // [rsp+50h] [rbp-29h] BYREF
  int v15; // [rsp+68h] [rbp-11h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+2Fh]

  v2 = 0;
  v3 = (__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 160);
  if ( *(_QWORD *)(a1 + 160) )
  {
    v10 = 0LL;
    v14[0] = &CRegionShape::`vftable';
    v14[1] = 0LL;
    v14[2] = &v15;
    v15 = 0;
    v16 = 0LL;
    v5 = (const struct tagRECT *)CMilRectLFromD2D_RECT_F((int *)&v11, a2);
    CRegionShape::BuildFromRects((__int64)v14, v5, 1u);
    v6 = *v3;
    v11 = &v10;
    v12 = 0LL;
    v13 = 1;
    v2 = CShape::Combine((__int64)v6, v7, (__int64)v14, (int *)(a1 + 92), 2, &v12);
    if ( v13 )
      std::unique_ptr<CShape>::reset(
        (__int64 (__fastcall ****)(_QWORD, __int64))v11,
        (__int64 (__fastcall ***)(_QWORD, __int64))v12);
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v2, 0xA6u, 0LL);
    }
    else
    {
      if ( ShapeBoundsEmpty(v10) )
      {
        v8 = 0LL;
      }
      else
      {
        v8 = v10;
        v10 = 0LL;
      }
      std::unique_ptr<CShape>::reset(v3, (__int64 (__fastcall ***)(_QWORD, __int64))v8);
    }
    CRegionShape::~CRegionShape((CRegionShape *)v14);
    if ( v10 )
      (**(void (__fastcall ***)(struct CShape *, __int64))v10)(v10, 1LL);
  }
  return (unsigned int)v2;
}
