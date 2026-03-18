/*
 * XREFs of ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18003F1EC
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180040050 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z @ 0x180009D20 (-reset@-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18000D420 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x18000D8A0 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18000DC30 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18000F2D0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18001B6D4 (--1-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDrawListBrush@@@std.c)
 *     ?Free@?$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z @ 0x18001B764 (-Free@-$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z.c)
 *     ?InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z @ 0x18001E070 (-InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x18001E240 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x18002C040 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180038E20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??0?$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003EC50 (--0-$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18003EC70 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18003ED00 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Pop@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z @ 0x180064250 (-Pop@-$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z.c)
 *     ?ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z @ 0x180064790 (-ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x18006C3D0 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x18006F600 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800B6780 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x1800D9794 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z @ 0x18018B248 (-StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1802B9630 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShapeDrawingContext::Render(CShapeDrawingContext *this)
{
  __m128i si128; // xmm9
  const struct D2D_MATRIX_3X2_F *v2; // r14
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // r12
  CDrawListCache *v7; // rbx
  __m128i v8; // xmm10
  CGeometry *v9; // rcx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdi
  struct ID2D1Brush *v13; // rcx
  __int64 (__fastcall *v14)(__int64, _QWORD, __int64, struct ID2D1Brush **); // rsi
  int v15; // eax
  int v16; // eax
  struct ID2D1Brush *v17; // rcx
  struct ID2D1Brush *v18; // rcx
  __int64 v19; // rdx
  __m128i v20; // xmm0
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  CGeometry *v25; // rcx
  int ShapeData; // eax
  int v27; // eax
  __int64 v28; // r14
  int v29; // eax
  float v30; // xmm1_4
  struct CShape *v31; // rsi
  struct ID2D1Brush *v32; // rdi
  int v33; // eax
  CGeometry *v34; // rcx
  int v35; // eax
  int v36; // eax
  __int64 v37; // r13
  int v38; // eax
  float v39; // xmm1_4
  struct ID2D1StrokeStyle1 *v40; // rsi
  float v41; // xmm6_4
  struct CShape *v42; // r14
  struct ID2D1Brush *v43; // rdi
  int v44; // eax
  struct CShape **v45; // rcx
  _QWORD *v46; // rdi
  __int64 v47; // rsi
  CDrawingContext *v48; // rax
  float v49; // xmm6_4
  float v50; // xmm7_4
  __int64 v51; // rcx
  int v52; // eax
  int v53; // eax
  int v54; // edi
  _QWORD *v55; // rcx
  __int64 (__fastcall ***v56)(_QWORD, __int64); // rdx
  int v57; // eax
  int v58; // xmm1_4
  struct ID2D1Brush *v59; // rax
  __int64 v60; // xmm0_8
  int v61; // eax
  int v62; // eax
  int v63; // edi
  _QWORD *v64; // rcx
  struct CShape **v65; // rcx
  CGeometry *v66; // rcx
  int v67; // eax
  int v68; // eax
  __int64 v69; // rsi
  __int64 (__fastcall *v70)(__int64, _QWORD, __int64, struct ID2D1Brush **); // rdi
  int v71; // eax
  int v72; // eax
  struct ID2D1Brush *v73; // [rsp+30h] [rbp-D0h] BYREF
  struct CShape *v74; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v75; // [rsp+40h] [rbp-C0h]
  _QWORD *lpMem; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID lpMem_8[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v78; // [rsp+60h] [rbp-A0h]
  int v79; // [rsp+64h] [rbp-9Ch]
  struct CShape *v80; // [rsp+68h] [rbp-98h] BYREF
  __int64 v81; // [rsp+70h] [rbp-90h]
  struct D2D1::Matrix3x2F *v82; // [rsp+78h] [rbp-88h]
  CDrawListCache *v83; // [rsp+80h] [rbp-80h] BYREF
  struct CShape *v84; // [rsp+88h] [rbp-78h] BYREF
  char v85; // [rsp+90h] [rbp-70h]
  struct CShape *v86; // [rsp+98h] [rbp-68h] BYREF
  char v87; // [rsp+A0h] [rbp-60h]
  __int64 v88; // [rsp+A8h] [rbp-58h]
  struct D2D_MATRIX_3X2_F v89; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v90; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v91; // [rsp+D8h] [rbp-28h]
  _QWORD v92[2]; // [rsp+E0h] [rbp-20h] BYREF
  int v93; // [rsp+F0h] [rbp-10h]
  int v94; // [rsp+13Ch] [rbp+3Ch]
  char v95; // [rsp+140h] [rbp+40h]
  CDrawingContext *v96; // [rsp+150h] [rbp+50h] BYREF
  __int64 (__fastcall ***v97[4])(_QWORD, __int64); // [rsp+158h] [rbp+58h] BYREF
  unsigned int v98; // [rsp+178h] [rbp+78h]
  float v99; // [rsp+17Ch] [rbp+7Ch]
  float v100; // [rsp+180h] [rbp+80h]
  int v101; // [rsp+184h] [rbp+84h]
  __m128i v102; // [rsp+188h] [rbp+88h]
  __int128 v103; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v104; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v105[4496]; // [rsp+1C0h] [rbp+C0h] BYREF

  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v2 = &v89;
  v82 = (struct D2D1::Matrix3x2F *)&v89;
  *((_BYTE *)this + 520) = 0;
  *((_BYTE *)this + 522) = 0;
  *(__m128i *)&v89.m11 = si128;
  *(_QWORD *)&v89.m[2][0] = 0LL;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v105);
  v83 = 0LL;
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease((volatile signed __int32 **)&v83);
  v4 = CDrawListCache::InternalCreate(1, &v83);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x39u, 0LL);
    goto LABEL_22;
  }
  v5 = *((_QWORD *)this + 63);
  v6 = *((_QWORD *)this + 62);
  v7 = v83;
  v8 = _mm_load_si128((const __m128i *)&_xmm);
  v88 = v5;
  while ( 1 )
  {
    if ( v6 == v5 )
      goto LABEL_22;
    switch ( *(_DWORD *)v6 )
    {
      case 1:
        v2 = (const struct D2D_MATRIX_3X2_F *)(v6 + 8);
        *((_BYTE *)this + 520) = 1;
        v82 = (struct D2D1::Matrix3x2F *)(v6 + 8);
        goto LABEL_17;
      case 2:
        v25 = *(CGeometry **)(v6 + 8);
        v80 = 0LL;
        LOBYTE(v81) = 0;
        ShapeData = CGeometry::GetShapeData(v25, 0LL, (struct CShapePtr *)&v80);
        if ( ShapeData < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeData, 0x4Bu, 0LL);
        }
        else
        {
          v27 = CShapeDrawingContext::ApplyTransformToDrawingContext(this, v2);
          if ( v27 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x50u, 0LL);
          }
          else
          {
            v28 = *((_QWORD *)this + 40);
            v104 = *(_OWORD *)(v6 + 16);
            v29 = *(_DWORD *)(v28 + 3160);
            if ( v29 )
              v30 = *(float *)(*(_QWORD *)(v28 + 3152) + 4LL * (unsigned int)(v29 - 1));
            else
              v30 = FLOAT_1_0;
            v31 = v80;
            *((float *)&v104 + 3) = *((float *)&v104 + 3) * v30;
            v32 = *(struct ID2D1Brush **)(*(_QWORD *)(v28 + 32) + 320LL);
            (*(void (__fastcall **)(struct ID2D1Brush *, __int128 *))(*(_QWORD *)v32 + 64LL))(v32, &v104);
            v33 = CDrawingContext::FillShapeWithBrush((CDrawingContext *)v28, v31, v32);
            if ( v33 >= 0 )
            {
              if ( (_BYTE)v81 && v80 )
                (**(void (__fastcall ***)(struct CShape *, __int64))v80)(v80, 1LL);
              v2 = (const struct D2D_MATRIX_3X2_F *)v82;
              v80 = 0LL;
              LOBYTE(v81) = 0;
              goto LABEL_17;
            }
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0x56u, 0LL);
          }
        }
        v45 = &v80;
LABEL_53:
        CShapePtr::~CShapePtr((CShapePtr *)v45);
        goto LABEL_22;
      case 3:
        v9 = *(CGeometry **)(v6 + 8);
        v73 = 0LL;
        v74 = 0LL;
        LOBYTE(v75) = 0;
        v10 = CGeometry::GetShapeData(v9, 0LL, (struct CShapePtr *)&v74);
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x62u, 0LL);
LABEL_59:
          CShapePtr::~CShapePtr((CShapePtr *)&v74);
LABEL_20:
          v18 = v73;
          if ( v73 )
          {
            v73 = 0LL;
            (*(void (__fastcall **)(struct ID2D1Brush *))(*(_QWORD *)v18 + 16LL))(v18);
          }
          goto LABEL_22;
        }
        v11 = CShapeDrawingContext::ApplyTransformToDrawingContext(this, v2);
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x67u, 0LL);
          v65 = &v74;
          goto LABEL_110;
        }
        v12 = *(_QWORD *)(v6 + 32);
        v13 = v73;
        v14 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, struct ID2D1Brush **))(*(_QWORD *)v12 + 376LL);
        if ( v73 )
        {
          v73 = 0LL;
          (*(void (__fastcall **)(struct ID2D1Brush *))(*(_QWORD *)v13 + 16LL))(v13);
        }
        v15 = v14(v12, *((_QWORD *)this + 40), v6 + 16, &v73);
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x6Bu, 0LL);
          goto LABEL_59;
        }
        (*(void (**)(void))(*(_QWORD *)v73 + 32LL))();
        v16 = CDrawingContext::FillShapeWithBrush(*((CDrawingContext **)this + 40), v74, v73);
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x6Fu, 0LL);
          if ( (_BYTE)v75 && v74 )
            (**(void (__fastcall ***)(struct CShape *, __int64))v74)(v74, 1LL);
          v74 = 0LL;
          LOBYTE(v75) = 0;
          goto LABEL_20;
        }
        if ( (_BYTE)v75 && v74 )
          (**(void (__fastcall ***)(struct CShape *, __int64))v74)(v74, 1LL);
        v17 = v73;
        v74 = 0LL;
        LOBYTE(v75) = 0;
        if ( v73 )
        {
          v73 = 0LL;
          (*(void (__fastcall **)(struct ID2D1Brush *))(*(_QWORD *)v17 + 16LL))(v17);
        }
        goto LABEL_17;
    }
    if ( *(_DWORD *)v6 == 4 )
      break;
    if ( *(_DWORD *)v6 == 5 )
    {
      v34 = *(CGeometry **)(v6 + 8);
      v86 = 0LL;
      v87 = 0;
      v35 = CGeometry::GetShapeData(v34, 0LL, (struct CShapePtr *)&v86);
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0xBBu, 0LL);
      }
      else
      {
        v36 = CShapeDrawingContext::ApplyTransformToDrawingContext(this, v2);
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0xC0u, 0LL);
        }
        else
        {
          v37 = *((_QWORD *)this + 40);
          v103 = *(_OWORD *)(v6 + 16);
          v38 = *(_DWORD *)(v37 + 3160);
          if ( v38 )
            v39 = *(float *)(*(_QWORD *)(v37 + 3152) + 4LL * (unsigned int)(v38 - 1));
          else
            v39 = FLOAT_1_0;
          v40 = *(struct ID2D1StrokeStyle1 **)(v6 + 40);
          v41 = *(float *)(v6 + 32);
          v42 = v86;
          *((float *)&v103 + 3) = *((float *)&v103 + 3) * v39;
          v43 = *(struct ID2D1Brush **)(*(_QWORD *)(v37 + 32) + 320LL);
          (*(void (__fastcall **)(struct ID2D1Brush *, __int128 *))(*(_QWORD *)v43 + 64LL))(v43, &v103);
          v44 = CDrawingContext::StrokeShapeWithBrush((CDrawingContext *)v37, v42, v43, v41, v40);
          if ( v44 >= 0 )
          {
            CShapePtr::~CShapePtr((CShapePtr *)&v86);
            v2 = (const struct D2D_MATRIX_3X2_F *)v82;
            goto LABEL_17;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0xC9u, 0LL);
        }
      }
      v45 = &v86;
      goto LABEL_53;
    }
    if ( *(_DWORD *)v6 != 6 )
      goto LABEL_17;
    v66 = *(CGeometry **)(v6 + 8);
    v73 = 0LL;
    v84 = 0LL;
    v85 = 0;
    v67 = CGeometry::GetShapeData(v66, 0LL, (struct CShapePtr *)&v84);
    if ( v67 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v67, 0xD5u, 0LL);
LABEL_109:
      v65 = &v84;
LABEL_110:
      CShapePtr::~CShapePtr((CShapePtr *)v65);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v73);
      goto LABEL_22;
    }
    v68 = CShapeDrawingContext::ApplyTransformToDrawingContext(this, v2);
    if ( v68 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v68, 0xDAu, 0LL);
      goto LABEL_109;
    }
    v69 = *(_QWORD *)(v6 + 32);
    v70 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, struct ID2D1Brush **))(*(_QWORD *)v69 + 376LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v73);
    v71 = v70(v69, *((_QWORD *)this + 40), v6 + 16, &v73);
    if ( v71 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v71, 0xDEu, 0LL);
      goto LABEL_109;
    }
    (*(void (**)(void))(*(_QWORD *)v73 + 32LL))();
    v72 = CDrawingContext::StrokeShapeWithBrush(
            *((CDrawingContext **)this + 40),
            v84,
            v73,
            *(float *)(v6 + 40),
            *(struct ID2D1StrokeStyle1 **)(v6 + 48));
    if ( v72 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v72, 0xE4u, 0LL);
      goto LABEL_109;
    }
    CShapePtr::~CShapePtr((CShapePtr *)&v84);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v73);
LABEL_17:
    v5 = v88;
    v6 += 56LL;
  }
  v46 = v97;
  v47 = 4LL;
  v48 = (CDrawingContext *)*((_QWORD *)this + 40);
  v49 = *(float *)(v6 + 16) - *(float *)(v6 + 8);
  v50 = *(float *)(v6 + 20) - *(float *)(v6 + 12);
  v73 = 0LL;
  v96 = v48;
  do
  {
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v46++);
    --v47;
  }
  while ( v47 );
  v51 = *(_QWORD *)(v6 + 24);
  v2 = (const struct D2D_MATRIX_3X2_F *)v82;
  v99 = v49;
  v100 = v50;
  v98 = 0;
  v101 = 0;
  v102 = v8;
  v52 = (*(__int64 (__fastcall **)(__int64, CDrawingContext **))(*(_QWORD *)v51 + 344LL))(v51, &v96);
  if ( v52 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0x80u, 0LL);
    goto LABEL_111;
  }
  v53 = CShapeDrawingContext::ApplyTransformToDrawingContext(this, 0LL);
  if ( v53 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0x82u, 0LL);
LABEL_111:
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v96);
    std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>((void **)&v73);
    goto LABEL_22;
  }
  if ( !v98 )
  {
    lpMem = 0LL;
    lpMem_8[0] = &lpMem;
    lpMem_8[1] = 0LL;
    LOBYTE(v78) = 1;
    v54 = CGeometryOnlyDrawListBrush::Create((struct CGeometryOnlyDrawListBrush **)&lpMem_8[1]);
    if ( (_BYTE)v78 )
    {
      v55 = *(_QWORD **)lpMem_8[0];
      *(_QWORD *)lpMem_8[0] = lpMem_8[1];
      if ( v55 )
        CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(v55);
    }
    if ( v54 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v54, 0x88u, 0LL);
      std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>((void **)&lpMem);
      goto LABEL_111;
    }
    v56 = (__int64 (__fastcall ***)(_QWORD, __int64))lpMem;
    lpMem = 0LL;
    std::unique_ptr<CShape>::reset(v97, v56);
    v57 = v98;
    if ( v98 <= 1 )
      v57 = 1;
    v98 = v57;
    if ( lpMem )
      CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(lpMem);
  }
  v58 = *(_DWORD *)(v6 + 12);
  v78 = *(_DWORD *)(v6 + 8);
  v79 = v58;
  *(__m128i *)lpMem_8 = si128;
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)&v90,
    (const struct D2D1::Matrix3x2F *)lpMem_8,
    (const struct D2D1::Matrix3x2F *)v2);
  v60 = v91;
  *(_OWORD *)((char *)v59 + 8) = v90;
  *((_QWORD *)v59 + 3) = v60;
  if ( *((_BYTE *)v59 + 52) )
  {
    lpMem_8[1] = 0LL;
    lpMem_8[0] = &v73;
    LOBYTE(v78) = 1;
    v63 = CGeometryOnlyDrawListBrush::Create((struct CGeometryOnlyDrawListBrush **)&lpMem_8[1]);
    if ( (_BYTE)v78 )
    {
      v64 = *(_QWORD **)lpMem_8[0];
      *(_QWORD *)lpMem_8[0] = lpMem_8[1];
      if ( v64 )
        CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(v64);
    }
    if ( v63 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v63, 0x9Du, 0LL);
      goto LABEL_78;
    }
    v59 = v73;
  }
  *((_BYTE *)v59 + 52) = 1;
  *((_QWORD *)v59 + 4) = 0LL;
  *((float *)v59 + 10) = v49;
  *((float *)v59 + 11) = v50;
  *((_DWORD *)v59 + 12) = 50529027;
  v92[0] = v73;
  v92[1] = 0LL;
  v93 = 0;
  v94 = 257;
  v95 = 0;
  v61 = CBrushDrawListGenerator::GenerateDrawList(
          &v96,
          (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v92,
          (struct CDrawListEntryBuilder *)v105);
  if ( v61 >= 0 )
  {
    CDrawListCache::Update(v7, *((struct CDrawingContext **)this + 40), (struct CDrawListEntryBuilder *)v105);
    v62 = CDrawingContext::EmitDrawListCache(*((CDrawingContext **)this + 40), v7);
    if ( v62 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v62, 0xAFu, 0LL);
      goto LABEL_78;
    }
    CDrawListEntryBuilder::Reset((CDrawListEntryBuilder *)v105);
    CDrawListCache::Invalidate(v7);
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v96);
    if ( v73 )
      CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(v73);
    goto LABEL_17;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v61, 0xACu, 0LL);
LABEL_78:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v96);
  if ( v73 )
    CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(v73);
LABEL_22:
  if ( *((_BYTE *)this + 522) )
  {
    v19 = *((_QWORD *)this + 40);
    v20 = 0LL;
    v21 = *(_DWORD *)(v19 + 264);
    if ( v21 )
    {
      v22 = (unsigned int)(v21 - 1);
      *(_DWORD *)(v19 + 264) = v22;
      v20 = *(__m128i *)(*(_QWORD *)(v19 + 256) + 16 * v22);
    }
    if ( _mm_srli_si128(v20, 8).m128i_u64[0] )
      CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop(v19 + 328);
    v23 = *(_DWORD *)(v19 + 288);
    if ( v23 )
      *(_DWORD *)(v19 + 288) = v23 - 1;
    CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop(v19 + 304);
    *((_BYTE *)this + 522) = 0;
  }
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease((volatile signed __int32 **)&v83);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v105);
  return 0LL;
}
