/*
 * XREFs of ?GetPinRequestContext@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@AEBUhstring@6@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x180296298
 * Callers:
 *     ?IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z @ 0x1800AFF8C (-IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x1805BB040 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     ?IsItemPinned@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@0@Z @ 0x1805C3220 (-IsItemPinned@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@0@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800B029C (--1-$unique_storage@U-$handle_null_only_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details.c)
 *     ?FromProcessThread@PinRequestContext@@SA?AV?$shared_ptr@VPinRequestContext@@@std@@PEAXK@Z @ 0x180186D3C (-FromProcessThread@PinRequestContext@@SA-AV-$shared_ptr@VPinRequestContext@@@std@@PEAXK@Z.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x180198578 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     _anonymous_namespace_::IsTrustedWindowsPinProcess @ 0x1802964E4 (_anonymous_namespace_--IsTrustedWindowsPinProcess.c)
 *     ?GetProcessHandleForClientOfObject@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@1@PEAUIUnknown@@K@Z @ 0x180296960 (-GetProcessHandleForClientOfObject@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$handle_null_onl.c)
 *     ??B?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop3@@Uimmersive_shell_component@6@@winrt@@QEBA?AUIInspectable@Foundation@Windows@1@XZ @ 0x180296AD4 (--B-$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInte.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?FromExplicitContext@PinRequestContext@@SA?AV?$shared_ptr@VPinRequestContext@@@std@@PEAXV?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x1805C19DC (-FromExplicitContext@PinRequestContext@@SA-AV-$shared_ptr@VPinRequestContext@@@std@@PEAXV-$basic.c)
 */

// Hidden C++ exception states: #wind=3
HANDLE *__fastcall winrt::Windows::Internal::Shell::implementation::PinManager::GetPinRequestContext(
        __int64 a1,
        HANDLE *a2,
        __int64 *a3,
        char a4,
        __int64 a5)
{
  _QWORD *v8; // rax
  HANDLE *v9; // rax
  HRESULT CallerTID; // eax
  PinRequestContext **v11; // rax
  __int64 v13[2]; // [rsp+20h] [rbp-60h] BYREF
  PinRequestContext *v14; // [rsp+30h] [rbp-50h] BYREF
  std::_Ref_count_base *v15; // [rsp+38h] [rbp-48h]
  __int128 v16; // [rsp+40h] [rbp-40h] BYREF
  __int64 v17; // [rsp+50h] [rbp-30h] BYREF
  HANDLE hObject; // [rsp+60h] [rbp-20h] BYREF
  DWORD dwTID; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v13[0] = (__int64)a2;
  hObject = 0LL;
  v8 = (_QWORD *)winrt::implements<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::Windows::Internal::Shell::PinManager,IPinManagerInterop3,winrt::immersive_shell_component>::operator winrt::Windows::Foundation::IInspectable(
                   a1,
                   v13);
  wil::GetProcessHandleForClientOfObject(&hObject, *v8);
  if ( v13[0] )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v13);
  if ( a4 || !(unsigned __int8)anonymous_namespace_::IsTrustedWindowsPinProcess(hObject, a5) )
  {
    dwTID = 0;
    CallerTID = CoGetCallerTID(&dwTID);
    if ( CallerTID < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x44E,
        (int)"pcshell\\twinui\\PinManager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)CallerTID,
        v13[0]);
    v11 = PinRequestContext::FromProcessThread(&v14, hObject, dwTID);
    *a2 = hObject;
    hObject = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
    a2[1] = *v11;
    a2[2] = v11[1];
    *v11 = 0LL;
    v11[1] = 0LL;
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
    if ( hObject )
      CloseHandle(hObject);
  }
  else
  {
    v16 = *(_OWORD *)winrt::hstring::operator std::basic_string_view<unsigned short>(a3, &v17);
    v9 = (HANDLE *)PinRequestContext::FromExplicitContext(&v14, hObject, &v16);
    *a2 = hObject;
    hObject = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
    a2[1] = *v9;
    a2[2] = v9[1];
    *v9 = 0LL;
    v9[1] = 0LL;
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
    wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
  }
  return a2;
}
