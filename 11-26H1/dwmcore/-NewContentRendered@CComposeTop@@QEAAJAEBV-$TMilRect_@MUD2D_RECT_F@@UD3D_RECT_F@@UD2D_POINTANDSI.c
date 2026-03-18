/*
 * XREFs of ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180158220
 * Callers:
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180158178 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801942F0 (-RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1802543B0 (-RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x180255730 (-RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z @ 0x180009D20 (-reset@-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CMilRectLFromD2D_RECT_F@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18009DFF0 (-CMilRectLFromD2D_RECT_F@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRe.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DB760 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x1800E9C24 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x1800EA480 (--1CRegionShape@@UEAA@XZ.c)
 *     ?AddShapeToLifetime@CComposeTop@@AEAAJAEBVCShape@@@Z @ 0x1801DC1D8 (-AddShapeToLifetime@CComposeTop@@AEAAJAEBVCShape@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposeTop::NewContentRendered(CComposeTop *this, __int64 a2)
{
  const struct tagRECT *v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  int v7; // ebx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v11; // [rsp+20h] [rbp-59h]
  struct CShape *v12; // [rsp+30h] [rbp-49h] BYREF
  struct CShape **v13; // [rsp+38h] [rbp-41h] BYREF
  CComplexShape *v14; // [rsp+40h] [rbp-39h] BYREF
  char v15; // [rsp+48h] [rbp-31h]
  _QWORD v16[3]; // [rsp+50h] [rbp-29h] BYREF
  int v17; // [rsp+68h] [rbp-11h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+2Fh]

  v12 = 0LL;
  v16[2] = &v17;
  v16[1] = 0LL;
  v16[0] = &CRegionShape::`vftable';
  v17 = 0;
  v18 = 0LL;
  v3 = (const struct tagRECT *)CMilRectLFromD2D_RECT_F((int *)&v13, a2);
  CRegionShape::BuildFromRects((__int64)v16, v3, 1u);
  if ( !*((_QWORD *)this + 20) )
  {
    v5 = MIDL_user_allocate(0x60uLL);
    v6 = v5;
    if ( v5 )
    {
      memset_0(v5, 0, 0x60uLL);
      *v6 = &CRegionShape::`vftable';
      v6[2] = v6 + 3;
    }
    else
    {
      v6 = 0LL;
    }
    std::unique_ptr<CShape>::reset(
      (__int64 (__fastcall ****)(_QWORD, __int64))this + 20,
      (__int64 (__fastcall ***)(_QWORD, __int64))v6);
    if ( !*((_QWORD *)this + 20) )
    {
      v7 = -2147024882;
      v11 = 112;
LABEL_13:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, v11, 0LL);
      goto LABEL_14;
    }
  }
  v8 = *((_QWORD *)this + 2);
  v13 = &v12;
  v14 = 0LL;
  v15 = 1;
  v7 = CShape::Combine(v8, v4, (__int64)v16, (int *)this + 23, 1, &v14);
  if ( v15 )
    std::unique_ptr<CShape>::reset(
      (__int64 (__fastcall ****)(_QWORD, __int64))v13,
      (__int64 (__fastcall ***)(_QWORD, __int64))v14);
  if ( v7 < 0 )
  {
    v11 = 121;
    goto LABEL_13;
  }
  v9 = CComposeTop::AddShapeToLifetime(this, v12);
  v7 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x7Fu, 0LL);
LABEL_14:
  CRegionShape::~CRegionShape((CRegionShape *)v16);
  if ( v12 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v12)(v12, 1LL);
  return (unsigned int)v7;
}
