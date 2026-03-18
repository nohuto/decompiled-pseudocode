/*
 * XREFs of ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBVMILMatrix3x2@@PEAVCDrawListEntryBuilder@@@Z @ 0x1802039A0
 * Callers:
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@M@Z @ 0x180203840 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_ea_180203840.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@@Z @ 0x1802349D4 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@@Z.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NPEAVCDrawListEntryBuilder@@@Z @ 0x18023642C (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NPE.c)
 * Callees:
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18000A670 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ??R?$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z @ 0x18003731C (--R-$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x180037348 (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x180038840 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180039A10 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x18009CFD0 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800AF610 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@PEAVCDrawListEntryBuilder@@@Z @ 0x180236200 (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::FillRectanglesWithDrawListBitmap(
        struct CDrawingContext *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        struct CDrawListEntryBuilder *a5)
{
  __int64 v6; // rcx
  __int64 v8; // rax
  float v10; // xmm6_4
  __m128 v11; // xmm1
  __m128 v12; // xmm4
  __int128 v13; // xmm0
  float v14; // xmm3_4
  int v15; // eax
  _DWORD *v16; // r8
  int v17; // edi
  __int64 v18; // rcx
  CSurfaceDrawListBrush *v19; // rdx
  __int64 v20; // rcx
  CSurfaceDrawListBrush *v22; // rax
  int v23; // eax
  int v24; // ebx
  char v25; // [rsp+38h] [rbp-81h] BYREF
  __int16 v26; // [rsp+39h] [rbp-80h]
  CSurfaceDrawListBrush *v27; // [rsp+48h] [rbp-71h] BYREF
  __int128 v28; // [rsp+50h] [rbp-69h] BYREF
  char v29; // [rsp+60h] [rbp-59h]
  __int64 (__fastcall ***v30)(_QWORD, __int64); // [rsp+68h] [rbp-51h] BYREF
  float v31[10]; // [rsp+70h] [rbp-49h] BYREF
  __int128 v32; // [rsp+98h] [rbp-21h] BYREF
  unsigned __int64 v33; // [rsp+A8h] [rbp-11h]
  float v34[14]; // [rsp+B0h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+57h]

  v6 = a2[1];
  v8 = 0LL;
  if ( v6 )
    v8 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 32LL))(v6, &v30);
  v10 = FLOAT_1_0;
  v11 = 0LL;
  v12 = 0LL;
  *(_QWORD *)((char *)&v28 + 4) = 0LL;
  v27 = 0LL;
  v29 = 1;
  v31[2] = 0.0;
  v31[5] = 0.0;
  v31[8] = 1.0;
  *(float *)&v28 = 1.0 / (float)(int)v8;
  v11.m128_f32[0] = 0.0 - (float)(*(float *)&v28 * 0.0);
  *((float *)&v28 + 3) = 1.0 / (float)SHIDWORD(v8);
  v13 = v28;
  *(_QWORD *)&v28 = &v27;
  v14 = *((float *)&v28 + 3) * 0.0;
  *((_QWORD *)&v28 + 1) = 0LL;
  v32 = v13;
  v12.m128_f32[0] = 0.0 - v14;
  v31[0] = *(float *)a4;
  v31[3] = *(float *)(a4 + 8);
  LODWORD(v13) = *(_DWORD *)(a4 + 16);
  v33 = _mm_unpacklo_ps(v11, v12).m128_u64[0];
  v31[1] = *(float *)(a4 + 4);
  v31[4] = *(float *)(a4 + 12);
  v31[7] = *(float *)(a4 + 20);
  LODWORD(v31[6]) = v13;
  Matrix3x3::operator*(v31, v34, (float *)&v32);
  v15 = D2DInterpolationModeFromMilInterpolationMode(*((_DWORD *)a1 + 58));
  v25 = InterpolationMode::FromD2D1InterpolationMode(v15);
  v26 = 257;
  v17 = CSurfaceDrawListBrush::CreateWithTextureTransform(a2, (__int16 *)&v25, v16, (_QWORD *)&v28 + 1);
  if ( v29 )
  {
    v18 = *((_QWORD *)&v28 + 1);
    v19 = *(CSurfaceDrawListBrush **)v28;
    *(_QWORD *)v28 = *((_QWORD *)&v28 + 1);
    if ( v19 )
      std::default_delete<CSurfaceDrawListBrush>::operator()(v18, v19);
  }
  if ( v17 >= 0 )
  {
    v22 = v27;
    *((_BYTE *)v27 + 52) = 1;
    *((_QWORD *)v22 + 4) = 0LL;
    *((_QWORD *)v22 + 5) = 0LL;
    *((_DWORD *)v22 + 12) = 0;
    if ( !a5 )
    {
      v23 = *((_DWORD *)a1 + 790);
      if ( v23 )
        v10 = *(float *)(*((_QWORD *)a1 + 394) + 4LL * (unsigned int)(v23 - 1));
    }
    v30 = (__int64 (__fastcall ***)(_QWORD, __int64))v27;
    *((float *)&v28 + 3) = v10;
    *(_QWORD *)&v28 = 0x3F8000003F800000LL;
    DWORD2(v28) = 1065353216;
    v27 = 0LL;
    v24 = CDrawingContext::FillRectanglesWithDrawListBrush(a1, a5);
    std::unique_ptr<CShape>::~unique_ptr<CShape>(&v30);
    if ( v24 >= 0 )
      v24 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x329,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
        (const char *)(unsigned int)v24);
    std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v27);
    return (unsigned int)v24;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x318,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
      (const char *)(unsigned int)v17);
    if ( v27 )
      std::default_delete<CSurfaceDrawListBrush>::operator()(v20, v27);
    return (unsigned int)v17;
  }
}
