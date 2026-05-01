/*
 * XREFs of ?query_interface@?$root_implements@VSnapEducationHandler@@UIApplicationViewChangeListener@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180271654
 * Callers:
 *     ?QueryInterface@?$implements@VSnapEducationHandler@@UIApplicationViewChangeListener@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18057D360 (-QueryInterface@-$implements@VSnapEducationHandler@@UIApplicationViewChangeListener@@@winrt@@UEA.c)
 * Callees:
 *     ?AddRef@?$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@QEAAIXZ @ 0x1801C7F30 (-AddRef@-$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt.c)
 */

__int64 __fastcall winrt::impl::root_implements<SnapEducationHandler,IApplicationViewChangeListener>::query_interface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v3; // r10

  v3 = (a1 - 8) & -(__int64)(a1 != 0);
  if ( *a2 == winrt::impl::guid_v<IApplicationViewChangeListener> && a2[1] == 0x5C48281337B642A9LL )
  {
    *a3 = v3;
    if ( v3 )
    {
      winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef(a1);
      return 0LL;
    }
  }
  else
  {
    *a3 = 0LL;
  }
  return winrt::impl::root_implements<SnapLayoutProvider,IInspectable>::query_interface_common(a1, a2, a3);
}
