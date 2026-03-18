/*
 * XREFs of ?UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@IPEAVCDrawListCache@@@Z @ 0x18003E488
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18001B858 (-RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEAAJII@Z @ 0x18001CA4C (-ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEAAJII@Z.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1800D907C (-RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ?reset@?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z @ 0x180009D20 (-reset@-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18000D420 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18000DC30 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18000F2D0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x180037348 (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     ?CreateSurfaceDrawListBrushForIntermediate@CRenderingTechnique@@QEBAJIAEBUEffectInput@@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18003A4A4 (-CreateSurfaceDrawListBrushForIntermediate@CRenderingTechnique@@QEBAJIAEBUEffectInput@@PEAPEAVCS.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18003D4D0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??0?$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003EC50 (--0-$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18003EC70 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18003ED00 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x18009D544 (-Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z.c)
 *     ??1?$unique_ptr@VCColorDrawListBrush@@U?$default_delete@VCColorDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1801CDE70 (--1-$unique_ptr@VCColorDrawListBrush@@U-$default_delete@VCColorDrawListBrush@@@std@@@std@@QEAA@X.c)
 *     ??R?$default_delete@VCColorDrawListBrush@@@std@@QEBAXPEAVCColorDrawListBrush@@@Z @ 0x1801CDE90 (--R-$default_delete@VCColorDrawListBrush@@@std@@QEBAXPEAVCColorDrawListBrush@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1802B9630 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushRenderingGraph::UpdateDrawListCache(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        const struct CDrawListBrush *a3,
        struct EffectStage *a4,
        unsigned int a5,
        struct CDrawListCache *a6)
{
  _QWORD *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned int v12; // esi
  __int64 v13; // rcx
  CRenderingTechnique *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r13
  const struct _D3DCOLORVALUE *v18; // rdi
  int v19; // ebx
  CSurfaceDrawListBrush *v20; // rcx
  void (__fastcall ***v21)(_QWORD, __int64); // rcx
  unsigned int v22; // eax
  char *v23; // rcx
  __int64 v24; // r8
  _BYTE *v25; // rax
  char v26; // dl
  int v27; // eax
  unsigned int v28; // edx
  unsigned int i; // ecx
  __int64 v31; // rcx
  void (__fastcall ***v32)(_QWORD, __int64); // rcx
  unsigned int v33; // eax
  __int64 *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 (__fastcall *v37)(__int64 *, __int64, __int64 *); // rbx
  __int64 v38; // rax
  int v39; // eax
  CSurfaceDrawListBrush *v40; // rdx
  CSurfaceDrawListBrush *v41; // rdx
  __int64 v42; // rcx
  unsigned int v43; // eax
  CSurfaceDrawListBrush *v44; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v45; // [rsp+38h] [rbp-C8h] BYREF
  struct CDrawingContext *v46; // [rsp+40h] [rbp-C0h]
  CDrawListCache *v47; // [rsp+48h] [rbp-B8h]
  CRenderingTechnique *v48; // [rsp+50h] [rbp-B0h]
  const struct CDrawListBrush *v49; // [rsp+58h] [rbp-A8h]
  _QWORD v50[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v51; // [rsp+70h] [rbp-90h]
  int v52; // [rsp+BCh] [rbp-44h]
  char v53; // [rsp+C0h] [rbp-40h]
  CSurfaceDrawListBrush **v54; // [rsp+D0h] [rbp-30h] BYREF
  struct CSurfaceDrawListBrush *v55; // [rsp+D8h] [rbp-28h] BYREF
  char v56; // [rsp+E0h] [rbp-20h] BYREF
  CDrawingContext *v57; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v58[4]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v59; // [rsp+118h] [rbp+18h]
  __int64 v60; // [rsp+120h] [rbp+20h]
  __m128i si128; // [rsp+128h] [rbp+28h]
  _BYTE v62[4496]; // [rsp+140h] [rbp+40h] BYREF

  v47 = a6;
  v49 = a3;
  v46 = a2;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v62);
  v57 = a2;
  v9 = v58;
  v10 = 4LL;
  do
  {
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v9++);
    --v10;
  }
  while ( v10 );
  v11 = *((_QWORD *)this + 18);
  v12 = 0;
  v13 = *(unsigned int *)a4;
  v59 = 0LL;
  v60 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v15 = *(CRenderingTechnique **)(v11 + 8 * v13);
  v48 = v15;
  while ( 1 )
  {
    v16 = *((unsigned int *)a4 + 1);
    if ( v12 >= (unsigned int)v16 )
      break;
    v17 = 112LL * v12;
    v18 = (const struct _D3DCOLORVALUE *)((char *)a4 + v17);
    if ( *((_BYTE *)a4 + v17 + 52) )
    {
      v44 = 0LL;
      v54 = &v44;
      v55 = 0LL;
      v56 = 1;
      if ( *((_BYTE *)a4 + v17 + 53) )
      {
        v19 = CColorDrawListBrush::Create(v18 + 2, &v55);
        if ( v56 )
        {
          v40 = *v54;
          *v54 = v55;
          if ( v40 )
            ((void (*)(void))std::default_delete<CColorDrawListBrush>::operator())();
        }
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x4BBu, 0LL);
          std::unique_ptr<CColorDrawListBrush>::~unique_ptr<CColorDrawListBrush>(&v44);
          goto LABEL_27;
        }
        v41 = v44;
        v44 = 0LL;
        std::unique_ptr<CShape>::reset(
          (__int64 (__fastcall ****)(_QWORD, __int64))&v58[v12],
          (__int64 (__fastcall ***)(_QWORD, __int64))v41);
        v43 = v59;
        if ( (unsigned int)v59 <= ++v12 )
          v43 = v12;
        LODWORD(v59) = v43;
        if ( v44 )
          std::default_delete<CColorDrawListBrush>::operator()(v42, v44);
      }
      else
      {
        v19 = CRenderingTechnique::CreateSurfaceDrawListBrushForIntermediate(
                v15,
                v12,
                (const struct EffectInput *)&v18->b,
                &v55);
        if ( v56 )
        {
          v20 = *v54;
          *v54 = v55;
          if ( v20 )
            CSurfaceDrawListBrush::`vector deleting destructor'(v20, 1);
        }
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x491u, 0LL);
          goto LABEL_60;
        }
        v21 = (void (__fastcall ***)(_QWORD, __int64))v58[v12];
        v58[v12] = v44;
        v44 = 0LL;
        if ( v21 )
          (**v21)(v21, 1LL);
        v22 = v59;
        if ( (unsigned int)v59 <= ++v12 )
          v22 = v12;
        LODWORD(v59) = v22;
        if ( *((_QWORD *)v46 + 25) )
        {
          if ( BYTE1(v18[7].r) )
          {
            a5 |= 0x40u;
            if ( !*((_BYTE *)v47 + 86) && !LOBYTE(v18[7].g) )
            {
              v34 = *(__int64 **)((char *)a4 + v17 + 16);
              v35 = *v34;
              v36 = *((_QWORD *)v46 + 2);
              v45 = 0LL;
              v37 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v35 + 112);
              v38 = (*(__int64 (__fastcall **)(char *))(v36 + 16))((char *)v46 + 16);
              v39 = v37(v34, v38, &v45);
              v19 = v39;
              if ( v39 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0x4B3u, 0LL);
                wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v45);
LABEL_60:
                std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v44);
                goto LABEL_27;
              }
              if ( v45 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
            }
          }
        }
        if ( v44 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v44, 1);
      }
      v15 = v48;
    }
    else
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)&v18[4].r + 8LL))(
             *(_QWORD *)&v18[4].r,
             2LL) )
      {
        v31 = *(_QWORD *)&v18[4].r;
        if ( *(_BYTE *)(v31 + 52) )
        {
          if ( *((_BYTE *)v15 + 44 * v12 + 90) )
            *(_BYTE *)(v31 + 52) = 0;
        }
      }
      v32 = (void (__fastcall ***)(_QWORD, __int64))v58[v12];
      v58[v12] = *(_QWORD *)&v18[4].r;
      if ( v32 )
        (**v32)(v32, 1LL);
      v33 = v59;
      if ( (unsigned int)v59 <= ++v12 )
        v33 = v12;
      LODWORD(v59) = v33;
    }
    a5 |= *(_DWORD *)((char *)a4 + v17 + 48);
  }
  si128.m128i_i64[0] = 0LL;
  v54 = (CSurfaceDrawListBrush **)&CBrushRenderingEffectFactory::`vftable';
  si128.m128i_i64[1] = 0x3F80000000000000LL;
  HIDWORD(v60) = a5;
  v55 = v15;
  if ( (_DWORD)v16 )
  {
    v23 = &v56;
    v24 = v16;
    v25 = (char *)a4 + 114;
    do
    {
      if ( !*(v25 - 62) || (v26 = 1, !*v25) )
        v26 = 0;
      *v23 = v26;
      v25 += 112;
      ++v23;
      --v24;
    }
    while ( v24 );
  }
  v50[0] = v49;
  v51 = 0;
  v50[1] = &v54;
  v52 = 257;
  v53 = 1;
  v27 = CBrushDrawListGenerator::GenerateDrawList(
          &v57,
          (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v50,
          (struct CDrawListEntryBuilder *)v62);
  v19 = v27;
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x4E5u, 0LL);
  }
  else
  {
    CDrawListCache::Update(v47, v46, (struct CDrawListEntryBuilder *)v62);
    v19 = 0;
  }
LABEL_27:
  v28 = v59;
  for ( i = 0; i < v28; ++i )
  {
    if ( !*((_BYTE *)a4 + 112 * i + 52) )
    {
      v58[i] = 0LL;
      v28 = v59;
    }
  }
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v57);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v62);
  return (unsigned int)v19;
}
