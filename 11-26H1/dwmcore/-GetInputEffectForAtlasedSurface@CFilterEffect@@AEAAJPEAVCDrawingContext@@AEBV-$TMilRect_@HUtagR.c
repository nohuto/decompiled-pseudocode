/*
 * XREFs of ?GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@PEAVCCompositionSurfaceBitmap@@PEAPEAUID2D1Effect@@@Z @ 0x180267314
 * Callers:
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect@@@Z @ 0x1801D1910 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x180015760 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     ?GetID2DEffect@CD2DEffect@@QEAAJPEAPEAUID2D1Effect@@@Z @ 0x180016FBC (-GetID2DEffect@CD2DEffect@@QEAAJPEAPEAUID2D1Effect@@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z @ 0x180102130 (-CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFilterEffect::GetInputEffectForAtlasedSurface(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        __int64 a4,
        ID2D1Effect **a5)
{
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 (__fastcall *v9)(__int64, __int64 *); // rbx
  int ID2DEffect; // eax
  unsigned int v11; // edi
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64, __int64 *, __int64); // rsi
  char v14; // di
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // eax
  struct ID2D1Effect *v18; // rbx
  int v19; // eax
  ID2D1Effect *v20; // rsi
  unsigned int v22; // [rsp+20h] [rbp-51h]
  ID2D1Effect *v23; // [rsp+30h] [rbp-41h] BYREF
  __int64 v24; // [rsp+38h] [rbp-39h] BYREF
  __int64 v25; // [rsp+40h] [rbp-31h] BYREF
  struct ID2D1Effect *v26; // [rsp+48h] [rbp-29h] BYREF
  CD2DEffect *v27; // [rsp+50h] [rbp-21h] BYREF
  CD2DEffect *v28; // [rsp+58h] [rbp-19h] BYREF
  __m128 v29; // [rsp+60h] [rbp-11h] BYREF
  __m128i si128; // [rsp+70h] [rbp-1h] BYREF
  unsigned __int64 v31; // [rsp+80h] [rbp+Fh]

  v5 = a4 + 72;
  v6 = *(_QWORD *)(a4 + 72);
  v25 = 0LL;
  v24 = 0LL;
  v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(v6 + 64);
  v28 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  v23 = 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v25);
  ID2DEffect = v9(v5, &v25);
  v11 = ID2DEffect;
  if ( ID2DEffect < 0 )
  {
    v22 = 780;
    goto LABEL_18;
  }
  v12 = v25;
  v13 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64))(*(_QWORD *)v25 + 120LL);
  v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v24);
  v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2 + 16) + 16LL))(a2 + 16);
  LOBYTE(v16) = v14;
  ID2DEffect = v13(v12, v15, &v24, v16);
  v11 = ID2DEffect;
  if ( ID2DEffect < 0 )
  {
    v22 = 784;
    goto LABEL_18;
  }
  ID2DEffect = CD2DContext::CreateD2DEffect((CD2DContext *)(*(_QWORD *)(a2 + 32) + 16LL), &CLSID_D2D1Crop, &v28);
  v11 = ID2DEffect;
  if ( ID2DEffect < 0 )
  {
    v22 = 787;
    goto LABEL_18;
  }
  ID2DEffect = CD2DContext::CreateD2DEffect(
                 (CD2DContext *)(*(_QWORD *)(a2 + 32) + 16LL),
                 &CLSID_D2D12DAffineTransform,
                 &v27);
  v11 = ID2DEffect;
  if ( ID2DEffect < 0 )
  {
    v22 = 790;
    goto LABEL_18;
  }
  ID2DEffect = CD2DEffect::GetID2DEffect(v28, &v26);
  v11 = ID2DEffect;
  if ( ID2DEffect < 0 )
  {
    v22 = 792;
    goto LABEL_18;
  }
  v17 = CD2DEffect::GetID2DEffect(v27, &v23);
  v11 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x31Au, 0LL);
    goto LABEL_19;
  }
  v18 = v26;
  v29 = _mm_cvtepi32_ps(_mm_loadu_si128(a3));
  v19 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, __m128 *, int))(*(_QWORD *)v26 + 72LL))(
          v26,
          0LL,
          0LL,
          &v29,
          16);
  v11 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x320u, 0LL);
    goto LABEL_19;
  }
  v20 = v23;
  v31 = _mm_unpacklo_ps(
          _mm_xor_ps((__m128)COERCE_UNSIGNED_INT((float)a3->m128i_i32[0]), (__m128)_xmm),
          _mm_xor_ps((__m128)COERCE_UNSIGNED_INT((float)a3->m128i_i32[1]), (__m128)_xmm)).m128_u64[0];
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  ID2DEffect = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, __m128i *, int))(*(_QWORD *)v23 + 72LL))(
                 v23,
                 2LL,
                 0LL,
                 &si128,
                 24);
  v11 = ID2DEffect;
  if ( ID2DEffect < 0 )
  {
    v22 = 808;
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ID2DEffect, v22, 0LL);
    goto LABEL_19;
  }
  (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, __int64, __int64))(*(_QWORD *)v18 + 112LL))(v18, 0LL, v24, 1LL);
  ID2D1Effect::SetInputEffect(v20, 0, v18);
  v23 = 0LL;
  *a5 = v20;
LABEL_19:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v26);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v27);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v28);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v24);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v25);
  return v11;
}
