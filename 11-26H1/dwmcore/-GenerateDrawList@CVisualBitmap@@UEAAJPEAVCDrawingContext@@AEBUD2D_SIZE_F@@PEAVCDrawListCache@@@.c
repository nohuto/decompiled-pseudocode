/*
 * XREFs of ?GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180268130
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18000A670 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18000D420 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18000DC30 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18000F2D0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18001B620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x180037348 (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180037374 (--1-$out_param_t@V-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x18003A7BC (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x18003EBEC (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18003EC70 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18003ED00 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800AF610 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x1800D361C (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x18018A560 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x1801991E4 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??0SamplerMode@@QEAA@W4D2D1_INTERPOLATION_MODE@@W4Enum@ExtendMode@@1@Z @ 0x1801AC5D8 (--0SamplerMode@@QEAA@W4D2D1_INTERPOLATION_MODE@@W4Enum@ExtendMode@@1@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1802B9630 (_alloca_probe.c)
 */

__int64 __fastcall CVisualBitmap::GenerateDrawList(
        CVisualBitmap *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int v7; // ecx
  int v8; // eax
  int v9; // ebx
  int DrawList; // eax
  __int16 v12; // [rsp+30h] [rbp-D0h] BYREF
  char v13; // [rsp+32h] [rbp-CEh]
  __int16 v14; // [rsp+40h] [rbp-C0h] BYREF
  char v15; // [rsp+42h] [rbp-BEh]
  __int64 (__fastcall ***v16)(_QWORD, __int64); // [rsp+50h] [rbp-B0h] BYREF
  CSurfaceDrawListBrush *v17; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A0h] BYREF
  float v19; // [rsp+68h] [rbp-98h]
  float v20; // [rsp+6Ch] [rbp-94h]
  CSurfaceDrawListBrush **v21; // [rsp+70h] [rbp-90h] BYREF
  __int64 v22; // [rsp+78h] [rbp-88h] BYREF
  char v23; // [rsp+80h] [rbp-80h]
  __int64 v24[3]; // [rsp+88h] [rbp-78h] BYREF
  __int128 v25; // [rsp+A0h] [rbp-60h] BYREF
  int v26; // [rsp+B0h] [rbp-50h]
  int v27; // [rsp+FCh] [rbp-4h]
  char v28; // [rsp+100h] [rbp+0h]
  CDrawingContext *v29[6]; // [rsp+110h] [rbp+10h] BYREF
  int v30; // [rsp+144h] [rbp+44h]
  _BYTE v31[4496]; // [rsp+160h] [rbp+60h] BYREF

  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v31);
  v7 = *((_DWORD *)a2 + 58);
  v17 = 0LL;
  v18 = 0LL;
  v8 = D2DInterpolationModeFromMilInterpolationMode(v7);
  SamplerMode::SamplerMode((char *)&v12, v8, 1, 1);
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v29, a2);
  v26 = 0;
  v27 = 257;
  v25 = 0LL;
  v28 = 0;
  CDrawListBitmap::CDrawListBitmap(
    (CDrawListBitmap *)v24,
    (struct IBitmapResource *)(((unsigned __int64)this + 80) & -(__int64)(this != 0LL)));
  CDrawListBitmap::GetSize((CDrawListBitmap *)v24, &v16);
  v19 = (float)(int)v16;
  CDrawListBitmap::GetSize((CDrawListBitmap *)v24, &v16);
  v22 = 0LL;
  v23 = 1;
  v21 = &v17;
  v14 = v12;
  v15 = v13;
  v20 = (float)SHIDWORD(v16);
  v9 = CSurfaceDrawListBrush::CreateWithContentRect(v24, &v14, (float *)&v18, (__int64)&v22);
  wil::details::out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>::~out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>((__int64)&v21);
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xACu, 0LL);
  }
  else
  {
    v16 = (__int64 (__fastcall ***)(_QWORD, __int64))v17;
    v17 = 0LL;
    CBrushDrawListGenerator::AttachInput((__int64)v29, 0, (__int64 *)&v16);
    std::unique_ptr<CShape>::~unique_ptr<CShape>(&v16);
    v30 = 128;
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 v29,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v25,
                 (struct CDrawListEntryBuilder *)v31);
    v9 = DrawList;
    if ( DrawList < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DrawList, 0xB0u, 0LL);
    }
    else
    {
      CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v31);
      v9 = 0;
    }
  }
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v24);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v29);
  std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v17);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v31);
  return (unsigned int)v9;
}
