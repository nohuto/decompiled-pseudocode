/*
 * XREFs of ?GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18003D6D0
 * Callers:
 *     ?GenerateDrawList@CSurfaceRenderStrategy@CSurfaceBrush@@UEBAJPEAV2@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801B2570 (-GenerateDrawList@CSurfaceRenderStrategy@CSurfaceBrush@@UEBAJPEAV2@PEAVCDrawingContext@@AEBUD2D_.c)
 * Callees:
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18000A670 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18000D420 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18000DC30 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18000F2D0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18001B858 (-RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ??0?$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003EC50 (--0-$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18003EC70 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18003ED00 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1802B9630 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrush::GenerateDrawList(
        CBrushRenderingGraph **this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  CBrushRenderingGraph *v5; // rax
  int v9; // ebx
  void (__fastcall ***v10)(_QWORD, __int64); // r8
  CBrushRenderingGraph *v11; // rax
  FLOAT height; // xmm1_4
  __int64 (__fastcall *v13)(CBrushRenderingGraph **, CDrawingContext **); // rax
  int v14; // eax
  int v15; // eax
  unsigned int v16; // edi
  void (__fastcall ***v17)(__int64 (__fastcall ***)(_QWORD, __int64), __int64); // rcx
  __int64 v19; // rax
  CBrushRenderingGraph *v20; // rax
  int v21; // eax
  CBrushRenderingGraph *v22; // rax
  unsigned int v23; // eax
  int v24; // eax
  __int32 v25; // xmm1_4
  struct CDrawListBrush *v26; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v27[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+50h] [rbp-B0h]
  int v29; // [rsp+9Ch] [rbp-64h]
  char v30; // [rsp+A0h] [rbp-60h]
  __int128 v31; // [rsp+B0h] [rbp-50h] BYREF
  char v32; // [rsp+C0h] [rbp-40h]
  CDrawingContext *v33; // [rsp+D0h] [rbp-30h] BYREF
  __int64 (__fastcall ***v34)(_QWORD, __int64); // [rsp+D8h] [rbp-28h] BYREF
  __int64 (__fastcall ***v35)(_QWORD, __int64); // [rsp+E0h] [rbp-20h] BYREF
  __int64 (__fastcall ***v36)(_QWORD, __int64); // [rsp+E8h] [rbp-18h] BYREF
  __int64 (__fastcall ***v37)(_QWORD, __int64); // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v38; // [rsp+F8h] [rbp-8h]
  FLOAT width; // [rsp+FCh] [rbp-4h]
  FLOAT v40; // [rsp+100h] [rbp+0h]
  int i; // [rsp+104h] [rbp+4h]
  int v42; // [rsp+108h] [rbp+8h]
  int v43; // [rsp+10Ch] [rbp+Ch]
  int v44; // [rsp+110h] [rbp+10h]
  int v45; // [rsp+114h] [rbp+14h]
  __int128 v46; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v47[4496]; // [rsp+130h] [rbp+30h] BYREF

  v32 = 1;
  v31 = (unsigned __int64)&v26;
  v5 = *this;
  v26 = 0LL;
  v9 = (*((__int64 (__fastcall **)(CBrushRenderingGraph **, struct CDrawingContext *, struct D2D_SIZE_F *, char *))v5
        + 45))(
         this,
         a2,
         a3,
         (char *)&v31 + 8);
  if ( v32 )
  {
    v10 = *(void (__fastcall ****)(_QWORD, __int64))v31;
    *(_QWORD *)v31 = *((_QWORD *)&v31 + 1);
    if ( v10 )
      (**v10)(v10, 1LL);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802F2870, 3u, v9, 0xADu, 0LL);
  }
  else if ( this[10] )
  {
    v19 = *((_QWORD *)a2 + 4);
    if ( *(int *)(v19 + 624) >= 37632 && !*(_BYTE *)(v19 + 1489) )
    {
      v20 = *this;
      v31 = 0LL;
      v21 = (*((__int64 (__fastcall **)(CBrushRenderingGraph **, struct D2D_SIZE_F *, __int128 *))v20 + 24))(
              this,
              a3,
              &v31);
      v9 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802F2870, 3u, v21, 0xC0u, 0LL);
      }
      else
      {
        v22 = *this;
        v46 = 0LL;
        if ( !(*((unsigned __int8 (__fastcall **)(CBrushRenderingGraph **, struct D2D_SIZE_F *, __int128 *))v22 + 41))(
                this,
                a3,
                &v46)
          || (COERCE_FLOAT(v25 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]),
              COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v46 + 1) - *((float *)&v31 + 1)) & v25) > 0.0000011920929)
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v46 - *(float *)&v31) & v25) > 0.0000011920929
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v46 + 2) - *((float *)&v31 + 2)) & v25) > 0.0000011920929
          || (v23 = 1,
              COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v46 + 3) - *((float *)&v31 + 3)) & v25) > 0.0000011920929) )
        {
          v23 = 0;
        }
        v24 = CBrushRenderingGraph::RenderSubgraphs(this[10], a2, a3, v26, v23, a4);
        v9 = v24;
        if ( v24 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802F2870, 3u, v24, 0xCCu, 0LL);
      }
    }
  }
  else
  {
    v33 = a2;
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(&v34);
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(&v35);
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(&v36);
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(&v37);
    v11 = *this;
    height = a3->height;
    width = a3->width;
    v13 = (__int64 (__fastcall *)(CBrushRenderingGraph **, CDrawingContext **))*((_QWORD *)v11 + 43);
    v40 = height;
    v38 = 0;
    i = 0;
    v42 = 1065353216;
    v43 = 1065353216;
    v44 = 1065353216;
    v45 = 1065353216;
    v14 = v13(this, &v33);
    v9 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802F2870, 3u, v14, 0xB2u, 0LL);
      CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v33);
    }
    else
    {
      v27[0] = v26;
      v27[1] = 0LL;
      v28 = 0;
      v29 = 257;
      v30 = 0;
      CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v47);
      v15 = CBrushDrawListGenerator::GenerateDrawList(
              &v33,
              (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v27,
              (struct CDrawListEntryBuilder *)v47);
      v9 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802F2870, 3u, v15, 0xB9u, 0LL);
        CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v47);
        CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v33);
      }
      else
      {
        CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v47);
        CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v47);
        v16 = 0;
        v42 = 1065353216;
        v43 = 1065353216;
        v44 = 1065353216;
        v45 = 1065353216;
        for ( i = 0; v16 < v38; ++v16 )
        {
          v17 = (void (__fastcall ***)(__int64 (__fastcall ***)(_QWORD, __int64), __int64))(&v34)[v16];
          (&v34)[v16] = 0LL;
          if ( v17 )
            (**v17)((__int64 (__fastcall ***)(_QWORD, __int64))v17, 1LL);
        }
        v38 = 0;
        std::unique_ptr<CShape>::~unique_ptr<CShape>(&v37);
        std::unique_ptr<CShape>::~unique_ptr<CShape>(&v36);
        std::unique_ptr<CShape>::~unique_ptr<CShape>(&v35);
        std::unique_ptr<CShape>::~unique_ptr<CShape>(&v34);
      }
    }
  }
  if ( v26 )
    (**(void (__fastcall ***)(struct CDrawListBrush *, __int64))v26)(v26, 1LL);
  return (unsigned int)v9;
}
