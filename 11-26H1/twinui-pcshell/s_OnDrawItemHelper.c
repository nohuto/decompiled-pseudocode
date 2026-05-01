/*
 * XREFs of s_OnDrawItemHelper @ 0x18068626C
 * Callers:
 *     s_OnDrawItem @ 0x180686230 (s_OnDrawItem.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180042238 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?IsHighContrast@@YAHXZ @ 0x1801E0D10 (-IsHighContrast@@YAHXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HVCZMTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801F2F0C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HVCZMTest@@@details@wil@@QEAAX_NW4Reporti.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     floorf @ 0x1802C9E30 (floorf.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?MulDiv@CRect@Geometry@@SA?AU12@AEBUtagRECT@@HH@Z @ 0x18053E340 (-MulDiv@CRect@Geometry@@SA-AU12@AEBUtagRECT@@HH@Z.c)
 *     ??0CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHDC__@@@Z @ 0x1806852A4 (--0CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180685374 (--1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SHComputeDPI@@YAXPEAUHWND__@@PEAH1@Z @ 0x180685778 (-SHComputeDPI@@YAXPEAUHWND__@@PEAH1@Z.c)
 *     s_DrawGlyph @ 0x180685920 (s_DrawGlyph.c)
 *     s_DrawThemeTextPPIAware @ 0x180685C1C (s_DrawThemeTextPPIAware.c)
 *     s_SetDwmAttributes @ 0x18068722C (s_SetDwmAttributes.c)
 *     ?ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z @ 0x180688608 (-ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall s_OnDrawItemHelper(HWND a1, __int64 a2, __int64 a3)
{
  int ScaleFactorForWindow; // edi
  unsigned int v7; // r12d
  const WCHAR *v8; // rdx
  __int64 v9; // r8
  int v10; // edi
  unsigned int v11; // eax
  HTHEME v12; // rdi
  HWND v13; // rax
  unsigned int PropW; // ebx
  int v15; // r9d
  int v16; // r8d
  __int64 v17; // r8
  int v18; // ebx
  LONG v19; // edi
  int v20; // r14d
  LONG v21; // esi
  HWND v22; // rsi
  HTHEME v23; // r14
  int v24; // r9d
  int v25; // r8d
  int v26; // ebx
  int v27; // eax
  int v28; // eax
  int Error; // eax
  int v30; // r9d
  int v31; // r8d
  int v32; // ebx
  int v33; // eax
  int v34; // eax
  int v35; // r14d
  int v36; // eax
  int v37; // ebx
  int v38; // ebx
  void *v39; // rbx
  int v40; // eax
  int v41; // r14d
  int v42; // edi
  int v43; // eax
  BOOL v44; // eax
  HDC v45; // rcx
  int v46; // edi
  int v47; // r9d
  int v48; // r8d
  __m128i v49; // xmm6
  int v50; // ebx
  int v51; // eax
  int v52; // r9d
  __int64 v53; // rdx
  int v54; // eax
  float v55; // xmm0_4
  char v57; // [rsp+68h] [rbp-A0h]
  int xLeft; // [rsp+6Ch] [rbp-9Ch] BYREF
  int yTop; // [rsp+70h] [rbp-98h]
  __m128i yTop_8; // [rsp+78h] [rbp-90h] BYREF
  int v61; // [rsp+88h] [rbp-80h] BYREF
  int v62; // [rsp+8Ch] [rbp-7Ch]
  int yoriginDest[2]; // [rsp+90h] [rbp-78h]
  HTHEME hTheme; // [rsp+98h] [rbp-70h]
  COLORREF pColor; // [rsp+A0h] [rbp-68h] BYREF
  _OWORD pv[2]; // [rsp+A8h] [rbp-60h] BYREF
  HGDIOBJ h; // [rsp+C8h] [rbp-40h]
  SHSTOCKICONINFO psii; // [rsp+D8h] [rbp-30h] BYREF
  HDC v69[2]; // [rsp+2F8h] [rbp+1F0h] BYREF
  MARGINS pMargins; // [rsp+308h] [rbp+200h] BYREF
  _BYTE v71[46]; // [rsp+318h] [rbp+210h] BYREF
  __int16 v72; // [rsp+346h] [rbp+23Eh]
  int v73; // [rsp+348h] [rbp+240h]

  *(_QWORD *)yoriginDest = a1;
  ScaleFactorForWindow = -2147418113;
  if ( a3 )
  {
    v7 = 2;
    if ( MonitorFromWindow(a1, 2u) )
    {
      v61 = 0;
      ScaleFactorForWindow = GetScaleFactorForWindow(a1, &v61);
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
        hTheme = OpenThemeData(0LL, v8);
        if ( hTheme )
        {
          v10 = *(_DWORD *)(a2 + 16);
          yTop = v10;
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_HVCZMTest>::ReportUsage(
            `wil::Feature<__WilFeatureTraits_Feature_HVCZMTest>::GetImpl'::`2'::impl,
            1u,
            v9);
          if ( !(unsigned int)IsHighContrast() )
            s_SetDwmAttributes(*(_QWORD *)(a2 + 24), hTheme);
          v11 = 6;
          if ( (*(_BYTE *)(a3 + 56) & 1) != 0 )
          {
            if ( !*(_BYTE *)(a3 + 69) && (*(_BYTE *)(a3 + 56) & 4) == 0 )
              v11 = 2;
            *(_DWORD *)(a2 + 44) += DPIToPPIHelpers::ScaleByType(
                                      *(unsigned int *)(a3 + 60),
                                      v11,
                                      a1,
                                      *(unsigned int *)(a3 + 64));
            v11 = 6;
          }
          if ( (*(_BYTE *)(a3 + 56) & 2) != 0 )
          {
            if ( !*(_BYTE *)(a3 + 69) && (*(_BYTE *)(a3 + 56) & 4) == 0 )
              v11 = 2;
            *(_DWORD *)(a2 + 52) -= DPIToPPIHelpers::ScaleByType(
                                      *(unsigned int *)(a3 + 60),
                                      v11,
                                      a1,
                                      *(unsigned int *)(a3 + 64));
          }
          if ( (v10 & 4) != 0 )
          {
            if ( (v10 & 1) != 0 && *(_QWORD *)a3 && **(_WORD **)a3 )
              v7 = 4;
            else
              v7 = 3;
          }
          else if ( (v10 & 1) == 0 || !*(_QWORD *)a3 || !**(_WORD **)a3 )
          {
            v7 = 1;
          }
          pMargins = 0LL;
          v12 = hTheme;
          if ( GetThemeMargins(hTheme, *(HDC *)(a2 + 32), 27, v7, 3602, 0LL, &pMargins) >= 0 )
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
          v13 = WindowFromDC(*(HDC *)(a2 + 32));
          PropW = (unsigned int)GetPropW(v13, L"KB_FOCUS_MENU");
          if ( (unsigned int)IsHighContrast()
            || !IsThemePartDefined(v12, 26, 0)
            || !PropW
            || ((v7 - 2) & 0xFFFFFFFD) != 0 )
          {
            v15 = v7;
            v16 = 27;
          }
          else
          {
            v15 = 1;
            v16 = 26;
          }
          ScaleFactorForWindow = DrawThemeBackground(v12, *(HDC *)(a2 + 32), v16, v15, (LPCRECT)(a2 + 40), 0LL);
          if ( ScaleFactorForWindow < 0 )
            goto LABEL_101;
          if ( *(_QWORD *)a3 && **(_WORD **)a3 )
          {
            if ( *(_DWORD *)(a3 + 24) != 2048 )
            {
              v18 = *(_DWORD *)(a2 + 40);
              v19 = *(_DWORD *)(a2 + 44);
              v20 = *(_DWORD *)(a2 + 48);
              v21 = *(_DWORD *)(a2 + 52);
              yTop_8.m128i_i32[0] = DPIToPPIHelpers::ScaleByType(
                                      *(unsigned int *)(a3 + 60),
                                      32LL,
                                      *(_QWORD *)yoriginDest,
                                      *(unsigned int *)(a3 + 64))
                                  + v18;
              yTop_8.m128i_i32[1] = v19;
              yTop_8.m128i_i32[2] = v20
                                  - DPIToPPIHelpers::ScaleByType(
                                      *(unsigned int *)(a3 + 60),
                                      17LL,
                                      *(_QWORD *)yoriginDest,
                                      *(unsigned int *)(a3 + 64));
              yTop_8.m128i_i32[3] = v21;
              v22 = *(HWND *)yoriginDest;
              v23 = hTheme;
              ScaleFactorForWindow = s_DrawThemeTextPPIAware(hTheme, v7, *(__int64 *)yoriginDest, a2, a3, &yTop_8);
              if ( ScaleFactorForWindow < 0 )
                goto LABEL_101;
              v62 = *(_DWORD *)(a2 + 52) - *(_DWORD *)(a2 + 44);
              if ( (yTop & 8) == 0 || *(_QWORD *)(a3 + 40) )
              {
                if ( *(_DWORD *)(a3 + 28) == -1 )
                {
                  v39 = *(void **)(a3 + 32);
                  if ( !v39 && ((yTop & 8) == 0 || (v39 = *(void **)(a3 + 40)) == 0LL) )
                  {
                    v39 = *(void **)(a3 + 48);
                    if ( !v39 )
                    {
LABEL_91:
                      if ( (*(_BYTE *)(a3 + 24) & 0x10) != 0 )
                      {
                        yTop_8 = _mm_load_si128((const __m128i *)&_xmm);
                        v46 = *(_DWORD *)(a2 + 48)
                            - DPIToPPIHelpers::ScaleByType(
                                *(unsigned int *)(a3 + 60),
                                28LL,
                                v22,
                                *(unsigned int *)(a3 + 64));
                        if ( *(_DWORD *)(a3 + 60) == 1 )
                        {
                          v47 = 100;
                          v48 = v61;
                        }
                        else
                        {
                          v47 = 96;
                          v48 = *(_DWORD *)(a3 + 64);
                        }
                        v49 = *(__m128i *)Geometry::CRect::MulDiv((int *)v69, yTop_8.m128i_i32, v48, v47);
                        v50 = *(_DWORD *)(a2 + 44);
                        v51 = DPIToPPIHelpers::ScaleByType(
                                *(unsigned int *)(a3 + 60),
                                16LL,
                                v22,
                                *(unsigned int *)(a3 + 64));
                        v52 = v62 / 2 - v51 / 2;
                        yTop_8.m128i_i32[0] = v49.m128i_i32[0] + v46;
                        yTop_8.m128i_i32[1] = v50 + v52 + v49.m128i_i32[1];
                        v49.m128i_i64[0] = _mm_srli_si128(v49, 8).m128i_u64[0];
                        yTop_8.m128i_i32[2] = v49.m128i_i32[0] + v46;
                        yTop_8.m128i_i32[3] = v50 + v52 + v49.m128i_i32[1];
                        ScaleFactorForWindow = s_DrawGlyph(
                                                 v22,
                                                 *(_DWORD *)(a3 + 64),
                                                 v23,
                                                 *(HDC *)(a2 + 32),
                                                 16,
                                                 *(_DWORD *)(a3 + 24),
                                                 v7,
                                                 (struct tagRECT *)&yTop_8,
                                                 *(_DWORD *)(a3 + 60));
                      }
                      goto LABEL_101;
                    }
                  }
                  memset(pv, 0, sizeof(pv));
                  ScaleFactorForWindow = -2147467259;
                  if ( !GetObjectW(v39, 32, pv) )
                    goto LABEL_101;
                  Microsoft::WRL::Wrappers::CompatibleDC::CompatibleDC(
                    (Microsoft::WRL::Wrappers::CompatibleDC *)&yTop_8,
                    *(HDC *)(a2 + 32));
                  if ( yTop_8.m128i_i64[1] )
                    ScaleFactorForWindow = 0;
                  else
                    ScaleFactorForWindow = ResultFromKnownLastError();
                  if ( ScaleFactorForWindow >= 0 )
                  {
                    v40 = DPIToPPIHelpers::ScaleByType(
                            *(unsigned int *)(a3 + 60),
                            16LL,
                            v22,
                            *(unsigned int *)(a3 + 64));
                    v41 = DWORD2(pv[0]);
                    v42 = DWORD1(pv[0]);
                    v57 = 0;
                    if ( SDWORD2(pv[0]) > v40 || SDWORD1(pv[0]) > v40 )
                    {
                      yTop = *(_DWORD *)(a3 + 64);
                      xLeft = 0;
                      SHComputeDPI(0LL, &xLeft, 0LL);
                      if ( xLeft > yTop )
                      {
                        v57 = 1;
                        v42 = MulDiv(v42, yTop, xLeft);
                        v41 = MulDiv(v41, yTop, xLeft);
                      }
                    }
                    yoriginDest[0] = *(_DWORD *)(a2 + 44);
                    v43 = DPIToPPIHelpers::ScaleByType(
                            *(unsigned int *)(a3 + 60),
                            16LL,
                            v22,
                            *(unsigned int *)(a3 + 64));
                    if ( v43 > v42 )
                    {
                      v57 = 1;
                      v43 = 2 * v43 - v42;
                    }
                    yTop = v43 / 2;
                    yoriginDest[0] += (v62 - v41) / 2;
                    pColor = 0;
                    GetThemeColor(hTheme, 27, v7, 3803, &pColor);
                    v69[0] = (HDC)yTop_8.m128i_i64[1];
                    h = SelectObject((HDC)yTop_8.m128i_i64[1], v39);
                    memset_0(v71, 0, 0x68uLL);
                    if ( GetObjectW(v39, 104, v71) == 104 && v72 == 32 && !v73 )
                    {
                      xLeft = 33488896;
                      v44 = GdiAlphaBlend(
                              *(HDC *)(a2 + 32),
                              yTop,
                              yoriginDest[0],
                              v42,
                              v41,
                              (HDC)yTop_8.m128i_i64[1],
                              0,
                              0,
                              SDWORD1(pv[0]),
                              SDWORD2(pv[0]),
                              (BLENDFUNCTION)33488896);
                    }
                    else
                    {
                      v45 = *(HDC *)(a2 + 32);
                      if ( v57 )
                      {
                        SetStretchBltMode(v45, 3);
                        v44 = StretchBlt(
                                *(HDC *)(a2 + 32),
                                yTop,
                                yoriginDest[0],
                                v42,
                                v41,
                                (HDC)yTop_8.m128i_i64[1],
                                0,
                                0,
                                SDWORD1(pv[0]),
                                SDWORD2(pv[0]),
                                0xCC0020u);
                      }
                      else
                      {
                        v44 = BitBlt(v45, yTop, yoriginDest[0], v42, v41, (HDC)yTop_8.m128i_i64[1], 0, 0, 0xCC0020u);
                      }
                    }
                    if ( v44 )
                      ScaleFactorForWindow = 0;
                    else
                      ScaleFactorForWindow = ResultFromKnownLastError();
                    SelectObject(v69[0], h);
                  }
                  Microsoft::WRL::Wrappers::CompatibleDC::~CompatibleDC((Microsoft::WRL::Wrappers::CompatibleDC *)&yTop_8);
LABEL_89:
                  if ( ScaleFactorForWindow >= 0 )
                  {
LABEL_90:
                    v23 = hTheme;
                    goto LABEL_91;
                  }
LABEL_101:
                  ExcludeClipRect(
                    *(HDC *)(a2 + 32),
                    *(_DWORD *)(a2 + 40),
                    *(_DWORD *)(a2 + 44),
                    *(_DWORD *)(a2 + 48),
                    *(_DWORD *)(a2 + 52));
                  CloseThemeData(hTheme);
                  return (unsigned int)ScaleFactorForWindow;
                }
                *(__m128i *)v69 = _mm_load_si128((const __m128i *)&_xmm);
                if ( *(_DWORD *)(a3 + 60) == 1 )
                {
                  v30 = 100;
                  v31 = v61;
                }
                else
                {
                  v30 = 96;
                  v31 = *(_DWORD *)(a3 + 64);
                }
                *(_OWORD *)v69 = *(_OWORD *)Geometry::CRect::MulDiv(yTop_8.m128i_i32, (int *)v69, v31, v30);
                v32 = *(_DWORD *)(a2 + 44);
                v33 = DPIToPPIHelpers::ScaleByType(*(unsigned int *)(a3 + 60), 16LL, v22, *(unsigned int *)(a3 + 64));
                v34 = v62 / 2 - v33 / 2;
                v35 = v32 + v34 + HIDWORD(v69[1]);
                yTop = v32 + HIDWORD(v69[0]) + v34;
                if ( *(_DWORD *)(a3 + 60) )
                {
                  v37 = (int)v69[1];
                  xLeft = (int)v69[0];
                }
                else
                {
                  v36 = (int)DPIToPPIHelpers::ScaleByType(0LL, 16LL, v22, *(unsigned int *)(a3 + 64)) / 2;
                  xLeft = v36 + LODWORD(v69[0]);
                  v37 = v36 + LODWORD(v69[1]);
                }
                memset_0(&psii.cbSize + 1, 0, 0x21CuLL);
                psii.cbSize = 544;
                v38 = v37 - xLeft;
                if ( SHGetStockIconInfo(*(SHSTOCKICONID *)(a3 + 28), (v38 < 24) + 256, &psii) < 0 )
                  goto LABEL_90;
                if ( DrawIconEx(*(HDC *)(a2 + 32), xLeft, yTop, psii.hIcon, v38, v35 - yTop, 0, 0LL, 3u) )
                {
                  ScaleFactorForWindow = 0;
                  goto LABEL_89;
                }
                Error = ResultFromKnownLastError();
              }
              else
              {
                *(__m128i *)v69 = _mm_load_si128((const __m128i *)&_xmm);
                if ( *(_DWORD *)(a3 + 60) == 1 )
                {
                  v24 = 100;
                  v25 = v61;
                }
                else
                {
                  v24 = 96;
                  v25 = *(_DWORD *)(a3 + 64);
                }
                *(_OWORD *)v69 = *(_OWORD *)Geometry::CRect::MulDiv(yTop_8.m128i_i32, (int *)v69, v25, v24);
                v26 = *(_DWORD *)(a2 + 44);
                v27 = DPIToPPIHelpers::ScaleByType(*(unsigned int *)(a3 + 60), 16LL, v22, *(unsigned int *)(a3 + 64));
                v28 = v62 / 2 - v27 / 2;
                HIDWORD(v69[1]) += v26 + v28;
                HIDWORD(v69[0]) += v26 + v28;
                yTop_8 = *(__m128i *)v69;
                Error = s_DrawGlyph(
                          v22,
                          *(_DWORD *)(a3 + 64),
                          v23,
                          *(HDC *)(a2 + 32),
                          11,
                          *(_DWORD *)(a3 + 24),
                          v7,
                          (struct tagRECT *)&yTop_8,
                          *(_DWORD *)(a3 + 60));
              }
              ScaleFactorForWindow = Error;
              goto LABEL_89;
            }
          }
          else if ( *(_DWORD *)(a3 + 24) != 2048 )
          {
            goto LABEL_101;
          }
          v69[0] = *(HDC *)(a2 + 40);
          v69[1] = *(HDC *)(a2 + 48);
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_HVCZMTest>::ReportUsage(
            `wil::Feature<__WilFeatureTraits_Feature_HVCZMTest>::GetImpl'::`2'::impl,
            1u,
            v17);
          if ( *(_BYTE *)(a3 + 69) || (v53 = 7LL, (*(_BYTE *)(a3 + 56) & 4) != 0) )
            v53 = 9LL;
          v54 = DPIToPPIHelpers::ScaleByType(*(unsigned int *)(a3 + 60), v53, a1, *(unsigned int *)(a3 + 64));
          v55 = floorf((double)(v54 - 5) * 0.5);
          HIDWORD(v69[0]) += (int)v55;
          --HIDWORD(v69[1]);
          DrawThemeBackground(hTheme, *(HDC *)(a2 + 32), 15, v7, (LPCRECT)v69, 0LL);
          goto LABEL_101;
        }
      }
    }
  }
  return (unsigned int)ScaleFactorForWindow;
}
