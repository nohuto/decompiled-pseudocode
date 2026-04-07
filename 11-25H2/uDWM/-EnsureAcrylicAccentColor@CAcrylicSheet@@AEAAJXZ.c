/*
 * XREFs of ?EnsureAcrylicAccentColor@CAcrylicSheet@@AEAAJXZ @ 0x18006D710
 * Callers:
 *     ?ValidateVisual@CAcrylicSheet@@EEAAJXZ @ 0x1800360B0 (-ValidateVisual@CAcrylicSheet@@EEAAJXZ.c)
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x18006CE4C (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@KPEBN@Z @ 0x1800A0530 (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@KPEBN@Z.c)
 */

__int64 __fastcall CAcrylicSheet::EnsureAcrylicAccentColor(CAcrylicSheet *this)
{
  double *v1; // r9
  __m128d *v2; // rax
  const struct ACCENT_POLICY *v3; // rdx
  __m128d v4; // xmm1
  unsigned int v5; // r8d
  CAccentAcrylicBlurBehind *v6; // rcx
  int updated; // eax
  unsigned int v8; // ebx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (double *)((char *)this + 440);
  v2 = (__m128d *)&CAcrylicSheet::COLOR_LIGHT;
  if ( !*((_BYTE *)this + 417) )
    v2 = (__m128d *)&CAcrylicSheet::COLOR_DARK;
  v3 = (CAcrylicSheet *)((char *)this + 424);
  v4 = *v2;
  *((_DWORD *)this + 106) = 4;
  v5 = _mm_cvtsi128_si32((__m128i)v4);
  *(_QWORD *)v1 = *(_OWORD *)&_mm_unpackhi_pd(v4, v4);
  *((_DWORD *)this + 108) = v5;
  v6 = (CAccentAcrylicBlurBehind *)*((_QWORD *)this + 33);
  if ( !v6 )
    return 0LL;
  updated = CAccentAcrylicBlurBehind::UpdateAcrylicBlurBehind(v6, v3, v5, v1);
  v8 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x50,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
    (const char *)(unsigned int)updated,
    v10);
  return v8;
}
