/*
 * XREFs of ?GetForCurrentProcess@?$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800FB8E4
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_9f3d85dcc87eb6e82f004e602480a983_@@CA@AEBUIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@Z @ 0x1800FB7D0 (-_lambda_invoker_cdecl_@_lambda_9f3d85dcc87eb6e82f004e602480a983_@@CA@AEBUIKnownOnScreenInputUri.c)
 *     ?GetForCurrentProcess@InputSite@Input@Internal@UI@Windows@winrt@@SA@XZ @ 0x1800FB86C (-GetForCurrentProcess@InputSite@Input@Internal@UI@Windows@winrt@@SA@XZ.c)
 *     ?Dictation@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ @ 0x180210C18 (-Dictation@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ.c)
 *     ?CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x18026D9F0 (-CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ.c)
 *     ?OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView@3UI@456@AEBUWindowTabViewPropertyChangedEventArgs@38456@@Z @ 0x18026DE90 (-OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x180282748 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion.c)
 *     ?LogPrimaryViewShowRequestInfo@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHSTRING__@@0@Z @ 0x180474EB0 (-LogPrimaryViewShowRequestInfo@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHSTRING__@@0@Z.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion_0 @ 0x1805B4DB8 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion_0.c)
 *     ?CleanUpRemoteSystem@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x180624C2C (-CleanUpRemoteSystem@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?DisconnectProvider@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXAEBUhstring@6@@Z @ 0x180625CD8 (-DisconnectProvider@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXAEBUhs.c)
 *     ?RemoveWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUWindowId@UI@56@@Z @ 0x18062A8FC (-RemoveWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NA.c)
 *     ?SwitchToRemoteDesktop@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x18062B6F4 (-SwitchToRemoteDesktop@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt.c)
 *     ?OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x180635918 (-OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAX.c)
 *     ?SetForegroundToLastRegistedProviderWindow@SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBUhstring@6@@Z @ 0x180648AD4 (-SetForegroundToLastRegistedProviderWindow@SwitchConnectStateBase@implementation@Shell@Internal@.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Internal_Input_IInputSiteStatics<winrt::Windows::UI::Internal::Input::IInputSiteStatics>::GetForCurrentProcess(
        __int64 **a1,
        _QWORD *a2)
{
  __int64 *v2; // rcx
  __int64 v4; // rax
  unsigned int v5; // eax
  int v7; // [rsp+28h] [rbp-20h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = a2;
  v2 = *a1;
  v9 = 0LL;
  v7 = 0;
  v4 = *v2;
  v8 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v4 + 88))(v2, &v9);
  winrt::check_hresult(&v10, v5, &v7);
  *a2 = v9;
  return a2;
}
