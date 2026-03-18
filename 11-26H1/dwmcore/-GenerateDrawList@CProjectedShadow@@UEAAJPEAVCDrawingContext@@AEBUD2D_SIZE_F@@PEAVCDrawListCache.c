/*
 * XREFs of ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801CB150
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z @ 0x180009D20 (-reset@-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z.c)
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18000A670 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18000D420 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18000DC30 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18000F2D0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?Free@?$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z @ 0x18001B764 (-Free@-$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18001B858 (-RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180038E20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x18003EBEC (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18003EC70 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18003ED00 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1800D2750 (-GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z.c)
 *     ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1800D76A8 (-GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListB.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x1800D9794 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1802B9630 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadow::GenerateDrawList(
        CProjectedShadow *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  __int64 v4; // rax
  __int64 v8; // rbx
  int CasterShadowInputBrush; // edi
  _QWORD *v10; // rcx
  int v11; // xmm0_4
  _DWORD *v12; // rax
  __int128 v13; // xmm1
  CBrushRenderingGraph *v14; // rcx
  void (__fastcall ***v15)(LPVOID, __int64); // rbx
  volatile signed __int32 **v16; // rcx
  __int32 v17; // xmm2_4
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  int v20; // eax
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int64 (__fastcall ***v24)(_QWORD, __int64); // rdx
  __int64 (__fastcall ***v25)(_QWORD, __int64); // rdx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  float v30; // xmm1_4
  float v31; // xmm4_4
  float v32; // xmm5_4
  float v33; // xmm6_4
  float v34; // xmm7_4
  float v35; // xmm8_4
  float v36; // xmm9_4
  __int64 v37; // xmm0_8
  __int64 v38; // rdx
  int v39; // eax
  LPVOID lpMem; // [rsp+30h] [rbp-D0h] BYREF
  __int64 (__fastcall ****p_lpMem)(_QWORD, __int64); // [rsp+38h] [rbp-C8h] BYREF
  struct CDrawListBrush *v42; // [rsp+40h] [rbp-C0h] BYREF
  float v43; // [rsp+48h] [rbp-B8h]
  float v44; // [rsp+4Ch] [rbp-B4h]
  __int64 (__fastcall ***v45)(_QWORD, __int64); // [rsp+50h] [rbp-B0h] BYREF
  __int128 v46; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v47[2]; // [rsp+70h] [rbp-90h] BYREF
  int v48; // [rsp+80h] [rbp-80h]
  __int128 v49; // [rsp+84h] [rbp-7Ch]
  __int128 v50; // [rsp+94h] [rbp-6Ch]
  int v51; // [rsp+A4h] [rbp-5Ch]
  __int128 v52; // [rsp+A8h] [rbp-58h]
  __int128 v53; // [rsp+B8h] [rbp-48h]
  int v54; // [rsp+C8h] [rbp-38h]
  int v55; // [rsp+CCh] [rbp-34h]
  char v56; // [rsp+D0h] [rbp-30h]
  __int128 v57; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v58; // [rsp+F0h] [rbp-10h]
  CDrawingContext *v59; // [rsp+100h] [rbp+0h] BYREF
  __int64 (__fastcall ***v60)(_QWORD, __int64); // [rsp+108h] [rbp+8h] BYREF
  __int64 (__fastcall ***v61)(_QWORD, __int64); // [rsp+110h] [rbp+10h] BYREF
  unsigned int v62; // [rsp+128h] [rbp+28h]
  __int128 v63; // [rsp+138h] [rbp+38h]
  _BYTE v64[4496]; // [rsp+150h] [rbp+50h] BYREF

  v4 = *((_QWORD *)this + 11);
  v42 = 0LL;
  v8 = *(_QWORD *)(v4 + 72);
  lpMem = 0LL;
  p_lpMem = (__int64 (__fastcall ****)(_QWORD, __int64))&lpMem;
  LOBYTE(v43) = 1;
  CasterShadowInputBrush = CGeometryOnlyDrawListBrush::Create(&v42, (__int64)a2);
  if ( LOBYTE(v43) )
  {
    v10 = *p_lpMem;
    *p_lpMem = (__int64 (__fastcall ***)(_QWORD, __int64))v42;
    if ( v10 )
      CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(v10);
  }
  if ( CasterShadowInputBrush >= 0 )
  {
    v11 = *(_DWORD *)(v8 + 144);
    v12 = lpMem;
    DWORD2(v46) = *(_DWORD *)(v8 + 140);
    HIDWORD(v46) = v11;
    *(_QWORD *)&v46 = 0LL;
    v13 = v46;
    *((_BYTE *)lpMem + 52) = 1;
    v12[12] = 50529027;
    *((_OWORD *)v12 + 2) = v13;
    v14 = (CBrushRenderingGraph *)*((_QWORD *)this + 46);
    v15 = (void (__fastcall ***)(LPVOID, __int64))lpMem;
    if ( v14 )
    {
      v39 = CBrushRenderingGraph::RenderSubgraphs(
              v14,
              a2,
              (struct D2D_SIZE_F *)(*(_QWORD *)(*((_QWORD *)this + 11) + 72LL) + 140LL),
              (const struct CDrawListBrush *)lpMem,
              0,
              a4);
      CasterShadowInputBrush = v39;
      if ( v39 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v39, 0x188u, 0LL);
      goto LABEL_24;
    }
    v48 = 0;
    *(_QWORD *)&v46 = &CProjectedShadowRenderingEffectFactory::`vftable';
    v55 = 257;
    v47[1] = &v46;
    v56 = 0;
    p_lpMem = &v45;
    v47[0] = lpMem;
    v45 = 0LL;
    v42 = 0LL;
    LOBYTE(v43) = 1;
    CasterShadowInputBrush = CProjectedShadow::GetCasterShadowInputBrush(this, a2, &v42);
    if ( LOBYTE(v43) )
      std::unique_ptr<CShape>::reset(p_lpMem, (__int64 (__fastcall ***)(_QWORD, __int64))v42);
    if ( CasterShadowInputBrush < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CasterShadowInputBrush, 0x196u, 0LL);
    }
    else
    {
      v16 = (volatile signed __int32 **)*((_QWORD *)this + 11);
      p_lpMem = (__int64 (__fastcall ****)(_QWORD, __int64))&lpMem;
      lpMem = 0LL;
      v42 = 0LL;
      LOBYTE(v43) = 1;
      CasterShadowInputBrush = CProjectedShadowReceiver::GetReceiverMaskInputBrush(v16, a2, &v42);
      if ( LOBYTE(v43) )
        std::unique_ptr<CShape>::reset(p_lpMem, (__int64 (__fastcall ***)(_QWORD, __int64))v42);
      if ( CasterShadowInputBrush >= 0 )
      {
        COERCE_FLOAT(v17 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
        if ( COERCE_FLOAT(*((_DWORD *)this + 47) & v17) >= 0.000081380211
          || COERCE_FLOAT(*((_DWORD *)this + 50) & v17) >= 0.000081380211 )
        {
          v18 = *(_OWORD *)((char *)this + 180);
          v19 = *(_OWORD *)((char *)this + 196);
          v51 = *((_DWORD *)this + 53);
          v20 = *((_DWORD *)this + 62);
          v49 = v18;
          v48 = 1;
          v21 = *(_OWORD *)((char *)this + 216);
          v54 = v20;
          v50 = v19;
          v22 = *(_OWORD *)((char *)this + 232);
          v52 = v21;
          v53 = v22;
        }
        else
        {
          v30 = *((float *)this + 53);
          v31 = *((float *)this + 45);
          v32 = *((float *)this + 46);
          v33 = *((float *)this + 48);
          v34 = *((float *)this + 49);
          v35 = *((float *)this + 51);
          v36 = *((float *)this + 52);
          p_lpMem = (__int64 (__fastcall ****)(_QWORD, __int64))__PAIR64__(LODWORD(v32), LODWORD(v31));
          v42 = (struct CDrawListBrush *)__PAIR64__(LODWORD(v34), LODWORD(v33));
          v43 = v35;
          v44 = v36;
          if ( COERCE_FLOAT(LODWORD(v30) & v17) >= 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(v30 - 1.0) & v17) >= 0.000081380211 )
          {
            *(float *)&p_lpMem = v31 / v30;
            *((float *)&p_lpMem + 1) = v32 / v30;
            *(float *)&v42 = v33 / v30;
            *((float *)&v42 + 1) = v34 / v30;
            v43 = v35 / v30;
            v44 = v36 / v30;
          }
          D2D1::Matrix3x2F::SetProduct(
            (D2D1::Matrix3x2F *)&v57,
            (const struct D2D1::Matrix3x2F *)(v45 + 1),
            (const struct D2D1::Matrix3x2F *)&p_lpMem);
          v37 = v58;
          *(_OWORD *)v38 = v57;
          *(_QWORD *)(v38 + 16) = v37;
        }
        CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)&v59, a2);
        v23 = *(_OWORD *)((char *)this + 328);
        v24 = v45;
        v45 = 0LL;
        v63 = v23;
        std::unique_ptr<CShape>::reset(&v60, v24);
        v25 = (__int64 (__fastcall ***)(_QWORD, __int64))lpMem;
        v26 = 1;
        if ( v62 > 1 )
          v26 = v62;
        v62 = v26;
        lpMem = 0LL;
        std::unique_ptr<CShape>::reset(&v61, v25);
        v27 = 2;
        if ( v62 > 2 )
          v27 = v62;
        v62 = v27;
        CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v64);
        v28 = CBrushDrawListGenerator::GenerateDrawList(
                &v59,
                (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v47,
                (struct CDrawListEntryBuilder *)v64);
        CasterShadowInputBrush = v28;
        if ( v28 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, 0x1C1u, 0LL);
        else
          CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v64);
        CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v64);
        CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v59);
        if ( lpMem )
          (**(void (__fastcall ***)(LPVOID, __int64))lpMem)(lpMem, 1LL);
        if ( v45 )
          (**v45)(v45, 1LL);
        goto LABEL_24;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CasterShadowInputBrush, 0x19Au, 0LL);
      std::unique_ptr<CShape>::~unique_ptr<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))&lpMem);
    }
    std::unique_ptr<CShape>::~unique_ptr<CShape>(&v45);
LABEL_24:
    if ( v15 )
      (**v15)(v15, 1LL);
    return (unsigned int)CasterShadowInputBrush;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CasterShadowInputBrush, 0x172u, 0LL);
  if ( lpMem )
    CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(lpMem);
  return (unsigned int)CasterShadowInputBrush;
}
