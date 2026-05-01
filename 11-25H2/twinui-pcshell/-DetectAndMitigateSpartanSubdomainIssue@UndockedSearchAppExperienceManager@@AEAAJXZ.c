/*
 * XREFs of ?DetectAndMitigateSpartanSubdomainIssue@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1803A766C
 * Callers:
 *     ?ActivateSearch@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x180248C00 (-ActivateSearch@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@U.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800AEFE8 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180198438 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z @ 0x1802C8390 (-SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z.c)
 *     ??$UndockedSearchExperienceManager_NumberOfSubdomainsIssueDetected@PEBGAEAIAEA_NAEA_N@SearchAppExperienceManagerTelemetry@@SAX$$QEAPEBGAEAIAEA_N2@Z @ 0x18039F5AC (--$UndockedSearchExperienceManager_NumberOfSubdomainsIssueDetected@PEBGAEAIAEA_NAEA_N@SearchAppE.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56811165@@@details@wil@@QEAA_NXZ @ 0x1803B27C8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56811165@@@details@wil@@QEAA_NXZ.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::DetectAndMitigateSpartanSubdomainIssue(
        UndockedSearchAppExperienceManager *this)
{
  bool v2; // bl
  bool v3; // di
  LSTATUS DWORD; // eax
  LSTATUS v5; // eax
  const char *v6; // r9
  int v7; // eax
  int v8; // eax
  int v10[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v12; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0;
  v3 = 0;
  v12 = 0;
  DWORD = SHRegGetDWORD(
            HKEY_CLASSES_ROOT,
            L"Local Settings\\Software\\Microsoft\\Windows\\CurrentVersion\\AppContainer\\Storage\\microsoftwindows.client"
             ".cbs_cw5n1h2txyewy\\Internet Explorer\\DOMStorage\\bing.com",
            L"NumberOfSubdomains",
            &v12);
  if ( DWORD < 0 )
  {
    if ( DWORD != -2147024894 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3E2,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)DWORD);
  }
  else
  {
    v2 = v12 >= 0x3E8;
  }
  v5 = SHRegGetDWORD(
         HKEY_CLASSES_ROOT,
         L"Local Settings\\Software\\Microsoft\\Windows\\CurrentVersion\\AppContainer\\Storage\\microsoftwindows.client.cb"
          "s_cw5n1h2txyewy\\Internet Explorer\\DOMStorage\\client.cbs",
         L"NumberOfSubdomains",
         &v12);
  if ( v5 < 0 )
  {
    if ( v5 != -2147024894 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3EC,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
  }
  else
  {
    v3 = v12 >= 0x3E8;
  }
  if ( v2 || v3 )
  {
    *(_QWORD *)v10 = winrt::hstring::c_str((UndockedSearchAppExperienceManager *)((char *)this + 848));
    SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_NumberOfSubdomainsIssueDetected<unsigned short const *,unsigned int &,bool &,bool &>((__int64 *)v10);
    try
    {
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56811165>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56811165>::GetImpl'::`2'::impl) )
      {
        if ( v2 )
        {
          v7 = SHRegSetDWORD(
                 HKEY_CLASSES_ROOT,
                 L"Local Settings\\Software\\Microsoft\\Windows\\CurrentVersion\\AppContainer\\Storage\\microsoftwindows.c"
                  "lient.cbs_cw5n1h2txyewy\\Internet Explorer\\DOMStorage\\bing.com",
                 L"NumberOfSubdomains",
                 1);
          if ( v7 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x3F6,
              (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
              (const char *)(unsigned int)v7);
        }
        if ( v3 )
        {
          v8 = SHRegSetDWORD(
                 HKEY_CLASSES_ROOT,
                 L"Local Settings\\Software\\Microsoft\\Windows\\CurrentVersion\\AppContainer\\Storage\\microsoftwindows.c"
                  "lient.cbs_cw5n1h2txyewy\\Internet Explorer\\DOMStorage\\client.cbs",
                 L"NumberOfSubdomains",
                 1);
          if ( v8 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x3FA,
              (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
              (const char *)(unsigned int)v8);
        }
        ++*((_DWORD *)this + 225);
      }
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x402,
                             (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
                             v6);
    }
  }
  return 0LL;
}
