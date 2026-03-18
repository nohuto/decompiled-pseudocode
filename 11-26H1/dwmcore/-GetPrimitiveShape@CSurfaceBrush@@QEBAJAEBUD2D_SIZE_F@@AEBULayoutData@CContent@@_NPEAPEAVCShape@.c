/*
 * XREFs of ?GetPrimitiveShape@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@AEBULayoutData@CContent@@_NPEAPEAVCShape@@@Z @ 0x1802074FC
 * Callers:
 *     ?GetBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801583F0 (-GetBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180282ED0 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180283220 (-Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 *     ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180283F00 (-HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x180284020 (-IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z @ 0x180009D20 (-reset@-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z.c)
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18000A670 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CRectanglesShape@@QEAA@AEBUD2D_RECT_F@@@Z @ 0x1800BA820 (--0CRectanglesShape@@QEAA@AEBUD2D_RECT_F@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800BAF10 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DAFB8 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DB820 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180166FF0 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSurfaceBrush::GetPrimitiveShape(
        CSurfaceBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        unsigned __int8 a4,
        struct CShape **a5)
{
  FLOAT height; // xmm0_4
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // ebx
  int v11; // eax
  struct D2D_RECT_F v13; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-C0h]
  struct CShape *v15; // [rsp+50h] [rbp-B8h] BYREF
  int v16[20]; // [rsp+58h] [rbp-B0h] BYREF
  char v17[64]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v18[64]; // [rsp+E8h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+38h]

  height = a2->height;
  v13.right = a2->width;
  v13.bottom = height;
  v7 = a4;
  v15 = 0LL;
  *(_QWORD *)&v13.left = 0LL;
  CRectanglesShape::CRectanglesShape((CRectanglesShape *)v18, &v13);
  v13 = (struct D2D_RECT_F)*((_OWORD *)&a3[1].m11 + v7);
  CRectanglesShape::CRectanglesShape((CRectanglesShape *)v17, &v13);
  CMILMatrix::CMILMatrix((CMILMatrix *)v16, a3);
  *(_QWORD *)&v13.right = 0LL;
  *(_QWORD *)&v13.left = &v15;
  LOBYTE(v14) = 1;
  v8 = CShape::TryOptimizedCombinePaths((CShape *)v18, 0LL, v17, (unsigned __int64)v16, 1, (struct CShape **)&v13.right);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x1C8u, 0LL);
  }
  else if ( !*(_QWORD *)&v13.right )
  {
    v11 = CShape::D2DCombine((__int64)v18, v9, (__int64)v17, v16, 1, (CComplexShape **)&v13.right);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x1D3u, 0LL);
  }
  if ( (_BYTE)v14 )
    std::unique_ptr<CShape>::reset(
      *(__int64 (__fastcall *****)(_QWORD, __int64))&v13.left,
      *(__int64 (__fastcall ****)(_QWORD, __int64))&v13.right);
  if ( v10 >= 0 )
  {
    *a5 = v15;
    v15 = 0LL;
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v17);
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v18);
    std::unique_ptr<CShape>::~unique_ptr<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))&v15);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2AA,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\surfacebrush.cpp",
      (const char *)(unsigned int)v10);
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v17);
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v18);
    if ( v15 )
      (**(void (__fastcall ***)(struct CShape *, __int64))v15)(v15, 1LL);
    return (unsigned int)v10;
  }
}
