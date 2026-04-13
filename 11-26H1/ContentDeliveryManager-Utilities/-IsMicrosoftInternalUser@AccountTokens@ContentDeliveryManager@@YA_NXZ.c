/*
 * XREFs of ?IsMicrosoftInternalUser@AccountTokens@ContentDeliveryManager@@YA_NXZ @ 0x1800AFA70
 * Callers:
 *     ?IsMicrosoftInternalUserCached@AccountTokens@ContentDeliveryManager@@YA_NXZ @ 0x1800AFB5C (-IsMicrosoftInternalUserCached@AccountTokens@ContentDeliveryManager@@YA_NXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180029D98 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DD44 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003FF78 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?IsAnyMicrosoftDomainAccount@Policy@CreativeFramework@@YA_NXZ @ 0x180053F54 (-IsAnyMicrosoftDomainAccount@Policy@CreativeFramework@@YA_NXZ.c)
 *     ?GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W0_NPEAPEA_W@Z @ 0x1800AF5B4 (-GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W0_NPEAPEA_W@Z.c)
 *     ?SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W00I@Z @ 0x1800B134C (-SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W00I@Z.c)
 */

bool __fastcall ContentDeliveryManager::AccountTokens::IsMicrosoftInternalUser(
        ContentDeliveryManager::AccountTokens *this)
{
  const wchar_t *v1; // r8
  int StringSetting; // eax
  CreativeFramework::Policy *v3; // rcx
  bool IsAnyMicrosoftDomainAccount; // bl
  int v5; // eax
  BOOL bIgnoreCase; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPCWCH lpString1; // [rsp+40h] [rbp+8h] BYREF

  lpString1 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    (void **)&lpString1,
    0LL);
  StringSetting = CreativeFramework::ContentDeliveryManagerSettings::GetStringSetting(
                    L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager",
                    L"IdentityProvider",
                    v1,
                    &lpString1);
  if ( StringSetting >= 0 )
  {
    v3 = (CreativeFramework::Policy *)lpString1;
    if ( lpString1 && CompareStringOrdinal(lpString1, -1, L"{ED4515F3-DA33-4717-9228-3D8668614BE6}", -1, 1) == 2 )
    {
      IsAnyMicrosoftDomainAccount = 0;
      goto LABEL_6;
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x220,
      (__int64)"OneCoreUap\\Internal\\Shell\\inc\\ContentDeliveryManagerAccountTokenProvider.h",
      (const char *)(unsigned int)StringSetting);
  }
  IsAnyMicrosoftDomainAccount = CreativeFramework::Policy::IsAnyMicrosoftDomainAccount(v3);
  if ( !IsAnyMicrosoftDomainAccount )
  {
    v5 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
           (CreativeFramework::ContentDeliveryManagerSettings *)L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager",
           L"IdentityProvider",
           L"{ED4515F3-DA33-4717-9228-3D8668614BE6}",
           (const wchar_t *)0x26,
           bIgnoreCase);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x22E,
        (__int64)"OneCoreUap\\Internal\\Shell\\inc\\ContentDeliveryManagerAccountTokenProvider.h",
        (const char *)(unsigned int)v5);
  }
LABEL_6:
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&lpString1);
  return IsAnyMicrosoftDomainAccount;
}
