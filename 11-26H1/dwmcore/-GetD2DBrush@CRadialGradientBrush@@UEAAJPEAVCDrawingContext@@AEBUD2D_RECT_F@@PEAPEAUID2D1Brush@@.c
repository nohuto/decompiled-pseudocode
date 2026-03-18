/*
 * XREFs of ?GetD2DBrush@CRadialGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1Brush@@@Z @ 0x18027F010
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentD2DRadialGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1RadialGradientBrush@@@Z @ 0x180103A28 (-GetCurrentD2DRadialGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1RadialGr.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRadialGradientBrush::GetD2DBrush(
        CRadialGradientBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_RECT_F *a3,
        struct ID2D1Brush **a4)
{
  __m128 v5; // xmm6
  __m128 v7; // xmm7
  __m128 v10; // xmm10
  __m128 v11; // xmm11
  float v12; // xmm0_4
  int CurrentD2DRadialGradientBrush; // eax
  unsigned int v14; // ebx
  struct ID2D1Brush *v15; // rbx
  __int64 v16; // rcx
  struct ID2D1RadialGradientBrush *v18; // [rsp+38h] [rbp-59h] BYREF
  float v19; // [rsp+40h] [rbp-51h] BYREF
  float v20; // [rsp+44h] [rbp-4Dh]
  __m128i si128; // [rsp+48h] [rbp-49h] BYREF
  __int64 v22; // [rsp+58h] [rbp-39h]

  v5 = (__m128)*((unsigned int *)this + 62);
  v7 = (__m128)*((unsigned int *)this + 63);
  v10 = (__m128)*((unsigned int *)this + 66);
  v11 = (__m128)*((unsigned int *)this + 67);
  v19 = a3->right - a3->left;
  v12 = a3->bottom - a3->top;
  v18 = 0LL;
  v20 = v12;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
  CurrentD2DRadialGradientBrush = CGradientBrush::GetCurrentD2DRadialGradientBrush(this, a2, &v18);
  v14 = CurrentD2DRadialGradientBrush;
  if ( CurrentD2DRadialGradientBrush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CurrentD2DRadialGradientBrush, 0xA1u, 0LL);
  }
  else
  {
    if ( *((_DWORD *)this + 27) == 1 )
    {
      v5.m128_f32[0] = (float)(v5.m128_f32[0] * v19) + a3->left;
      v7.m128_f32[0] = (float)(v7.m128_f32[0] * v20) + a3->top;
      v10.m128_f32[0] = v10.m128_f32[0] * v19;
      v11.m128_f32[0] = v11.m128_f32[0] * v20;
    }
    v15 = v18;
    (*(void (__fastcall **)(struct ID2D1RadialGradientBrush *, unsigned __int64))(*(_QWORD *)v18 + 64LL))(
      v18,
      _mm_unpacklo_ps(v5, v7).m128_u64[0]);
    (*(void (__fastcall **)(struct ID2D1Brush *))(*(_QWORD *)v15 + 80LL))(v15);
    (*(void (__fastcall **)(struct ID2D1Brush *))(*(_QWORD *)v15 + 88LL))(v15);
    (*(void (__fastcall **)(struct ID2D1Brush *, unsigned __int64))(*(_QWORD *)v15 + 72LL))(
      v15,
      _mm_unpacklo_ps(v10, v11).m128_u64[0]);
    v16 = *((_QWORD *)this + 15);
    if ( v16 )
    {
      v22 = 0LL;
      si128 = 0LL;
      (*(void (__fastcall **)(__int64, float *, __m128i *))(*(_QWORD *)v16 + 216LL))(v16, &v19, &si128);
    }
    else
    {
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v22 = 0LL;
    }
    (*(void (__fastcall **)(struct ID2D1Brush *, __m128i *))(*(_QWORD *)v15 + 40LL))(v15, &si128);
    *a4 = v15;
    v14 = 0;
    v18 = 0LL;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
  return v14;
}
