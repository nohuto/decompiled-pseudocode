/*
 * XREFs of ?UpdateShellPreferencesBasedOnThemesBool@TouchKeyboardExperienceManager@@AEAAXPEBGPEA_N11@Z @ 0x180107B18
 * Callers:
 *     ?OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18024B8F8 (-OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031E08 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180032DDC (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18003A59C (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800573EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBG$$QEAV10@@Z @ 0x1801080A8 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x1801085C4 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180114CC8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802AF344 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesBool(
        KeyboardHosting::TabTipAdapter **this,
        const unsigned __int16 *a2,
        bool *a3,
        bool *a4,
        bool *a5)
{
  bool v8; // si
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  LSTATUS ValueW; // eax
  unsigned int v12; // r9d
  int v13; // ecx
  bool v14; // sf
  int v15; // edx
  unsigned int v16; // r8d
  bool v17; // r13
  const WCHAR *v18; // r14
  const WCHAR *v19; // r15
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rdi
  unsigned int v22; // eax
  UINT32 v23; // edx
  HRESULT StringReference; // eax
  int v25; // edx
  unsigned int v26; // r8d
  const WCHAR *v27; // r15
  unsigned __int64 v28; // rdi
  unsigned int v29; // eax
  UINT32 v30; // edx
  HRESULT v31; // eax
  int v32; // edx
  unsigned int v33; // r8d
  int v34; // eax
  int v35; // edx
  unsigned int v36; // r8d
  KeyboardHosting::TabTipAdapter *v37; // r15
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
  HSTRING v53; // rbx
  PCWSTR *v54; // rax
  __int64 v55; // rax
  int v56; // eax
  KeyboardHosting::TabTipAdapter *v57; // rdi
  HSTRING v58; // rbx
  PCWSTR *v59; // rax
  __int64 v60; // rax
  int v61; // eax
  unsigned int pvData; // [rsp+40h] [rbp-A1h] BYREF
  int v63; // [rsp+44h] [rbp-9Dh] BYREF
  bool *v64; // [rsp+48h] [rbp-99h] BYREF
  DWORD pdwType[2]; // [rsp+50h] [rbp-91h] BYREF
  DWORD pcbData[2]; // [rsp+58h] [rbp-89h] BYREF
  TouchKeyboardExperienceManager *v67; // [rsp+60h] [rbp-81h]
  bool *v68; // [rsp+68h] [rbp-79h]
  __int128 hstringHeader; // [rsp+70h] [rbp-71h] BYREF
  __int128 hstringHeader_16; // [rsp+80h] [rbp-61h] BYREF
  __int128 v71; // [rsp+90h] [rbp-51h] BYREF
  __int128 v72; // [rsp+A0h] [rbp-41h] BYREF
  PCWSTR v73[3]; // [rsp+B0h] [rbp-31h] BYREF
  unsigned __int64 v74; // [rsp+C8h] [rbp-19h]
  PCWSTR sourceString[3]; // [rsp+D0h] [rbp-11h] BYREF
  unsigned __int64 v76; // [rsp+E8h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+57h]

  v68 = a4;
  v67 = (TouchKeyboardExperienceManager *)this;
  v64 = a5;
  v8 = 0;
  v63 = 0;
  v71 = 0LL;
  v72 = 0LL;
  v9 = std::_WChar_traits<wchar_t>::length((__int64)L"HasBorder");
  std::wstring::_Construct<1,unsigned short const *>((char **)&v71, L"HasBorder", v9);
  std::operator+<unsigned short>(sourceString, L"KeyboardTheme_Dark_", &v71);
  std::wstring::_Tidy_deallocate(&v71);
  hstringHeader = 0LL;
  hstringHeader_16 = 0LL;
  v10 = std::_WChar_traits<wchar_t>::length((__int64)L"HasBorder");
  std::wstring::_Construct<1,unsigned short const *>((char **)&hstringHeader, L"HasBorder", v10);
  std::operator+<unsigned short>(v73, L"KeyboardTheme_Light_", &hstringHeader);
  std::wstring::_Tidy_deallocate(&hstringHeader);
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
      goto LABEL_6;
  }
  else if ( pdwType[0] == 4 )
  {
    if ( pvData > 1 )
    {
LABEL_6:
      v14 = 1;
      goto LABEL_7;
    }
    v13 = 0;
    v8 = pvData == 1;
  }
  else
  {
    if ( pcbData[0] != 4 || (unsigned __int16)(pvData - 48) > 1u )
      goto LABEL_6;
    v8 = (_WORD)pvData == 49;
    v13 = 0;
  }
  v14 = v13 < 0;
  if ( v13 > 0 )
    goto LABEL_6;
LABEL_7:
  if ( !v14
    && (int)SHRegGetBOOLWithREGSAM(
              HKEY_CURRENT_USER,
              L"SOFTWARE\\Microsoft\\TabletTip\\1.7\\SelectedThemeLight",
              L"HasBorder",
              v12,
              &v63) >= 0 )
  {
    v17 = v63 != 0;
    if ( *a3 && v8 == *a4 && v17 == *a5 )
      goto LABEL_72;
    *(_QWORD *)pdwType = this[73];
    v18 = L"1";
    v19 = L"1";
    if ( !v8 )
      v19 = L"0";
    *((_QWORD *)&hstringHeader_16 + 1) = 0LL;
    v20 = -1LL;
    v21 = -1LL;
    do
      ++v21;
    while ( v19[v21] );
    if ( v21 <= 0xFFFFFFFF )
    {
      v22 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v21, v15, v16);
      v23 = v22 - 1;
      if ( (unsigned int)v21 < v22 )
        v23 = v21;
      StringReference = WindowsCreateStringReference(
                          v19,
                          v23,
                          (HSTRING_HEADER *)&hstringHeader,
                          (HSTRING *)&hstringHeader_16 + 1);
      if ( StringReference < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)StringReference, v25, v26);
        __debugbreak();
      }
      *(_QWORD *)pcbData = *((_QWORD *)&hstringHeader_16 + 1);
      v27 = (const WCHAR *)sourceString;
      if ( v76 > 7 )
        v27 = sourceString[0];
      *((_QWORD *)&v72 + 1) = 0LL;
      v28 = -1LL;
      do
        ++v28;
      while ( v27[v28] );
      if ( v28 <= 0xFFFFFFFF )
      {
        v29 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v28, v25, v26);
        v30 = v29 - 1;
        if ( (unsigned int)v28 < v29 )
          v30 = v28;
        v31 = WindowsCreateStringReference(v27, v30, (HSTRING_HEADER *)&v71, (HSTRING *)&v72 + 1);
        if ( v31 < 0 )
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v31, v32, v33);
        v34 = KeyboardHosting::TabTipAdapter::SetShellPreference(
                *(KeyboardHosting::TabTipAdapter **)pdwType,
                *((HSTRING *)&v72 + 1),
                *(HSTRING *)pcbData);
        if ( v34 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x125A,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v34);
        v37 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)v67 + 73);
        if ( !v17 )
          v18 = L"0";
        *((_QWORD *)&hstringHeader_16 + 1) = 0LL;
        v38 = -1LL;
        do
          ++v38;
        while ( v18[v38] );
        if ( v38 <= 0xFFFFFFFF )
        {
          v39 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v38, v35, v36);
          v40 = v39 - 1;
          if ( (unsigned int)v38 < v39 )
            v40 = v38;
          v41 = WindowsCreateStringReference(
                  v18,
                  v40,
                  (HSTRING_HEADER *)&hstringHeader,
                  (HSTRING *)&hstringHeader_16 + 1);
          if ( v41 < 0 )
            Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v41, v42, v43);
          v44 = (HSTRING)*((_QWORD *)&hstringHeader_16 + 1);
          v45 = (const WCHAR *)v73;
          if ( v74 > 7 )
            v45 = v73[0];
          *((_QWORD *)&v72 + 1) = 0LL;
          do
            ++v20;
          while ( v45[v20] );
          if ( v20 <= 0xFFFFFFFF )
          {
            v46 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v20, v42, v43);
            v47 = v46 - 1;
            if ( (unsigned int)v20 < v46 )
              v47 = v20;
            v48 = WindowsCreateStringReference(v45, v47, (HSTRING_HEADER *)&v71, (HSTRING *)&v72 + 1);
            if ( v48 < 0 )
              Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v48, v49, v50);
            v51 = KeyboardHosting::TabTipAdapter::SetShellPreference(v37, *((HSTRING *)&v72 + 1), v44);
            if ( v51 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x125B,
                (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                (const char *)(unsigned int)v51);
            *v68 = v8;
            *v64 = v63 != 0;
            *a3 = 1;
            goto LABEL_72;
          }
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v42, v43);
        }
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v35, v36);
      }
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v25, v26);
    }
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v15, v16);
    __debugbreak();
  }
  if ( *a3 )
  {
    v52 = this[73];
    *((_QWORD *)&hstringHeader_16 + 1) = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference((HSTRING_HEADER *)&hstringHeader, &::pvData, 1u, 0);
    v53 = (HSTRING)*((_QWORD *)&hstringHeader_16 + 1);
    v54 = sourceString;
    if ( v76 > 7 )
      v54 = (PCWSTR *)sourceString[0];
    v64 = (bool *)v54;
    v55 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v71, &v64);
    v56 = KeyboardHosting::TabTipAdapter::SetShellPreference(v52, *(HSTRING *)(v55 + 24), v53);
    if ( v56 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1264,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v56);
    v57 = this[73];
    *((_QWORD *)&hstringHeader_16 + 1) = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference((HSTRING_HEADER *)&hstringHeader, &::pvData, 1u, 0);
    v58 = (HSTRING)*((_QWORD *)&hstringHeader_16 + 1);
    v59 = v73;
    if ( v74 > 7 )
      v59 = (PCWSTR *)v73[0];
    v64 = (bool *)v59;
    v60 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v71, &v64);
    v61 = KeyboardHosting::TabTipAdapter::SetShellPreference(v57, *(HSTRING *)(v60 + 24), v58);
    if ( v61 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1265,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v61);
    *a3 = 0;
  }
LABEL_72:
  std::wstring::_Tidy_deallocate(v73);
  std::wstring::_Tidy_deallocate(sourceString);
}
