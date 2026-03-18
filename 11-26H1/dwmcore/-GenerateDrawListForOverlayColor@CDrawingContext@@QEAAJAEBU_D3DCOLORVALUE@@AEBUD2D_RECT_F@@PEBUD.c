/*
 * XREFs of ?GenerateDrawListForOverlayColor@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_RECT_F@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListEntryBuilder@@@Z @ 0x18003DB54
 * Callers:
 *     ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A4168 (-RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 * Callees:
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18000F2D0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800111B0 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z @ 0x18001B764 (-Free@-$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z.c)
 *     ??0?$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003EC50 (--0-$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18003EC70 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x180074F30 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x1800D9794 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::GenerateDrawListForOverlayColor(
        CDrawingContext *this,
        const struct _D3DCOLORVALUE *a2,
        const struct D2D_RECT_F *a3,
        const struct D2D_MATRIX_3X2_F *a4,
        struct CDrawListEntryBuilder *a5)
{
  LPVOID *v5; // rbx
  __int64 v9; // rdi
  CMILMatrix *TopByReference; // rax
  unsigned __int8 v11; // al
  int v12; // r15d
  int v13; // r9d
  int v14; // edi
  int v15; // ebx
  _QWORD *v16; // rcx
  _DWORD *v17; // rax
  _QWORD *v18; // rcx
  __int128 v19; // xmm0
  void (__fastcall ***v20)(_QWORD, __int64); // r8
  void (__fastcall ***v21)(_QWORD, __int64); // rax
  int v22; // eax
  int v23; // eax
  __m128i v25; // xmm0
  int v26; // eax
  LPVOID lpMem; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID *p_lpMem; // [rsp+40h] [rbp-C8h]
  struct CGeometryOnlyDrawListBrush *v29; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v30[3]; // [rsp+50h] [rbp-B8h] BYREF
  int v31; // [rsp+68h] [rbp-A0h]
  int v32; // [rsp+B4h] [rbp-54h]
  char v33; // [rsp+B8h] [rbp-50h]
  CDrawingContext *v34; // [rsp+C8h] [rbp-40h] BYREF
  void (__fastcall ***v35)(_QWORD, __int64); // [rsp+D0h] [rbp-38h] BYREF
  __int64 v36; // [rsp+F0h] [rbp-18h]
  __int64 v37; // [rsp+F8h] [rbp-10h]
  __m128i si128; // [rsp+100h] [rbp-8h]

  v5 = (LPVOID *)&v35;
  v34 = this;
  v9 = 4LL;
  do
  {
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v5++);
    --v9;
  }
  while ( v9 );
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v36 = 0LL;
  v37 = 0LL;
  *(_OWORD *)&v30[1] = 0LL;
  v31 = 0;
  v32 = 257;
  v33 = 0;
  TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 280));
  v11 = CMILMatrix::Is2DAxisAlignedPreserving(TopByReference);
  lpMem = 0LL;
  si128 = (__m128i)xmmword_1802F2880;
  v29 = 0LL;
  v12 = 8 * v11 + 2048;
  LOBYTE(v30[0]) = v13;
  HIDWORD(v37) = v13 | v12;
  v14 = v11 != 0 ? 0 : 0x3030303;
  p_lpMem = &lpMem;
  v15 = CGeometryOnlyDrawListBrush::Create(&v29);
  if ( LOBYTE(v30[0]) )
  {
    v16 = *p_lpMem;
    *p_lpMem = v29;
    if ( v16 )
      CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(v16);
  }
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x196Du, 0LL);
    if ( lpMem )
      CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(lpMem);
  }
  else
  {
    v17 = lpMem;
    v18 = 0LL;
    *((_BYTE *)lpMem + 52) = 1;
    v19 = (__int128)*a3;
    v17[12] = v14;
    *((_OWORD *)v17 + 2) = v19;
    v20 = v35;
    v21 = (void (__fastcall ***)(_QWORD, __int64))lpMem;
    lpMem = 0LL;
    v35 = v21;
    if ( v20 )
    {
      (**v20)(v20, 1LL);
      v18 = lpMem;
    }
    v22 = v36;
    if ( (unsigned int)v36 <= 1 )
      v22 = 1;
    LODWORD(v36) = v22;
    if ( v18 )
      CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(v18);
    v23 = CBrushDrawListGenerator::GenerateDrawList(
            &v34,
            (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v30[1],
            a5);
    v15 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x1979u, 0LL);
    }
    else if ( a2->a != 0.0 )
    {
      v25 = *(__m128i *)&a2->r;
      HIDWORD(v37) = v12;
      si128 = v25;
      v26 = CBrushDrawListGenerator::GenerateDrawList(
              &v34,
              (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v30[1],
              a5);
      v15 = v26;
      if ( v26 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x1982u, 0LL);
    }
  }
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v34);
  return (unsigned int)v15;
}
