/*
 * XREFs of ?GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801A76A0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z @ 0x180009D20 (-reset@-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z.c)
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18000A670 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18000D420 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18000DC30 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18000F2D0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x1800105B0 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?GetRadius@CDropShadow@@QEBAMXZ @ 0x1800176A4 (-GetRadius@CDropShadow@@QEBAMXZ.c)
 *     ??1?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18001B6D4 (--1-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDrawListBrush@@@std.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18001B6F4 (--1-$out_param_t@V-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDraw.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18003A430 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18003DAE0 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18003EC70 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18003ED00 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18005EB50 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??R?$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z @ 0x18009E24C (--R-$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z.c)
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18009E5C8 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x1800D9794 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x18013F6F0 (--$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?GetEffectiveShadowIntermediates@CDropShadow@@AEBAPEAVShadowIntermediates@1@PEAVCVisual@@@Z @ 0x1801A7A28 (-GetEffectiveShadowIntermediates@CDropShadow@@AEBAPEAVShadowIntermediates@1@PEAVCVisual@@@Z.c)
 *     ?CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MPEAPEAVCDrawListBrush@@@Z @ 0x1801A7A80 (-CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCNineGridDrawListBrush@@U?$default_delete@VCNineGridDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1801B7070 (--1-$out_param_t@V-$unique_ptr@VCNineGridDrawListBrush@@U-$default_delete@VCNineGridDrawListBrus.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1802B9630 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDropShadow::GenerateDrawList(
        CDropShadow *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int v8; // esi
  float Radius; // xmm0_4
  struct CVisual *CurrentVisual; // rax
  float *EffectiveShadowIntermediates; // rax
  struct CDrawingContext *v12; // rdx
  float v13; // xmm2_4
  int v14; // ebx
  __int64 v15; // rcx
  __int64 (__fastcall ***v17)(_QWORD, __int64); // rdx
  int v18; // eax
  __int64 v19; // rdx
  float v20; // xmm5_4
  float v21; // xmm1_4
  float v22; // xmm4_4
  float v23; // xmm2_4
  float v24; // xmm3_4
  float v25; // xmm6_4
  float v26; // xmm5_4
  float v27; // xmm0_4
  float v28; // xmm4_4
  int DrawList; // eax
  float v30; // xmm2_4
  int v31; // xmm1_4
  _BYTE *v32; // rax
  __int128 v33; // xmm0
  float v34; // xmm6_4
  _BYTE *v35; // [rsp+30h] [rbp-D0h] BYREF
  __int64 (__fastcall ****v36)(_QWORD, __int64); // [rsp+38h] [rbp-C8h] BYREF
  struct CDrawListBrush *v37; // [rsp+40h] [rbp-C0h] BYREF
  char v38; // [rsp+48h] [rbp-B8h]
  CNineGridDrawListBrush *v39; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v40; // [rsp+58h] [rbp-A8h] BYREF
  CNineGridDrawListBrush **v41; // [rsp+68h] [rbp-98h] BYREF
  struct CGeometryOnlyDrawListBrush *v42; // [rsp+70h] [rbp-90h] BYREF
  char v43; // [rsp+78h] [rbp-88h]
  __int128 v44; // [rsp+80h] [rbp-80h] BYREF
  int v45; // [rsp+90h] [rbp-70h]
  int v46; // [rsp+DCh] [rbp-24h]
  char v47; // [rsp+E0h] [rbp-20h]
  _BYTE v48[64]; // [rsp+F0h] [rbp-10h] BYREF
  int v49; // [rsp+130h] [rbp+30h]
  CDrawingContext *v50[2]; // [rsp+140h] [rbp+40h] BYREF
  __int64 (__fastcall ***v51)(_QWORD, __int64); // [rsp+150h] [rbp+50h] BYREF
  unsigned int v52; // [rsp+168h] [rbp+68h]
  int v53; // [rsp+174h] [rbp+74h]
  __int128 v54; // [rsp+178h] [rbp+78h]
  _BYTE v55[4496]; // [rsp+190h] [rbp+90h] BYREF

  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v50, a2, a3);
  v46 = 257;
  v45 = 0;
  v44 = 0LL;
  v47 = 0;
  v8 = 0;
  v39 = 0LL;
  Radius = CDropShadow::GetRadius(this);
  CurrentVisual = CDrawingContext::GetCurrentVisual(a2);
  EffectiveShadowIntermediates = (float *)CDropShadow::GetEffectiveShadowIntermediates(this, CurrentVisual);
  v13 = *((float *)this + 23) * EffectiveShadowIntermediates[16];
  if ( v13 < 1.0 )
  {
    v30 = v13 * *((float *)this + 21);
    v31 = *((_DWORD *)this + 19);
    LODWORD(v54) = *((_DWORD *)this + 18);
    DWORD2(v54) = *((_DWORD *)this + 20);
    *((float *)&v54 + 3) = v30;
    DWORD1(v54) = v31;
  }
  else
  {
    v54 = *(_OWORD *)((char *)this + 72);
  }
  v35 = 0LL;
  v36 = (__int64 (__fastcall ****)(_QWORD, __int64))&v35;
  v37 = 0LL;
  v38 = 1;
  v14 = CDropShadow::ShadowIntermediates::CreateShadowOpacityBrush(
          (CDropShadow::ShadowIntermediates *)EffectiveShadowIntermediates,
          v12,
          a3,
          Radius,
          &v37);
  if ( v38 )
    std::unique_ptr<CShape>::reset(v36, (__int64 (__fastcall ***)(_QWORD, __int64))v37);
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180362CA0, 3u, v14, 0x15Au, 0LL);
    if ( v35 )
      (**(void (__fastcall ***)(_BYTE *, __int64))v35)(v35, 1LL);
    goto LABEL_8;
  }
  v17 = (__int64 (__fastcall ***)(_QWORD, __int64))v35;
  if ( v35 )
  {
    v35 = 0LL;
    std::unique_ptr<CShape>::reset(&v51, v17);
    v18 = 2;
    if ( v52 > 2 )
      v18 = v52;
    v52 = v18;
    if ( v35 )
      (**(void (__fastcall ***)(_BYTE *, __int64))v35)(v35, 1LL);
  }
  v49 = 0;
  CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 280), (struct CMILMatrix *)v48);
  if ( COERCE_FLOAT(*((_DWORD *)this + 26) & _xmm) < 0.0000011920929 || CMILMatrix::ProducesUniformZ<1>((__int64)v48) )
  {
    LODWORD(v20) = *((_DWORD *)this + 24) ^ _xmm;
    v21 = 0.0 - Radius;
    LODWORD(v22) = *((_DWORD *)this + 25) ^ _xmm;
    v23 = v20 + *((float *)this + 27);
    v24 = Radius + a3->width;
    v25 = Radius + a3->height;
    v26 = v20 + *((float *)this + 29);
    *(float *)&v40 = 0.0 - Radius;
    v27 = v22 + *((float *)this + 28);
    v28 = v22 + *((float *)this + 30);
    *(_QWORD *)((char *)&v40 + 4) = __PAIR64__(LODWORD(v24), LODWORD(v21));
    *((float *)&v40 + 3) = v25;
    if ( v23 < v21 )
      v23 = v21;
    if ( v27 < v21 )
      v27 = v21;
    if ( v24 < v26 )
      v26 = v24;
    if ( v25 < v28 )
      v28 = v25;
    if ( v26 > v23 && v28 > v27 )
    {
      v35 = 0LL;
      v42 = 0LL;
      v43 = 1;
      *(float *)&v36 = v23 - v21;
      *((float *)&v36 + 1) = v27 - v21;
      *(float *)&v37 = v24 - v26;
      *((float *)&v37 + 1) = v25 - v28;
      v41 = (CNineGridDrawListBrush **)&v35;
      v14 = CGeometryOnlyDrawListBrush::Create(&v42, v19);
      wil::details::out_param_t<std::unique_ptr<CGeometryOnlyDrawListBrush>>::~out_param_t<std::unique_ptr<CGeometryOnlyDrawListBrush>>((__int64)&v41);
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180362CA0, 3u, v14, 0x17Du, 0LL);
      }
      else
      {
        v32 = v35;
        v33 = v40;
        v42 = 0LL;
        v43 = 1;
        v35[52] = 1;
        *((_OWORD *)v32 + 2) = v33;
        *((_DWORD *)v32 + 12) = 50529027;
        v41 = &v39;
        *(_QWORD *)&v40 = v35;
        v35 = 0LL;
        v14 = CNineGridDrawListBrush::Create((struct CNineGridDrawListBrush *)&v40, (int)&v36, (int)&v36, 1, &v42);
        std::unique_ptr<CShape>::~unique_ptr<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))&v40);
        wil::details::out_param_t<std::unique_ptr<CNineGridDrawListBrush>>::~out_param_t<std::unique_ptr<CNineGridDrawListBrush>>(&v41);
        if ( v14 >= 0 )
        {
          LODWORD(v34) = *((_DWORD *)this + 26) & _xmm;
          *(_QWORD *)&v44 = v39;
          std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>((void **)&v35);
          if ( v34 >= 0.0000011920929 )
            v8 = 32;
          goto LABEL_28;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180362CA0, 3u, v14, 0x185u, 0LL);
      }
      std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>((void **)&v35);
      goto LABEL_8;
    }
  }
LABEL_28:
  v53 = v8;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v55);
  DrawList = CBrushDrawListGenerator::GenerateDrawList(
               v50,
               (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v44,
               (struct CDrawListEntryBuilder *)v55);
  v14 = DrawList;
  if ( DrawList < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180362CA0, 3u, DrawList, 0x199u, 0LL);
    CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v55);
LABEL_8:
    CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)v50);
    goto LABEL_9;
  }
  CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v55);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v55);
LABEL_9:
  if ( v39 )
    std::default_delete<CNineGridDrawListBrush>::operator()(v15, v39);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v50);
  return (unsigned int)v14;
}
