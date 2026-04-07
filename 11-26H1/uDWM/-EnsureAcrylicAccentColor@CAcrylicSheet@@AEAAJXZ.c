/*
 * XREFs of ?EnsureAcrylicAccentColor@CAcrylicSheet@@AEAAJXZ @ 0x180095924
 * Callers:
 *     ?ValidateVisual@CAcrylicSheet@@EEAAJXZ @ 0x18005DD70 (-ValidateVisual@CAcrylicSheet@@EEAAJXZ.c)
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x18005E6A8 (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 * Callees:
 *     ?ConfigureAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAXAEBUACCENT_POLICY@@KPEBN@Z @ 0x180093B8C (-ConfigureAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAXAEBUACCENT_POLICY@@KPEBN@Z.c)
 */

__int64 __fastcall CAcrylicSheet::EnsureAcrylicAccentColor(CAcrylicSheet *this)
{
  __m128d v1; // xmm1
  double *v2; // r9
  int v3; // r8d
  const struct ACCENT_POLICY *v4; // rdx
  CAccentAcrylicBlurBehind *v5; // rcx

  if ( *((_BYTE *)this + 353) )
    v1 = *(__m128d *)&CAcrylicSheet::COLOR_LIGHT;
  else
    v1 = (__m128d)CAcrylicSheet::COLOR_DARK;
  v2 = (double *)((char *)this + 376);
  v3 = _mm_cvtsi128_si32((__m128i)v1);
  v4 = (CAcrylicSheet *)((char *)this + 360);
  *((_DWORD *)this + 92) = v3;
  v5 = (CAccentAcrylicBlurBehind *)*((_QWORD *)this + 26);
  *(_QWORD *)v2 = *(_OWORD *)&_mm_unpackhi_pd(v1, v1);
  *(_DWORD *)v4 = 4;
  if ( v5 )
    CAccentAcrylicBlurBehind::ConfigureAcrylicBlurBehind(v5, v4, v3, v2);
  return 0LL;
}
