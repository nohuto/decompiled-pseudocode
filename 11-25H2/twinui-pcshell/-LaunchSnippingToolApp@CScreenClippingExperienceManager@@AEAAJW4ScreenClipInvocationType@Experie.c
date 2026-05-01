/*
 * XREFs of ?LaunchSnippingToolApp@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x180393BE8
 * Callers:
 *     ?LaunchOrToggle@CScreenClippingExperienceManager@@EEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x180393B10 (-LaunchOrToggle@CScreenClippingExperienceManager@@EEAAJW4ScreenClipInvocationType@Experience@She.c)
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800287E0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800310C4 (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800FCC90 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBGAEBV10@@Z @ 0x1801BF0D0 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_1801BF0D0.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ?ScreenClipInvocationTypeToString@CScreenClippingExperienceManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x180394314 (-ScreenClipInvocationTypeToString@CScreenClippingExperienceManager@@AEAA-AV-$basic_string@GU-$ch.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56661439@@@details@wil@@QEAA_NXZ @ 0x18039458C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56661439@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57984728@@@details@wil@@QEAA_NXZ @ 0x1803945C8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_57984728@@@details@wil@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CScreenClippingExperienceManager::LaunchSnippingToolApp(__int64 a1, unsigned int a2)
{
  const struct _tlgProvider_t *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r9
  unsigned __int64 v6; // r8
  wchar_t *v7; // rdx
  HRESULT StringW; // ebx
  const WCHAR *v9; // rax
  const char *v10; // r9
  __int64 v11; // rdx
  const WCHAR *v12; // r8
  unsigned int v14; // [rsp+30h] [rbp-D0h] BYREF
  DWORD pcchOut[3]; // [rsp+34h] [rbp-CCh] BYREF
  SHELLEXECUTEINFOW pExecInfo; // [rsp+40h] [rbp-C0h] BYREF
  LPCWSTR lpFile[3]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v18; // [rsp+C8h] [rbp-38h]
  void *v19[4]; // [rsp+D0h] [rbp-30h] BYREF
  WCHAR String1[40]; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  v3 = SingleViewExperienceLogging::Provider(a1);
  if ( *(_DWORD *)v3 > 5u )
  {
    v14 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (__int64)v3,
      byte_1807C5982,
      0LL,
      v5,
      (__int64)&v14);
  }
  CScreenClippingExperienceManager::ScreenClipInvocationTypeToString(v4, v19, a2);
  std::operator+<unsigned short>(lpFile, (__int64)L"ms-screenclip://?source=", v19);
  if ( a2 == 7 )
  {
    v6 = 15LL;
    v7 = L"&type=recording";
LABEL_8:
    std::wstring::append(lpFile, v7, v6);
    goto LABEL_9;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56661439>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56661439>::GetImpl'::`2'::impl)
    && a2 == 8 )
  {
    v6 = 19LL;
    v7 = L"&type=textExtractor";
    goto LABEL_8;
  }
LABEL_9:
  memset_0(String1, 0, 0x4CuLL);
  pcchOut[0] = 38;
  StringW = AssocQueryStringW(0x1000u, ASSOCSTR_MAX, L"ms-screenclip", 0LL, String1, pcchOut);
  if ( StringW >= 0 )
  {
    if ( CompareStringOrdinal(String1, -1, L"AppXarkze06z7pvhtc0xch943brvx8pbb8xa", -1, 1) == 2
      || CompareStringOrdinal(String1, -1, L"AppXbemgape21yns3k5pd4ah40jz06yq6xrk", -1, 1) == 2 )
    {
      StringW = -2147019873;
      goto LABEL_24;
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_57984728>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_57984728>::GetImpl'::`2'::impl) )
    {
      memset_0(&pExecInfo, 0, sizeof(pExecInfo));
      pExecInfo.cbSize = 112;
      pExecInfo.fMask = 0x4000000;
      pExecInfo.hwnd = 0LL;
      pExecInfo.lpVerb = L"open";
      v9 = (const WCHAR *)lpFile;
      if ( v18 > 7 )
        v9 = lpFile[0];
      pExecInfo.lpFile = v9;
      *(_OWORD *)&pExecInfo.lpParameters = 0LL;
      pExecInfo.nShow = 1;
      pExecInfo.hInstApp = 0LL;
      if ( !ShellExecuteExW(&pExecInfo) )
      {
        v11 = 414LL;
LABEL_17:
        StringW = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)v11,
                    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
                    v10);
        goto LABEL_24;
      }
    }
    else
    {
      v12 = (const WCHAR *)lpFile;
      if ( v18 > 7 )
        v12 = lpFile[0];
      if ( (__int64)ShellExecuteW(0LL, L"open", v12, 0LL, 0LL, 1) <= 32 )
      {
        v11 = 421LL;
        goto LABEL_17;
      }
    }
    StringW = 0;
  }
LABEL_24:
  std::wstring::_Tidy_deallocate((void **)lpFile);
  std::wstring::_Tidy_deallocate(v19);
  return (unsigned int)StringW;
}
