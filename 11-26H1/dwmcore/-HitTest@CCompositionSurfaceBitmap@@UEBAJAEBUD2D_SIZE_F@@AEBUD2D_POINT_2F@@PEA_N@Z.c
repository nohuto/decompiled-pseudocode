/*
 * XREFs of ?HitTest@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1802661C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18000A670 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B8950 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ??0CRectanglesShape@@QEAA@AEBUD2D_RECT_F@@@Z @ 0x1800BA820 (--0CRectanglesShape@@QEAA@AEBUD2D_RECT_F@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800BAF10 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DB760 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180181830 (-FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180184FB0 (--1-$out_param_t@V-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@@details@wil@@QEA.c)
 *     ?UseLayoutSizeForBounds@CCompositionSurfaceBitmap@@AEBA_NAEBUD2D_SIZE_F@@@Z @ 0x1801896D0 (-UseLayoutSizeForBounds@CCompositionSurfaceBitmap@@AEBA_NAEBUD2D_SIZE_F@@@Z.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180202920 (-CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::HitTest(
        CCompositionSurfaceBitmap *this,
        struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  char v8; // di
  FLOAT height; // xmm0_4
  __int64 v10; // rdx
  int v11; // ebx
  CShape *v13; // [rsp+30h] [rbp-D0h] BYREF
  struct D2D_RECT_F v14; // [rsp+38h] [rbp-C8h] BYREF
  char v15; // [rsp+48h] [rbp-B8h]
  _BYTE v16[64]; // [rsp+50h] [rbp-B0h] BYREF
  int v17; // [rsp+90h] [rbp-70h]
  struct D2D_RECT_F v18; // [rsp+A0h] [rbp-60h] BYREF
  struct D2D_RECT_F v19; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v20[64]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v21[64]; // [rsp+100h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  *a4 = 0;
  v17 = 0;
  v19 = 0LL;
  v18 = 0LL;
  v8 = CCompositionSurfaceBitmap::CalcImageTransform(this, a2, (CMILMatrix *)v16, &v19, &v18);
  CRectanglesShape::CRectanglesShape((CRectanglesShape *)v21, &v18);
  v13 = 0LL;
  if ( !CCompositionSurfaceBitmap::UseLayoutSizeForBounds(this, a2) )
  {
    *(_QWORD *)&v14.right = 0LL;
    *(_QWORD *)&v14.left = &v13;
    v15 = 1;
    v11 = CShape::CopyShape(
            (CShape *)v21,
            (const struct CMILMatrix *)((unsigned __int64)v16 & -(__int64)(v8 != 0)),
            (struct CShape **)&v14.right);
    wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>((__int64)&v14);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18A,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionsurfacebitmap.cpp",
        (const char *)(unsigned int)v11);
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  height = a2->height;
  v14.right = a2->width;
  v14.bottom = height;
  *(_QWORD *)&v14.left = 0LL;
  CRectanglesShape::CRectanglesShape((CRectanglesShape *)v20, &v14);
  *(_QWORD *)&v14.right = 0LL;
  *(_QWORD *)&v14.left = &v13;
  v15 = 1;
  v11 = CShape::Combine(
          (__int64)v20,
          v10,
          (__int64)v21,
          (int *)((unsigned __int64)v16 & -(__int64)(v8 != 0)),
          1,
          (CComplexShape **)&v14.right);
  wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>((__int64)&v14);
  if ( v11 >= 0 )
  {
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v20);
LABEL_5:
    CShape::FillContainsPoint(v13, a3, a4);
    v11 = 0;
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x184,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionsurfacebitmap.cpp",
    (const char *)(unsigned int)v11);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v20);
LABEL_6:
  std::unique_ptr<CShape>::~unique_ptr<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))&v13);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v21);
  return (unsigned int)v11;
}
