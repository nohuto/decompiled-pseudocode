/*
 * XREFs of ?LaunchOrToggle@CScreenClippingExperienceManager@@EEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x18039B9A0
 * Callers:
 *     ?OnMessage@CScreenClippingExperienceManager@@EEAAJI_K_J@Z @ 0x1801D0E00 (-OnMessage@CScreenClippingExperienceManager@@EEAAJI_K_J@Z.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18003046C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180068AAC (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800B6908 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?LaunchSnippingToolApp@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x18039BA78 (-LaunchSnippingToolApp@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experie.c)
 *     ?LogSuccessfulLaunch@CScreenClippingExperienceManager@@AEAAXUhstring@winrt@@W4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x18039BDE8 (-LogSuccessfulLaunch@CScreenClippingExperienceManager@@AEAAXUhstring@winrt@@W4ScreenClipInvocati.c)
 *     ?ShowExperience@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x18039C874 (-ShowExperience@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@She.c)
 *     ?StartAppClose@CScreenClippingExperienceManager@@AEAAJXZ @ 0x18039C934 (-StartAppClose@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56661439@@@details@wil@@QEAA_NXZ @ 0x18039CB28 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56661439@@@details@wil@@QEAA_NXZ.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::LaunchOrToggle(
        CScreenClippingExperienceManager *a1,
        unsigned int a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r9
  __int64 v6; // rcx
  const unsigned __int16 *v7; // rdx
  int started; // edi
  __int64 v9; // rdx
  winrt::hstring *v11; // rax
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v14; // [rsp+50h] [rbp+18h] BYREF

  v4 = SingleViewExperienceLogging::Provider((__int64)a1);
  if ( *(_DWORD *)v4 > 5u )
  {
    v14 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (__int64)v4,
      byte_1807F9497,
      0LL,
      v5,
      (__int64)&v14);
  }
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56661439>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56661439>::GetImpl'::`2'::impl)
    && a2 == 8 )
  {
    return 0LL;
  }
  if ( (int)CScreenClippingExperienceManager::LaunchSnippingToolApp(v6, a2) < 0 )
  {
    if ( *((_DWORD *)a1 + 24) == 2 )
    {
      started = CScreenClippingExperienceManager::StartAppClose(a1);
      if ( started < 0 )
      {
        v9 = 313LL;
LABEL_10:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
          (const char *)(unsigned int)started);
        return (unsigned int)started;
      }
    }
    else
    {
      started = CScreenClippingExperienceManager::ShowExperience(a1, a2);
      if ( started < 0 )
      {
        v9 = 317LL;
        goto LABEL_10;
      }
    }
    v7 = L"ScreenClipping";
    goto LABEL_14;
  }
  v7 = L"SnippingTool";
LABEL_14:
  v11 = winrt::hstring::hstring((winrt::hstring *)&v14, v7);
  CScreenClippingExperienceManager::LogSuccessfulLaunch(v12, v11, a2);
  return 0LL;
}
