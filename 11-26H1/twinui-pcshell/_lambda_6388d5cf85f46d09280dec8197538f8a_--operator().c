/*
 * XREFs of _lambda_6388d5cf85f46d09280dec8197538f8a_::operator() @ 0x1804CF914
 * Callers:
 *     LambdaCustomPaintProc__lambda_6388d5cf85f46d09280dec8197538f8a__ID2D1DeviceContext___ @ 0x1804CF680 (LambdaCustomPaintProc__lambda_6388d5cf85f46d09280dec8197538f8a__ID2D1DeviceContext___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x18016DB4C (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?CreateSolidColorBrush@ID2D1RenderTarget@@QEAAJAEBU_D3DCOLORVALUE@@PEAPEAUID2D1SolidColorBrush@@@Z @ 0x1804BFB68 (-CreateSolidColorBrush@ID2D1RenderTarget@@QEAAJAEBU_D3DCOLORVALUE@@PEAPEAUID2D1SolidColorBrush@@.c)
 *     ?DrawTextW@ID2D1RenderTarget@@QEAAXPEBGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@PEAUID2D1Brush@@W4D2D1_DRAW_TEXT_OPTIONS@@W4DWRITE_MEASURING_MODE@@@Z @ 0x1804BFC9C (-DrawTextW@ID2D1RenderTarget@@QEAAXPEBGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@PEAUID2D1Brush@@W.c)
 *     ??B?$HighContrastAwareOpacity@M@@QEBAMXZ @ 0x1804C96D8 (--B-$HighContrastAwareOpacity@M@@QEBAMXZ.c)
 *     ?DrawInsetRect@MultitaskingViewUtils@@YAXPEAUID2D1DeviceContext@@AEAUD2D_RECT_F@@PEAUID2D1SolidColorBrush@@H@Z @ 0x1804CEDA4 (-DrawInsetRect@MultitaskingViewUtils@@YAXPEAUID2D1DeviceContext@@AEAUD2D_RECT_F@@PEAUID2D1SolidC.c)
 *     ??$_GetStateBasedValue@UGlyphButtonStateMetrics@@@CMultitaskingViewButtonElement@@IEAAAEAUGlyphButtonStateMetrics@@AEAU1@00@Z @ 0x1804CF808 (--$_GetStateBasedValue@UGlyphButtonStateMetrics@@@CMultitaskingViewButtonElement@@IEAAAEAUGlyphB.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_6388d5cf85f46d09280dec8197538f8a_::operator()(__int64 *a1, ID2D1RenderTarget *a2, __int64 a3)
{
  int v5; // eax
  char v6; // al
  __int64 v7; // rcx
  __int64 StateBased; // rax
  __m128i v9; // xmm7
  __int64 v10; // xmm0_8
  int v11; // eax
  struct D2D_RECT_F *v12; // rbx
  float v13; // xmm6_4
  int Color; // eax
  struct D2D_RECT_F *v15; // rbx
  float v16; // xmm6_4
  int v17; // eax
  unsigned int v18; // r9d
  struct D2D_RECT_F *v20; // [rsp+48h] [rbp-39h] BYREF
  __m128i v21; // [rsp+50h] [rbp-31h] BYREF
  __int64 v22; // [rsp+60h] [rbp-21h] BYREF
  int v23; // [rsp+68h] [rbp-19h]
  struct _D3DCOLORVALUE v24; // [rsp+70h] [rbp-11h] BYREF
  struct D2D_RECT_F v25; // [rsp+80h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  *(_QWORD *)&v25.left = 0LL;
  v25.right = (float)(int)a3;
  v25.bottom = (float)SHIDWORD(a3);
  v20 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
  *(struct _D3DCOLORVALUE *)&v24.r = (struct _D3DCOLORVALUE)_mm_load_si128((const __m128i *)&_xmm);
  v5 = ID2D1RenderTarget::CreateSolidColorBrush(a2, &v24, (struct ID2D1SolidColorBrush **)&v20);
  if ( v5 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*a1 + 216) + 40LL))(*a1 + 216);
    v7 = *a1;
    if ( v6 )
    {
      StateBased = CMultitaskingViewButtonElement::_GetStateBasedValue<GlyphButtonStateMetrics>(
                     v7,
                     v7 + 252,
                     v7 + 280,
                     v7 + 308);
      v9 = *(__m128i *)StateBased;
      v10 = *(_QWORD *)(StateBased + 16);
      v11 = *(_DWORD *)(StateBased + 24);
    }
    else
    {
      v9 = *(__m128i *)(v7 + 336);
      v10 = *(_QWORD *)(v7 + 352);
      v11 = *(_DWORD *)(v7 + 360);
    }
    v23 = v11;
    v22 = v10;
    v21 = v9;
    v12 = v20;
    v13 = HighContrastAwareOpacity<float>::operator float((float *)&v21.m128i_i32[2]);
    Color = CImmersiveColor::GetColor(_mm_cvtsi128_si32(_mm_srli_si128(v9, 4)));
    v24.r = (float)(unsigned __int8)Color / 255.0;
    v24.g = (float)BYTE1(Color) / 255.0;
    v24.b = (float)BYTE2(Color) / 255.0;
    v24.a = v13;
    (*(void (__fastcall **)(struct D2D_RECT_F *, struct _D3DCOLORVALUE *))(*(_QWORD *)&v12->left + 64LL))(v12, &v24);
    (*(void (__fastcall **)(ID2D1RenderTarget *, struct D2D_RECT_F *, struct D2D_RECT_F *))(*(_QWORD *)a2 + 136LL))(
      a2,
      &v25,
      v20);
    v15 = v20;
    v16 = HighContrastAwareOpacity<float>::operator float((float *)&v22 + 1);
    v17 = CImmersiveColor::GetColor(v22);
    v24.r = (float)(unsigned __int8)v17 / 255.0;
    v24.g = (float)BYTE1(v17) / 255.0;
    v24.b = (float)BYTE2(v17) / 255.0;
    v24.a = v16;
    (*(void (__fastcall **)(struct D2D_RECT_F *, struct _D3DCOLORVALUE *))(*(_QWORD *)&v15->left + 64LL))(v15, &v24);
    ID2D1RenderTarget::DrawTextW(
      a2,
      (const unsigned __int16 *)(*a1 + 232),
      1LL,
      *(struct IDWriteTextFormat **)(*a1 + 368),
      &v25,
      (struct ID2D1Brush *)v20);
    v18 = CImmersiveColor::GetColor(_mm_cvtsi128_si32(v9));
    if ( *(_DWORD *)(*a1 + 244) && HIBYTE(v18) )
    {
      v24.r = (float)(unsigned __int8)v18 / 255.0;
      v24.g = (float)BYTE1(v18) / 255.0;
      v24.b = (float)BYTE2(v18) / 255.0;
      v24.a = (float)HIBYTE(v18) / 255.0;
      (*(void (__fastcall **)(struct D2D_RECT_F *, struct _D3DCOLORVALUE *))(*(_QWORD *)&v20->left + 64LL))(v20, &v24);
      MultitaskingViewUtils::DrawInsetRect(
        a2,
        (const __m128i *)&v25,
        v20,
        (struct ID2D1SolidColorBrush *)*(unsigned int *)(*a1 + 244));
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA3,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\glyphbuttonelement.cpp",
      (const char *)(unsigned int)v5);
  }
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
}
