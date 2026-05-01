/*
 * XREFs of ?UpdateShellPreferencesBasedOnThemesDWORD@TouchKeyboardExperienceManager@@AEAAXPEBGKKPEA_NPEAK2@Z @ 0x1801075B8
 * Callers:
 *     ?OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18024B8F8 (-OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031E08 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180032DDC (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800573EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBG$$QEAV10@@Z @ 0x1801080A8 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180114CC8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$_Integral_to_string@GK@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@K@Z @ 0x180465D0C (--$_Integral_to_string@GK@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@0@K@.c)
 */

// Hidden C++ exception states: #wind=14
void __fastcall TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesDWORD(
        TouchKeyboardExperienceManager *this,
        const unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        bool *a5,
        unsigned int *a6,
        unsigned int *a7)
{
  unsigned __int64 v9; // rax
  const void *v10; // rdx
  unsigned __int64 v11; // rax
  LSTATUS ValueW; // eax
  bool v13; // sf
  LSTATUS v14; // eax
  bool v15; // sf
  char v16; // cl
  char v17; // al
  KeyboardHosting::TabTipAdapter *v18; // rdi
  void *p_hstringHeader; // rax
  HSTRING v20; // rbx
  _QWORD *v21; // rax
  __int64 v22; // rax
  int v23; // eax
  KeyboardHosting::TabTipAdapter *v24; // rdi
  __int128 *v25; // rax
  HSTRING v26; // rbx
  _QWORD *v27; // rax
  __int64 v28; // rax
  int v29; // eax
  KeyboardHosting::TabTipAdapter *v30; // rdi
  HSTRING v31; // rbx
  _QWORD *v32; // rax
  __int64 v33; // rax
  int v34; // eax
  KeyboardHosting::TabTipAdapter *v35; // rdi
  HSTRING v36; // rbx
  _QWORD *v37; // rax
  __int64 v38; // rax
  int v39; // eax
  KeyboardHosting::TabTipAdapter *v40; // rdi
  HSTRING v41; // rbx
  _QWORD *v42; // rax
  __int64 v43; // rax
  int v44; // eax
  KeyboardHosting::TabTipAdapter *v45; // rdi
  HSTRING v46; // rbx
  _QWORD *v47; // rax
  __int64 v48; // rax
  int v49; // eax
  DWORD pcbData[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v51; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int pvData; // [rsp+4Ch] [rbp-B4h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-B0h] BYREF
  HSTRING v54; // [rsp+68h] [rbp-98h]
  _QWORD v55[3]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v56; // [rsp+88h] [rbp-78h]
  _QWORD v57[3]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v58; // [rsp+A8h] [rbp-58h]
  __int128 v59; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v60; // [rsp+C0h] [rbp-40h]
  _OWORD v61[2]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v62[32]; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  pvData = 0;
  v51 = 0;
  v59 = 0LL;
  v60 = 0LL;
  v9 = std::_WChar_traits<wchar_t>::length((__int64)a2);
  std::wstring::_Construct<1,unsigned short const *>((char **)&v59, v10, v9);
  std::operator+<unsigned short>(v57, L"KeyboardTheme_Dark_", &v59);
  std::wstring::_Tidy_deallocate(&v59);
  memset(v61, 0, sizeof(v61));
  v11 = std::_WChar_traits<wchar_t>::length((__int64)a2);
  std::wstring::_Construct<1,unsigned short const *>((char **)v61, a2, v11);
  std::operator+<unsigned short>(v55, L"KeyboardTheme_Light_", v61);
  std::wstring::_Tidy_deallocate(v61);
  pcbData[0] = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\TabletTip\\1.7\\SelectedThemeDark",
             a2,
             0x10u,
             0LL,
             &pvData,
             pcbData);
  v13 = ValueW < 0;
  if ( ValueW > 0 )
    v13 = 1;
  if ( v13 )
    goto LABEL_40;
  pcbData[0] = 4;
  v14 = RegGetValueW(
          HKEY_CURRENT_USER,
          L"SOFTWARE\\Microsoft\\TabletTip\\1.7\\SelectedThemeLight",
          a2,
          0x10u,
          0LL,
          &v51,
          pcbData);
  v15 = v14 < 0;
  if ( v14 > 0 )
    v15 = 1;
  if ( v15 )
  {
LABEL_40:
    if ( !*a5 )
      goto LABEL_50;
    v40 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v54 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &::pvData, 1u, 0);
    v41 = v54;
    v42 = v57;
    if ( v58 > 7 )
      v42 = (_QWORD *)v57[0];
    *(_QWORD *)pcbData = v42;
    v43 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v62, pcbData);
    v44 = KeyboardHosting::TabTipAdapter::SetShellPreference(v40, *(HSTRING *)(v43 + 24), v41);
    if ( v44 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x11EF,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v44);
    v45 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v54 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &::pvData, 1u, 0);
    v46 = v54;
    v47 = v55;
    if ( v56 > 7 )
      v47 = (_QWORD *)v55[0];
    *(_QWORD *)pcbData = v47;
    v48 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v62, pcbData);
    v49 = KeyboardHosting::TabTipAdapter::SetShellPreference(v45, *(HSTRING *)(v48 + 24), v46);
    if ( v49 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x11F0,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v49);
    goto LABEL_49;
  }
  if ( !*a5 || pvData != *a6 || (v16 = 0, v51 != *a7) )
    v16 = 1;
  if ( pvData > 0x64 || (v17 = 1, v51 > 0x64) )
    v17 = 0;
  if ( !v16 )
  {
    if ( v17 )
      goto LABEL_50;
    goto LABEL_30;
  }
  if ( !v17 )
  {
LABEL_30:
    if ( !*a5 )
      goto LABEL_50;
    v30 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v54 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &::pvData, 1u, 0);
    v31 = v54;
    v32 = v57;
    if ( v58 > 7 )
      v32 = (_QWORD *)v57[0];
    *(_QWORD *)pcbData = v32;
    v33 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v62, pcbData);
    v34 = KeyboardHosting::TabTipAdapter::SetShellPreference(v30, *(HSTRING *)(v33 + 24), v31);
    if ( v34 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x11E5,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v34);
    v35 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v54 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &::pvData, 1u, 0);
    v36 = v54;
    v37 = v55;
    if ( v56 > 7 )
      v37 = (_QWORD *)v55[0];
    *(_QWORD *)pcbData = v37;
    v38 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v62, pcbData);
    v39 = KeyboardHosting::TabTipAdapter::SetShellPreference(v35, *(HSTRING *)(v38 + 24), v36);
    if ( v39 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x11E6,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v39);
LABEL_49:
    *a6 = 0;
    *a7 = 0;
    *a5 = 0;
    goto LABEL_50;
  }
  std::_Integral_to_string<unsigned short,unsigned long>(&hstringHeader);
  std::_Integral_to_string<unsigned short,unsigned long>(&v59);
  v18 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  p_hstringHeader = &hstringHeader;
  if ( (unsigned __int64)v54 > 7 )
    p_hstringHeader = hstringHeader.Reserved.Reserved1;
  *(_QWORD *)pcbData = p_hstringHeader;
  v20 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(v61, pcbData) + 24);
  v21 = v57;
  if ( v58 > 7 )
    v21 = (_QWORD *)v57[0];
  *(_QWORD *)pcbData = v21;
  v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v62, pcbData);
  v23 = KeyboardHosting::TabTipAdapter::SetShellPreference(v18, *(HSTRING *)(v22 + 24), v20);
  if ( v23 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x11DD,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v23);
  v24 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v25 = &v59;
  if ( *((_QWORD *)&v60 + 1) > 7uLL )
    v25 = (__int128 *)v59;
  *(_QWORD *)pcbData = v25;
  v26 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(v62, pcbData) + 24);
  v27 = v55;
  if ( v56 > 7 )
    v27 = (_QWORD *)v55[0];
  *(_QWORD *)pcbData = v27;
  v28 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v61, pcbData);
  v29 = KeyboardHosting::TabTipAdapter::SetShellPreference(v24, *(HSTRING *)(v28 + 24), v26);
  if ( v29 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x11DE,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v29);
  *a6 = pvData;
  *a7 = v51;
  *a5 = 1;
  std::wstring::_Tidy_deallocate(&v59);
  std::wstring::_Tidy_deallocate(&hstringHeader);
LABEL_50:
  std::wstring::_Tidy_deallocate(v55);
  std::wstring::_Tidy_deallocate(v57);
}
