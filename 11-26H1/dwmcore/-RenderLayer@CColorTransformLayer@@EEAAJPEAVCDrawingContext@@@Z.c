/*
 * XREFs of ?RenderLayer@CColorTransformLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x18024FF90
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x1800AF4BC (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD.c)
 *     ?GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x1801029C0 (-GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x18016C2C0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1801BCE20 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CColorTransformLayer::RenderLayer(CColorTransformLayer *this, struct CDrawingContext *a2)
{
  __int64 *v2; // rdi
  __int64 v4; // rax
  __int64 (__fastcall *v6)(__int64 *, __int64 *, _QWORD); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  int CachedEffectNoRef; // eax
  __int64 v10; // rcx
  struct ID2D1Effect *v11; // rdi
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  __m128i v15; // xmm1
  FLOAT v16; // xmm0_4
  __m128i v17; // xmm0
  int v18; // eax
  unsigned int v20; // [rsp+20h] [rbp-79h]
  struct D2D_POINT_2F v21; // [rsp+30h] [rbp-69h] BYREF
  __int64 v22; // [rsp+38h] [rbp-61h] BYREF
  _BYTE v23[20]; // [rsp+40h] [rbp-59h] BYREF
  __int128 v24; // [rsp+54h] [rbp-45h]
  int v25; // [rsp+64h] [rbp-35h]
  struct D2D_RECT_F v26; // [rsp+68h] [rbp-31h] BYREF
  _OWORD v27[3]; // [rsp+80h] [rbp-19h] BYREF
  __int128 v28; // [rsp+B0h] [rbp+17h]
  __int128 v29; // [rsp+C0h] [rbp+27h]

  v2 = (__int64 *)*((_QWORD *)this + 1);
  v25 = 0;
  v22 = 0LL;
  v21 = 0LL;
  v4 = *v2;
  *(_OWORD *)&v23[4] = 0LL;
  v24 = 0LL;
  v6 = *(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD))(v4 + 152);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v22);
  v7 = v6(v2, &v22, 0LL);
  v8 = v7;
  if ( v7 < 0 )
  {
    v20 = 52;
    goto LABEL_19;
  }
  CachedEffectNoRef = CD2DContext::GetCachedEffectNoRef(*((_QWORD *)a2 + 4) + 16LL, 0, (__int64 *)&v21);
  v8 = CachedEffectNoRef;
  if ( CachedEffectNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CachedEffectNoRef, 0x37u, 0LL);
    goto LABEL_20;
  }
  *(_QWORD *)v23 = 6LL;
  *(_DWORD *)&v23[8] = 1;
  v7 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)v23, 1);
  v8 = v7;
  if ( v7 < 0 )
  {
    v20 = 70;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, v20, 0LL);
    goto LABEL_20;
  }
  v10 = *((_QWORD *)this + 1) + 8LL;
  v27[0] = *(_OWORD *)((char *)this + 120);
  v27[1] = *(_OWORD *)((char *)this + 140);
  v27[2] = *((_OWORD *)this + 10);
  v28 = *(_OWORD *)((char *)this + 180);
  v29 = *(_OWORD *)((char *)this + 200);
  if ( *(_DWORD *)((*(__int64 (__fastcall **)(__int64, struct D2D_RECT_F *))(*(_QWORD *)v10 + 24LL))(v10, &v26) + 4) == 3 )
  {
    HIDWORD(v28) = 0;
    HIDWORD(v29) = 1065353216;
  }
  v11 = (struct ID2D1Effect *)v21;
  v12 = (*(__int64 (__fastcall **)(struct D2D_POINT_2F, _QWORD, _QWORD, _OWORD *, int))(**(_QWORD **)&v21 + 72LL))(
          v21,
          0LL,
          0LL,
          v27,
          80);
  v8 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x6Cu, 0LL);
  }
  else
  {
    LODWORD(v21.x) = 2;
    v13 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, struct D2D_POINT_2F *, int))(*(_QWORD *)v11 + 72LL))(
            v11,
            1LL,
            0LL,
            &v21,
            4);
    v8 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x6Fu, 0LL);
    }
    else
    {
      (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, __int64, __int64))(*(_QWORD *)v11 + 112LL))(
        v11,
        0LL,
        v22,
        1LL);
      if ( g_LockAndReadLayer )
      {
        v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 144LL))(*((_QWORD *)this + 1));
        (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v14 + 112LL))(
          v14,
          -(__int64)(a2 != 0LL) & ((unsigned __int64)a2 + 16));
      }
      v15 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
      v16 = (float)*((int *)this + 6);
      *(_QWORD *)&v26.left = 0LL;
      v26.right = v16;
      v17 = _mm_cvtsi32_si128(*((_DWORD *)this + 4));
      LODWORD(v26.bottom) = _mm_cvtepi32_ps(v15).m128_u32[0];
      *(float *)v15.m128i_i32 = (float)*((int *)this + 5);
      LODWORD(v21.x) = _mm_cvtepi32_ps(v17).m128_u32[0];
      LODWORD(v21.y) = v15.m128i_i32[0];
      v18 = CDrawingContext::FillEffect((const void **)a2, v11, &v26, &v21, 1);
      v8 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x89u, 0LL);
      (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, __int64))(*(_QWORD *)v11 + 112LL))(
        v11,
        0LL,
        0LL,
        1LL);
    }
  }
  CDrawingContext::PopRenderOptionsInternal(a2, 1);
LABEL_20:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v22);
  return v8;
}
