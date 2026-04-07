/*
 * XREFs of ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18001F900
 * Callers:
 *     ?GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@_NPEAVCGlassColorizationParameters@@@Z @ 0x18001F890 (-GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Col.c)
 * Callees:
 *     ?GetColorPrevalence@CDesktopManager@@QEAAKXZ @ 0x18001FF70 (-GetColorPrevalence@CDesktopManager@@QEAAKXZ.c)
 *     ?GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x1800203B0 (-GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x1800204DC (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?GetAccentColor@CDesktopManager@@QEAA_N_NPEAK@Z @ 0x1800204F0 (-GetAccentColor@CDesktopManager@@QEAA_N_NPEAK@Z.c)
 *     ?ColorDWFromStraightColorF@@YAKAEBU_D3DCOLORVALUE@@@Z @ 0x180056D10 (-ColorDWFromStraightColorF@@YAKAEBU_D3DCOLORVALUE@@@Z.c)
 *     floorf @ 0x18008EED0 (floorf.c)
 */

int __fastcall CGlassColorizationParameters::AdjustWindowColorization(_DWORD *a1, _DWORD *a2, float a3, __int16 a4)
{
  float v7; // xmm9_4
  float v8; // xmm10_4
  float v9; // xmm11_4
  float v10; // xmm14_4
  float v11; // xmm6_4
  float v12; // xmm12_4
  float v13; // xmm13_4
  unsigned int ColorPrevalence; // ebp
  _BOOL8 v15; // rsi
  unsigned int Color; // edx
  bool AccentColor; // al
  __int64 v18; // rcx
  DWORD SysColor; // ecx
  __m128i v20; // xmm9
  __m128i v21; // xmm10
  int v22; // eax
  float v23; // xmm2_4
  float v24; // xmm4_4
  float v25; // xmm8_4
  float v26; // xmm5_4
  float v27; // xmm6_4
  unsigned int v28; // xmm0_4
  unsigned int v29; // ecx
  float v30; // xmm0_4
  int v31; // ecx
  float v32; // xmm0_4
  unsigned int v33; // ecx
  float v34; // xmm0_4
  int result; // eax
  bool IsHighContrastMode; // al
  __int64 v37; // rcx
  int v38; // ebx
  __int64 v39; // rcx
  DWORD v40; // ecx
  int v41; // ecx
  unsigned int v42; // ebp
  unsigned int v43; // ebp
  unsigned int v44; // ebp
  float v45; // [rsp+2Ch] [rbp-BCh]
  struct _D3DCOLORVALUE v46; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v47; // [rsp+108h] [rbp+20h] BYREF

  *(struct _D3DCOLORVALUE *)&v46.r = 0LL;
  if ( (a4 & 0x30) != 0x30 )
  {
    v7 = (float)(unsigned __int8)*a2 / 255.0;
    v8 = (float)(unsigned __int8)BYTE1(*a2) / 255.0;
    v9 = (float)(unsigned __int8)BYTE2(*a2) / 255.0;
    v10 = (float)(unsigned __int8)BYTE2(*a1) / 255.0;
    v11 = (float)HIBYTE(*a2) / 255.0;
    v12 = (float)(unsigned __int8)*a1 / 255.0;
    v13 = (float)(unsigned __int8)BYTE1(*a1) / 255.0;
    if ( (a4 & 4) == 0 )
    {
LABEL_12:
      v45 = fmaxf(0.0, fminf(1.0, (float)(int)a1[3] / 100.0)) * (float)(1.0 - v11);
      v23 = fmaxf(0.0, fminf(1.0, (float)(int)a1[2] / 100.0)) * a3;
      v24 = (float)((float)(v11 * v7) * (float)(1.0 - v23)) + (float)(v23 * v12);
      v25 = (float)(v11 * (float)(1.0 - v23)) + v23;
      v26 = (float)((float)(v11 * v8) * (float)(1.0 - v23)) + (float)(v23 * v13);
      v27 = (float)((float)(v11 * v9) * (float)(1.0 - v23)) + (float)(v23 * v10);
      if ( v25 > 0.0 )
      {
        v24 = v24 / v25;
        v26 = v26 / v25;
        v27 = v27 / v25;
      }
      *(float *)&v28 = (float)(v25 * 255.0) + 6291456.25;
      v47 = v28;
      v29 = (v28 << 23) & 0xFF00FFFF;
      v30 = (float)(v27 * 255.0) + 6291456.25;
      v31 = (LODWORD(v30) << 15) | v29;
      v32 = (float)(v26 * 255.0) + 6291456.25;
      v33 = ((int)(LODWORD(v32) << 10) >> 3) | v31 & 0xFFFF00FF;
      v34 = (float)(v24 * 255.0) + 6291456.25;
      *a1 = ((int)(LODWORD(v34) << 10) >> 11) | v33 & 0xFFFFFF00;
      a1[2] = (int)floorf((float)(v25 * 100.0) + 0.5);
      a1[3] = (int)floorf((float)(v45 * 100.0) + 0.5);
      result = (int)floorf(0.5);
      a1[4] = result;
      return result;
    }
    ColorPrevalence = CDesktopManager::GetColorPrevalence(CDesktopManager::s_pDesktopManagerInstance);
    v15 = a4 & 1;
    if ( (a4 & 8) != 0 )
    {
      Color = 0;
      AccentColor = 0;
      v47 = 0;
      if ( (a4 & 0x160) == 0 && ColorPrevalence )
      {
        AccentColor = CDesktopManager::GetAccentColor(CDesktopManager::s_pDesktopManagerInstance, v15, &v47);
        Color = v47;
      }
      if ( (v15 || AccentColor) && ColorPrevalence )
      {
        if ( !Color )
        {
          if ( ColorPrevalence == 2 || (v42 = ColorPrevalence - 1) == 0 )
          {
            v39 = 4LL;
          }
          else
          {
            v43 = v42 - 2;
            if ( v43 )
            {
              v44 = v43 - 1;
              if ( v44 )
              {
                if ( v44 == 1 )
                  v39 = 1LL;
                else
                  v39 = 343LL;
              }
              else
              {
                v39 = 2LL;
              }
            }
            else
            {
              v39 = 3LL;
            }
          }
          Color = ColorCache::GetColor(v39);
        }
        goto LABEL_23;
      }
      if ( (a4 & 0x80u) != 0 )
      {
        v18 = 303LL;
        if ( (a4 & 2) == 0 )
          v18 = 312LL;
      }
      else
      {
        v18 = 343LL;
      }
      SysColor = ColorCache::GetColor(v18);
      v11 = FLOAT_1_0;
LABEL_10:
      v20 = _mm_cvtsi32_si128((unsigned __int8)SysColor);
      v21 = _mm_cvtsi32_si128(BYTE1(SysColor));
      v22 = BYTE2(SysColor);
LABEL_11:
      v8 = _mm_cvtepi32_ps(v21).m128_f32[0] / 255.0;
      v9 = (float)v22 / 255.0;
      v7 = _mm_cvtepi32_ps(v20).m128_f32[0] / 255.0;
      v10 = v9;
      v13 = v8;
      v12 = v7;
      goto LABEL_12;
    }
    if ( ColorPrevalence )
    {
      if ( (a4 & 1) != 0 )
      {
        a3 = FLOAT_1_0;
        v11 = FLOAT_1_0;
        goto LABEL_12;
      }
      a3 = FLOAT_0_2;
      if ( CDesktopManager::IsHighContrastMode() )
        SysColor = GetSysColor(15);
      else
        SysColor = -15263977;
      v11 = FLOAT_0_2;
      goto LABEL_10;
    }
    IsHighContrastMode = CDesktopManager::IsHighContrastMode();
    v38 = a4 & 0x80;
    if ( v38 )
    {
      if ( !IsHighContrastMode )
      {
        Color = dword_1800FB9D4[v37];
        goto LABEL_19;
      }
      v41 = dword_1800FCD0C[(int)v37];
      if ( v41 != 31 )
        goto LABEL_48;
      Color = 0;
    }
    else
    {
      if ( !IsHighContrastMode )
      {
        Color = dword_1800FB9A0[v15];
        goto LABEL_19;
      }
      v41 = dword_1800FCCD8[v15];
      if ( v41 != 31 )
      {
LABEL_48:
        Color = GetSysColor(v41);
        goto LABEL_19;
      }
      Color = 0;
    }
LABEL_19:
    if ( !*(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53) + 635LL) || v38 )
    {
      if ( v15 )
        a3 = FLOAT_0_60000002;
      else
        a3 = FLOAT_0_2;
    }
    else
    {
      a3 = FLOAT_0_14;
    }
    v11 = a3;
LABEL_23:
    v20 = _mm_cvtsi32_si128((unsigned __int8)Color);
    v21 = _mm_cvtsi32_si128(BYTE1(Color));
    v22 = BYTE2(Color);
    goto LABEL_11;
  }
  if ( CDesktopManager::IsHighContrastMode() )
    v40 = GetSysColor(5);
  else
    v40 = -16777216;
  v46.a = 1.0;
  v46.r = (float)(unsigned __int8)v40 / 255.0;
  v46.g = (float)BYTE1(v40) / 255.0;
  v46.b = (float)BYTE2(v40) / 255.0;
  result = ColorDWFromStraightColorF(&v46);
  *a1 = result;
  return result;
}
