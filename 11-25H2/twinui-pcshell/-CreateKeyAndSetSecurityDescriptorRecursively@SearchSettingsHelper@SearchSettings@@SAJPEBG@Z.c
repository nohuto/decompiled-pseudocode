/*
 * XREFs of ?CreateKeyAndSetSecurityDescriptorRecursively@SearchSettingsHelper@SearchSettings@@SAJPEBG@Z @ 0x1803A73BC
 * Callers:
 *     ?AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ @ 0x1803A6C80 (-AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_ptr@U_SID@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@QEAAXPEAU_SID@@@Z @ 0x1802CECD0 (-reset@-$unique_ptr@U_SID@@U-$function_deleter@P6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@Z@wil@@@wistd@.c)
 *     ??1?$out_param_ptr_t@PEAPEAU_ACL@@V?$unique_ptr@U_ACL@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1803A4F78 (--1-$out_param_ptr_t@PEAPEAU_ACL@@V-$unique_ptr@U_ACL@@U-$function_deleter@P6APEAXPEAX@Z$1-Local.c)
 *     ?AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBG0PEAU_EXPLICIT_ACCESS_W@@@Z @ 0x1803A699C (-AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBG0PEAU_EXPLICIT_ACCESS_W@@@Z.c)
 *     ?EnsureKeyPathAndSetSecurityDescriptor@SearchSettingsHelper@SearchSettings@@SAJPEBG0@Z @ 0x1803A79F8 (-EnsureKeyPathAndSetSecurityDescriptor@SearchSettingsHelper@SearchSettings@@SAJPEBG0@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_40979072@@@details@wil@@QEAA_NXZ @ 0x1803B2340 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_40979072@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55370801@@@details@wil@@QEAA_NXZ @ 0x1803B25A4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55370801@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56097011@@@details@wil@@QEAA_NXZ @ 0x1803B269C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56097011@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56370341@@@details@wil@@QEAA_NXZ @ 0x1803B2750 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56370341@@@details@wil@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchSettings::SearchSettingsHelper::CreateKeyAndSetSecurityDescriptorRecursively(
        const unsigned __int16 *a1)
{
  BOOL v1; // ebx
  const char *v2; // r9
  unsigned int LastError; // ebx
  const unsigned __int16 *v4; // rdx
  int v5; // eax
  const unsigned __int16 *v6; // rdx
  __int64 v7; // rdx
  const unsigned __int16 *v8; // rdx
  const unsigned __int16 *v9; // rdx
  const unsigned __int16 *v10; // rdx
  const unsigned __int16 *v11; // rdx
  const unsigned __int16 *v12; // rdx
  const unsigned __int16 *v13; // rcx
  int v14; // eax
  PSID *p_pSid; // [rsp+20h] [rbp-50h] BYREF
  PSID Sid; // [rsp+28h] [rbp-48h] BYREF
  char v18; // [rsp+30h] [rbp-40h]
  struct _EXPLICIT_ACCESS_W v19; // [rsp+38h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  PSID pSid; // [rsp+80h] [rbp+10h] BYREF

  pSid = 0LL;
  p_pSid = &pSid;
  Sid = 0LL;
  v18 = 1;
  v1 = ConvertStringSidToSidW(
         L"S-1-15-3-1024-1086922356-207614091-3724853071-841836187-4018695103-34218837-3164163255-155871754",
         &Sid);
  wil::details::out_param_ptr_t<_ACL * *,wistd::unique_ptr<_ACL,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>>::~out_param_ptr_t<_ACL * *,wistd::unique_ptr<_ACL,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>>((__int64)&p_pSid);
  if ( !v1 )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x70,
                  (unsigned int)"shellcommon\\internal\\shell\\inc\\Search\\SearchSettingsHelper.h",
                  v2);
    goto LABEL_25;
  }
  memset(&v19.grfInheritance + 1, 0, 36);
  v19.grfAccessPermissions = 196639;
  v19.grfAccessMode = GRANT_ACCESS;
  v19.grfInheritance = 2;
  BuildTrusteeWithSidW(&v19.Trustee, pSid);
  v5 = SearchSettings::SearchSettingsHelper::AddAceToKeyRecursively(
         L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings",
         v4,
         &v19);
  LastError = v5;
  if ( v5 < 0 )
  {
    v7 = 120LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"shellcommon\\internal\\shell\\inc\\Search\\SearchSettingsHelper.h",
      (const char *)(unsigned int)v5);
    goto LABEL_25;
  }
  v5 = SearchSettings::SearchSettingsHelper::AddAceToKeyRecursively(
         L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings\\Dynamic",
         v6,
         &v19);
  LastError = v5;
  if ( v5 < 0 )
  {
    v7 = 121LL;
    goto LABEL_5;
  }
  v5 = SearchSettings::SearchSettingsHelper::AddAceToKeyRecursively(
         L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings\\Dynamic\\Current",
         v8,
         &v19);
  LastError = v5;
  if ( v5 < 0 )
  {
    v7 = 122LL;
    goto LABEL_5;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_40979072>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_40979072>::GetImpl'::`2'::impl) )
  {
    v5 = SearchSettings::SearchSettingsHelper::AddAceToKeyRecursively(
           L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings\\WebSearchProviders",
           v9,
           &v19);
    LastError = v5;
    if ( v5 < 0 )
    {
      v7 = 125LL;
      goto LABEL_5;
    }
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55370801>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55370801>::GetImpl'::`2'::impl) )
  {
    v5 = SearchSettings::SearchSettingsHelper::AddAceToKeyRecursively(
           L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings\\WebSearchProviders\\InstalledDates",
           v10,
           &v19);
    LastError = v5;
    if ( v5 < 0 )
    {
      v7 = 130LL;
      goto LABEL_5;
    }
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56097011>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56097011>::GetImpl'::`2'::impl) )
  {
    v5 = SearchSettings::SearchSettingsHelper::AddAceToKeyRecursively(
           L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings\\WebSearchProviders\\Index",
           v11,
           &v19);
    LastError = v5;
    if ( v5 < 0 )
    {
      v7 = 135LL;
      goto LABEL_5;
    }
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56370341>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56370341>::GetImpl'::`2'::impl) )
  {
    v5 = SearchSettings::SearchSettingsHelper::AddAceToKeyRecursively(
           L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings\\FileSearchProviders",
           v12,
           &v19);
    LastError = v5;
    if ( v5 < 0 )
    {
      v7 = 140LL;
      goto LABEL_5;
    }
  }
  v14 = SearchSettings::SearchSettingsHelper::EnsureKeyPathAndSetSecurityDescriptor(v13, v12);
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8F,
      (int)"shellcommon\\internal\\shell\\inc\\Search\\SearchSettingsHelper.h",
      (const char *)(unsigned int)v14);
  LastError = 0;
LABEL_25:
  wistd::unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::reset(&pSid, 0LL);
  return LastError;
}
