/*
 * XREFs of std::_Func_impl_no_alloc__lambda_1908bf4dcb0a72ead8215abd107bde15__void_winrt::guid_const_&_::_Do_call @ 0x180636F50
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800A8318 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ??$?RURemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@URemoteDesktopStateChangedEventArgs@2345@@?$event@U?$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBURemoteSessionWindowManager@implementation@Shell@Internal@Windows@1@AEBURemoteDesktopStateChangedEventArgs@4561@@Z @ 0x18061E57C (--$-RURemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@URemoteDesktopStat.c)
 *     ??$make@URemoteDesktopConnectedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUguid@6@@winrt@@YA?A_PAEBUguid@0@@Z @ 0x18063132C (--$make@URemoteDesktopConnectedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUguid@6.c)
 *     ?get@?$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x180637C14 (-get@-$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::_Func_impl_no_alloc__lambda_1908bf4dcb0a72ead8215abd107bde15__void_winrt::guid_const___::_Do_call(
        __int64 a1,
        const struct winrt::guid *a2)
{
  RTL_SRWLOCK *v3; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v5; // [rsp+40h] [rbp+18h] BYREF

  winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>::get(a1 + 8, &v5);
  v3 = v5;
  if ( v5 )
  {
    winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteDesktopConnectedEventArgs,winrt::guid const &>(
      &v4,
      a2);
    winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>(
      v3 + 32,
      (__int64)v3,
      (__int64)&v4);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v4);
  }
  if ( v3 )
    winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((_QWORD **)&v5);
}
