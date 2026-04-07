/*
 * XREFs of ?LoadThemeBorderParameters@CThumbnailVisual@@AEAAJXZ @ 0x1800C9DA4
 * Callers:
 *     ?Initialize@CThumbnailVisual@@MEAAJXZ @ 0x1800846E0 (-Initialize@CThumbnailVisual@@MEAAJXZ.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180005198 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?ColorFFromColorDW@@YA?AU_D3DCOLORVALUE@@K@Z @ 0x18004E190 (-ColorFFromColorDW@@YA-AU_D3DCOLORVALUE@@K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CThumbnailVisual::LoadThemeBorderParameters(__m128i *this)
{
  void *Theme; // rsi
  HRESULT ThemeColor; // ebx
  __int64 v4; // rdx
  __int64 result; // rax
  __m128i v6; // xmm2
  unsigned int v7; // eax
  __m128i v8; // xmm0
  struct _D3DCOLORVALUE v9; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  COLORREF pColor; // [rsp+58h] [rbp+10h] BYREF
  int piVal; // [rsp+60h] [rbp+18h] BYREF

  pColor = 0;
  piVal = 0;
  Theme = (void *)CDesktopManager::GetTheme(0);
  ThemeColor = GetThemeColor(Theme, 63, 0, 3801, &pColor);
  if ( ThemeColor < 0 )
  {
    v4 = 1152LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"clientcore\\windows\\dwm\\udwm\\thumbnailvisual.cpp",
      (const char *)(unsigned int)ThemeColor);
    return (unsigned int)ThemeColor;
  }
  ThemeColor = GetThemeInt(Theme, 63, 0, 2403, &this[26].m128i_i32[3]);
  if ( ThemeColor < 0 )
  {
    v4 = 1153LL;
    goto LABEL_3;
  }
  ThemeColor = GetThemeInt(Theme, 63, 0, 2402, &piVal);
  if ( ThemeColor < 0 )
  {
    v4 = 1154LL;
    goto LABEL_3;
  }
  v6 = _mm_loadu_si128((const __m128i *)ColorFFromColorDW(&v9, pColor));
  v7 = (unsigned __int8)piVal;
  this[31] = v6;
  v8 = _mm_cvtsi32_si128(v7);
  result = 0LL;
  *(float *)&this[31].m128i_i32[3] = _mm_cvtepi32_ps(v8).m128_f32[0] / 255.0;
  return result;
}
