/*
 * XREFs of ?GetRemoteDesktopConnectionState@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEBA?AW4CloudPCState@3456@AEBUguid@6@@Z @ 0x180648430
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetNetworkConnectivityLevel@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062884 (-GetNetworkConnectivityLevel@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConn.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180065DB4 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800AD2D8 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??1?$_Hash@V?$_Umap_traits@Uhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x1801E95F0 (--1-$_Hash@V-$_Umap_traits@Uhstring@winrt@@U-$com_ptr@UIVirtualDesktop@@@2@V-$_Uhash_compare@Uhs.c)
 *     ?GetRemoteSystem@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AURemoteSystem@3456@AEBUhstring@6@@Z @ 0x180627BB8 (-GetRemoteSystem@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA-AURemoteS.c)
 *     ?GetAll@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA?AV?$unordered_map@Uhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@5@V?$allocator@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@5@@std@@XZ @ 0x180644E94 (-GetAll@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA-AV-$unordered_.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::GetRemoteDesktopConnectionState(
        __int64 a1)
{
  unsigned int NetworkConnectivityLevel; // ebx
  RTL_SRWLOCK v3[8]; // [rsp+20h] [rbp-40h] BYREF
  void (__fastcall ***v4)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp+10h] BYREF
  volatile signed __int32 *v5; // [rsp+80h] [rbp+20h] BYREF
  __int64 v6; // [rsp+88h] [rbp+28h] BYREF

  winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::GetAll(*(RTL_SRWLOCK **)(a1 + 136), v3);
  if ( v3[2].Ptr )
  {
    winrt::hstring::hstring((winrt::hstring *)&v5, (const struct winrt::hstring *)(*(_QWORD *)v3[1].Ptr + 16LL));
    winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetRemoteSystem(&v4, &v5);
    v6 = 0LL;
    if ( winrt::Windows::Foundation::operator==(&v4, &v6) )
      NetworkConnectivityLevel = 100;
    else
      NetworkConnectivityLevel = winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel((__int64 *)&v4);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v4);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v5);
  }
  else
  {
    NetworkConnectivityLevel = 100;
  }
  std::_Hash<std::_Umap_traits<winrt::hstring,winrt::com_ptr<IVirtualDesktop>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>>,0>>::~_Hash<std::_Umap_traits<winrt::hstring,winrt::com_ptr<IVirtualDesktop>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>>,0>>((__int64)v3);
  return NetworkConnectivityLevel;
}
