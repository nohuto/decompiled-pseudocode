/*
 * XREFs of ?InitializeShellPreferencesDesktop@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180255E7C
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180256E20 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18002AC78 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004E0F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18010C19C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SystemLightTheme@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A2984 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SystemLightTheme@@@details@wil@@QEAAX_NW4.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_50902630@@@details@wil@@QEAA_NXZ @ 0x1802DEA94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_50902630@@@details@wil@@QEAA_NXZ.c)
 *     ??$OverriddenMonitorSizeFound@PEBG@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBG@Z @ 0x180458DDC (--$OverriddenMonitorSizeFound@PEBG@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBG@Z.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@N@Z @ 0x18046A124 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@N@Z.c)
 *     ?GetDefaultKeyboardMode@KeyboardHosting@@YAPEBGXZ @ 0x180472818 (-GetDefaultKeyboardMode@KeyboardHosting@@YAPEBGXZ.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall TouchKeyboardExperienceManager::InitializeShellPreferencesDesktop(TouchKeyboardExperienceManager *this)
{
  int PolicyInt; // eax
  const WCHAR *v3; // rax
  KeyboardHosting *v4; // rcx
  unsigned int v5; // r8d
  KeyboardHosting::TabTipAdapter *v6; // rdi
  HSTRING Reserved1; // rbx
  int v8; // eax
  KeyboardHosting::TabTipAdapter *v9; // rdi
  HSTRING v10; // rbx
  int v11; // eax
  KeyboardHosting::TabTipAdapter *v12; // rdi
  HSTRING v13; // rbx
  int v14; // eax
  KeyboardHosting::TabTipAdapter *v15; // rdi
  HSTRING v16; // rbx
  int v17; // eax
  KeyboardHosting::TabTipAdapter *v18; // rdi
  HSTRING v19; // rbx
  int v20; // eax
  KeyboardHosting::TabTipAdapter *v21; // rdi
  HSTRING v22; // rbx
  int v23; // eax
  KeyboardHosting::TabTipAdapter *v24; // rdi
  HSTRING v25; // rbx
  int v26; // eax
  KeyboardHosting::TabTipAdapter *v27; // rdi
  HSTRING v28; // rbx
  int v29; // eax
  KeyboardHosting::TabTipAdapter *v30; // rdi
  HSTRING v31; // rbx
  int v32; // eax
  KeyboardHosting::TabTipAdapter *v33; // rdi
  HSTRING v34; // rbx
  int v35; // eax
  KeyboardHosting::TabTipAdapter *v36; // rdi
  HSTRING v37; // rbx
  int v38; // eax
  KeyboardHosting::TabTipAdapter *v39; // rdi
  HSTRING v40; // rbx
  int v41; // eax
  KeyboardHosting::TabTipAdapter *v42; // rdi
  HSTRING v43; // rbx
  int v44; // eax
  KeyboardHosting::TabTipAdapter *v45; // rdi
  HSTRING v46; // rbx
  int v47; // eax
  char IsEnabled; // al
  unsigned int v49; // r8d
  KeyboardHosting::TabTipAdapter *v50; // rdi
  HSTRING v51; // rbx
  int v52; // eax
  HSTRING v53; // rbx
  int v54; // eax
  KeyboardHosting::TabTipAdapter *v55; // rdi
  HSTRING v56; // rbx
  int v57; // eax
  __int64 v58; // rdx
  KeyboardHosting::TabTipAdapter *v59; // rdi
  HSTRING v60; // rbx
  int v61; // eax
  KeyboardHosting::TabTipAdapter *v62; // rdi
  HSTRING v63; // rbx
  int v64; // eax
  KeyboardHosting::TabTipAdapter *v65; // rdi
  HSTRING v66; // rbx
  int v67; // eax
  KeyboardHosting::TabTipAdapter *v68; // rdi
  HSTRING v69; // rbx
  int v70; // eax
  KeyboardHosting::TabTipAdapter *v71; // rdi
  HSTRING v72; // rbx
  int v73; // eax
  KeyboardHosting::TabTipAdapter *v74; // rdi
  HSTRING v75; // rbx
  int v76; // eax
  KeyboardHosting::TabTipAdapter *v77; // rdi
  HSTRING v78; // rbx
  int v79; // eax
  KeyboardHosting::TabTipAdapter *v80; // rdi
  HSTRING v81; // rbx
  int v82; // eax
  KeyboardHosting::TabTipAdapter *v83; // rdi
  HSTRING v84; // rbx
  int v85; // eax
  unsigned int v86; // r8d
  KeyboardHosting::TabTipAdapter *v87; // rdi
  const WCHAR *p_hstringHeader; // rax
  HSTRING v89; // rbx
  int v90; // eax
  const WCHAR *v91; // rax
  KeyboardHosting::TabTipAdapter *v92; // rdi
  HSTRING v93; // rbx
  int v94; // eax
  KeyboardHosting::TabTipAdapter *v95; // rdi
  HSTRING v96; // rbx
  int v97; // eax
  KeyboardHosting::TabTipAdapter *v98; // rdi
  HSTRING v99; // rbx
  int v100; // eax
  KeyboardHosting::TabTipAdapter *v101; // rdi
  HSTRING v102; // rbx
  int v103; // eax
  KeyboardHosting::TabTipAdapter *v104; // rdi
  HSTRING v105; // rbx
  int v106; // eax
  KeyboardHosting::TabTipAdapter *v107; // rdi
  HSTRING v108; // rbx
  int v109; // eax
  int v110; // [rsp+28h] [rbp-59h] BYREF
  const WCHAR *v111; // [rsp+30h] [rbp-51h] BYREF
  const WCHAR *DefaultKeyboardMode; // [rsp+38h] [rbp-49h] BYREF
  double v113; // [rsp+40h] [rbp-41h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-39h] BYREF
  HSTRING v115; // [rsp+60h] [rbp-21h]
  HSTRING_HEADER v116; // [rsp+68h] [rbp-19h] BYREF
  HSTRING v117; // [rsp+80h] [rbp-1h]
  HSTRING_HEADER v118; // [rsp+88h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v110 = 0;
  PolicyInt = PolicyManager_GetPolicyInt(L"Handwriting", L"PanelDefaultModeDocked", &v110);
  if ( PolicyInt < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA5E,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)PolicyInt);
  v3 = L"floating";
  if ( v110 )
    v3 = L"docked";
  v111 = v3;
  DefaultKeyboardMode = &LocaleName;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_50902630>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_50902630>::GetImpl'::`2'::impl) )
    DefaultKeyboardMode = KeyboardHosting::GetDefaultKeyboardMode(v4);
  v6 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v116, &v111, v5)[1].Reserved.Reserved1;
  v115 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"DefaultHandWritingPositionType",
    0x1Fu,
    0x1Eu);
  v8 = KeyboardHosting::TabTipAdapter::SetShellPreference(v6, v115, Reserved1);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA6D,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
  v9 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v115 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
  v10 = v115;
  v117 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v116, L"SkipCheckCanWideSizeFit", 0x18u, 0x17u);
  v11 = KeyboardHosting::TabTipAdapter::SetShellPreference(v9, v117, v10);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA6E,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v11);
  v12 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v117 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v116, L"1", 2u, 1u);
  v13 = v117;
  v115 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SkipCheckCanFullSizeFit", 0x18u, 0x17u);
  v14 = KeyboardHosting::TabTipAdapter::SetShellPreference(v12, v115, v13);
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA6F,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v14);
  v15 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v117 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v116, L"1", 2u, 1u);
  v16 = v117;
  v115 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Paste_Disabled", 0xFu, 0xEu);
  v17 = KeyboardHosting::TabTipAdapter::SetShellPreference(v15, v115, v16);
  if ( v17 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA72,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v17);
  v18 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v117 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v116, L"0", 2u, 1u);
  v19 = v117;
  v115 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"MultiUserAware", 0xFu, 0xEu);
  v20 = KeyboardHosting::TabTipAdapter::SetShellPreference(v18, v115, v19);
  if ( v20 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA75,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v20);
  v21 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v117 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v116, L"1", 2u, 1u);
  v22 = v117;
  v115 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"AddInputPanelGutter", 0x14u, 0x13u);
  v23 = KeyboardHosting::TabTipAdapter::SetShellPreference(v21, v115, v22);
  if ( v23 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA78,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v23);
  v24 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v117 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v116, L"1", 2u, 1u);
  v25 = v117;
  v115 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"NarrowTwoRowCandidateBar", 0x19u, 0x18u);
  v26 = KeyboardHosting::TabTipAdapter::SetShellPreference(v24, v115, v25);
  if ( v26 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA7B,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v26);
  v27 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v117 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v116, L"1", 2u, 1u);
  v28 = v117;
  v115 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"FloatingCandidateWindowEnabled",
    0x1Fu,
    0x1Eu);
  v29 = KeyboardHosting::TabTipAdapter::SetShellPreference(v27, v115, v28);
  if ( v29 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA7E,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v29);
  v30 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v117 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v116, L"0", 2u, 1u);
  v31 = v117;
  v115 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"SuppressPositionSettingWhenOnly1ItemIsAvailable",
    0x30u,
    0x2Fu);
  v32 = KeyboardHosting::TabTipAdapter::SetShellPreference(v30, v115, v31);
  if ( v32 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA80,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v32);
  v33 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v117 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v116, L"1", 2u, 1u);
  v34 = v117;
  v115 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"NarrowScalingEnabled", 0x15u, 0x14u);
  v35 = KeyboardHosting::TabTipAdapter::SetShellPreference(v33, v115, v34);
  if ( v35 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA83,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v35);
  v36 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v117 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v116, L"1", 2u, 1u);
  v37 = v117;
  v115 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"WideScalingEnabled", 0x13u, 0x12u);
  v38 = KeyboardHosting::TabTipAdapter::SetShellPreference(v36, v115, v37);
  if ( v38 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA86,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v38);
  v39 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v117 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v116, L"1", 2u, 1u);
  v40 = v117;
  v115 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"IsToolBarEnabled", 0x11u, 0x10u);
  v41 = KeyboardHosting::TabTipAdapter::SetShellPreference(v39, v115, v40);
  if ( v41 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA89,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v41);
  v42 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v117 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v116, L"ms-settings:regionlanguage", 0x1Bu, 0x1Au);
  v43 = v117;
  v115 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"KeyboardSettingsLauncherTargetUri",
    0x22u,
    0x21u);
  v44 = KeyboardHosting::TabTipAdapter::SetShellPreference(v42, v115, v43);
  if ( v44 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA91,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v44);
  v45 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v117 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v116, L"1", 2u, 1u);
  v46 = v117;
  v115 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"KeyboardSettingsDevice_IsTypingLauncherPageAvailable",
    0x35u,
    0x34u);
  v47 = KeyboardHosting::TabTipAdapter::SetShellPreference(v45, v115, v46);
  if ( v47 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA92,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v47);
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_50902630>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_50902630>::GetImpl'::`2'::impl);
  v50 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  if ( IsEnabled )
  {
    v51 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                     &hstringHeader,
                     &DefaultKeyboardMode,
                     v49)[1].Reserved.Reserved1;
    v117 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v116, L"DefaultKeyboardMode", 0x14u, 0x13u);
    v52 = KeyboardHosting::TabTipAdapter::SetShellPreference(v50, v117, v51);
    if ( v52 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA97,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v52);
  }
  else
  {
    v117 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v116, L"wide", 5u, 4u);
    v53 = v117;
    v115 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"DefaultKeyboardMode", 0x14u, 0x13u);
    v54 = KeyboardHosting::TabTipAdapter::SetShellPreference(v50, v115, v53);
    if ( v54 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA9B,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v54);
  }
  v55 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v117 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v116, L"0", 2u, 1u);
  v56 = v117;
  v115 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"FuzzyKeyLookupEnabled", 0x16u, 0x15u);
  v57 = KeyboardHosting::TabTipAdapter::SetShellPreference(v55, v115, v56);
  if ( v57 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA9F,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v57);
  LOBYTE(v58) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SystemLightTheme>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SystemLightTheme>::GetImpl'::`2'::impl,
    v58);
  v59 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v117 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v116, L"1", 2u, 1u);
  v60 = v117;
  v115 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SupportsThemeChanges", 0x15u, 0x14u);
  v61 = KeyboardHosting::TabTipAdapter::SetShellPreference(v59, v115, v60);
  if ( v61 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAA4,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v61);
  v62 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v117 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v116, L"Desktop", 8u, 7u);
  v63 = v117;
  v115 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SuggestionUIShell", 0x12u, 0x11u);
  v64 = KeyboardHosting::TabTipAdapter::SetShellPreference(v62, v115, v63);
  if ( v64 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAA8,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v64);
  v65 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v117 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v116, L"1", 2u, 1u);
  v66 = v117;
  v115 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SuggestionUI", 0xDu, 0xCu);
  v67 = KeyboardHosting::TabTipAdapter::SetShellPreference(v65, v115, v66);
  if ( v67 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAA9,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v67);
  v68 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v117 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v116, L"1", 2u, 1u);
  v69 = v117;
  v115 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"SuggestionUIClipboardHistory",
    0x1Du,
    0x1Cu);
  v70 = KeyboardHosting::TabTipAdapter::SetShellPreference(v68, v115, v69);
  if ( v70 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAAB,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v70);
  v71 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v117 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v116, L"1", 2u, 1u);
  v72 = v117;
  v115 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"GifSuggestion", 0xEu, 0xDu);
  v73 = KeyboardHosting::TabTipAdapter::SetShellPreference(v71, v115, v72);
  if ( v73 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAAC,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v73);
  v74 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v117 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v116, L"1", 2u, 1u);
  v75 = v117;
  v115 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SIPSuggestionUI", 0x10u, 0xFu);
  v76 = KeyboardHosting::TabTipAdapter::SetShellPreference(v74, v115, v75);
  if ( v76 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAAE,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v76);
  v77 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v117 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v116, L"ModernUX", 9u, 8u);
  v78 = v117;
  v115 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"VisualStyle", 0xCu, 0xBu);
  v79 = KeyboardHosting::TabTipAdapter::SetShellPreference(v77, v115, v78);
  if ( v79 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAAF,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v79);
  v80 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v117 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v116, L"1", 2u, 1u);
  v81 = v117;
  v115 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"SuggestionUI_PasteAsPlainText",
    0x1Eu,
    0x1Du);
  v82 = KeyboardHosting::TabTipAdapter::SetShellPreference(v80, v115, v81);
  if ( v82 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAB1,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v82);
  v83 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v117 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v116, L"1", 2u, 1u);
  v84 = v117;
  v115 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"EnableTransparentAreaInKeyboard",
    0x20u,
    0x1Fu);
  v85 = KeyboardHosting::TabTipAdapter::SetShellPreference(v83, v115, v84);
  if ( v85 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAB3,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v85);
  v113 = 0.0;
  if ( (unsigned int)GetMonitorSizeOverride(&v113) && v113 >= 5.0 && v113 <= 100.0 )
  {
    std::to_wstring(&hstringHeader);
    v87 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    p_hstringHeader = (const WCHAR *)&hstringHeader;
    if ( (unsigned __int64)v115 > 7 )
      p_hstringHeader = (const WCHAR *)hstringHeader.Reserved.Reserved1;
    v111 = p_hstringHeader;
    v89 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v118, &v111, v86)[1].Reserved.Reserved1;
    v117 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v116, L"OverrideMonitorSize", 0x14u, 0x13u);
    v90 = KeyboardHosting::TabTipAdapter::SetShellPreference(v87, v117, v89);
    if ( v90 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xABC,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v90);
    v91 = (const WCHAR *)&hstringHeader;
    if ( (unsigned __int64)v115 > 7 )
      v91 = (const WCHAR *)hstringHeader.Reserved.Reserved1;
    v111 = v91;
    TouchKeyboardExperienceTelemetryLogger::OverriddenMonitorSizeFound<unsigned short const *>(&v111);
    std::wstring::_Tidy_deallocate(&hstringHeader.Reserved.Reserved1);
  }
  v92 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v117 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v116, L"ModernUX", 9u, 8u);
  v93 = v117;
  v115 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"FrameStyle", 0xBu, 0xAu);
  v94 = KeyboardHosting::TabTipAdapter::SetShellPreference(v92, v115, v93);
  if ( v94 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAC1,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v94);
  v95 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v117 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v116, L"ModernUX", 9u, 8u);
  v96 = v117;
  v115 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"DropShadowStyle", 0x10u, 0xFu);
  v97 = KeyboardHosting::TabTipAdapter::SetShellPreference(v95, v115, v96);
  if ( v97 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAC4,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v97);
  v98 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v117 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v116,
    L"ms-settings:personalization-textinput",
    0x26u,
    0x25u);
  v99 = v117;
  v115 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"PersonalizationSettingsPageUri",
    0x1Fu,
    0x1Eu);
  v100 = KeyboardHosting::TabTipAdapter::SetShellPreference(v98, v115, v99);
  if ( v100 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAC7,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v100);
  v101 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v117 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v116, L"1", 2u, 1u);
  v102 = v117;
  v115 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"PersonalizationThemeEnabled",
    0x1Cu,
    0x1Bu);
  v103 = KeyboardHosting::TabTipAdapter::SetShellPreference(v101, v115, v102);
  if ( v103 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xACA,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v103);
  v104 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v117 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v116, L"1", 2u, 1u);
  v105 = v117;
  v115 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"SystemIndependentFontSizeCHS",
    0x1Du,
    0x1Cu);
  v106 = KeyboardHosting::TabTipAdapter::SetShellPreference(v104, v115, v105);
  if ( v106 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xACC,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v106);
  v107 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v117 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v116, L"1", 2u, 1u);
  v108 = v117;
  v115 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"CloudSuggestionUpdateEnabled",
    0x1Du,
    0x1Cu);
  v109 = KeyboardHosting::TabTipAdapter::SetShellPreference(v107, v115, v108);
  if ( v109 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xACF,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v109);
}
