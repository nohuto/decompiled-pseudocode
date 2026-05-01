/*
 * XREFs of s_OnDrawItemHelper @ 0x180660190
 * Callers:
 *     s_OnDrawItem @ 0x180660154 (s_OnDrawItem.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18003F62C (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?IsHighContrast@@YAHXZ @ 0x1801544B0 (-IsHighContrast@@YAHXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HVCZMTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801FE418 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HVCZMTest@@@details@wil@@QEAAX_NW4Reporti.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     floorf @ 0x1802D2F60 (floorf.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ?MulDiv@CRect@Geometry@@SA?AU12@AEBUtagRECT@@HH@Z @ 0x18051B4F0 (-MulDiv@CRect@Geometry@@SA-AU12@AEBUtagRECT@@HH@Z.c)
 *     ??0CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHDC__@@@Z @ 0x18065EF24 (--0CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18065EFEC (--1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SHComputeDPI@@YAXPEAUHWND__@@PEAH1@Z @ 0x18065F66C (-SHComputeDPI@@YAXPEAUHWND__@@PEAH1@Z.c)
 *     s_DrawGlyph @ 0x18065F850 (s_DrawGlyph.c)
 *     s_DrawThemeTextPPIAware @ 0x18065FB48 (s_DrawThemeTextPPIAware.c)
 *     s_SetDwmAttributes @ 0x180661198 (s_SetDwmAttributes.c)
 *     ?ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z @ 0x1806624F0 (-ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall s_OnDrawItemHelper(HWND a1, __int64 a2, __int64 a3)
{
  int ScaleFactorForWindow; // edi
  unsigned int v7; // r12d
  const WCHAR *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  HTHEME v11; // r14
  int v12; // edi
  unsigned int v13; // esi
  __int64 v14; // rdx
  HWND v15; // rax
  unsigned int PropW; // edi
  int v17; // r9d
  int v18; // r8d
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // ebx
  LONG v22; // edi
  int v23; // r14d
  LONG v24; // esi
  HWND v25; // rsi
  int v26; // r9d
  int v27; // r8d
  int v28; // ebx
  int v29; // eax
  int v30; // eax
  int v31; // r9d
  int v32; // r8d
  int v33; // ebx
  int v34; // eax
  int v35; // eax
  int v36; // r14d
  int v37; // eax
  int v38; // ebx
  int v39; // ebx
  void *v40; // rbx
  HWND v41; // rcx
  int v42; // eax
  int v43; // edi
  int v44; // r8d
  int v45; // ecx
  BOOL v46; // eax
  int v47; // ebx
  int v48; // edi
  int v49; // r9d
  int v50; // r8d
  __m128i v51; // xmm6
  int v52; // ebx
  int v53; // eax
  int v54; // r8d
  __int64 v55; // rdx
  int v56; // eax
  float v57; // xmm0_4
  char v59; // [rsp+68h] [rbp-A0h]
  int xLeft; // [rsp+6Ch] [rbp-9Ch]
  int xLefta; // [rsp+6Ch] [rbp-9Ch]
  int yTop; // [rsp+70h] [rbp-98h] BYREF
  int yTop_4; // [rsp+74h] [rbp-94h]
  __m128i yTop_8; // [rsp+78h] [rbp-90h] BYREF
  int nNumerator[2]; // [rsp+88h] [rbp-80h]
  int v66; // [rsp+90h] [rbp-78h] BYREF
  int v67; // [rsp+94h] [rbp-74h]
  COLORREF pColor; // [rsp+98h] [rbp-70h] BYREF
  HTHEME hTheme; // [rsp+A0h] [rbp-68h]
  _OWORD pv[2]; // [rsp+A8h] [rbp-60h] BYREF
  HGDIOBJ h; // [rsp+C8h] [rbp-40h]
  SHSTOCKICONINFO psii; // [rsp+D8h] [rbp-30h] BYREF
  HDC v73[2]; // [rsp+2F8h] [rbp+1F0h] BYREF
  MARGINS pMargins; // [rsp+308h] [rbp+200h] BYREF
  _BYTE v75[46]; // [rsp+318h] [rbp+210h] BYREF
  __int16 v76; // [rsp+346h] [rbp+23Eh]
  int v77; // [rsp+348h] [rbp+240h]

  *(_QWORD *)nNumerator = a1;
  ScaleFactorForWindow = -2147418113;
  if ( a3 )
  {
    v7 = 2;
    if ( MonitorFromWindow(a1, 2u) )
    {
      v66 = 0;
      ScaleFactorForWindow = GetScaleFactorForWindow(a1, &v66);
      if ( ScaleFactorForWindow >= 0 )
      {
        if ( *(_BYTE *)(a3 + 68) )
        {
          v8 = L"DarkMode_ImmersiveStart::Menu";
        }
        else
        {
          v8 = L"LightMode_ImmersiveStart::Menu";
          if ( !*(_BYTE *)(a3 + 69) )
            v8 = L"ImmersiveStart::Menu";
        }
        v11 = OpenThemeData(0LL, v8);
        hTheme = v11;
        if ( v11 )
        {
          v12 = *(_DWORD *)(a2 + 16);
          yTop_4 = v12;
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_HVCZMTest>::ReportUsage(
            `wil::Feature<__WilFeatureTraits_Feature_HVCZMTest>::GetImpl'::`2'::impl,
            1u,
            v9,
            v10);
          if ( !(unsigned int)IsHighContrast() )
            s_SetDwmAttributes(*(_QWORD *)(a2 + 24), v11);
          v13 = 6;
          if ( (*(_BYTE *)(a3 + 56) & 1) != 0 )
          {
            if ( *(_BYTE *)(a3 + 69) || (v14 = 2LL, (*(_BYTE *)(a3 + 56) & 4) != 0) )
              v14 = 6LL;
            *(_DWORD *)(a2 + 44) += DPIToPPIHelpers::ScaleByType(
                                      *(unsigned int *)(a3 + 60),
                                      v14,
                                      a1,
                                      *(unsigned int *)(a3 + 64));
          }
          if ( (*(_BYTE *)(a3 + 56) & 2) != 0 )
          {
            if ( !*(_BYTE *)(a3 + 69) && (*(_BYTE *)(a3 + 56) & 4) == 0 )
              v13 = 2;
            *(_DWORD *)(a2 + 52) -= DPIToPPIHelpers::ScaleByType(
                                      *(unsigned int *)(a3 + 60),
                                      v13,
                                      a1,
                                      *(unsigned int *)(a3 + 64));
          }
          if ( (v12 & 4) != 0 )
          {
            if ( (v12 & 1) != 0 && *(_QWORD *)a3 && **(_WORD **)a3 )
              v7 = 4;
            else
              v7 = 3;
          }
          else if ( (v12 & 1) == 0 || !*(_QWORD *)a3 || !**(_WORD **)a3 )
          {
            v7 = 1;
          }
          pMargins = 0LL;
          if ( GetThemeMargins(v11, *(HDC *)(a2 + 32), 27, v7, 3602, 0LL, &pMargins) >= 0 )
          {
            *(_DWORD *)(a2 + 40) += DPIToPPIHelpers::ScaleByType(
                                      *(unsigned int *)(a3 + 60),
                                      (unsigned int)pMargins.cxLeftWidth,
                                      a1,
                                      *(unsigned int *)(a3 + 64));
            *(_DWORD *)(a2 + 48) -= DPIToPPIHelpers::ScaleByType(
                                      *(unsigned int *)(a3 + 60),
                                      (unsigned int)pMargins.cxRightWidth,
                                      a1,
                                      *(unsigned int *)(a3 + 64));
          }
          v15 = WindowFromDC(*(HDC *)(a2 + 32));
          PropW = (unsigned int)GetPropW(v15, L"KB_FOCUS_MENU");
          if ( (unsigned int)IsHighContrast()
            || !IsThemePartDefined(v11, 26, 0)
            || !PropW
            || ((v7 - 2) & 0xFFFFFFFD) != 0 )
          {
            v17 = v7;
            v18 = 27;
          }
          else
          {
            v17 = 1;
            v18 = 26;
          }
          ScaleFactorForWindow = DrawThemeBackground(v11, *(HDC *)(a2 + 32), v18, v17, (LPCRECT)(a2 + 40), 0LL);
          if ( ScaleFactorForWindow < 0 )
            goto LABEL_98;
          if ( *(_QWORD *)a3 && **(_WORD **)a3 )
          {
            if ( *(_DWORD *)(a3 + 24) != 2048 )
            {
              v21 = *(_DWORD *)(a2 + 40);
              v22 = *(_DWORD *)(a2 + 44);
              v23 = *(_DWORD *)(a2 + 48);
              v24 = *(_DWORD *)(a2 + 52);
              yTop_8.m128i_i32[0] = v21
                                  + DPIToPPIHelpers::ScaleByType(
                                      *(unsigned int *)(a3 + 60),
                                      32LL,
                                      *(_QWORD *)nNumerator,
                                      *(unsigned int *)(a3 + 64));
              yTop_8.m128i_i32[1] = v22;
              yTop_8.m128i_i32[2] = v23
                                  - DPIToPPIHelpers::ScaleByType(
                                      *(unsigned int *)(a3 + 60),
                                      17LL,
                                      *(_QWORD *)nNumerator,
                                      *(unsigned int *)(a3 + 64));
              yTop_8.m128i_i32[3] = v24;
              v25 = *(HWND *)nNumerator;
              v11 = hTheme;
              ScaleFactorForWindow = s_DrawThemeTextPPIAware(hTheme, v7, *(__int64 *)nNumerator, a2, a3, &yTop_8);
              if ( ScaleFactorForWindow < 0 )
                goto LABEL_98;
              v67 = *(_DWORD *)(a2 + 52) - *(_DWORD *)(a2 + 44);
              if ( (yTop_4 & 8) == 0 || *(_QWORD *)(a3 + 40) )
              {
                if ( *(_DWORD *)(a3 + 28) == -1 )
                {
                  v40 = *(void **)(a3 + 32);
                  if ( !v40 && ((yTop_4 & 8) == 0 || (v40 = *(void **)(a3 + 40)) == 0LL) )
                  {
                    v40 = *(void **)(a3 + 48);
                    if ( !v40 )
                      goto LABEL_87;
                  }
                  memset(pv, 0, sizeof(pv));
                  ScaleFactorForWindow = -2147467259;
                  if ( !GetObjectW(v40, 32, pv) )
                    goto LABEL_98;
                  Microsoft::WRL::Wrappers::CompatibleDC::CompatibleDC(
                    (Microsoft::WRL::Wrappers::CompatibleDC *)&yTop_8,
                    *(HDC *)(a2 + 32));
                  if ( yTop_8.m128i_i64[1]
                    || (ScaleFactorForWindow = ResultFromKnownLastError(), ScaleFactorForWindow >= 0) )
                  {
                    v41 = (HWND)(unsigned int)DPIToPPIHelpers::ScaleByType(
                                                *(unsigned int *)(a3 + 60),
                                                16LL,
                                                v25,
                                                *(unsigned int *)(a3 + 64));
                    v42 = DWORD2(pv[0]);
                    xLefta = DWORD2(pv[0]);
                    v43 = DWORD1(pv[0]);
                    v59 = 0;
                    if ( SDWORD2(pv[0]) > (int)v41 || SDWORD1(pv[0]) > (int)v41 )
                    {
                      nNumerator[0] = *(_DWORD *)(a3 + 64);
                      yTop = 0;
                      SHComputeDPI(v41, &yTop, 0LL);
                      if ( yTop <= nNumerator[0] )
                      {
                        v42 = xLefta;
                      }
                      else
                      {
                        v59 = 1;
                        v43 = MulDiv(v43, nNumerator[0], yTop);
                        v42 = MulDiv(xLefta, nNumerator[0], yTop);
                        xLefta = v42;
                      }
                    }
                    yTop = *(_DWORD *)(a2 + 44);
                    yTop_4 = yTop + v42;
                    v44 = DPIToPPIHelpers::ScaleByType(
                            *(unsigned int *)(a3 + 60),
                            16LL,
                            v25,
                            *(unsigned int *)(a3 + 64));
                    if ( v44 > v43 )
                    {
                      v59 = 1;
                      v44 = 2 * v44 - v43;
                    }
                    v45 = (v67 - xLefta) / 2;
                    nNumerator[0] = v44 / 2;
                    yTop_4 += v45;
                    yTop += v45;
                    pColor = 0;
                    GetThemeColor(v11, 27, v7, 3803, &pColor);
                    v73[0] = (HDC)yTop_8.m128i_i64[1];
                    h = SelectObject((HDC)yTop_8.m128i_i64[1], v40);
                    memset_0(v75, 0, 0x68uLL);
                    if ( GetObjectW(v40, 104, v75) == 104 && v76 == 32 && !v77 )
                    {
                      v46 = GdiAlphaBlend(
                              *(HDC *)(a2 + 32),
                              nNumerator[0],
                              yTop,
                              v43,
                              yTop_4 - yTop,
                              (HDC)yTop_8.m128i_i64[1],
                              0,
                              0,
                              SDWORD1(pv[0]),
                              SDWORD2(pv[0]),
                              (BLENDFUNCTION)33488896);
                    }
                    else
                    {
                      v47 = yTop_4 - yTop;
                      if ( v59 )
                      {
                        SetStretchBltMode(*(HDC *)(a2 + 32), 3);
                        v46 = StretchBlt(
                                *(HDC *)(a2 + 32),
                                nNumerator[0],
                                yTop,
                                v43,
                                v47,
                                (HDC)yTop_8.m128i_i64[1],
                                0,
                                0,
                                SDWORD1(pv[0]),
                                SDWORD2(pv[0]),
                                0xCC0020u);
                      }
                      else
                      {
                        v46 = BitBlt(
                                *(HDC *)(a2 + 32),
                                nNumerator[0],
                                yTop,
                                v43,
                                yTop_4 - yTop,
                                (HDC)yTop_8.m128i_i64[1],
                                0,
                                0,
                                0xCC0020u);
                      }
                    }
                    if ( v46 )
                      ScaleFactorForWindow = 0;
                    else
                      ScaleFactorForWindow = ResultFromKnownLastError();
                    SelectObject(v73[0], h);
                  }
                  Microsoft::WRL::Wrappers::CompatibleDC::~CompatibleDC((Microsoft::WRL::Wrappers::CompatibleDC *)&yTop_8);
                }
                else
                {
                  *(__m128i *)v73 = _mm_load_si128((const __m128i *)&_xmm);
                  if ( *(_DWORD *)(a3 + 60) == 1 )
                  {
                    v31 = 100;
                    v32 = v66;
                  }
                  else
                  {
                    v31 = 96;
                    v32 = *(_DWORD *)(a3 + 64);
                  }
                  *(_OWORD *)v73 = *(_OWORD *)Geometry::CRect::MulDiv(yTop_8.m128i_i32, (int *)v73, v32, v31);
                  v33 = *(_DWORD *)(a2 + 44);
                  v34 = DPIToPPIHelpers::ScaleByType(*(unsigned int *)(a3 + 60), 16LL, v25, *(unsigned int *)(a3 + 64));
                  v35 = v67 / 2 - v34 / 2;
                  v36 = v33 + v35 + HIDWORD(v73[1]);
                  yTop_4 = v33 + HIDWORD(v73[0]) + v35;
                  if ( *(_DWORD *)(a3 + 60) )
                  {
                    v38 = (int)v73[1];
                    xLeft = (int)v73[0];
                  }
                  else
                  {
                    v37 = (int)DPIToPPIHelpers::ScaleByType(0LL, 16LL, v25, *(unsigned int *)(a3 + 64)) / 2;
                    xLeft = v37 + LODWORD(v73[0]);
                    v38 = v37 + LODWORD(v73[1]);
                  }
                  memset_0(&psii.cbSize + 1, 0, 0x21CuLL);
                  psii.cbSize = 544;
                  v39 = v38 - xLeft;
                  if ( SHGetStockIconInfo(*(SHSTOCKICONID *)(a3 + 28), (v39 < 24) + 256, &psii) < 0 )
                    goto LABEL_87;
                  ScaleFactorForWindow = 0;
                  if ( DrawIconEx(*(HDC *)(a2 + 32), xLeft, yTop_4, psii.hIcon, v39, v36 - yTop_4, 0, 0LL, 3u) )
                    goto LABEL_87;
                  ScaleFactorForWindow = ResultFromKnownLastError();
                  v11 = hTheme;
                }
              }
              else
              {
                *(__m128i *)v73 = _mm_load_si128((const __m128i *)&_xmm);
                if ( *(_DWORD *)(a3 + 60) == 1 )
                {
                  v26 = 100;
                  v27 = v66;
                }
                else
                {
                  v26 = 96;
                  v27 = *(_DWORD *)(a3 + 64);
                }
                *(_OWORD *)v73 = *(_OWORD *)Geometry::CRect::MulDiv(yTop_8.m128i_i32, (int *)v73, v27, v26);
                v28 = *(_DWORD *)(a2 + 44);
                v29 = DPIToPPIHelpers::ScaleByType(*(unsigned int *)(a3 + 60), 16LL, v25, *(unsigned int *)(a3 + 64));
                v30 = v67 / 2 - v29 / 2;
                HIDWORD(v73[1]) += v28 + v30;
                HIDWORD(v73[0]) += v28 + v30;
                yTop_8 = *(__m128i *)v73;
                ScaleFactorForWindow = s_DrawGlyph(
                                         v25,
                                         *(_DWORD *)(a3 + 64),
                                         v11,
                                         *(HDC *)(a2 + 32),
                                         11,
                                         *(_DWORD *)(a3 + 24),
                                         v7,
                                         (struct tagRECT *)&yTop_8,
                                         *(_DWORD *)(a3 + 60));
              }
              if ( ScaleFactorForWindow >= 0 )
              {
LABEL_87:
                if ( (*(_BYTE *)(a3 + 24) & 0x10) != 0 )
                {
                  yTop_8 = _mm_load_si128((const __m128i *)&_xmm);
                  v48 = *(_DWORD *)(a2 + 48)
                      - DPIToPPIHelpers::ScaleByType(*(unsigned int *)(a3 + 60), 28LL, v25, *(unsigned int *)(a3 + 64));
                  if ( *(_DWORD *)(a3 + 60) == 1 )
                  {
                    v49 = 100;
                    v50 = v66;
                  }
                  else
                  {
                    v49 = 96;
                    v50 = *(_DWORD *)(a3 + 64);
                  }
                  v51 = *(__m128i *)Geometry::CRect::MulDiv((int *)v73, yTop_8.m128i_i32, v50, v49);
                  v52 = *(_DWORD *)(a2 + 44);
                  v53 = DPIToPPIHelpers::ScaleByType(*(unsigned int *)(a3 + 60), 16LL, v25, *(unsigned int *)(a3 + 64));
                  v54 = v67 / 2 - v53 / 2;
                  yTop_8.m128i_i32[0] = v48 + v51.m128i_i32[0];
                  yTop_8.m128i_i32[1] = v52 + v54 + _mm_cvtsi128_si32(_mm_srli_si128(v51, 4));
                  yTop_8.m128i_i32[2] = v48 + _mm_srli_si128(v51, 8).m128i_u32[0];
                  yTop_8.m128i_i32[3] = v52 + _mm_cvtsi128_si32(_mm_srli_si128(v51, 12)) + v54;
                  v11 = hTheme;
                  ScaleFactorForWindow = s_DrawGlyph(
                                           v25,
                                           *(_DWORD *)(a3 + 64),
                                           hTheme,
                                           *(HDC *)(a2 + 32),
                                           16,
                                           *(_DWORD *)(a3 + 24),
                                           v7,
                                           (struct tagRECT *)&yTop_8,
                                           *(_DWORD *)(a3 + 60));
                }
                else
                {
                  v11 = hTheme;
                }
              }
LABEL_98:
              ExcludeClipRect(
                *(HDC *)(a2 + 32),
                *(_DWORD *)(a2 + 40),
                *(_DWORD *)(a2 + 44),
                *(_DWORD *)(a2 + 48),
                *(_DWORD *)(a2 + 52));
              CloseThemeData(v11);
              return (unsigned int)ScaleFactorForWindow;
            }
          }
          else if ( *(_DWORD *)(a3 + 24) != 2048 )
          {
            goto LABEL_98;
          }
          v73[0] = *(HDC *)(a2 + 40);
          v73[1] = *(HDC *)(a2 + 48);
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_HVCZMTest>::ReportUsage(
            `wil::Feature<__WilFeatureTraits_Feature_HVCZMTest>::GetImpl'::`2'::impl,
            1u,
            v19,
            v20);
          if ( *(_BYTE *)(a3 + 69) || (v55 = 7LL, (*(_BYTE *)(a3 + 56) & 4) != 0) )
            v55 = 9LL;
          v56 = DPIToPPIHelpers::ScaleByType(*(unsigned int *)(a3 + 60), v55, a1, *(unsigned int *)(a3 + 64));
          v57 = floorf((double)(v56 - 5) * 0.5);
          HIDWORD(v73[0]) += (int)v57;
          --HIDWORD(v73[1]);
          DrawThemeBackground(v11, *(HDC *)(a2 + 32), 15, v7, (LPCRECT)v73, 0LL);
          goto LABEL_98;
        }
      }
    }
  }
  return (unsigned int)ScaleFactorForWindow;
}
