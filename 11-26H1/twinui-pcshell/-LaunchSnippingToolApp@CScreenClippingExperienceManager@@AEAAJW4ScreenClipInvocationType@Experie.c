/*
 * XREFs of ?LaunchSnippingToolApp@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x18039BA78
 * Callers:
 *     ?LaunchOrToggle@CScreenClippingExperienceManager@@EEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x18039B9A0 (-LaunchOrToggle@CScreenClippingExperienceManager@@EEAAJW4ScreenClipInvocationType@Experience@She.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180030E44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x180033DA8 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180068AAC (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800B6908 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBGAEBV10@@Z @ 0x1801BBAE0 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_1801BBAE0.c)
 *     ?InternalRelease@?$ComPtr@UIUpdateViewValueSet@@@WRL@Microsoft@@IEAAKXZ @ 0x180297034 (-InternalRelease@-$ComPtr@UIUpdateViewValueSet@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??$MakeAndInitialize@VCLauncherUIMode@@V1@W4EC_HOST_UI_MODE@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCLauncherUIMode@@@WRL@Microsoft@@@012@$$QEAW4EC_HOST_UI_MODE@@@Z @ 0x180399ED0 (--$MakeAndInitialize@VCLauncherUIMode@@V1@W4EC_HOST_UI_MODE@@@Details@WRL@Microsoft@@YAJV-$ComPt.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_c69c80f028b94beb4c3634775a85cf13___ @ 0x180399F9C (Windows--Internal--ComTaskPool--QueueTask__lambda_c69c80f028b94beb4c3634775a85cf13___.c)
 *     ?ScreenClipInvocationTypeToString@CScreenClippingExperienceManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x18039C764 (-ScreenClipInvocationTypeToString@CScreenClippingExperienceManager@@AEAA-AV-$basic_string@GU-$ch.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_38931291@@@details@wil@@QEAA_NXZ @ 0x18039CAEC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_38931291@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56661439@@@details@wil@@QEAA_NXZ @ 0x18039CB28 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56661439@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57984728@@@details@wil@@QEAA_NXZ @ 0x18039CBA4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_57984728@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_58642880@@@details@wil@@QEAA_NXZ @ 0x18039CBE4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_58642880@@@details@wil@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CScreenClippingExperienceManager::LaunchSnippingToolApp(__int64 a1, unsigned int a2)
{
  const struct _tlgProvider_t *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r9
  const wchar_t *v6; // rdx
  int StringW; // ebx
  const WCHAR *v8; // r8
  const char *v9; // r9
  __int64 v10; // rdx
  const WCHAR *v11; // rax
  HINSTANCE v12; // rax
  const char *v13; // r9
  __int64 v14; // rcx
  unsigned int v16; // [rsp+30h] [rbp-D0h] BYREF
  HINSTANCE v17; // [rsp+38h] [rbp-C8h] BYREF
  DWORD pcchOut[4]; // [rsp+40h] [rbp-C0h] BYREF
  SHELLEXECUTEINFOW pExecInfo; // [rsp+50h] [rbp-B0h] BYREF
  LPCWSTR lpFile[3]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+D8h] [rbp-28h]
  _QWORD v22[4]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v23[4]; // [rsp+100h] [rbp+0h] BYREF
  WCHAR String1[40]; // [rsp+120h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v3 = SingleViewExperienceLogging::Provider(a1);
  if ( *(_DWORD *)v3 > 5u )
  {
    v16 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (__int64)v3,
      byte_1807F9064,
      0LL,
      v5,
      (__int64)&v16);
  }
  CScreenClippingExperienceManager::ScreenClipInvocationTypeToString(v4, v23, a2);
  std::operator+<unsigned short>(lpFile, (__int64)L"ms-screenclip://?source=");
  if ( a2 == 7 )
  {
    v6 = L"&type=recording";
LABEL_8:
    std::wstring::append((__int64)lpFile, (__int64)v6);
    goto LABEL_9;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56661439>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56661439>::GetImpl'::`2'::impl)
    && a2 == 8 )
  {
    v6 = L"&type=textExtractor";
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
      goto LABEL_35;
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_38931291>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_38931291>::GetImpl'::`2'::impl) )
    {
      std::wstring::wstring((__int64)v22, lpFile);
      StringW = Windows::Internal::ComTaskPool::QueueTask__lambda_c69c80f028b94beb4c3634775a85cf13___(v14, (__int64)v22);
      std::wstring::_Tidy_deallocate(v22);
      if ( StringW < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1B6,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
          (const char *)(unsigned int)StringW);
        goto LABEL_35;
      }
    }
    else
    {
      if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_57984728>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_57984728>::GetImpl'::`2'::impl) )
      {
        v8 = (const WCHAR *)lpFile;
        if ( v21 > 7 )
          v8 = lpFile[0];
        if ( (__int64)ShellExecuteW(0LL, L"open", v8, 0LL, 0LL, 1) <= 32 )
        {
          v10 = 487LL;
LABEL_31:
          StringW = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)v10,
                      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
                      v9);
          goto LABEL_35;
        }
        goto LABEL_28;
      }
      memset_0(&pExecInfo, 0, sizeof(pExecInfo));
      pExecInfo.cbSize = 112;
      pExecInfo.fMask = 0x4000000;
      pExecInfo.hwnd = 0LL;
      pExecInfo.lpVerb = L"open";
      v11 = (const WCHAR *)lpFile;
      if ( v21 > 7 )
        v11 = lpFile[0];
      pExecInfo.lpFile = v11;
      *(_OWORD *)&pExecInfo.lpParameters = 0LL;
      pExecInfo.nShow = 1;
      pExecInfo.hInstApp = 0LL;
      if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_58642880>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_58642880>::GetImpl'::`2'::impl) )
      {
        if ( !ShellExecuteExW(&pExecInfo) )
        {
          v10 = 479LL;
          goto LABEL_31;
        }
        goto LABEL_28;
      }
      v17 = 0LL;
      v16 = 0;
      if ( (int)Microsoft::WRL::Details::MakeAndInitialize<CLauncherUIMode,CLauncherUIMode,enum EC_HOST_UI_MODE>(
                  (__int64 *)&v17,
                  &v16) >= 0 )
      {
        pExecInfo.fMask |= 0x8000000u;
        v12 = v17;
        if ( v17 )
          v12 = v17 + 10;
        pExecInfo.hInstApp = v12;
      }
      if ( !ShellExecuteExW(&pExecInfo) )
      {
        StringW = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x1DA,
                    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
                    v13);
        Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease((__int64 *)&v17);
        goto LABEL_35;
      }
      Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease((__int64 *)&v17);
    }
LABEL_28:
    StringW = 0;
  }
LABEL_35:
  std::wstring::_Tidy_deallocate(lpFile);
  std::wstring::_Tidy_deallocate(v23);
  return (unsigned int)StringW;
}
