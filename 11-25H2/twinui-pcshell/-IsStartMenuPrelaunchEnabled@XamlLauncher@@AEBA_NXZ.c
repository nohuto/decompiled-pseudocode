/*
 * XREFs of ?IsStartMenuPrelaunchEnabled@XamlLauncher@@AEBA_NXZ @ 0x18044EBB0
 * Callers:
 *     ??0XamlLauncher@@QEAA@XZ @ 0x18024EE7C (--0XamlLauncher@@QEAA@XZ.c)
 *     ?Prelaunch@XamlLauncher@@UEAAJXZ @ 0x18044FDE0 (-Prelaunch@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?IsActiveSessionCountLimited@@YA_NXZ @ 0x1800A726C (-IsActiveSessionCountLimited@@YA_NXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801D38D0 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ??$GetForWindowsEdition@$0?HPPPPPPO@@ShellProgramConfiguration@@SA?AU0@PEBG@Z @ 0x1804494AC (--$GetForWindowsEdition@$0-HPPPPPPO@@ShellProgramConfiguration@@SA-AU0@PEBG@Z.c)
 *     ??$get_value_nothrow@K@ShellProgramConfiguration@@QEBAJPEBGAEAK@Z @ 0x180449B98 (--$get_value_nothrow@K@ShellProgramConfiguration@@QEBAJPEBGAEAK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_47410862@@@details@wil@@QEAA_NXZ @ 0x180450DF8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_47410862@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_54629273@@@details@wil@@QEAA_NXZ @ 0x180450E34 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_54629273@@@details@wil@@QEAA_NXZ.c)
 */

bool __fastcall XamlLauncher::IsStartMenuPrelaunchEnabled(XamlLauncher *this)
{
  __int64 v1; // rcx
  HKEY *v3; // rax
  __int64 v4; // rdx
  bool v5; // di
  int v6; // ebx
  bool active; // al
  XamlLauncher *v8; // [rsp+30h] [rbp+8h] BYREF
  HKEY v9; // [rsp+38h] [rbp+10h] BYREF

  v8 = this;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_54629273>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_54629273>::GetImpl'::`2'::impl)
    && (unsigned int)IsGamingFullScreenExperienceActive(v1) )
  {
    return 0;
  }
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_47410862>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_47410862>::GetImpl'::`2'::impl) )
    return IsActiveSessionCountLimited();
  v3 = ShellProgramConfiguration::GetForWindowsEdition<-2147483646>(&v9);
  LODWORD(v8) = 0;
  v5 = *v3 && ShellProgramConfiguration::get_value_nothrow<unsigned long>(v3, v4, &v8) >= 0;
  v6 = (int)v8;
  active = IsActiveSessionCountLimited();
  if ( !v5 )
    v6 = active;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&v9);
  return v6 != 0;
}
