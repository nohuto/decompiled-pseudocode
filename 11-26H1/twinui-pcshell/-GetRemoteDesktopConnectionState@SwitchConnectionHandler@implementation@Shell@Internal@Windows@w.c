/*
 * XREFs of ?GetRemoteDesktopConnectionState@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEBA?AW4CloudPCState@3456@AEBUguid@6@@Z @ 0x18066E300
 * Callers:
 *     <none>
 * Callees:
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180025E74 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetNetworkConnectivityLevel@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A684 (-GetNetworkConnectivityLevel@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConn.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??1?$_Hash@V?$_Umap_traits@Uhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x1801DE17C (--1-$_Hash@V-$_Umap_traits@Uhstring@winrt@@U-$com_ptr@UIVirtualDesktop@@@2@V-$_Uhash_compare@Uhs.c)
 *     ?GetRemoteSystem@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AURemoteSystem@3456@AEBUhstring@6@@Z @ 0x18064D6B4 (-GetRemoteSystem@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA-AURemoteS.c)
 *     ?GetAll@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA?AV?$unordered_map@Uhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@5@V?$allocator@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@5@@std@@XZ @ 0x18066AC34 (-GetAll@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA-AV-$unordered_.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::GetRemoteDesktopConnectionState(
        __int64 a1)
{
  unsigned int v1; // r8d
  unsigned int NetworkConnectivityLevel; // ebx
  RTL_SRWLOCK v4[8]; // [rsp+20h] [rbp-40h] BYREF
  void (__fastcall ***v5)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp+10h] BYREF
  volatile signed __int32 *v6; // [rsp+80h] [rbp+20h] BYREF
  __int64 v7; // [rsp+88h] [rbp+28h] BYREF

  winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::GetAll(*(RTL_SRWLOCK **)(a1 + 136), v4);
  if ( v4[2].Ptr )
  {
    winrt::hstring::hstring((winrt::hstring *)&v6, (const struct winrt::hstring *)(*(_QWORD *)v4[1].Ptr + 16LL), v1);
    winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetRemoteSystem(&v5, &v6);
    v7 = 0LL;
    if ( winrt::Windows::Foundation::operator==(&v5, &v7) )
      NetworkConnectivityLevel = 100;
    else
      NetworkConnectivityLevel = winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel((__int64 *)&v5);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v5);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v6);
  }
  else
  {
    NetworkConnectivityLevel = 100;
  }
  std::_Hash<std::_Umap_traits<winrt::hstring,winrt::com_ptr<IVirtualDesktop>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>>,0>>::~_Hash<std::_Umap_traits<winrt::hstring,winrt::com_ptr<IVirtualDesktop>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>>,0>>(v4);
  return NetworkConnectivityLevel;
}
