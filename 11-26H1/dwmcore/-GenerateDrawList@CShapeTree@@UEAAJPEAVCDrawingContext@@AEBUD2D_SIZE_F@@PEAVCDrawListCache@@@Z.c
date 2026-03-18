/*
 * XREFs of ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D2050
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z @ 0x180009D20 (-reset@-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18000D420 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18000DC30 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18000F2D0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18001B620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001F080 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??R?$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z @ 0x18003731C (--R-$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x180037348 (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x180039E6C (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180039FA0 (--1-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x18003A7BC (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x18003EBEC (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18003EC70 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18003ED00 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@@@Z @ 0x1800452B4 (--4-$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18005C5A0 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18005CEB0 (-RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV-$TMilRect_@MUD2D.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18005EB50 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CShapeBitmapProducer@@SAJPEAVCShapeTree@@AEBUD2D_SIZE_F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2$$QEAV?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@PEAPEAV1@@Z @ 0x18009A82C (-Create@CShapeBitmapProducer@@SAJPEAVCShapeTree@@AEBUD2D_SIZE_F@@AEBV-$TMilRect_@MUD2D_RECT_F@@U.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x1800D361C (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800D369C (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?ComputePartialIntermediate@CShapeTree@@CA_NAEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2PEAV4@@Z @ 0x18028B2AC (-ComputePartialIntermediate@CShapeTree@@CA_NAEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@AEBV-$TMilRect_@M.c)
 *     _alloca_probe @ 0x1802B9630 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShapeTree::GenerateDrawList(
        __m128i *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  __m128i v4; // xmm6
  unsigned int v9; // ebx
  float v10; // xmm7_4
  __m128 v11; // xmm12
  float v12; // xmm0_4
  float v13; // xmm9_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm4_4
  float v17; // xmm14_4
  float v18; // xmm1_4
  float v19; // xmm11_4
  float v20; // xmm5_4
  float v21; // xmm13_4
  float v22; // xmm8_4
  unsigned __int8 v23; // r15
  __int64 v24; // rcx
  float v25; // xmm15_4
  float v26; // xmm11_4
  float v27; // xmm8_4
  void (__fastcall *v28)(__int64, _DWORD *); // rax
  float v29; // xmm10_4
  float v30; // xmm9_4
  float v31; // xmm3_4
  float v32; // xmm10_4
  float v33; // xmm9_4
  int v34; // eax
  __int64 v35; // rbx
  __int64 v36; // rcx
  CSurfaceDrawListBrush *v37; // rdx
  CSurfaceDrawListBrush *v38; // rax
  __m128d v39; // xmm4
  double v40; // xmm6_8
  double v41; // xmm5_8
  double v42; // xmm3_8
  float v43; // xmm0_4
  __m128 v44; // xmm1
  float v45; // xmm0_4
  double v46; // xmm6_8
  CSurfaceDrawListBrush *v47; // rdx
  int v48; // eax
  int v49; // eax
  __int64 v50; // rcx
  int v52; // eax
  volatile signed __int32 *v53; // rbx
  CDrawListBitmap *v54; // rax
  __int64 v55; // [rsp+40h] [rbp-C0h] BYREF
  struct D2D_RECT_F v56; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v57; // [rsp+60h] [rbp-A0h] BYREF
  char v58; // [rsp+62h] [rbp-9Eh]
  __int64 v59[2]; // [rsp+70h] [rbp-90h] BYREF
  char v60; // [rsp+80h] [rbp-80h]
  __int64 v61[2]; // [rsp+88h] [rbp-78h] BYREF
  CSurfaceDrawListBrush *v62; // [rsp+98h] [rbp-68h] BYREF
  float v63; // [rsp+A0h] [rbp-60h]
  __int128 v64; // [rsp+A8h] [rbp-58h] BYREF
  char v65; // [rsp+B8h] [rbp-48h]
  __int128 v66; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v67[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v68; // [rsp+E0h] [rbp-20h] BYREF
  int v69; // [rsp+F0h] [rbp-10h]
  int v70; // [rsp+120h] [rbp+20h]
  int v71; // [rsp+13Ch] [rbp+3Ch]
  char v72; // [rsp+140h] [rbp+40h]
  CDrawingContext *v73; // [rsp+150h] [rbp+50h] BYREF
  __int64 (__fastcall ***v74)(_QWORD, __int64); // [rsp+158h] [rbp+58h] BYREF
  unsigned int v75; // [rsp+178h] [rbp+78h]
  int v76; // [rsp+184h] [rbp+84h]
  _BYTE v77[4496]; // [rsp+1A0h] [rbp+A0h] BYREF

  v4 = _mm_loadu_si128(this + 5);
  v9 = 0;
  *(__m128i *)v61 = v4;
  if ( this[6].m128i_i8[1] )
  {
    v10 = 0.0;
    if ( *(float *)v4.m128i_i32 < 0.0 )
    {
      v4.m128i_i32[0] = 0;
      LODWORD(v61[0]) = 0;
    }
    v11 = (__m128)HIDWORD(v61[0]);
    v12 = *((float *)v61 + 1);
    v13 = *((float *)v61 + 1);
    v14 = *((float *)v61 + 1);
    v15 = *((float *)v61 + 1);
    v16 = *((float *)v61 + 1);
    if ( *((float *)v61 + 1) < 0.0 )
    {
      v11 = 0LL;
      v12 = 0.0;
      HIDWORD(v61[0]) = 0;
      v13 = 0.0;
      v14 = 0.0;
      v15 = 0.0;
      v16 = 0.0;
    }
    v17 = *(float *)&v61[1];
    v18 = *(float *)&v61[1];
    v19 = *(float *)&v61[1];
    v20 = *(float *)&v61[1];
    if ( *(float *)&v61[1] > a3->width )
    {
      v13 = v14;
      *(FLOAT *)&v61[1] = a3->width;
      v17 = *(float *)&v61[1];
      v18 = *(float *)&v61[1];
      v19 = *(float *)&v61[1];
      v20 = *(float *)&v61[1];
      v15 = v16;
    }
    v21 = *((float *)&v61[1] + 1);
    v22 = *((float *)&v61[1] + 1);
    if ( *((float *)&v61[1] + 1) > a3->height )
    {
      v19 = v20;
      HIDWORD(v61[1]) = LODWORD(a3->height);
      v21 = *((float *)&v61[1] + 1);
      v22 = *((float *)&v61[1] + 1);
      v13 = v15;
    }
    if ( v18 > *(float *)v4.m128i_i32 && v22 > v12 )
    {
      v70 = 0;
      v55 = 0LL;
      v23 = 0;
      CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 280), (struct CMILMatrix *)&v68);
      CMILMatrix::Get2DScaleDimensionsWithPerspective((__int64)&v68, (float *)&v55, (float *)&v55 + 1, (float *)v61);
      v24 = *((_QWORD *)a2 + 3);
      v25 = 0.0;
      v63 = 0.0;
      v26 = (float)(v19 - *(float *)v4.m128i_i32) * *(float *)&v55;
      v27 = (float)(v22 - v13) * *((float *)&v55 + 1);
      v28 = *(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v24 + 88LL);
      *(_QWORD *)&v66 = 0LL;
      v29 = v26;
      *((_QWORD *)&v66 + 1) = __PAIR64__(LODWORD(v27), LODWORD(v26));
      v30 = v27;
      v59[0] = 0LL;
      v59[1] = __PAIR64__(LODWORD(v27), LODWORD(v26));
      v28(v24, v67);
      if ( fmaxf(v26 - 0.0, v27 - 0.0) > fmaxf((float)v67[0], (float)v67[1]) )
      {
        v23 = 1;
        v56 = 0LL;
        CMILMatrix::Transform2DBoundsHelper<0>((__int64)&v68, (const struct D2D_RECT_F *)v61, &v56.left);
        v64 = 0LL;
        CDrawingContext::GetClipBoundsWorld((__int64)a2, (float *)&v64);
        if ( *(float *)&v64 > v56.left )
          LODWORD(v56.left) = v64;
        if ( *((float *)&v64 + 1) > v56.top )
          v56.top = *((FLOAT *)&v64 + 1);
        if ( v56.right > *((float *)&v64 + 2) )
          v56.right = *((FLOAT *)&v64 + 2);
        if ( v56.bottom > *((float *)&v64 + 3) )
          v56.bottom = *((FLOAT *)&v64 + 3);
        if ( IsEmpty(&v56) )
        {
          *(_QWORD *)&v56.right = 0LL;
          *(_QWORD *)&v56.left = 0LL;
        }
        if ( !(unsigned __int8)CShapeTree::ComputePartialIntermediate((struct CMILMatrix *)&v68, (__int64)v59) )
          return v9;
        v25 = *(float *)v59;
        v31 = *((float *)v59 + 1);
        v26 = v26 + COERCE_FLOAT(LODWORD(v59[0]) ^ _xmm);
        v21 = *((float *)&v61[1] + 1);
        v27 = v27 + COERCE_FLOAT(HIDWORD(v59[0]) ^ _xmm);
        v17 = *(float *)&v61[1];
        v11 = (__m128)HIDWORD(v61[0]);
        v4.m128i_i32[0] = v61[0];
        v30 = *((float *)&v59[1] + 1);
        v29 = *(float *)&v59[1];
        *((_QWORD *)&v66 + 1) = __PAIR64__(LODWORD(v27), LODWORD(v26));
        v63 = COERCE_FLOAT(LODWORD(v59[0]) ^ _xmm) + 0.0;
        *(float *)&v66 = v63;
        *((float *)&v66 + 1) = COERCE_FLOAT(HIDWORD(v59[0]) ^ _xmm) + 0.0;
        v10 = *((float *)&v66 + 1);
      }
      else
      {
        v31 = *((float *)v59 + 1);
      }
      v32 = v29 - v25;
      if ( v32 >= 1.0 )
      {
        v33 = v30 - v31;
        if ( v33 >= 1.0 )
        {
          v56.left = v32;
          v56.top = v33;
          v65 = 0;
          v55 = 0LL;
          v64 = 0LL;
          v34 = CShapeTree::RenderIntermediate(
                  (__m128 *)this,
                  a2,
                  a3,
                  (__int64)&v56,
                  (float *)v61,
                  (float *)&v66,
                  2 * (v23 ^ 1u) + 2,
                  &v55);
          v9 = v34;
          if ( v34 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v34, 0xBFu, 0LL);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v55);
          }
          else
          {
            if ( v23 || *((_BYTE *)a4 + 86) )
            {
              v35 = v55;
              v60 = 0;
              *(_OWORD *)v59 = 0LL;
              wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=(
                &v59[1],
                (v55 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)v55 >> 64));
              CDrawListBitmap::operator=(&v64, v59);
              wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v59[1]);
              wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>(v59);
            }
            else
            {
              *(_QWORD *)&v56.left = 0LL;
              v52 = CShapeBitmapProducer::Create((__int64)this, a3, v61, &v66, &v55, (CCachedImageProducer **)&v56);
              v9 = v52;
              if ( v52 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v52, 0xD0u, 0LL);
                if ( *(_QWORD *)&v56.left )
                  CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(*(volatile signed __int32 **)&v56.left);
                if ( v55 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
                goto LABEL_31;
              }
              v53 = *(volatile signed __int32 **)&v56.left;
              v54 = CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v59, *(struct IBitmapResource **)&v56.left);
              CDrawListBitmap::operator=(&v64, v54);
              wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v59[1]);
              wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>(v59);
              if ( v53 )
                CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v53);
              v35 = v55;
            }
            if ( v35 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
            CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)&v73, a2);
            v69 = 0;
            v68 = 0LL;
            v71 = 257;
            v72 = 0;
            CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v77);
            v62 = 0LL;
            v59[0] = (__int64)&v62;
            v59[1] = 0LL;
            v60 = 1;
            v57 = 257;
            v58 = 1;
            v9 = CSurfaceDrawListBrush::CreateWithContentRect((__int64 *)&v64, &v57, (float *)&v66, (__int64)&v59[1]);
            if ( v60 )
            {
              v36 = v59[0];
              v37 = *(CSurfaceDrawListBrush **)v59[0];
              *(_QWORD *)v59[0] = v59[1];
              if ( v37 )
                std::default_delete<CSurfaceDrawListBrush>::operator()(v36, v37);
            }
            if ( (v9 & 0x80000000) != 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xE1u, 0LL);
            }
            else
            {
              v38 = v62;
              *(__int64 *)((char *)v59 + 4) = 0LL;
              v39 = _mm_cvtps_pd(v11);
              v40 = *(float *)v4.m128i_i32;
              v41 = (v17 - v40) / (v26 - v63);
              v42 = (v21 - v39.m128d_f64[0]) / (v27 - v10);
              v43 = v41;
              v44 = 0LL;
              *(float *)v59 = v43;
              v45 = v42;
              v46 = v40 - v41 * v63;
              *((float *)&v59[1] + 1) = v45;
              v39.m128d_f64[0] = v39.m128d_f64[0] - v42 * v10;
              *(_OWORD *)((char *)v62 + 8) = *(_OWORD *)v59;
              v44.m128_f32[0] = v46;
              *((_QWORD *)v38 + 3) = _mm_unpacklo_ps(v44, _mm_cvtpd_ps(v39)).m128_u64[0];
              v47 = v62;
              v62 = 0LL;
              std::unique_ptr<CShape>::reset(&v74, (__int64 (__fastcall ***)(_QWORD, __int64))v47);
              v48 = v75;
              if ( v75 <= 1 )
                v48 = 1;
              v75 = v48;
              v76 = v23 != 0 ? 64 : 16;
              v49 = CBrushDrawListGenerator::GenerateDrawList(
                      &v73,
                      (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v68,
                      (struct CDrawListEntryBuilder *)v77);
              v9 = v49;
              if ( v49 >= 0 )
              {
                CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v77);
                if ( v62 )
                  std::default_delete<CSurfaceDrawListBrush>::operator()(v50, v62);
                CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v77);
                CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v73);
LABEL_31:
                wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v64 + 1);
                wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>((__int64 *)&v64);
                return v9;
              }
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v49, 0xF2u, 0LL);
            }
            std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v62);
            CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v77);
            CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v73);
          }
          CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v64);
        }
      }
    }
  }
  return v9;
}
