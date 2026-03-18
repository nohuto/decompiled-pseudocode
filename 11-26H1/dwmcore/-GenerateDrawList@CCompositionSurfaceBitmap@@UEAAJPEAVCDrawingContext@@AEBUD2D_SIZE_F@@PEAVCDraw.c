/*
 * XREFs of ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180265C90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18000A670 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18000D420 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18000DC30 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18000F2D0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18001B620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18001B6D4 (--1-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDrawListBrush@@@std.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18001B6F4 (--1-$out_param_t@V-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDraw.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x180037348 (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180037374 (--1-$out_param_t@V-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x18003A7BC (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x18003EBEC (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18003EC70 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18003ED00 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800AF610 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x1800D361C (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x1800D9794 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?UseLayoutSizeForBounds@CCompositionSurfaceBitmap@@AEBA_NAEBUD2D_SIZE_F@@@Z @ 0x1801896D0 (-UseLayoutSizeForBounds@CCompositionSurfaceBitmap@@AEBA_NAEBUD2D_SIZE_F@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x1801991E4 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??0SamplerMode@@QEAA@W4D2D1_INTERPOLATION_MODE@@W4Enum@ExtendMode@@1@Z @ 0x1801AC5D8 (--0SamplerMode@@QEAA@W4D2D1_INTERPOLATION_MODE@@W4Enum@ExtendMode@@1@Z.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180202920 (-CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1802B9630 (_alloca_probe.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GenerateDrawList(
        CCompositionSurfaceBitmap *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  char v8; // r15
  __int64 v9; // rdx
  int v10; // ebx
  FLOAT height; // xmm0_4
  _BYTE *v12; // rax
  __int128 v13; // xmm1
  int v14; // eax
  char v15; // r9
  CSurfaceDrawListBrush *v16; // rax
  int v17; // xmm1_4
  int v18; // xmm2_4
  int v19; // xmm3_4
  int v20; // xmm4_4
  int v21; // xmm5_4
  int DrawList; // eax
  __int16 v24; // [rsp+30h] [rbp-D0h] BYREF
  char v25; // [rsp+32h] [rbp-CEh]
  __int16 v26; // [rsp+40h] [rbp-C0h] BYREF
  char v27; // [rsp+42h] [rbp-BEh]
  CSurfaceDrawListBrush *v28; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE *v29; // [rsp+58h] [rbp-A8h] BYREF
  struct CGeometryOnlyDrawListBrush *v30[2]; // [rsp+60h] [rbp-A0h] BYREF
  char v31; // [rsp+70h] [rbp-90h]
  __int64 v32[3]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v33[20]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v34[2]; // [rsp+E0h] [rbp-20h] BYREF
  int v35; // [rsp+F0h] [rbp-10h]
  int v36; // [rsp+13Ch] [rbp+3Ch]
  char v37; // [rsp+140h] [rbp+40h]
  struct D2D_RECT_F v38; // [rsp+150h] [rbp+50h] BYREF
  struct D2D_RECT_F v39; // [rsp+160h] [rbp+60h] BYREF
  CDrawingContext *v40[6]; // [rsp+170h] [rbp+70h] BYREF
  int v41; // [rsp+1A4h] [rbp+A4h]
  _BYTE v42[4496]; // [rsp+1C0h] [rbp+C0h] BYREF

  v33[16] = 0;
  v39 = 0LL;
  v38 = 0LL;
  v8 = CCompositionSurfaceBitmap::CalcImageTransform(this, a3, (CMILMatrix *)v33, &v39, &v38);
  if ( IsEmpty(&v38) )
    return 0;
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v40, a2);
  v29 = 0LL;
  if ( CCompositionSurfaceBitmap::UseLayoutSizeForBounds(this, a3) )
  {
    v30[1] = 0LL;
    v30[0] = (struct CGeometryOnlyDrawListBrush *)&v29;
    v31 = 1;
    v10 = CGeometryOnlyDrawListBrush::Create(&v30[1], v9);
    wil::details::out_param_t<std::unique_ptr<CGeometryOnlyDrawListBrush>>::~out_param_t<std::unique_ptr<CGeometryOnlyDrawListBrush>>((__int64)v30);
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x205u, 0LL);
LABEL_13:
      std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>((void **)&v29);
      CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v40);
      return (unsigned int)v10;
    }
    height = a3->height;
    v12 = v29;
    *(FLOAT *)&v30[1] = a3->width;
    *((FLOAT *)&v30[1] + 1) = height;
    v30[0] = 0LL;
    v13 = *(_OWORD *)v30;
    v29[52] = 1;
    *((_DWORD *)v12 + 12) = 50529027;
    *((_OWORD *)v12 + 2) = v13;
  }
  CDrawListBitmap::CDrawListBitmap(
    (CDrawListBitmap *)v32,
    (struct IBitmapResource *)(((unsigned __int64)this + 72) & -(__int64)(this != 0LL)));
  v14 = D2DInterpolationModeFromMilInterpolationMode(*((_DWORD *)a2 + 58));
  SamplerMode::SamplerMode((char *)&v24, v14, 1, 1);
  v31 = v15;
  v30[0] = (struct CGeometryOnlyDrawListBrush *)&v28;
  v26 = v24;
  v27 = v25;
  v28 = 0LL;
  v30[1] = 0LL;
  v10 = CSurfaceDrawListBrush::CreateWithContentRect(v32, &v26, &v38.left, (__int64)&v30[1]);
  wil::details::out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>::~out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>((__int64)v30);
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x21Au, 0LL);
    goto LABEL_16;
  }
  if ( v8 )
  {
    v16 = v28;
    v17 = v33[1];
    v18 = v33[4];
    v19 = v33[5];
    v20 = v33[12];
    v21 = v33[13];
    *((_DWORD *)v28 + 2) = v33[0];
    *((_DWORD *)v16 + 3) = v17;
    *((_DWORD *)v16 + 4) = v18;
    *((_DWORD *)v16 + 5) = v19;
    *((_DWORD *)v16 + 6) = v20;
    *((_DWORD *)v16 + 7) = v21;
  }
  v30[0] = v28;
  v28 = 0LL;
  CBrushDrawListGenerator::AttachInput((__int64)v40, 0, (__int64 *)v30);
  std::unique_ptr<CShape>::~unique_ptr<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))v30);
  v34[0] = v29;
  v41 = 128;
  v34[1] = 0LL;
  v35 = 0;
  v36 = 257;
  v37 = 0;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v42);
  DrawList = CBrushDrawListGenerator::GenerateDrawList(
               v40,
               (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v34,
               (struct CDrawListEntryBuilder *)v42);
  v10 = DrawList;
  if ( DrawList < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DrawList, 0x229u, 0LL);
    CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v42);
LABEL_16:
    std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v28);
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v32);
    goto LABEL_13;
  }
  CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v42);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v42);
  std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v28);
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v32);
  std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>((void **)&v29);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v40);
  return 0;
}
