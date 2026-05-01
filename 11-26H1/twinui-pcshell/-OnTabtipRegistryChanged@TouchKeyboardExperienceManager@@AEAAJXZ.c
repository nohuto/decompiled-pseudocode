/*
 * XREFs of ?OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18024B8F8
 * Callers:
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800F8858 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     wistd::__function::__func__lambda_6b3e8dc90f31d1f98bdc21a78fef236e__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x18046B4D0 (wistd--__function--__func__lambda_6b3e8dc90f31d1f98bdc21a78fef236e__void___cdecl(en_ea_18046B4D0.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180030E44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180032DDC (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800573EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?UpdateVisibileViewsBorder@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800B875C (-UpdateVisibileViewsBorder@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B8FF8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?UpdateShellPreferencesBasedOnThemesDWORD@TouchKeyboardExperienceManager@@AEAAXPEBGKKPEA_NPEAK2@Z @ 0x1801075B8 (-UpdateShellPreferencesBasedOnThemesDWORD@TouchKeyboardExperienceManager@@AEAAXPEBGKKPEA_NPEAK2@.c)
 *     ?UpdateShellPreferencesBasedOnThemesBool@TouchKeyboardExperienceManager@@AEAAXPEBGPEA_N11@Z @ 0x180107B18 (-UpdateShellPreferencesBasedOnThemesBool@TouchKeyboardExperienceManager@@AEAAXPEBGPEA_N11@Z.c)
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x1801085C4 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180114CC8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180190638 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ??$?0PEAG$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x1801A950C (--$-0PEAG$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEAG0AEBV-$alloc.c)
 *     ?UpdateShellPreferenceBasedOnThemeString@TouchKeyboardExperienceManager@@AEAAXQEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801EB674 (-UpdateShellPreferenceBasedOnThemeString@TouchKeyboardExperienceManager@@AEAAXQEBGAEAV-$basic_st.c)
 *     ?UpdateShellPreferencesBasedOnThemesString@TouchKeyboardExperienceManager@@AEAAXPEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@1@Z @ 0x18024D908 (-UpdateShellPreferencesBasedOnThemesString@TouchKeyboardExperienceManager@@AEAAXPEBGAEAV-$basic_.c)
 *     GetBooleanRegistryValue @ 0x1802B8E04 (GetBooleanRegistryValue.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?OnPenInvocationSettingChanged@TabTipAdapter@KeyboardHosting@@QEAAX_N@Z @ 0x18047B7D4 (-OnPenInvocationSettingChanged@TabTipAdapter@KeyboardHosting@@QEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall TouchKeyboardExperienceManager::OnTabtipRegistryChanged(
        TouchKeyboardExperienceManager *this,
        __int64 a2,
        char a3)
{
  const char *v4; // r9
  char v5; // r13
  LSTATUS DWORD; // eax
  char v7; // cl
  char v8; // cl
  _WORD *v9; // r9
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  KeyboardHosting::TabTipAdapter *v12; // rdi
  const WCHAR *Reserved1; // rax
  HSTRING v14; // rbx
  int v15; // eax
  LSTATUS v16; // eax
  char v17; // cl
  unsigned int v18; // r8d
  char v19; // al
  _WORD *v20; // r9
  unsigned int v21; // r8d
  KeyboardHosting::TabTipAdapter *v22; // rdi
  const WCHAR *v23; // rax
  HSTRING v24; // rbx
  int v25; // eax
  KeyboardHosting::TabTipAdapter *v26; // rdi
  HSTRING v27; // rbx
  int v28; // eax
  unsigned int v29; // r9d
  unsigned int v30; // r8d
  _WORD *v31; // r9
  unsigned int v32; // r8d
  KeyboardHosting::TabTipAdapter *v33; // rdi
  const WCHAR *v34; // rax
  HSTRING v35; // rbx
  int v36; // eax
  char v37; // bl
  unsigned int v38; // r8d
  KeyboardHosting::TabTipAdapter *v39; // rdi
  const WCHAR *v40; // rax
  HSTRING v41; // rbx
  int v42; // eax
  LSTATUS v43; // eax
  char v44; // cl
  unsigned int v45; // r8d
  char v46; // al
  _WORD *v47; // r9
  unsigned int v48; // r8d
  KeyboardHosting::TabTipAdapter *v49; // rdi
  const WCHAR *v50; // rax
  HSTRING v51; // rbx
  int v52; // eax
  KeyboardHosting::TabTipAdapter *v53; // rdi
  HSTRING v54; // rbx
  int v55; // eax
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // r8
  __int64 v59; // r9
  const unsigned __int16 *v60; // rdx
  char v61; // bl
  char v62; // r12
  const WCHAR *v63; // r8
  const WCHAR *p_lpString1; // rcx
  const WCHAR *v65; // r8
  const WCHAR *v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  KeyboardHosting::TabTipAdapter *v69; // rdi
  HSTRING v70; // rbx
  int v71; // eax
  bool v73[4]; // [rsp+40h] [rbp-B8h] BYREF
  unsigned int v74; // [rsp+44h] [rbp-B4h] BYREF
  const WCHAR *v75; // [rsp+48h] [rbp-B0h] BYREF
  HSTRING_HEADER v76; // [rsp+50h] [rbp-A8h] BYREF
  HSTRING v77; // [rsp+68h] [rbp-90h]
  HSTRING_HEADER lpString1; // [rsp+70h] [rbp-88h] BYREF
  HSTRING v79; // [rsp+88h] [rbp-70h]
  HSTRING_HEADER v80; // [rsp+90h] [rbp-68h] BYREF
  _BYTE v81[6]; // [rsp+BAh] [rbp-3Eh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  if ( *((_QWORD *)this + 73) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_PATKTI>::GetImpl'::`2'::impl,
      1u,
      a3);
    GetBooleanRegistryValue(v73);
    if ( v73[1] )
    {
      try
      {
        KeyboardHosting::TabTipAdapter::OnPenInvocationSettingChanged(
          *((KeyboardHosting::TabTipAdapter **)this + 73),
          v73[0]);
      }
      catch ( ... )
      {
        return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x1289,
                               (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                               v4);
      }
    }
    v5 = 0;
    *(_DWORD *)v73 = 0;
    DWORD = SHRegGetDWORD(
              HKEY_CURRENT_USER,
              L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
              L"KeyboardTheme_Updating",
              (unsigned int *)v73);
    v7 = *((_BYTE *)this + 2164);
    if ( DWORD < 0 )
    {
      if ( v7 && *((_DWORD *)this + 537) == 1 )
      {
        v5 = 1;
        *((_BYTE *)this + 2164) = 0;
      }
    }
    else
    {
      if ( !v7 || (v8 = 0, *(_DWORD *)v73 != *((_DWORD *)this + 537)) )
        v8 = 1;
      if ( v8 && *(_DWORD *)v73 <= 1u )
      {
        if ( *(_DWORD *)v73 == 1 )
        {
          v9 = v81;
          v10 = 1;
          do
          {
            *--v9 = v10 % 0xA + 48;
            v10 /= 0xAu;
          }
          while ( v10 );
          std::wstring::wstring((__int64)&v76, (__int64)v9, (__int64)v81);
          v12 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
          Reserved1 = (const WCHAR *)&v76;
          if ( (unsigned __int64)v77 > 7 )
            Reserved1 = (const WCHAR *)v76.Reserved.Reserved1;
          v75 = Reserved1;
          v14 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v80, &v75, v11)[1].Reserved.Reserved1;
          v79 = 0LL;
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(
            &lpString1,
            L"KeyboardTheme_Updating",
            0x17u,
            0x16u);
          v15 = KeyboardHosting::TabTipAdapter::SetShellPreference(v12, v79, v14);
          if ( v15 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x12BF,
              (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
              (const char *)(unsigned int)v15);
          *((_DWORD *)this + 537) = *(_DWORD *)v73;
          std::wstring::_Tidy_deallocate(&v76);
        }
        else
        {
          v5 = 1;
        }
        *((_BYTE *)this + 2164) = 1;
      }
    }
    *(_DWORD *)v73 = 0;
    v16 = SHRegGetDWORD(
            HKEY_CURRENT_USER,
            L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
            L"UserKeyboardScalingFactor",
            (unsigned int *)v73);
    v17 = *((_BYTE *)this + 2167);
    if ( v16 < 0 )
    {
      if ( v17 )
      {
        v26 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
        v79 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(&lpString1, &pvData, 1u, 0);
        v27 = v79;
        v77 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v76, L"UserKeyboardScalingFactor", 0x1Au, 0x19u);
        v28 = KeyboardHosting::TabTipAdapter::SetShellPreference(v26, v77, v27);
        if ( v28 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x12E5,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v28);
        *((_DWORD *)this + 539) = 0;
        *((_BYTE *)this + 2167) = 0;
      }
    }
    else
    {
      v18 = *(_DWORD *)v73;
      if ( !v17 || (v19 = 0, *(_DWORD *)v73 != *((_DWORD *)this + 539)) )
        v19 = 1;
      if ( v19 && (unsigned int)(*(_DWORD *)v73 - 1) <= 0x3E7 )
      {
        v20 = v81;
        do
        {
          *--v20 = v18 % 0xA + 48;
          v18 /= 0xAu;
        }
        while ( v18 );
        std::wstring::wstring((__int64)&v76, (__int64)v20, (__int64)v81);
        v22 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
        v23 = (const WCHAR *)&v76;
        if ( (unsigned __int64)v77 > 7 )
          v23 = (const WCHAR *)v76.Reserved.Reserved1;
        v75 = v23;
        v24 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v80, &v75, v21)[1].Reserved.Reserved1;
        v79 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(
          &lpString1,
          L"UserKeyboardScalingFactor",
          0x1Au,
          0x19u);
        v25 = KeyboardHosting::TabTipAdapter::SetShellPreference(v22, v79, v24);
        if ( v25 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x12DE,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v25);
        *((_DWORD *)this + 539) = *(_DWORD *)v73;
        *((_BYTE *)this + 2167) = 1;
        std::wstring::_Tidy_deallocate(&v76);
      }
    }
    v74 = 0;
    if ( SHRegGetDWORD(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", L"ThemeDataVersion", &v74) >= 0 )
    {
      v30 = v74;
      if ( v74 != *((_DWORD *)this + 536) )
      {
        v31 = v81;
        do
        {
          *--v31 = v30 % 0xA + 48;
          v30 /= 0xAu;
        }
        while ( v30 );
        std::wstring::wstring((__int64)&v76, (__int64)v31, (__int64)v81);
        v33 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
        v34 = (const WCHAR *)&v76;
        if ( (unsigned __int64)v77 > 7 )
          v34 = (const WCHAR *)v76.Reserved.Reserved1;
        v75 = v34;
        v35 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v80, &v75, v32)[1].Reserved.Reserved1;
        v79 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(
          &lpString1,
          L"KeyboardTheme_ThemeDataVersion",
          0x1Fu,
          0x1Eu);
        v36 = KeyboardHosting::TabTipAdapter::SetShellPreference(v33, v79, v35);
        if ( v36 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x12FA,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v36);
        *((_DWORD *)this + 536) = v74;
        std::wstring::_Tidy_deallocate(&v76);
      }
    }
    *(_DWORD *)v73 = 0;
    v37 = 1;
    if ( (int)SHRegGetBOOLWithREGSAM(
                HKEY_CURRENT_USER,
                L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
                L"IsKeyBackgroundEnabled",
                v29,
                (int *)v73) >= 0 )
      v37 = *(_DWORD *)v73 != 0;
    if ( !*((_BYTE *)this + 2162) || v37 != *((_BYTE *)this + 2161) )
    {
      *((_BYTE *)this + 2161) = v37;
      *((_BYTE *)this + 2162) = 1;
      v39 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
      v40 = L"1";
      if ( !v37 )
        v40 = L"0";
      v75 = v40;
      v41 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v80, &v75, v38)[1].Reserved.Reserved1;
      v79 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &lpString1,
        L"KeyboardTheme_IsKeyBackgroundEnabled",
        0x25u,
        0x24u);
      v42 = KeyboardHosting::TabTipAdapter::SetShellPreference(v39, v79, v41);
      if ( v42 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x130D,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v42);
    }
    *(_DWORD *)v73 = 0;
    v43 = SHRegGetDWORD(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", L"KeyLabelSize", (unsigned int *)v73);
    v44 = *((_BYTE *)this + 2165);
    if ( v43 < 0 )
    {
      if ( v44 )
      {
        v53 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
        v79 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(&lpString1, &pvData, 1u, 0);
        v54 = v79;
        v77 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v76, L"KeyboardTheme_KeyLabelSize", 0x1Bu, 0x1Au);
        v55 = KeyboardHosting::TabTipAdapter::SetShellPreference(v53, v77, v54);
        if ( v55 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1325,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v55);
        *((_DWORD *)this + 538) = 0;
        *((_BYTE *)this + 2165) = 0;
      }
    }
    else
    {
      v45 = *(_DWORD *)v73;
      if ( !v44 || (v46 = 0, *(_DWORD *)v73 != *((_DWORD *)this + 538)) )
        v46 = 1;
      if ( v46 && *(_DWORD *)v73 <= 2u )
      {
        v47 = v81;
        do
        {
          *--v47 = v45 % 0xA + 48;
          v45 /= 0xAu;
        }
        while ( v45 );
        std::wstring::wstring((__int64)&v76, (__int64)v47, (__int64)v81);
        v49 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
        v50 = (const WCHAR *)&v76;
        if ( (unsigned __int64)v77 > 7 )
          v50 = (const WCHAR *)v76.Reserved.Reserved1;
        v75 = v50;
        v51 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v80, &v75, v48)[1].Reserved.Reserved1;
        v79 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(
          &lpString1,
          L"KeyboardTheme_KeyLabelSize",
          0x1Bu,
          0x1Au);
        v52 = KeyboardHosting::TabTipAdapter::SetShellPreference(v49, v79, v51);
        if ( v52 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x131E,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v52);
        *((_DWORD *)this + 538) = *(_DWORD *)v73;
        *((_BYTE *)this + 2165) = 1;
        std::wstring::_Tidy_deallocate(&v76);
      }
    }
    TouchKeyboardExperienceManager::UpdateShellPreferenceBasedOnThemeString(
      (__int64)this,
      L"SelectedThemeName",
      (char *)this + 2080);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesDWORD(
      this,
      L"KeyboardBackgroundImageOpacity",
      v56,
      v57,
      (bool *)this + 2163,
      (unsigned int *)this + 385,
      (unsigned int *)this + 517);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
      this,
      L"KeyboardBackgroundImagePath",
      (char *)this + 1152,
      (char *)this + 1680);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
      this,
      L"KeyboardBackgroundSolidColor",
      (char *)this + 1216,
      (char *)this + 1744);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
      this,
      L"AccentColor",
      (char *)this + 1024,
      (char *)this + 1552);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
      this,
      L"KeyColor",
      (char *)this + 1280,
      (char *)this + 1808);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
      this,
      L"SuggestionTextColor",
      (char *)this + 1344,
      (char *)this + 1872);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
      this,
      L"KeyLabelColor",
      (char *)this + 1312,
      (char *)this + 1840);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesDWORD(
      this,
      L"KeyTransparency",
      v58,
      v59,
      (bool *)this + 2166,
      (unsigned int *)this + 384,
      (unsigned int *)this + 516);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
      this,
      L"KeyboardBackgroundType",
      (char *)this + 1248,
      (char *)this + 1776);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
      this,
      L"KeyboardBackgroundImageStretchType",
      (char *)this + 1184,
      (char *)this + 1712);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
      this,
      L"KeyboardBackgroundGradientColorTop",
      (char *)this + 1120,
      (char *)this + 1648);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
      this,
      L"KeyboardBackgroundGradientColorBottom",
      (char *)this + 1088,
      (char *)this + 1616);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesBool(
      (KeyboardHosting::TabTipAdapter **)this,
      v60,
      (bool *)this + 2160,
      (bool *)this + 1548,
      (bool *)this + 2076);
    std::wstring::wstring((__int64)&lpString1, (_QWORD *)this + 132);
    std::wstring::wstring((__int64)&v76, (_QWORD *)this + 198);
    v61 = *((_BYTE *)this + 1548);
    v62 = *((_BYTE *)this + 2076);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
      this,
      L"BorderColor",
      (char *)this + 1056,
      (char *)this + 1584);
    if ( *((_BYTE *)this + 1548) != v61 || *((_BYTE *)this + 2076) != v62 )
      goto LABEL_85;
    v63 = (const WCHAR *)((char *)this + 1056);
    if ( *((_QWORD *)this + 135) > 7uLL )
      v63 = *(const WCHAR **)v63;
    p_lpString1 = (const WCHAR *)&lpString1;
    if ( (unsigned __int64)v79 > 7 )
      p_lpString1 = (const WCHAR *)lpString1.Reserved.Reserved1;
    if ( CompareStringOrdinal(p_lpString1, -1, v63, -1, 1) != 2 )
      goto LABEL_85;
    v65 = (const WCHAR *)((char *)this + 1584);
    if ( *((_QWORD *)this + 201) > 7uLL )
      v65 = *(const WCHAR **)v65;
    v66 = (const WCHAR *)&v76;
    if ( (unsigned __int64)v77 > 7 )
      v66 = (const WCHAR *)v76.Reserved.Reserved1;
    if ( CompareStringOrdinal(v66, -1, v65, -1, 1) != 2 )
LABEL_85:
      TouchKeyboardExperienceManager::UpdateVisibileViewsBorder((RTL_SRWLOCK *)this);
    std::wstring::_Tidy_deallocate(&v76);
    std::wstring::_Tidy_deallocate(&lpString1);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
      this,
      L"ThemeOverride",
      (char *)this + 1376,
      (char *)this + 1904);
    TouchKeyboardExperienceManager::UpdateShellPreferenceBasedOnThemeString(
      (__int64)this,
      L"ChineseSimplifiedImeHeightType",
      (char *)this + 2112);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesDWORD(
      this,
      L"ChineseSimplifiedImeBackgroundImageOpacity",
      v67,
      v68,
      (bool *)this + 2168,
      (unsigned int *)this + 386,
      (unsigned int *)this + 518);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
      this,
      L"ChineseSimplifiedImeBackgroundImageStretchType",
      (char *)this + 1472,
      (char *)this + 2000);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
      this,
      L"ChineseSimplifiedImeBackgroundImagePath",
      (char *)this + 1440,
      (char *)this + 1968);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
      this,
      L"ChineseSimplifiedImeBackgroundColor",
      (char *)this + 1408,
      (char *)this + 1936);
    TouchKeyboardExperienceManager::UpdateShellPreferencesBasedOnThemesString(
      this,
      L"ChineseSimplifiedImeTextColor",
      (char *)this + 1504,
      (char *)this + 2032);
    if ( v5 )
    {
      v69 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
      v79 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&lpString1, L"0", 2u, 1u);
      v70 = v79;
      v77 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v76, L"KeyboardTheme_Updating", 0x17u, 0x16u);
      v71 = KeyboardHosting::TabTipAdapter::SetShellPreference(v69, v77, v70);
      if ( v71 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1395,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v71);
      *((_DWORD *)this + 537) = 0;
    }
  }
  return 0LL;
}
