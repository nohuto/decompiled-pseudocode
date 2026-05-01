/*
 * XREFs of ?DoKeysExistAndCanAccess@SearchSettingsHelper@SearchSettings@@SA_NXZ @ 0x1803B0C30
 * Callers:
 *     ?AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ @ 0x1803B0070 (-AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ.c)
 * Callees:
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F84CC (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801C9BF0 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?HasKeyAccess@SearchSettingsHelper@SearchSettings@@CA_NPEAUHKEY__@@PEBGK@Z @ 0x1803B4B1C (-HasKeyAccess@SearchSettingsHelper@SearchSettings@@CA_NPEAUHKEY__@@PEBGK@Z.c)
 *     ?TryGetHKCU@SearchSettingsHelper@SearchSettings@@CAJPEAPEAUHKEY__@@@Z @ 0x1803B9DE4 (-TryGetHKCU@SearchSettingsHelper@SearchSettings@@CAJPEAPEAUHKEY__@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_40979072@@@details@wil@@QEAA_NXZ @ 0x1803BABF0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_40979072@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55370801@@@details@wil@@QEAA_NXZ @ 0x1803BAE18 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55370801@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56097011@@@details@wil@@QEAA_NXZ @ 0x1803BAE90 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56097011@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56370341@@@details@wil@@QEAA_NXZ @ 0x1803BAF08 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56370341@@@details@wil@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
char SearchSettings::SearchSettingsHelper::DoKeysExistAndCanAccess(void)
{
  HKEY *v0; // rax
  bool HasKeyAccess; // r13
  bool v2; // r14
  bool v3; // r15
  bool v4; // bp
  char v5; // bl
  bool v6; // si
  bool v7; // di
  bool v8; // r12
  bool v9; // al
  bool v10; // zf
  HKEY hKey; // [rsp+50h] [rbp+8h] BYREF

  hKey = 0LL;
  v0 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&hKey);
  if ( (int)SearchSettings::SearchSettingsHelper::TryGetHKCU(v0) < 0 )
    goto LABEL_28;
  HasKeyAccess = SearchSettings::SearchSettingsHelper::HasKeyAccess(
                   hKey,
                   L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings",
                   0x3001Fu);
  v2 = SearchSettings::SearchSettingsHelper::HasKeyAccess(
         hKey,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings\\Dynamic",
         0x3001Fu);
  v3 = SearchSettings::SearchSettingsHelper::HasKeyAccess(
         hKey,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings\\Dynamic\\Current",
         0x3001Fu);
  v4 = SearchSettings::SearchSettingsHelper::HasKeyAccess(
         hKey,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
         0x2001Fu);
  v5 = 1;
  v6 = 1;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_40979072>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_40979072>::GetImpl'::`2'::impl) )
    v6 = SearchSettings::SearchSettingsHelper::HasKeyAccess(
           hKey,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings\\WebSearchProviders",
           0x3001Fu);
  v7 = 1;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56370341>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56370341>::GetImpl'::`2'::impl) )
    v7 = SearchSettings::SearchSettingsHelper::HasKeyAccess(
           hKey,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings\\FileSearchProviders",
           0x3001Fu);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55370801>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55370801>::GetImpl'::`2'::impl) )
  {
    v8 = SearchSettings::SearchSettingsHelper::HasKeyAccess(
           hKey,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings\\WebSearchProviders\\InstalledDates",
           0x3001Fu);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56097011>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56097011>::GetImpl'::`2'::impl) )
    {
      v9 = SearchSettings::SearchSettingsHelper::HasKeyAccess(
             hKey,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings\\WebSearchProviders\\Index",
             0x3001Fu);
      if ( !HasKeyAccess || !v2 || !v3 || !v4 || !v6 || !v8 )
        goto LABEL_28;
      v10 = !v9;
    }
    else
    {
      if ( !HasKeyAccess || !v2 || !v3 || !v4 || !v6 )
        goto LABEL_28;
      v10 = !v8;
    }
  }
  else
  {
    if ( !HasKeyAccess || !v2 || !v3 || !v4 )
      goto LABEL_28;
    v10 = !v6;
  }
  if ( v10 || !v7 )
LABEL_28:
    v5 = 0;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  return v5;
}
