/*
 * XREFs of ?SetPhysicalDeviceAccessState@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXXZ @ 0x180650F20
 * Callers:
 *     _lambda_a1bf07eabb51e841d7b59a4e813e5668_$_ResumeCoro$1::operator() @ 0x18063F280 (_lambda_a1bf07eabb51e841d7b59a4e813e5668_$_ResumeCoro$1--operator().c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1802879A8 (-unconditional_release_ref@-$com_ptr@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$l.c)
 *     ?GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ @ 0x1802BC584 (-GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ.c)
 *     ??$?RURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@URemoteSystemDisplayInfoChangedEventArgs@2345@@?$event@U?$EventHandler@URemoteSystemDisplayInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@1@AEBURemoteSystemDisplayInfoChangedEventArgs@4561@@Z @ 0x1806440DC (--$-RURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@URemoteSystemDi.c)
 *     ??$make@URemoteSystemStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@W4CloudPCState@3456@@winrt@@YA?A_PAEBUhstring@0@$$QEAW4CloudPCState@Shell@Internal@Windows@0@@Z @ 0x180646910 (--$make@URemoteSystemStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUhstr.c)
 */

// Hidden C++ exception states: #wind=2
void winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::SetPhysicalDeviceAccessState(void)
{
  winrt::Windows::Internal::Shell::implementation *FactoryImplObj; // rax
  RTL_SRWLOCK *v1; // rbx
  int v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF
  _QWORD *v4; // [rsp+40h] [rbp+18h] BYREF

  FactoryImplObj = winrt::Windows::Internal::Shell::implementation::GetFactoryImplObj((winrt::Windows::Internal::Shell::implementation *)&v4);
  v1 = *(RTL_SRWLOCK **)FactoryImplObj;
  if ( *(_DWORD *)(*(_QWORD *)FactoryImplObj + 44LL) == 1 )
  {
    v2 = 98;
    winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs,winrt::hstring const &,enum winrt::Windows::Internal::Shell::CloudPCState>(
      &v3,
      (const struct winrt::hstring *)&c_bootSystemId,
      (const enum winrt::Windows::Internal::Shell::CloudPCState *)&v2);
    winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemDisplayInfoChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Internal::Shell::RemoteSystemDisplayInfoChangedEventArgs>(
      v1 + 20,
      (__int64)v1,
      (__int64)&v3);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v3);
  }
  if ( v4 )
    winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v4);
}
