/*
 * XREFs of ?GetD2DBrush@CLinearGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1Brush@@@Z @ 0x180103C70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentD2DLinearGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1LinearGradientBrush@@@Z @ 0x180103E5C (-GetCurrentD2DLinearGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1LinearGr.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLinearGradientBrush::GetD2DBrush(
        CLinearGradientBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_RECT_F *a3,
        struct ID2D1Brush **a4)
{
  float v5; // xmm0_4
  int CurrentD2DLinearGradientBrush; // eax
  unsigned int v10; // ebx
  __m128 v11; // xmm0
  __m128 v12; // xmm1
  __m128 v13; // xmm6
  __m128 v14; // xmm7
  struct ID2D1Brush *v15; // rbx
  __int64 v16; // rcx
  struct ID2D1LinearGradientBrush *v17; // rcx
  float v19; // [rsp+30h] [rbp-50h] BYREF
  float v20; // [rsp+34h] [rbp-4Ch]
  struct ID2D1LinearGradientBrush *v21; // [rsp+38h] [rbp-48h] BYREF
  __m128i si128; // [rsp+40h] [rbp-40h] BYREF
  __int64 v23; // [rsp+50h] [rbp-30h]

  v5 = a3->right - a3->left;
  v21 = 0LL;
  v19 = v5;
  v20 = a3->bottom - a3->top;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
  CurrentD2DLinearGradientBrush = CGradientBrush::GetCurrentD2DLinearGradientBrush(this, a2, &v21);
  v10 = CurrentD2DLinearGradientBrush;
  if ( CurrentD2DLinearGradientBrush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CurrentD2DLinearGradientBrush, 0x78u, 0LL);
    v17 = v21;
  }
  else
  {
    if ( *((_DWORD *)this + 27) == 1 )
    {
      v13 = (__m128)LODWORD(v19);
      v14 = (__m128)LODWORD(v20);
      v11 = (__m128)LODWORD(v19);
      v12 = (__m128)LODWORD(v20);
      v11.m128_f32[0] = (float)(v19 * *((float *)this + 62)) + a3->left;
      v12.m128_f32[0] = (float)(v20 * *((float *)this + 63)) + a3->top;
      v13.m128_f32[0] = (float)(v19 * *((float *)this + 64)) + a3->left;
      v14.m128_f32[0] = (float)(v20 * *((float *)this + 65)) + a3->top;
    }
    else
    {
      v11 = (__m128)*((unsigned int *)this + 62);
      v12 = (__m128)*((unsigned int *)this + 63);
      v13 = (__m128)*((unsigned int *)this + 64);
      v14 = (__m128)*((unsigned int *)this + 65);
    }
    v15 = v21;
    (*(void (__fastcall **)(struct ID2D1LinearGradientBrush *, unsigned __int64))(*(_QWORD *)v21 + 64LL))(
      v21,
      _mm_unpacklo_ps(v11, v12).m128_u64[0]);
    (*(void (__fastcall **)(struct ID2D1Brush *, unsigned __int64))(*(_QWORD *)v15 + 72LL))(
      v15,
      _mm_unpacklo_ps(v13, v14).m128_u64[0]);
    v16 = *((_QWORD *)this + 15);
    if ( v16 )
    {
      v23 = 0LL;
      si128 = 0LL;
      (*(void (__fastcall **)(__int64, float *, __m128i *))(*(_QWORD *)v16 + 216LL))(v16, &v19, &si128);
    }
    else
    {
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v23 = 0LL;
    }
    (*(void (__fastcall **)(struct ID2D1Brush *, __m128i *))(*(_QWORD *)v15 + 40LL))(v15, &si128);
    v17 = 0LL;
    *a4 = v15;
    v10 = 0;
  }
  if ( v17 )
    (*(void (__fastcall **)(struct ID2D1LinearGradientBrush *))(*(_QWORD *)v17 + 16LL))(v17);
  return v10;
}
