/*
 * XREFs of ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801056F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18000A670 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??R?$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z @ 0x18003731C (--R-$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180037374 (--1-$out_param_t@V-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x180038840 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ??1?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180039FA0 (--1-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
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
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLinearGradientBrush::GetBrushParameters(
        CLinearGradientBrush *this,
        struct CBrushDrawListGenerator *a2)
{
  int CurrentSurface; // eax
  struct IBitmapResource *v5; // rbx
  int v6; // edi
  __int64 *v7; // rax
  bool v8; // zf
  float *v9; // rdx
  float v10; // xmm5_4
  float v11; // xmm3_4
  float v12; // xmm4_4
  float v13; // xmm6_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  __int64 v16; // rcx
  unsigned int v17; // ecx
  float *v18; // rax
  float v19; // xmm3_4
  float v20; // xmm6_4
  struct D2D_SIZE_U Size; // rax
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // r8
  unsigned int v25; // eax
  __int64 v26; // rcx
  __int16 v28; // [rsp+38h] [rbp-79h] BYREF
  char v29; // [rsp+3Ah] [rbp-77h]
  struct IBitmapResource *v30; // [rsp+48h] [rbp-69h] BYREF
  CSurfaceDrawListBrush *v31; // [rsp+50h] [rbp-61h] BYREF
  __int128 v32; // [rsp+58h] [rbp-59h] BYREF
  char v33; // [rsp+68h] [rbp-49h]
  __int128 v34; // [rsp+70h] [rbp-41h] BYREF
  CSurfaceDrawListBrush **v35; // [rsp+80h] [rbp-31h] BYREF
  __int64 v36; // [rsp+88h] [rbp-29h] BYREF
  float v37; // [rsp+90h] [rbp-21h]
  float v38; // [rsp+94h] [rbp-1Dh]
  __int128 v39; // [rsp+98h] [rbp-19h] BYREF
  __int64 v40; // [rsp+A8h] [rbp-9h]
  float v41; // [rsp+B0h] [rbp-1h] BYREF
  unsigned __int64 v42; // [rsp+B4h] [rbp+3h]
  float v43; // [rsp+BCh] [rbp+Bh]
  __int64 v44; // [rsp+C0h] [rbp+Fh]
  __int64 v45; // [rsp+C8h] [rbp+17h]
  int v46; // [rsp+D0h] [rbp+1Fh]

  v31 = 0LL;
  v30 = 0LL;
  v33 = 0;
  v32 = 0LL;
  v34 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v30);
  CurrentSurface = CGradientBrush::GetCurrentSurface(this, *(_QWORD *)a2, (__int64 *)&v30, (__int64)&v34);
  v5 = v30;
  v6 = CurrentSurface;
  if ( CurrentSurface < 0 )
  {
    v25 = 32;
  }
  else
  {
    v7 = (__int64 *)CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)&v35, v30);
    CDrawListBitmap::operator=((__int64 *)&v32, v7);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v36);
    wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>((__int64 *)&v35);
    CBrushDrawListGenerator::Reset(a2);
    v8 = *((_DWORD *)this + 27) == 1;
    v9 = (float *)((char *)a2 + 44);
    v10 = *((float *)this + 62);
    v11 = *((float *)this + 64);
    v12 = *((float *)this + 65);
    v13 = *((float *)this + 63);
    v41 = v10;
    v43 = v12;
    v42 = __PAIR64__(LODWORD(v11), LODWORD(v13));
    if ( v8 )
    {
      v14 = *((float *)a2 + 12);
      v15 = *v9 * v11;
      v41 = *v9 * v10;
      v10 = v41;
      v11 = v15;
      *((float *)&v42 + 1) = v15;
      v12 = v14 * v12;
      v43 = v12;
      *(float *)&v42 = v14 * v13;
      v13 = v14 * v13;
    }
    v16 = *((_QWORD *)this + 15);
    *(float *)&v44 = v10 - (float)(v12 - v13);
    *((float *)&v44 + 1) = (float)(v11 - v10) + v13;
    if ( v16 )
    {
      (*(void (__fastcall **)(__int64, float *, CSurfaceDrawListBrush ***))(*(_QWORD *)v16 + 216LL))(v16, v9, &v35);
      v17 = 0;
      v18 = &v41;
      do
      {
        ++v17;
        v19 = (float)((float)(v18[1] * *((float *)&v36 + 1)) + (float)(*v18 * *((float *)&v35 + 1))) + v38;
        *v18 = (float)((float)(v18[1] * *(float *)&v36) + (float)(*v18 * *(float *)&v35)) + v37;
        v18[1] = v19;
        v18 += 2;
      }
      while ( v17 < 3 );
    }
    v40 = 0LL;
    v39 = 0LL;
    v6 = CGradientBrush::InferVisualToTextureTransform(this, &v41, &v34, &v39);
    if ( v6 < 0 )
    {
      v25 = 73;
    }
    else
    {
      v20 = *((float *)&v34 + 1) + 0.5;
      Size = CDrawListBitmap::GetSize((CDrawListBitmap *)&v32);
      v36 = 0LL;
      LOBYTE(v37) = 1;
      v42 = 0LL;
      v22 = *(_DWORD *)(*(_QWORD *)&Size + 4LL);
      DWORD1(v39) = 0;
      HIDWORD(v39) = 0;
      v35 = &v31;
      v44 = 0LL;
      v46 = 1065353216;
      LOBYTE(v28) = 1;
      v41 = *(float *)&v39;
      v43 = *((float *)&v39 + 2);
      *((float *)&v40 + 1) = v20 / (float)v22;
      v45 = v40;
      HIBYTE(v28) = CGradientBrush::GetExtendMode(this, v23, v24);
      v29 = 1;
      v6 = CSurfaceDrawListBrush::CreateWithTextureTransform((__int64 *)&v32, &v28, &v41, &v36);
      wil::details::out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>::~out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>((__int64)&v35);
      if ( v6 >= 0 )
      {
        v30 = v31;
        v31 = 0LL;
        CBrushDrawListGenerator::AttachInput(a2, 0LL, &v30);
        std::unique_ptr<CShape>::~unique_ptr<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))&v30);
        v6 = 0;
        goto LABEL_14;
      }
      v25 = 90;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F51A8, 2u, v6, v25, 0LL);
  CBrushDrawListGenerator::Reset(a2);
LABEL_14:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v32 + 1);
  wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>((__int64 *)&v32);
  if ( v5 )
    (*(void (__fastcall **)(struct IBitmapResource *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v31 )
    std::default_delete<CSurfaceDrawListBrush>::operator()(v26, v31);
  return (unsigned int)v6;
}
