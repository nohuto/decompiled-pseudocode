/*
 * XREFs of ?LaunchRemoteSystemSettingsAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180628B28
 * Callers:
 *     ?LaunchRemoteSystemSettingsAsync@?$produce@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemDataModelStatics@3456@@impl@winrt@@UEAAHPEAXPEAPEAX@Z @ 0x180628AD0 (-LaunchRemoteSystemSettingsAsync@-$produce@URemoteSystemDataModel@factory_implementation@Shell@I.c)
 *     ?LaunchRemoteSystemSettingsAsync@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180628C20 (-LaunchRemoteSystemSettingsAsync@RemoteSystemDataModel@implementation@Shell@Internal@Windows@win.c)
 * Callees:
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062824 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@0@Z @ 0x1802A392C (--Hwinrt@@YA-AUhstring@0@AEBU10@0@Z.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@PEBG@Z @ 0x1802AB088 (--Hwinrt@@YA-AUhstring@0@AEBU10@PEBG@Z.c)
 *     ??0Uri@Foundation@Windows@winrt@@QEAA@AEBUhstring@param@3@@Z @ 0x1802C0138 (--0Uri@Foundation@Windows@winrt@@QEAA@AEBUhstring@param@3@@Z.c)
 *     ?LaunchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@UUri@856@@Z @ 0x1806287F4 (-LaunchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AU-.c)
 */

// Hidden C++ exception states: #wind=5
const struct winrt::Windows::Foundation::Uri *__fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::LaunchRemoteSystemSettingsAsync(
        __int64 a1,
        const struct winrt::Windows::Foundation::Uri *a2,
        __int64 **a3)
{
  __int64 *v6; // rbx
  __int64 *v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rax
  __int64 *v10; // rax
  volatile signed __int32 *v12; // [rsp+28h] [rbp-48h] BYREF
  volatile signed __int32 *v13; // [rsp+30h] [rbp-40h] BYREF
  volatile signed __int32 *v14; // [rsp+38h] [rbp-38h] BYREF
  volatile signed __int32 *v15; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v16[5]; // [rsp+48h] [rbp-28h] BYREF
  const struct winrt::Windows::Foundation::Uri *v17; // [rsp+98h] [rbp+28h] BYREF
  volatile signed __int32 *v18; // [rsp+A8h] [rbp+38h] BYREF

  v17 = a2;
  v6 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
         a3,
         &v15);
  v7 = (__int64 *)winrt::operator+((volatile signed __int32 *)&v14, &c_remoteSystemSettingsUri, (__int64)L"?");
  v8 = (__int64 *)winrt::operator+((volatile signed __int32 *)&v13, v7, &c_remoteDesktopIdQueryParam);
  v9 = (__int64 *)winrt::operator+((volatile signed __int32 *)&v12, v8, (__int64)L"=");
  v16[0] = *(_QWORD *)winrt::operator+((volatile signed __int32 *)&v18, v9, v6);
  v10 = (__int64 *)winrt::Windows::Foundation::Uri::Uri(
                     (winrt::Windows::Foundation::Uri *)&v17,
                     (const struct winrt::param::hstring *)v16);
  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::LaunchAsync(a1, a2, a3, v10);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v18);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v12);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v13);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v14);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v15);
  return a2;
}
