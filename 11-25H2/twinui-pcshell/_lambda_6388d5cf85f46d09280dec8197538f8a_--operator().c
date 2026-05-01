/*
 * XREFs of _lambda_6388d5cf85f46d09280dec8197538f8a_::operator() @ 0x1804BDA6C
 * Callers:
 *     LambdaCustomPaintProc__lambda_6388d5cf85f46d09280dec8197538f8a__ID2D1DeviceContext___ @ 0x1804BD7E0 (LambdaCustomPaintProc__lambda_6388d5cf85f46d09280dec8197538f8a__ID2D1DeviceContext___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180158B8C (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?CreateSolidColorBrush@ID2D1RenderTarget@@QEAAJAEBU_D3DCOLORVALUE@@PEAPEAUID2D1SolidColorBrush@@@Z @ 0x1804ADFA8 (-CreateSolidColorBrush@ID2D1RenderTarget@@QEAAJAEBU_D3DCOLORVALUE@@PEAPEAUID2D1SolidColorBrush@@.c)
 *     ?DrawTextW@ID2D1RenderTarget@@QEAAXPEBGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@PEAUID2D1Brush@@W4D2D1_DRAW_TEXT_OPTIONS@@W4DWRITE_MEASURING_MODE@@@Z @ 0x1804AE0DC (-DrawTextW@ID2D1RenderTarget@@QEAAXPEBGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@PEAUID2D1Brush@@W.c)
 *     ??B?$HighContrastAwareOpacity@M@@QEBAMXZ @ 0x1804B7918 (--B-$HighContrastAwareOpacity@M@@QEBAMXZ.c)
 *     ?DrawInsetRect@MultitaskingViewUtils@@YAXPEAUID2D1DeviceContext@@AEAUD2D_RECT_F@@PEAUID2D1SolidColorBrush@@H@Z @ 0x1804BCF14 (-DrawInsetRect@MultitaskingViewUtils@@YAXPEAUID2D1DeviceContext@@AEAUD2D_RECT_F@@PEAUID2D1SolidC.c)
 *     ??$_GetStateBasedValue@UGlyphButtonStateMetrics@@@CMultitaskingViewButtonElement@@IEAAAEAUGlyphButtonStateMetrics@@AEAU1@00@Z @ 0x1804BD960 (--$_GetStateBasedValue@UGlyphButtonStateMetrics@@@CMultitaskingViewButtonElement@@IEAAAEAUGlyphB.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_6388d5cf85f46d09280dec8197538f8a_::operator()(__int64 *a1, ID2D1RenderTarget *a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rdi
  __int64 StateBased; // rax
  __m128i v8; // xmm7
  __int64 v9; // xmm0_8
  int v10; // eax
  struct D2D_RECT_F *v11; // rbx
  float v12; // xmm0_4
  __int64 Color; // rax
  struct D2D_RECT_F *v14; // rbx
  float v15; // xmm0_4
  __int64 v16; // rax
  unsigned int v17; // r8d
  struct D2D_RECT_F *v19; // [rsp+48h] [rbp-39h] BYREF
  __m128i v20; // [rsp+50h] [rbp-31h] BYREF
  __int64 v21; // [rsp+60h] [rbp-21h] BYREF
  int v22; // [rsp+68h] [rbp-19h]
  struct _D3DCOLORVALUE v23; // [rsp+70h] [rbp-11h] BYREF
  struct D2D_RECT_F v24; // [rsp+80h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v24.left = 0.0;
  v24.top = 0.0;
  v24.right = (float)(int)a3;
  v24.bottom = (float)SHIDWORD(a3);
  v19 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
  *(struct _D3DCOLORVALUE *)&v23.r = (struct _D3DCOLORVALUE)_xmm;
  v5 = ID2D1RenderTarget::CreateSolidColorBrush(a2, &v23, (struct ID2D1SolidColorBrush **)&v19);
  if ( v5 >= 0 )
  {
    v6 = *a1;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v6 + 216) + 40LL))(v6 + 216) )
    {
      StateBased = CMultitaskingViewButtonElement::_GetStateBasedValue<GlyphButtonStateMetrics>(
                     v6,
                     v6 + 252,
                     v6 + 280,
                     v6 + 308);
      v8 = *(__m128i *)StateBased;
      v9 = *(_QWORD *)(StateBased + 16);
      v10 = *(_DWORD *)(StateBased + 24);
    }
    else
    {
      v8 = *(__m128i *)(v6 + 336);
      v9 = *(_QWORD *)(v6 + 352);
      v10 = *(_DWORD *)(v6 + 360);
    }
    v22 = v10;
    v21 = v9;
    v20 = v8;
    v11 = v19;
    v12 = HighContrastAwareOpacity<float>::operator float((float *)&v20.m128i_i32[2]);
    Color = CImmersiveColor::GetColor(_mm_cvtsi128_si32(_mm_srli_si128(v8, 4)));
    v23.r = (float)(unsigned __int8)Color / 255.0;
    v23.g = (float)(unsigned __int8)((unsigned __int16)(Color & 0xFF00) >> 8) / 255.0;
    v23.b = (float)BYTE2(Color) / 255.0;
    v23.a = v12;
    (*(void (__fastcall **)(struct D2D_RECT_F *, struct _D3DCOLORVALUE *))(*(_QWORD *)&v11->left + 64LL))(v11, &v23);
    (*(void (__fastcall **)(ID2D1RenderTarget *, struct D2D_RECT_F *, struct D2D_RECT_F *))(*(_QWORD *)a2 + 136LL))(
      a2,
      &v24,
      v19);
    v14 = v19;
    v15 = HighContrastAwareOpacity<float>::operator float((float *)&v21 + 1);
    v16 = CImmersiveColor::GetColor(v21);
    v23.r = (float)(unsigned __int8)v16 / 255.0;
    v23.g = (float)(unsigned __int8)((unsigned __int16)(v16 & 0xFF00) >> 8) / 255.0;
    v23.b = (float)BYTE2(v16) / 255.0;
    v23.a = v15;
    (*(void (__fastcall **)(struct D2D_RECT_F *, struct _D3DCOLORVALUE *))(*(_QWORD *)&v14->left + 64LL))(v14, &v23);
    ID2D1RenderTarget::DrawTextW(
      a2,
      (const unsigned __int16 *)(v6 + 232),
      1LL,
      *(struct IDWriteTextFormat **)(v6 + 368),
      &v24,
      (struct ID2D1Brush *)v19);
    v17 = CImmersiveColor::GetColor(_mm_cvtsi128_si32(v8));
    if ( *(_DWORD *)(v6 + 244) && HIBYTE(v17) )
    {
      v23.r = (float)(unsigned __int8)v17 / 255.0;
      v23.g = (float)(unsigned __int8)((unsigned __int16)(v17 & 0xFF00) >> 8) / 255.0;
      v23.b = (float)BYTE2(v17) / 255.0;
      v23.a = (float)HIBYTE(v17) / 255.0;
      (*(void (__fastcall **)(struct D2D_RECT_F *, struct _D3DCOLORVALUE *))(*(_QWORD *)&v19->left + 64LL))(v19, &v23);
      MultitaskingViewUtils::DrawInsetRect(
        a2,
        (const __m128i *)&v24,
        v19,
        (struct ID2D1SolidColorBrush *)*(unsigned int *)(v6 + 244));
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
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
}
