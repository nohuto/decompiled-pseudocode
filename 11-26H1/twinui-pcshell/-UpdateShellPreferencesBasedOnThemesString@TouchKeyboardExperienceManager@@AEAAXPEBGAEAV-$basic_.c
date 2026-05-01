/*
 * XREFs of ?UpdateShellPreferencesBasedOnThemesString@TouchKeyboardExperienceManager@@AEAAXPEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@1@Z @ 0x18024D908
 * Callers:
 *     ?OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18024B8F8 (-OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x180030514 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180032DDC (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800573EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBG$$QEAV10@@Z @ 0x1801080A8 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180114CC8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18013D314 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?resize@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KG@Z @ 0x180177520 (-resize@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_KG@Z.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x18022C708 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        __int64 a4)
{
  void **v8; // rax
  void **v9; // rax
  PVOID *pvData; // rax
  PVOID *v11; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rdi
  PVOID *v14; // rax
  PVOID *v15; // rax
  int v16; // eax
  unsigned int v17; // r8d
  int v18; // eax
  KeyboardHosting::TabTipAdapter *v19; // rdi
  PVOID *v20; // rax
  HSTRING Reserved1; // rbx
  unsigned int v22; // r8d
  const WCHAR *v23; // rax
  HSTRING_HEADER *v24; // rax
  int v25; // eax
  unsigned int v26; // r8d
  KeyboardHosting::TabTipAdapter *v27; // rdi
  PVOID *v28; // rax
  HSTRING v29; // rbx
  unsigned int v30; // r8d
  const WCHAR *v31; // rax
  HSTRING_HEADER *v32; // rax
  int v33; // eax
  __int64 v34; // r8
  __int64 v35; // r8
  KeyboardHosting::TabTipAdapter *v36; // rdi
  unsigned int v37; // r8d
  HSTRING v38; // rbx
  const WCHAR *v39; // rax
  HSTRING_HEADER *v40; // rax
  int v41; // eax
  KeyboardHosting::TabTipAdapter *v42; // rdi
  unsigned int v43; // r8d
  HSTRING v44; // rbx
  const WCHAR *v45; // rax
  HSTRING_HEADER *v46; // rax
  int v47; // eax
  KeyboardHosting::TabTipAdapter *v48; // rdi
  unsigned int v49; // r8d
  HSTRING v50; // rbx
  const WCHAR *v51; // rax
  HSTRING_HEADER *v52; // rax
  int v53; // eax
  KeyboardHosting::TabTipAdapter *v54; // rdi
  unsigned int v55; // r8d
  HSTRING v56; // rbx
  const WCHAR *v57; // rax
  HSTRING_HEADER *v58; // rax
  int v59; // eax
  const WCHAR *v61; // [rsp+40h] [rbp-C0h] BYREF
  DWORD pcbData; // [rsp+48h] [rbp-B8h] BYREF
  DWORD v63; // [rsp+4Ch] [rbp-B4h] BYREF
  PVOID v64[2]; // [rsp+50h] [rbp-B0h] BYREF
  __m128i si128; // [rsp+60h] [rbp-A0h]
  PVOID v66[2]; // [rsp+70h] [rbp-90h] BYREF
  __m128i v67; // [rsp+80h] [rbp-80h]
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp-70h] BYREF
  HSTRING v69; // [rsp+A8h] [rbp-58h]
  _QWORD v70[3]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v71; // [rsp+C8h] [rbp-38h]
  _QWORD v72[3]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v73; // [rsp+E8h] [rbp-18h]
  HSTRING_HEADER v74; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  pcbData = 0;
  v63 = 0;
  v8 = (void **)std::wstring::wstring((__int64)&hstringHeader, (__int64)a2);
  std::operator+<unsigned short>((__int64)v72, L"KeyboardTheme_Dark_", v8);
  std::wstring::_Tidy_deallocate(&hstringHeader);
  v9 = (void **)std::wstring::wstring((__int64)v64, (__int64)a2);
  std::operator+<unsigned short>((__int64)v70, L"KeyboardTheme_Light_", v9);
  std::wstring::_Tidy_deallocate(v64);
  if ( RegGetValueW(
         HKEY_CURRENT_USER,
         L"SOFTWARE\\Microsoft\\TabletTip\\1.7\\SelectedThemeLight",
         a2,
         2u,
         0LL,
         0LL,
         &pcbData)
    || !pcbData
    || RegGetValueW(
         HKEY_CURRENT_USER,
         L"SOFTWARE\\Microsoft\\TabletTip\\1.7\\SelectedThemeDark",
         a2,
         2u,
         0LL,
         0LL,
         &v63)
    || !v63 )
  {
    if ( *(_QWORD *)(a3 + 16) || *(_QWORD *)(a4 + 16) )
    {
      v48 = *(KeyboardHosting::TabTipAdapter **)(a1 + 584);
      v69 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &::pvData, 1u, 0);
      v50 = v69;
      v51 = (const WCHAR *)v72;
      if ( v73 > 7 )
        v51 = (const WCHAR *)v72[0];
      v61 = v51;
      v52 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v74, &v61, v49);
      v53 = KeyboardHosting::TabTipAdapter::SetShellPreference(v48, (HSTRING)v52[1].Reserved.Reserved1, v50);
      if ( v53 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1220,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v53);
      v54 = *(KeyboardHosting::TabTipAdapter **)(a1 + 584);
      v69 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &::pvData, 1u, 0);
      v56 = v69;
      v57 = (const WCHAR *)v70;
      if ( v71 > 7 )
        v57 = (const WCHAR *)v70[0];
      v61 = v57;
      v58 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v74, &v61, v55);
      v59 = KeyboardHosting::TabTipAdapter::SetShellPreference(v54, (HSTRING)v58[1].Reserved.Reserved1, v56);
      if ( v59 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1221,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v59);
      std::wstring::operator=((char *)a3, (void *)&::pvData);
      std::wstring::operator=((char *)a4, (void *)&::pvData);
    }
  }
  else
  {
    *(_OWORD *)v64 = 0LL;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v64[0]) = 0;
    *(_OWORD *)v66 = 0LL;
    v67 = si128;
    LOWORD(v66[0]) = 0;
    std::wstring::resize((__int64 *)v64, (unsigned __int64)pcbData >> 1);
    std::wstring::resize((__int64 *)v66, (unsigned __int64)v63 >> 1);
    pvData = v64;
    if ( si128.m128i_i64[1] > 7uLL )
      pvData = (PVOID *)v64[0];
    if ( RegGetValueW(
           HKEY_CURRENT_USER,
           L"SOFTWARE\\Microsoft\\TabletTip\\1.7\\SelectedThemeLight",
           a2,
           2u,
           0LL,
           pvData,
           &pcbData) )
    {
      goto LABEL_56;
    }
    v11 = v66;
    if ( v67.m128i_i64[1] > 7uLL )
      v11 = (PVOID *)v66[0];
    if ( RegGetValueW(
           HKEY_CURRENT_USER,
           L"SOFTWARE\\Microsoft\\TabletTip\\1.7\\SelectedThemeDark",
           a2,
           2u,
           0LL,
           v11,
           &v63) )
    {
LABEL_56:
      if ( *(_QWORD *)(a3 + 16) || *(_QWORD *)(a4 + 16) )
      {
        v36 = *(KeyboardHosting::TabTipAdapter **)(a1 + 584);
        v69 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &::pvData, 1u, 0);
        v38 = v69;
        v39 = (const WCHAR *)v72;
        if ( v73 > 7 )
          v39 = (const WCHAR *)v72[0];
        v61 = v39;
        v40 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v74, &v61, v37);
        v41 = KeyboardHosting::TabTipAdapter::SetShellPreference(v36, (HSTRING)v40[1].Reserved.Reserved1, v38);
        if ( v41 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1217,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v41);
        v42 = *(KeyboardHosting::TabTipAdapter **)(a1 + 584);
        v69 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &::pvData, 1u, 0);
        v44 = v69;
        v45 = (const WCHAR *)v70;
        if ( v71 > 7 )
          v45 = (const WCHAR *)v70[0];
        v61 = v45;
        v46 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v74, &v61, v43);
        v47 = KeyboardHosting::TabTipAdapter::SetShellPreference(v42, (HSTRING)v46[1].Reserved.Reserved1, v44);
        if ( v47 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1218,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v47);
        std::wstring::operator=((char *)a3, (void *)&::pvData);
        std::wstring::operator=((char *)a4, (void *)&::pvData);
      }
    }
    else
    {
      v12 = (unsigned __int64)pcbData >> 1;
      v13 = (unsigned __int64)v63 >> 1;
      std::wstring::resize((__int64 *)v64, v12);
      std::wstring::resize((__int64 *)v66, v13);
      v14 = v64;
      if ( si128.m128i_i64[1] > 7uLL )
        v14 = (PVOID *)v64[0];
      *((_WORD *)v14 + v12 - 1) = 0;
      v15 = v66;
      if ( v67.m128i_i64[1] > 7uLL )
        v15 = (PVOID *)v66[0];
      *((_WORD *)v15 + v13 - 1) = 0;
      LOBYTE(v16) = std::wstring::compare((const wchar_t *)v66, (const wchar_t *)a3);
      if ( v16 || (LOBYTE(v18) = std::wstring::compare((const wchar_t *)v64, (const wchar_t *)a4), v18) )
      {
        v19 = *(KeyboardHosting::TabTipAdapter **)(a1 + 584);
        v20 = v64;
        if ( si128.m128i_i64[1] > 7uLL )
          v20 = (PVOID *)v64[0];
        v61 = (const WCHAR *)v20;
        Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v61, v17)[1].Reserved.Reserved1;
        v23 = (const WCHAR *)v70;
        if ( v71 > 7 )
          v23 = (const WCHAR *)v70[0];
        v61 = v23;
        v24 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v74, &v61, v22);
        v25 = KeyboardHosting::TabTipAdapter::SetShellPreference(v19, (HSTRING)v24[1].Reserved.Reserved1, Reserved1);
        if ( v25 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x120F,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v25);
        v27 = *(KeyboardHosting::TabTipAdapter **)(a1 + 584);
        v28 = v66;
        if ( v67.m128i_i64[1] > 7uLL )
          v28 = (PVOID *)v66[0];
        v61 = (const WCHAR *)v28;
        v29 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v74, &v61, v26)[1].Reserved.Reserved1;
        v31 = (const WCHAR *)v72;
        if ( v73 > 7 )
          v31 = (const WCHAR *)v72[0];
        v61 = v31;
        v32 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v61, v30);
        v33 = KeyboardHosting::TabTipAdapter::SetShellPreference(v27, (HSTRING)v32[1].Reserved.Reserved1, v29);
        if ( v33 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1210,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v33);
        std::wstring::operator=((char *)a4, (char *)v64, v34);
        std::wstring::operator=((char *)a3, (char *)v66, v35);
      }
    }
    std::wstring::_Tidy_deallocate(v66);
    std::wstring::_Tidy_deallocate(v64);
  }
  std::wstring::_Tidy_deallocate(v70);
  return std::wstring::_Tidy_deallocate(v72);
}
