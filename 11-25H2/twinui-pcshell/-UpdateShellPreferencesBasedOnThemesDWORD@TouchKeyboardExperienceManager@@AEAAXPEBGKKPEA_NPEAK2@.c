/*
 * XREFs of ?UpdateShellPreferencesBasedOnThemesDWORD@TouchKeyboardExperienceManager@@AEAAXPEBGKKPEA_NPEAK2@Z @ 0x18014A314
 * Callers:
 *     ?OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800C0F18 (-OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18002AC78 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004E0F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18010C19C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBG$$QEAV10@@Z @ 0x18014AD88 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@K@Z @ 0x18046A0A0 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@K@Z.c)
 */

// Hidden C++ exception states: #wind=14
void __fastcall TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesDWORD(
        TouchKeyboardExperienceManager *this,
        WCHAR *a2,
        __int64 a3,
        __int64 a4,
        bool *a5,
        unsigned int *a6,
        unsigned int *a7)
{
  char **v9; // rax
  char **v10; // rax
  LSTATUS ValueW; // eax
  bool v12; // sf
  LSTATUS v13; // eax
  bool v14; // sf
  char v15; // cl
  char v16; // al
  unsigned int v17; // r8d
  KeyboardHosting::TabTipAdapter *v18; // rdi
  void *p_hstringHeader; // rax
  HSTRING Reserved1; // rbx
  unsigned int v21; // r8d
  void **v22; // rax
  HSTRING_HEADER *v23; // rax
  int v24; // eax
  unsigned int v25; // r8d
  KeyboardHosting::TabTipAdapter *v26; // rdi
  void **v27; // rax
  HSTRING v28; // rbx
  unsigned int v29; // r8d
  void **v30; // rax
  HSTRING_HEADER *v31; // rax
  int v32; // eax
  KeyboardHosting::TabTipAdapter *v33; // rdi
  unsigned int v34; // r8d
  HSTRING v35; // rbx
  void **v36; // rax
  HSTRING_HEADER *v37; // rax
  int v38; // eax
  KeyboardHosting::TabTipAdapter *v39; // rdi
  unsigned int v40; // r8d
  HSTRING v41; // rbx
  void **v42; // rax
  HSTRING_HEADER *v43; // rax
  int v44; // eax
  KeyboardHosting::TabTipAdapter *v45; // rdi
  unsigned int v46; // r8d
  HSTRING v47; // rbx
  void **v48; // rax
  HSTRING_HEADER *v49; // rax
  int v50; // eax
  KeyboardHosting::TabTipAdapter *v51; // rdi
  unsigned int v52; // r8d
  HSTRING v53; // rbx
  void **v54; // rax
  HSTRING_HEADER *v55; // rax
  int v56; // eax
  DWORD pcbData[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v58; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int pvData; // [rsp+4Ch] [rbp-B4h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-B0h] BYREF
  HSTRING v61; // [rsp+68h] [rbp-98h]
  void *v62[3]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v63; // [rsp+88h] [rbp-78h]
  void *v64[3]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v65; // [rsp+A8h] [rbp-58h]
  HSTRING_HEADER v66; // [rsp+B0h] [rbp-50h] BYREF
  void *v67[4]; // [rsp+D0h] [rbp-30h] BYREF
  HSTRING_HEADER v68; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  pvData = 0;
  v58 = 0;
  v9 = std::wstring::wstring((char **)&hstringHeader, a2);
  std::operator+<unsigned short>(v64, L"KeyboardTheme_Dark_", v9);
  std::wstring::_Tidy_deallocate(&hstringHeader.Reserved.Reserved1);
  v10 = std::wstring::wstring((char **)&v68, a2);
  std::operator+<unsigned short>(v62, L"KeyboardTheme_Light_", v10);
  std::wstring::_Tidy_deallocate(&v68.Reserved.Reserved1);
  pcbData[0] = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\TabletTip\\1.7\\SelectedThemeDark",
             a2,
             0x10u,
             0LL,
             &pvData,
             pcbData);
  v12 = ValueW < 0;
  if ( ValueW > 0 )
    v12 = 1;
  if ( v12 )
    goto LABEL_40;
  pcbData[0] = 4;
  v13 = RegGetValueW(
          HKEY_CURRENT_USER,
          L"SOFTWARE\\Microsoft\\TabletTip\\1.7\\SelectedThemeLight",
          a2,
          0x10u,
          0LL,
          &v58,
          pcbData);
  v14 = v13 < 0;
  if ( v13 > 0 )
    v14 = 1;
  if ( v14 )
  {
LABEL_40:
    if ( !*a5 )
      goto LABEL_50;
    v45 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v61 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &LocaleName, 1u, 0);
    v47 = v61;
    v48 = v64;
    if ( v65 > 7 )
      v48 = (void **)v64[0];
    *(_QWORD *)pcbData = v48;
    v49 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v66, (const WCHAR **)pcbData, v46);
    v50 = KeyboardHosting::TabTipAdapter::SetShellPreference(v45, (HSTRING)v49[1].Reserved.Reserved1, v47);
    if ( v50 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x122B,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v50);
    v51 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v61 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &LocaleName, 1u, 0);
    v53 = v61;
    v54 = v62;
    if ( v63 > 7 )
      v54 = (void **)v62[0];
    *(_QWORD *)pcbData = v54;
    v55 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v66, (const WCHAR **)pcbData, v52);
    v56 = KeyboardHosting::TabTipAdapter::SetShellPreference(v51, (HSTRING)v55[1].Reserved.Reserved1, v53);
    if ( v56 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x122C,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v56);
    goto LABEL_49;
  }
  if ( !*a5 || pvData != *a6 || (v15 = 0, v58 != *a7) )
    v15 = 1;
  if ( pvData > 0x64 || (v16 = 1, v58 > 0x64) )
    v16 = 0;
  if ( !v15 )
  {
    if ( v16 )
      goto LABEL_50;
    goto LABEL_30;
  }
  if ( !v16 )
  {
LABEL_30:
    if ( !*a5 )
      goto LABEL_50;
    v33 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v61 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &LocaleName, 1u, 0);
    v35 = v61;
    v36 = v64;
    if ( v65 > 7 )
      v36 = (void **)v64[0];
    *(_QWORD *)pcbData = v36;
    v37 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v66, (const WCHAR **)pcbData, v34);
    v38 = KeyboardHosting::TabTipAdapter::SetShellPreference(v33, (HSTRING)v37[1].Reserved.Reserved1, v35);
    if ( v38 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1221,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v38);
    v39 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v61 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &LocaleName, 1u, 0);
    v41 = v61;
    v42 = v62;
    if ( v63 > 7 )
      v42 = (void **)v62[0];
    *(_QWORD *)pcbData = v42;
    v43 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v66, (const WCHAR **)pcbData, v40);
    v44 = KeyboardHosting::TabTipAdapter::SetShellPreference(v39, (HSTRING)v43[1].Reserved.Reserved1, v41);
    if ( v44 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1222,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v44);
LABEL_49:
    *a6 = 0;
    *a7 = 0;
    *a5 = 0;
    goto LABEL_50;
  }
  std::to_wstring(&hstringHeader, pvData);
  std::to_wstring(v67, v58);
  v18 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  p_hstringHeader = &hstringHeader;
  if ( (unsigned __int64)v61 > 7 )
    p_hstringHeader = hstringHeader.Reserved.Reserved1;
  *(_QWORD *)pcbData = p_hstringHeader;
  Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v68, (const WCHAR **)pcbData, v17)[1].Reserved.Reserved1;
  v22 = v64;
  if ( v65 > 7 )
    v22 = (void **)v64[0];
  *(_QWORD *)pcbData = v22;
  v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v66, (const WCHAR **)pcbData, v21);
  v24 = KeyboardHosting::TabTipAdapter::SetShellPreference(v18, (HSTRING)v23[1].Reserved.Reserved1, Reserved1);
  if ( v24 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1219,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v24);
  v26 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v27 = v67;
  if ( v67[3] > (void *)7 )
    v27 = (void **)v67[0];
  *(_QWORD *)pcbData = v27;
  v28 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v66, (const WCHAR **)pcbData, v25)[1].Reserved.Reserved1;
  v30 = v62;
  if ( v63 > 7 )
    v30 = (void **)v62[0];
  *(_QWORD *)pcbData = v30;
  v31 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v68, (const WCHAR **)pcbData, v29);
  v32 = KeyboardHosting::TabTipAdapter::SetShellPreference(v26, (HSTRING)v31[1].Reserved.Reserved1, v28);
  if ( v32 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x121A,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v32);
  *a6 = pvData;
  *a7 = v58;
  *a5 = 1;
  std::wstring::_Tidy_deallocate(v67);
  std::wstring::_Tidy_deallocate(&hstringHeader.Reserved.Reserved1);
LABEL_50:
  std::wstring::_Tidy_deallocate(v62);
  std::wstring::_Tidy_deallocate(v64);
}
