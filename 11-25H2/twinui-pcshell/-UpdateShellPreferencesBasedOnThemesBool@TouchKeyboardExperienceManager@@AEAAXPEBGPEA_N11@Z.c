/*
 * XREFs of ?UpdateShellPreferencesBasedOnThemesBool@TouchKeyboardExperienceManager@@AEAAXPEBGPEA_N11@Z @ 0x18014A838
 * Callers:
 *     ?OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800C0F18 (-OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18002AC78 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18002D858 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004E0F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18010C19C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBG$$QEAV10@@Z @ 0x18014AD88 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x18014B510 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B86EC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesBool(
        KeyboardHosting::TabTipAdapter **this,
        const unsigned __int16 *a2,
        bool *a3,
        bool *a4,
        bool *a5)
{
  bool v8; // si
  char **v9; // rax
  char **v10; // rax
  LSTATUS ValueW; // eax
  unsigned int v12; // r9d
  int v13; // ecx
  bool v14; // zf
  bool v15; // sf
  int v16; // edx
  unsigned int v17; // r8d
  bool v18; // r13
  const WCHAR *v19; // r15
  const WCHAR *v20; // r14
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rdi
  unsigned int v23; // eax
  UINT32 v24; // edx
  HRESULT v25; // eax
  int v26; // edx
  unsigned int v27; // r8d
  const WCHAR *v28; // r14
  unsigned __int64 v29; // rdi
  unsigned int v30; // eax
  UINT32 v31; // edx
  HRESULT v32; // eax
  int v33; // edx
  unsigned int v34; // r8d
  int v35; // eax
  int v36; // edx
  unsigned int v37; // r8d
  unsigned __int64 v38; // rdi
  unsigned int v39; // eax
  UINT32 v40; // edx
  HRESULT v41; // eax
  int v42; // edx
  unsigned int v43; // r8d
  HSTRING v44; // r14
  const WCHAR *v45; // rdi
  unsigned int v46; // eax
  UINT32 v47; // edx
  HRESULT v48; // eax
  int v49; // edx
  unsigned int v50; // r8d
  int v51; // eax
  KeyboardHosting::TabTipAdapter *v52; // rdi
  unsigned int v53; // r8d
  HSTRING v54; // rbx
  const WCHAR *v55; // rax
  HSTRING_HEADER *v56; // rax
  int v57; // eax
  KeyboardHosting::TabTipAdapter *v58; // rdi
  unsigned int v59; // r8d
  HSTRING v60; // rbx
  const WCHAR *v61; // rax
  HSTRING_HEADER *v62; // rax
  int v63; // eax
  unsigned int pvData; // [rsp+40h] [rbp-A1h] BYREF
  int v65; // [rsp+44h] [rbp-9Dh] BYREF
  WCHAR *v66; // [rsp+48h] [rbp-99h] BYREF
  DWORD pdwType[2]; // [rsp+50h] [rbp-91h] BYREF
  DWORD pcbData[2]; // [rsp+58h] [rbp-89h] BYREF
  KeyboardHosting::TabTipAdapter *v69; // [rsp+60h] [rbp-81h]
  bool *v70; // [rsp+68h] [rbp-79h]
  HSTRING_HEADER v71; // [rsp+70h] [rbp-71h] BYREF
  HSTRING v72; // [rsp+88h] [rbp-59h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp-51h] BYREF
  HSTRING string; // [rsp+A8h] [rbp-39h] BYREF
  PCWSTR v75[3]; // [rsp+B0h] [rbp-31h] BYREF
  unsigned __int64 v76; // [rsp+C8h] [rbp-19h]
  PCWSTR sourceString[3]; // [rsp+D0h] [rbp-11h] BYREF
  unsigned __int64 v78; // [rsp+E8h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+57h]

  v70 = a4;
  v69 = (KeyboardHosting::TabTipAdapter *)this;
  v66 = (WCHAR *)a5;
  v8 = 0;
  v65 = 0;
  v9 = std::wstring::wstring((char **)&v71, L"HasBorder");
  std::operator+<unsigned short>(sourceString, L"KeyboardTheme_Dark_", v9);
  std::wstring::_Tidy_deallocate(&v71.Reserved.Reserved1);
  v10 = std::wstring::wstring((char **)&hstringHeader, L"HasBorder");
  std::operator+<unsigned short>(v75, L"KeyboardTheme_Light_", v10);
  std::wstring::_Tidy_deallocate(&hstringHeader.Reserved.Reserved1);
  pdwType[0] = 0;
  pcbData[0] = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\TabletTip\\1.7\\SelectedThemeDark",
             L"HasBorder",
             0x10000012u,
             pdwType,
             &pvData,
             pcbData);
  v13 = ValueW;
  if ( ValueW )
  {
    if ( ValueW == 234 )
      goto LABEL_10;
  }
  else
  {
    if ( pdwType[0] == 4 )
    {
      v14 = pvData == 1;
      if ( pvData > 1 )
        goto LABEL_10;
    }
    else
    {
      if ( pcbData[0] != 4 || (unsigned __int16)(pvData - 48) > 1u )
        goto LABEL_10;
      v14 = (_WORD)pvData == 49;
    }
    v13 = 0;
    v8 = v14;
  }
  v15 = v13 < 0;
  if ( v13 > 0 )
LABEL_10:
    v15 = 1;
  if ( !v15
    && (int)SHRegGetBOOLWithREGSAM(
              HKEY_CURRENT_USER,
              L"SOFTWARE\\Microsoft\\TabletTip\\1.7\\SelectedThemeLight",
              L"HasBorder",
              v12,
              &v65) >= 0 )
  {
    v18 = v65 != 0;
    if ( *a3 && v8 == *a4 && v18 == *a5 )
      goto LABEL_73;
    *(_QWORD *)pdwType = this[73];
    string = 0LL;
    v19 = L"1";
    v20 = L"1";
    if ( !v8 )
      v20 = L"0";
    v21 = -1LL;
    v22 = -1LL;
    do
      ++v22;
    while ( v20[v22] );
    if ( v22 <= 0xFFFFFFFF )
    {
      v23 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v22, v16, v17);
      v24 = v23 - 1;
      if ( (unsigned int)v22 < v23 )
        v24 = v22;
      v25 = WindowsCreateStringReference(v20, v24, &hstringHeader, &string);
      if ( v25 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v25, v26, v27);
        __debugbreak();
      }
      *(_QWORD *)pcbData = string;
      v28 = (const WCHAR *)sourceString;
      if ( v78 > 7 )
        v28 = sourceString[0];
      v72 = 0LL;
      v29 = -1LL;
      do
        ++v29;
      while ( v28[v29] );
      if ( v29 <= 0xFFFFFFFF )
      {
        v30 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v29, v26, v27);
        v31 = v30 - 1;
        if ( (unsigned int)v29 < v30 )
          v31 = v29;
        v32 = WindowsCreateStringReference(v28, v31, &v71, &v72);
        if ( v32 < 0 )
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v32, v33, v34);
        v35 = KeyboardHosting::TabTipAdapter::SetShellPreference(
                *(KeyboardHosting::TabTipAdapter **)pdwType,
                v72,
                *(HSTRING *)pcbData);
        if ( v35 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1296,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v35);
        v69 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)v69 + 73);
        v72 = 0LL;
        if ( !v18 )
          v19 = L"0";
        v38 = -1LL;
        do
          ++v38;
        while ( v19[v38] );
        if ( v38 <= 0xFFFFFFFF )
        {
          v39 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v38, v36, v37);
          v40 = v39 - 1;
          if ( (unsigned int)v38 < v39 )
            v40 = v38;
          v41 = WindowsCreateStringReference(v19, v40, &v71, &v72);
          if ( v41 < 0 )
            Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v41, v42, v43);
          v44 = v72;
          v45 = (const WCHAR *)v75;
          if ( v76 > 7 )
            v45 = v75[0];
          string = 0LL;
          do
            ++v21;
          while ( v45[v21] );
          if ( v21 <= 0xFFFFFFFF )
          {
            v46 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v21, v42, v43);
            v47 = v46 - 1;
            if ( (unsigned int)v21 < v46 )
              v47 = v21;
            v48 = WindowsCreateStringReference(v45, v47, &hstringHeader, &string);
            if ( v48 < 0 )
              Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v48, v49, v50);
            v51 = KeyboardHosting::TabTipAdapter::SetShellPreference(v69, string, v44);
            if ( v51 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x1297,
                (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                (const char *)(unsigned int)v51);
            *v70 = v8;
            *(_BYTE *)v66 = v65 != 0;
            *a3 = 1;
            goto LABEL_73;
          }
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v42, v43);
        }
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v36, v37);
      }
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v26, v27);
    }
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v16, v17);
    __debugbreak();
  }
  if ( *a3 )
  {
    v52 = this[73];
    v72 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v71, &LocaleName, 1u, 0);
    v54 = v72;
    v55 = (const WCHAR *)sourceString;
    if ( v78 > 7 )
      v55 = sourceString[0];
    v66 = (WCHAR *)v55;
    v56 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&v66, v53);
    v57 = KeyboardHosting::TabTipAdapter::SetShellPreference(v52, (HSTRING)v56[1].Reserved.Reserved1, v54);
    if ( v57 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x12A0,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v57);
    v58 = this[73];
    v72 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v71, &LocaleName, 1u, 0);
    v60 = v72;
    v61 = (const WCHAR *)v75;
    if ( v76 > 7 )
      v61 = v75[0];
    v66 = (WCHAR *)v61;
    v62 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&v66, v59);
    v63 = KeyboardHosting::TabTipAdapter::SetShellPreference(v58, (HSTRING)v62[1].Reserved.Reserved1, v60);
    if ( v63 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x12A1,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v63);
    *a3 = 0;
  }
LABEL_73:
  std::wstring::_Tidy_deallocate((void **)v75);
  std::wstring::_Tidy_deallocate((void **)sourceString);
}
