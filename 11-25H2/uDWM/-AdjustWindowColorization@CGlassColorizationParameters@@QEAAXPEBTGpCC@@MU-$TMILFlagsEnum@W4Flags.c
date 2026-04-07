/*
 * XREFs of ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18000EAE0
 * Callers:
 *     ?GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@_NPEAVCGlassColorizationParameters@@@Z @ 0x18000EA70 (-GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Col.c)
 * Callees:
 *     PacksRGBColor @ 0x18000F100 (PacksRGBColor.c)
 *     NormalizesRGBColor @ 0x18000F1C0 (NormalizesRGBColor.c)
 *     ?GetColorPrevalence@CDesktopManager@@QEAAKXZ @ 0x18000F220 (-GetColorPrevalence@CDesktopManager@@QEAAKXZ.c)
 *     ?GetAccentColor@CDesktopManager@@QEAA_N_NPEAK@Z @ 0x18000F4A4 (-GetAccentColor@CDesktopManager@@QEAA_N_NPEAK@Z.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x18000F520 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180038010 (-GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     floorf @ 0x18009B6C4 (floorf.c)
 */

__int64 __fastcall CGlassColorizationParameters::AdjustWindowColorization(int *a1, __int64 a2, float a3, __int16 a4)
{
  __int64 v7; // r8
  unsigned int ColorPrevalence; // r14d
  _BOOL8 v9; // rsi
  unsigned int Color; // edx
  bool AccentColor; // al
  __int64 v12; // rcx
  __int64 v13; // rax
  float v14; // xmm14_4
  __m128i v15; // xmm10
  __m128i v16; // xmm11
  int v17; // eax
  float v18; // xmm10_4
  float v19; // xmm12_4
  float v20; // xmm11_4
  float v21; // xmm6_4
  float v22; // xmm4_4
  float v23; // xmm5_4
  float v24; // xmm8_4
  float v25; // xmm2_4
  float v26; // xmm4_4
  float v27; // xmm7_4
  float v28; // xmm5_4
  float v29; // xmm6_4
  __int64 result; // rax
  bool IsHighContrastMode; // al
  __int64 v32; // rcx
  int v33; // ebx
  DWORD v34; // edx
  DWORD SysColor; // ecx
  DWORD v36; // ecx
  __int64 v37; // rcx
  int v38; // ecx
  unsigned int v39; // r14d
  unsigned int v40; // r14d
  unsigned int v41; // r14d
  __int128 v42; // [rsp+28h] [rbp-69h] BYREF
  __int128 v43; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v44; // [rsp+110h] [rbp+7Fh] BYREF

  v43 = 0LL;
  v42 = 0LL;
  if ( (a4 & 0x30) != 0x30 )
  {
    NormalizesRGBColor(a2, &v43, a2);
    NormalizesRGBColor(a1, &v42, v7);
    if ( (a4 & 4) == 0 )
    {
      v21 = *((float *)&v43 + 2);
      v23 = *((float *)&v43 + 1);
      v22 = *(float *)&v43;
      v19 = *((float *)&v42 + 2);
      v20 = *((float *)&v42 + 1);
      v18 = *(float *)&v42;
LABEL_12:
      v14 = *((float *)&v43 + 3);
      goto LABEL_13;
    }
    ColorPrevalence = CDesktopManager::GetColorPrevalence(CDesktopManager::s_pDesktopManagerInstance);
    v9 = a4 & 1;
    if ( (a4 & 8) != 0 )
    {
      Color = 0;
      AccentColor = 0;
      v44 = 0;
      if ( (a4 & 0x160) == 0 && ColorPrevalence )
      {
        AccentColor = CDesktopManager::GetAccentColor(CDesktopManager::s_pDesktopManagerInstance, v9, &v44);
        Color = v44;
      }
      if ( (v9 || AccentColor) && ColorPrevalence )
      {
        if ( !Color )
        {
          if ( ColorPrevalence == 2 || (v39 = ColorPrevalence - 1) == 0 )
          {
            v37 = 4LL;
          }
          else
          {
            v40 = v39 - 2;
            if ( v40 )
            {
              v41 = v40 - 1;
              if ( v41 )
              {
                if ( v41 == 1 )
                  v37 = 1LL;
                else
                  v37 = 343LL;
              }
              else
              {
                v37 = 2LL;
              }
            }
            else
            {
              v37 = 3LL;
            }
          }
          Color = ColorCache::GetColor(v37);
        }
        v18 = (float)(unsigned __int8)Color / 255.0;
        v19 = (float)BYTE2(Color) / 255.0;
        v20 = (float)BYTE1(Color) / 255.0;
        v21 = v19;
        v22 = v18;
        v23 = v20;
        goto LABEL_12;
      }
      if ( (a4 & 0x80u) != 0 )
      {
        v12 = 303LL;
        if ( (a4 & 2) == 0 )
          v12 = 312LL;
      }
      else
      {
        v12 = 343LL;
      }
      v13 = ColorCache::GetColor(v12);
      v14 = FLOAT_1_0;
      v15 = _mm_cvtsi32_si128((unsigned __int8)v13);
      v16 = _mm_cvtsi32_si128(BYTE1(v13));
      v17 = BYTE2(v13);
LABEL_10:
      v18 = _mm_cvtepi32_ps(v15).m128_f32[0] / 255.0;
      v19 = (float)v17 / 255.0;
      v20 = _mm_cvtepi32_ps(v16).m128_f32[0] / 255.0;
      v21 = v19;
      v22 = v18;
      v23 = v20;
LABEL_13:
      v24 = fmaxf(0.0, fminf(1.0, (float)a1[3] / 100.0)) * (float)(1.0 - v14);
      v25 = fmaxf(0.0, fminf(1.0, (float)a1[2] / 100.0)) * a3;
      v26 = (float)((float)(v22 * v14) * (float)(1.0 - v25)) + (float)(v25 * v18);
      v27 = (float)((float)(1.0 - v25) * v14) + v25;
      v28 = (float)((float)(v23 * v14) * (float)(1.0 - v25)) + (float)(v25 * v20);
      v29 = (float)((float)(v21 * v14) * (float)(1.0 - v25)) + (float)(v25 * v19);
      *(_QWORD *)&v43 = __PAIR64__(LODWORD(v28), LODWORD(v26));
      *((_QWORD *)&v43 + 1) = __PAIR64__(LODWORD(v27), LODWORD(v29));
      if ( v27 > 0.0 )
      {
        *(float *)&v43 = v26 / v27;
        *((float *)&v43 + 1) = v28 / v27;
        *((float *)&v43 + 2) = v29 / v27;
      }
      PacksRGBColor(&v43, a1);
      a1[2] = (int)floorf((float)(v27 * 100.0) + 0.5);
      a1[3] = (int)floorf((float)(v24 * 100.0) + 0.5);
      result = (unsigned int)(int)floorf(0.5);
      a1[4] = result;
      return result;
    }
    if ( ColorPrevalence )
    {
      if ( (a4 & 1) != 0 )
      {
        v21 = *((float *)&v43 + 2);
        a3 = FLOAT_1_0;
        v23 = *((float *)&v43 + 1);
        v14 = FLOAT_1_0;
        v22 = *(float *)&v43;
        v19 = *((float *)&v42 + 2);
        v20 = *((float *)&v42 + 1);
        v18 = *(float *)&v42;
        goto LABEL_13;
      }
      if ( CDesktopManager::IsHighContrastMode() )
        SysColor = GetSysColor(15);
      else
        SysColor = -15263977;
      a3 = FLOAT_0_2;
      v14 = FLOAT_0_2;
      v15 = _mm_cvtsi32_si128((unsigned __int8)SysColor);
      v16 = _mm_cvtsi32_si128(BYTE1(SysColor));
      v17 = BYTE2(SysColor);
      goto LABEL_10;
    }
    IsHighContrastMode = CDesktopManager::IsHighContrastMode();
    v33 = a4 & 0x80;
    if ( v33 )
    {
      if ( !IsHighContrastMode )
      {
        v34 = dword_1801000B4[v32];
        goto LABEL_20;
      }
      v38 = dword_1801013EC[v32];
      if ( v38 != 31 )
        goto LABEL_49;
      v34 = 0;
    }
    else
    {
      if ( !IsHighContrastMode )
      {
        v34 = dword_180100080[v9];
        goto LABEL_20;
      }
      v38 = dword_1801013B8[v9];
      if ( v38 != 31 )
      {
LABEL_49:
        v34 = GetSysColor(v38);
        goto LABEL_20;
      }
      v34 = 0;
    }
LABEL_20:
    if ( !*(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53) + 635LL) || v33 )
    {
      if ( v9 )
        a3 = FLOAT_0_60000002;
      else
        a3 = FLOAT_0_2;
    }
    else
    {
      a3 = FLOAT_0_14;
    }
    v14 = a3;
    v15 = _mm_cvtsi32_si128((unsigned __int8)v34);
    v16 = _mm_cvtsi32_si128(BYTE1(v34));
    v17 = BYTE2(v34);
    goto LABEL_10;
  }
  if ( CDesktopManager::IsHighContrastMode() )
    v36 = GetSysColor(5);
  else
    v36 = -16777216;
  HIDWORD(v42) = 1065353216;
  *(float *)&v42 = (float)(unsigned __int8)v36 / 255.0;
  *((float *)&v42 + 1) = (float)BYTE1(v36) / 255.0;
  *((float *)&v42 + 2) = (float)BYTE2(v36) / 255.0;
  return PacksRGBColor(&v42, a1);
}
