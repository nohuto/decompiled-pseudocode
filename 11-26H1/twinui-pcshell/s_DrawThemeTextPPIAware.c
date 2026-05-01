/*
 * XREFs of s_DrawThemeTextPPIAware @ 0x180685C1C
 * Callers:
 *     s_OnDrawItemHelper @ 0x18068626C (s_OnDrawItemHelper.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180042238 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18006002C (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Release@?$CTSmartObj@PEAUHFONT__@@V?$CAutoHandle_Policy@PEAUHFONT__@@@@@@QEAAXXZ @ 0x1801FEA3C (-Release@-$CTSmartObj@PEAUHFONT__@@V-$CAutoHandle_Policy@PEAUHFONT__@@@@@@QEAAXXZ.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802AF344 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??0CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHDC__@@@Z @ 0x1806852A4 (--0CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180685374 (--1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalClose@?$HandleT@UHBITMAPTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@MEAA_NXZ @ 0x1806856F0 (-InternalClose@-$HandleT@UHBITMAPTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Micro.c)
 *     ?DrawThemeTextExPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEAUtagRECT@@PEAU_DTTOPTS@@@Z @ 0x180688254 (-DrawThemeTextExPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEA.c)
 *     ?GetThemeTextExtentPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEAU_DTTOPTS@@PEAUtagRECT@@7@Z @ 0x180688394 (-GetThemeTextExtentPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHK.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall s_DrawThemeTextPPIAware(HTHEME hTheme, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __m128i *a6)
{
  HDC v8; // rcx
  signed int Error; // ebx
  __int32 v10; // edi
  __int32 v11; // ebx
  HBITMAP v12; // rax
  HDC v13; // r13
  __m128i v14; // xmm0
  int v15; // ebx
  int v16; // edi
  int v17; // eax
  __int16 *v18; // r13
  void *v19; // r9
  __int64 v20; // rbx
  __int16 *v21; // rcx
  unsigned int v22; // esi
  __int16 i; // ax
  HDC v24; // r12
  signed int LastError; // eax
  _BYTE v27[8]; // [rsp+78h] [rbp-88h] BYREF
  HDC hdc; // [rsp+80h] [rbp-80h]
  HTHEME v29; // [rsp+88h] [rbp-78h]
  __int64 v30; // [rsp+90h] [rbp-70h]
  __int128 v31; // [rsp+98h] [rbp-68h]
  void **v32; // [rsp+A8h] [rbp-58h] BYREF
  HBITMAP v33; // [rsp+B0h] [rbp-50h]
  void *ppvBits; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v35; // [rsp+C0h] [rbp-40h]
  HGDIOBJ h; // [rsp+C8h] [rbp-38h]
  HDC v37; // [rsp+D0h] [rbp-30h]
  void *v38[2]; // [rsp+D8h] [rbp-28h] BYREF
  HGDIOBJ v39; // [rsp+E8h] [rbp-18h]
  int v40; // [rsp+F0h] [rbp-10h]
  int v41[19]; // [rsp+F4h] [rbp-Ch] BYREF
  int v42; // [rsp+140h] [rbp+40h]
  int v43; // [rsp+144h] [rbp+44h]
  int v44; // [rsp+148h] [rbp+48h]
  int v45; // [rsp+14Ch] [rbp+4Ch]
  BITMAPINFO pbmi; // [rsp+150h] [rbp+50h] BYREF
  LOGFONTW pFont; // [rsp+180h] [rbp+80h] BYREF
  int pvParam; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v49[220]; // [rsp+1E4h] [rbp+E4h] BYREF
  LOGFONTW v50; // [rsp+2C0h] [rbp+1C0h]

  v35 = a4;
  v30 = a3;
  v29 = hTheme;
  Microsoft::WRL::Wrappers::CompatibleDC::CompatibleDC((Microsoft::WRL::Wrappers::CompatibleDC *)v27, *(HDC *)(a4 + 32));
  v8 = hdc;
  if ( hdc )
  {
    Error = 0;
  }
  else
  {
    Error = ResultFromKnownLastError();
    v8 = hdc;
  }
  if ( Error < 0 )
    goto LABEL_42;
  memset(&pbmi.bmiHeader.biSizeImage, 0, 24);
  pbmi.bmiHeader.biSize = 44;
  v10 = a6->m128i_i32[0];
  pbmi.bmiHeader.biWidth = a6->m128i_i32[2] - a6->m128i_i32[0];
  v11 = a6->m128i_i32[1];
  pbmi.bmiHeader.biHeight = v11 - a6->m128i_i32[3];
  *(_QWORD *)&pbmi.bmiHeader.biPlanes = 2097153LL;
  ppvBits = 0LL;
  v12 = CreateDIBSection(v8, &pbmi, 0, &ppvBits, 0LL, 0);
  v32 = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HBITMAPTraits>::`vftable';
  v33 = v12;
  if ( !v12 )
  {
    Error = -2147024882;
    goto LABEL_37;
  }
  v13 = hdc;
  v37 = hdc;
  v38[1] = hdc;
  v39 = SelectObject(hdc, v12);
  v14 = *a6;
  v15 = -v11;
  v16 = -v10;
  v42 = v16 + _mm_cvtsi128_si32(*a6);
  v44 = v16 + v14.m128i_i32[2];
  v45 = v15 + v14.m128i_i32[3];
  v43 = v15 + v14.m128i_i32[1];
  memset_0(v49, 0, 0x1F4uLL);
  pvParam = 504;
  if ( SystemParametersInfoW(0x29u, 0x1F8u, &pvParam, 0) )
    Error = 0;
  else
    Error = ResultFromKnownLastError();
  if ( Error >= 0 )
  {
    v40 = 72;
    memset_0(v41, 0, 0x44uLL);
    memset_0(&pFont, 0, sizeof(pFont));
    if ( GetThemeFont(hTheme, hdc, 27, 0, 210, &pFont) < 0 )
    {
      pFont = v50;
      v17 = v41[0];
    }
    else
    {
      v17 = v41[0] | 0x40;
      v41[0] |= 0x40u;
      if ( v50.lfHeight <= 0 )
      {
        if ( v50.lfHeight >= pFont.lfHeight )
          goto LABEL_17;
      }
      else if ( v50.lfHeight <= pFont.lfHeight )
      {
        goto LABEL_17;
      }
      pFont.lfHeight = v50.lfHeight;
    }
LABEL_17:
    if ( (*(_BYTE *)(a4 + 16) & 0x20) != 0 )
    {
      pFont.lfWeight = 700;
      v41[0] = v17 | 0x40;
    }
    v38[0] = CreateFontIndirectW(&pFont);
    if ( !v38[0] )
    {
      Error = -2147467259;
      goto LABEL_34;
    }
    v18 = *(__int16 **)a5;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount((_QWORD *)a5);
    v20 = *(_QWORD *)(a5 + 8);
    *(_QWORD *)&v31 = v20;
    v21 = v18;
    v22 = 0;
    for ( i = *v18; i && i != 9; i = *v21 )
    {
      ++v21;
      ++v22;
    }
    v24 = hdc;
    h = SelectObject(hdc, v19);
    if ( v22 )
    {
      Error = DPIToPPIHelpers::DrawThemeTextExPPI(v30, *(unsigned int *)(a5 + 60), a5 + 64, v29, hdc);
      if ( Error < 0 )
      {
LABEL_32:
        SelectObject(v24, h);
        v13 = v37;
LABEL_34:
        CTSmartObj<HFONT__ *,CAutoHandle_Policy<HFONT__ *>>::Release(v38);
        goto LABEL_35;
      }
      v20 = v31;
    }
    if ( v22 >= (unsigned __int64)(v20 - 1)
      || (v31 = 0LL,
          Error = DPIToPPIHelpers::GetThemeTextExtentPPI(v30, *(unsigned int *)(a5 + 60), a5 + 64, v29, hdc),
          Error >= 0)
      && (v42 = v44 + v31 - DWORD2(v31),
          Error = DPIToPPIHelpers::DrawThemeTextExPPI(v30, *(unsigned int *)(a5 + 60), a5 + 64, v29, hdc),
          Error >= 0) )
    {
      Error = 0;
      if ( !GdiAlphaBlend(
              *(HDC *)(v35 + 32),
              a6->m128i_i32[0],
              a6->m128i_i32[1],
              a6->m128i_i32[2] - a6->m128i_i32[0],
              a6->m128i_i32[3] - a6->m128i_i32[1],
              hdc,
              0,
              0,
              a6->m128i_i32[2] - a6->m128i_i32[0],
              a6->m128i_i32[3] - a6->m128i_i32[1],
              (BLENDFUNCTION)33488896) )
        Error = ResultFromKnownLastError();
    }
    goto LABEL_32;
  }
LABEL_35:
  SelectObject(v13, v39);
  v12 = v33;
LABEL_37:
  v32 = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HBITMAPTraits>::`vftable';
  if ( v12
    && !Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HBITMAPTraits>::InternalClose((__int64)&v32) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)LastError);
  }
LABEL_42:
  Microsoft::WRL::Wrappers::CompatibleDC::~CompatibleDC((Microsoft::WRL::Wrappers::CompatibleDC *)v27);
  return (unsigned int)Error;
}
