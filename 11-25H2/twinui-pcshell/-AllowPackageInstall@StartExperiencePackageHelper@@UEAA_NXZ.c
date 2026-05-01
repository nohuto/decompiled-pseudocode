/*
 * XREFs of ?AllowPackageInstall@StartExperiencePackageHelper@@UEAA_NXZ @ 0x1805AA0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?IsAutomaticInstallAllowedByPolicy@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805B01C8 (-IsAutomaticInstallAllowedByPolicy@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsNetworkAvailableAndNotConstrained@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805B0768 (-IsNetworkAvailableAndNotConstrained@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsPackageInstalled@LockScreenWidgetPackageHelperBase@@QEAA_NXZ @ 0x1805B0A94 (-IsPackageInstalled@LockScreenWidgetPackageHelperBase@@QEAA_NXZ.c)
 *     ?IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805B0E18 (-IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55740385@@@details@wil@@QEAA_NXZ @ 0x1805B72C8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55740385@@@details@wil@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall StartExperiencePackageHelper::AllowPackageInstall(StartExperiencePackageHelper *this)
{
  LockScreenWidgetPackageHelperBase *v2; // rcx
  LockScreenWidgetPackageHelperBase *v3; // rcx
  bool IsPackageInstalled; // bl
  void **v6; // [rsp+20h] [rbp-19h] BYREF
  int v7; // [rsp+28h] [rbp-11h]
  const wchar_t *v8; // [rsp+30h] [rbp-9h]
  __int64 v9; // [rsp+38h] [rbp-1h]
  const wchar_t *v10; // [rsp+40h] [rbp+7h]
  __int64 v11; // [rsp+48h] [rbp+Fh]
  _OWORD v12[2]; // [rsp+50h] [rbp+17h] BYREF
  __int64 v13; // [rsp+70h] [rbp+37h]

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55740385>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55740385>::GetImpl'::`2'::impl)
    && !*((_DWORD *)this + 2)
    && !LockScreenWidgetPackageHelperBase::IsAutomaticInstallAllowedByPolicy(v2)
    || !LockScreenWidgetPackageHelperBase::IsPowerSupplyAdequateForInstall(v2)
    || !LockScreenWidgetPackageHelperBase::IsNetworkAvailableAndNotConstrained(v3) )
  {
    return 0;
  }
  v7 = *((_DWORD *)this + 2);
  v8 = L"9MSSGKG348SP";
  v9 = 12LL;
  v10 = L"MicrosoftWindows.Client.WebExperience_cw5n1h2txyewy";
  v11 = 51LL;
  v12[0] = 0LL;
  v12[1] = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v12[0]) = 0;
  v13 = 0x826144020CLL;
  v6 = &WebExperiencePackageHelper::`vftable';
  IsPackageInstalled = LockScreenWidgetPackageHelperBase::IsPackageInstalled((LockScreenWidgetPackageHelperBase *)&v6);
  std::wstring::_Tidy_deallocate((void **)v12);
  return IsPackageInstalled;
}
