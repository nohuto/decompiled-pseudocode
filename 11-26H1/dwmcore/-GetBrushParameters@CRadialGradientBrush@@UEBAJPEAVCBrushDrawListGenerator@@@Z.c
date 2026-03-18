/*
 * XREFs of ?GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18027EC20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18000A670 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18001B620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x180037348 (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180037374 (--1-$out_param_t@V-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x180038840 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18003A430 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x1800D361C (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800D369C (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180104138 (-GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV-$TMilR.c)
 *     ?InferVisualToTextureTransform@CGradientBrush@@IEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180105A64 (-InferVisualToTextureTransform@CGradientBrush@@IEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV-$TMilRect_@MUD.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x18018A560 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x1801991E4 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?GetExtendMode@CGradientBrush@@QEBA?AW4Enum@ExtendMode@@XZ @ 0x18021CD70 (-GetExtendMode@CGradientBrush@@QEBA-AW4Enum@ExtendMode@@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?SetNonCenteredShaderConstants@CRadialGradientEffect@@QEAAXAEBUD2D_POINT_2F@@MM@Z @ 0x1802B3820 (-SetNonCenteredShaderConstants@CRadialGradientEffect@@QEAAXAEBUD2D_POINT_2F@@MM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRadialGradientBrush::GetBrushParameters(
        CRadialGradientBrush *this,
        struct CBrushDrawListGenerator *a2)
{
  int CurrentSurface; // esi
  __int64 *v5; // rax
  bool v6; // zf
  float *v7; // rdx
  float v8; // xmm2_4
  float v9; // xmm4_4
  float v10; // xmm3_4
  float v11; // xmm5_4
  unsigned int v12; // xmm2_4
  float v13; // xmm3_4
  float v14; // xmm1_4
  __int64 v15; // rcx
  unsigned int v16; // ecx
  float *v17; // rax
  float v18; // xmm2_4
  struct D2D_SIZE_U Size; // rax
  float v20; // xmm6_4
  float v21; // xmm7_4
  struct D2D_SIZE_U v22; // rax
  __int64 v23; // rcx
  float v24; // xmm6_4
  CRadialGradientEffect *v25; // rcx
  float v26; // xmm3_4
  FLOAT v27; // xmm1_4
  unsigned int v28; // eax
  __int16 v30; // [rsp+38h] [rbp-89h] BYREF
  char v31; // [rsp+3Ah] [rbp-87h]
  struct D2D_POINT_2F v32; // [rsp+48h] [rbp-79h] BYREF
  struct IBitmapResource *v33; // [rsp+50h] [rbp-71h] BYREF
  CSurfaceDrawListBrush *v34; // [rsp+58h] [rbp-69h] BYREF
  __int128 v35; // [rsp+60h] [rbp-61h] BYREF
  __int128 v36; // [rsp+70h] [rbp-51h] BYREF
  char v37; // [rsp+80h] [rbp-41h]
  CSurfaceDrawListBrush **v38; // [rsp+88h] [rbp-39h] BYREF
  __int64 v39; // [rsp+90h] [rbp-31h] BYREF
  float v40; // [rsp+98h] [rbp-29h]
  float v41; // [rsp+9Ch] [rbp-25h]
  __int128 v42; // [rsp+A0h] [rbp-21h]
  __int64 v43; // [rsp+B0h] [rbp-11h]
  unsigned __int64 v44; // [rsp+B8h] [rbp-9h] BYREF
  float v45; // [rsp+C0h] [rbp-1h]
  unsigned __int64 v46; // [rsp+C4h] [rbp+3h]
  float v47; // [rsp+CCh] [rbp+Bh]
  __int64 v48; // [rsp+D0h] [rbp+Fh]
  int v49; // [rsp+D8h] [rbp+17h]

  v34 = 0LL;
  v33 = 0LL;
  v37 = 0;
  v36 = 0LL;
  v35 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v33);
  CurrentSurface = CGradientBrush::GetCurrentSurface(this, *(_QWORD *)a2, (__int64 *)&v33, (__int64)&v35);
  if ( CurrentSurface < 0 )
  {
    v28 = 23;
    goto LABEL_20;
  }
  v5 = (__int64 *)CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)&v38, v33);
  CDrawListBitmap::operator=((__int64 *)&v36, v5);
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v38);
  CBrushDrawListGenerator::Reset(a2);
  v6 = *((_DWORD *)this + 27) == 1;
  v7 = (float *)((char *)a2 + 44);
  v8 = *((float *)this + 62);
  v9 = *((float *)this + 63);
  v10 = v8 + *((float *)this + 64);
  v44 = __PAIR64__(LODWORD(v9), LODWORD(v8));
  v11 = v9 + *((float *)this + 65);
  v46 = __PAIR64__(LODWORD(v8), LODWORD(v9));
  v45 = v10;
  v47 = v11;
  if ( v6 )
  {
    *(float *)&v12 = v8 * *v7;
    v13 = v10 * *v7;
    v14 = *((float *)a2 + 12) * v11;
    *((float *)&v44 + 1) = *((float *)a2 + 12) * v9;
    v46 = __PAIR64__(v12, HIDWORD(v44));
    LODWORD(v44) = v12;
    v45 = v13;
    v47 = v14;
  }
  v15 = *((_QWORD *)this + 15);
  if ( v15 )
  {
    (*(void (__fastcall **)(__int64, float *, CSurfaceDrawListBrush ***))(*(_QWORD *)v15 + 216LL))(v15, v7, &v38);
    v16 = 0;
    v17 = (float *)&v44;
    do
    {
      ++v16;
      v18 = (float)(*((float *)&v39 + 1) * v17[1]) + (float)(*((float *)&v38 + 1) * *v17);
      *v17 = (float)((float)(*(float *)&v39 * v17[1]) + (float)(*(float *)&v38 * *v17)) + v40;
      v17[1] = v18 + v41;
      v17 += 2;
    }
    while ( v16 < 3 );
  }
  v43 = 0LL;
  v42 = 0LL;
  CurrentSurface = CGradientBrush::InferVisualToTextureTransform((__int64)this, (__int64)&v44, (__int64)&v35);
  if ( CurrentSurface < 0 )
  {
    v28 = 63;
    goto LABEL_20;
  }
  Size = CDrawListBitmap::GetSize((CDrawListBitmap *)&v36, &v32);
  v20 = *((float *)&v35 + 1) + 0.5;
  v21 = 0.5 / (float)*(int *)Size.width;
  v22 = CDrawListBitmap::GetSize((CDrawListBitmap *)&v36, &v32);
  v23 = *((_QWORD *)this + 34);
  v24 = v20 / (float)*(int *)(*(_QWORD *)&v22 + 4LL);
  if ( *(float *)(v23 + 28) != v21 || *(float *)(v23 + 32) != v24 )
  {
    *(float *)(v23 + 28) = v21;
    *(float *)(v23 + 32) = v24;
    ++*(_DWORD *)(v23 + 24);
  }
  v25 = (CRadialGradientEffect *)*((_QWORD *)this + 34);
  if ( !*((_BYTE *)v25 + 60) )
  {
    v26 = *((float *)&v35 + 2);
    if ( *((_DWORD *)this + 26) == 1 )
      v26 = *((float *)&v35 + 2) - 1.0;
    v27 = (float)(*((float *)this + 67) / *((float *)this + 65)) * (float)(v26 / *((float *)&v35 + 2));
    v32.x = (float)(*((float *)this + 66) / *((float *)this + 64)) * (float)(v26 / *((float *)&v35 + 2));
    v32.y = v27;
    CRadialGradientEffect::SetNonCenteredShaderConstants(v25, &v32, *((float *)&v35 + 2), v26);
  }
  v46 = *((_QWORD *)&v42 + 1);
  v44 = v42;
  v48 = v43;
  v38 = &v34;
  v39 = 0LL;
  LOBYTE(v40) = 1;
  v45 = 0.0;
  v47 = 0.0;
  v49 = 1065353216;
  LOBYTE(v30) = 1;
  HIBYTE(v30) = CGradientBrush::GetExtendMode((__int64)this);
  v31 = 1;
  CurrentSurface = CSurfaceDrawListBrush::CreateWithTextureTransform((__int64 *)&v36, &v30, &v44, &v39);
  wil::details::out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>::~out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>((__int64)&v38);
  if ( CurrentSurface < 0 )
  {
    v28 = 128;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A1188, 2u, CurrentSurface, v28, 0LL);
    CBrushDrawListGenerator::Reset(a2);
    goto LABEL_21;
  }
  v32 = (struct D2D_POINT_2F)v34;
  v34 = 0LL;
  CBrushDrawListGenerator::AttachInput((__int64)a2, 0, (__int64 *)&v32);
  std::unique_ptr<CShape>::~unique_ptr<CShape>(&v32);
  CurrentSurface = 0;
LABEL_21:
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v36);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v33);
  std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v34);
  return (unsigned int)CurrentSurface;
}
