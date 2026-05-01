/*
 * XREFs of ?GetMicrosoftResourceManager@?$consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemResourceManagerStatics@UISystemResourceManagerStatics@Internal@Core@Resources@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180065988
 * Callers:
 *     ?XamlContent@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEBA?AUIInspectable@Foundation@67@XZ @ 0x1800658F8 (-XamlContent@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@.c)
 *     ?GetForCurrentThread@CoreWindow@Core@UI@Windows@winrt@@SA@XZ @ 0x180066A28 (-GetForCurrentThread@CoreWindow@Core@UI@Windows@winrt@@SA@XZ.c)
 *     ?Current@XamlApplication@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA?AU123456@XZ @ 0x1800AF008 (-Current@XamlApplication@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA-AU123456@XZ.c)
 *     ?Current@Window@Xaml@UI@Windows@winrt@@SA@XZ @ 0x18010317C (-Current@Window@Xaml@UI@Windows@winrt@@SA@XZ.c)
 *     ?Current@XamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@XZ @ 0x1801B5480 (-Current@XamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@XZ.c)
 *     ?XamlContent@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEBA?AUIInspectable@Foundation@67@XZ @ 0x18029F740 (-XamlContent@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Wi.c)
 *     ?XamlContent@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AUIInspectable@Foundation@67@XZ @ 0x1802A2418 (-XamlContent@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@_ea_1802A2418.c)
 *     ?Current@XamlApplication@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA@XZ @ 0x1802BF47C (-Current@XamlApplication@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_fbc83b1fe666e9204d492b54b5fecab0_@@CA@AEBUIXamlExtensionsStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@Z @ 0x1802C1480 (-_lambda_invoker_cdecl_@_lambda_fbc83b1fe666e9204d492b54b5fecab0_@@CA@AEBUIXamlExtensionsStatics.c)
 *     ?InitializeForCurrentThread@WindowsXamlManager@Hosting@Xaml@UI@Microsoft@winrt@@SA@XZ @ 0x18043EF7C (-InitializeForCurrentThread@WindowsXamlManager@Hosting@Xaml@UI@Microsoft@winrt@@SA@XZ.c)
 *     ?XamlContent@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AUIInspectable@Foundation@67@XZ @ 0x18044516C (-XamlContent@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows.c)
 *     ?Current@Application@Xaml@UI@Microsoft@winrt@@SA@XZ @ 0x1804466E8 (-Current@Application@Xaml@UI@Microsoft@winrt@@SA@XZ.c)
 *     ?Current@XamlApplication_WASDK@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA?AU1234567@XZ @ 0x180446760 (-Current@XamlApplication_WASDK@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA-AU1234567.c)
 *     ?ThreadProc@WindowsXamlManagerThread@@SAKPEAX@Z @ 0x180447410 (-ThreadProc@WindowsXamlManagerThread@@SAKPEAX@Z.c)
 *     _lambda_3e03a3c31af621875be24bd5f43287a8_::operator() @ 0x1805CA320 (_lambda_3e03a3c31af621875be24bd5f43287a8_--operator().c)
 *     _lambda_3e036b3644723c146ee880a5a6e63477_::operator() @ 0x1805F5980 (_lambda_3e036b3644723c146ee880a5a6e63477_--operator().c)
 *     ?OnDeviceAdded@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUDeviceWatcher@Enumeration@Devices@56@AEBUDeviceInformation@8956@@Z @ 0x1805F7E00 (-OnDeviceAdded@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUDevi.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemResourceManagerStatics<winrt::Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerStatics>::GetMicrosoftResourceManager(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  unsigned int v4; // eax
  _QWORD *result; // rax
  _BYTE v6[4]; // [rsp+24h] [rbp-34h] BYREF
  int v7; // [rsp+28h] [rbp-30h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h]
  _QWORD *v9; // [rsp+40h] [rbp-18h] BYREF

  v9 = a2;
  v2 = *a1;
  v9 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v2 + 48LL))(v2, &v9);
  winrt::check_hresult(v6, v4, &v7);
  result = a2;
  *a2 = v9;
  return result;
}
