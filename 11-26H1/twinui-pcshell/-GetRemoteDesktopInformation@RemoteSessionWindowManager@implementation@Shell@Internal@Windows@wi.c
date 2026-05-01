/*
 * XREFs of ?GetRemoteDesktopInformation@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AURemoteDesktopInformation@3456@XZ @ 0x18065A8AC
 * Callers:
 *     ?GetRemoteDesktopInformation@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHPEAUstruct_Windows_Internal_Shell_RemoteDesktopInformation@23@@Z @ 0x18065A7F0 (-GetRemoteDesktopInformation@-$produce@URemoteSessionWindowManager@implementation@Shell@Internal.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1802879A8 (-unconditional_release_ref@-$com_ptr@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$l.c)
 *     ?GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ @ 0x1802BC584 (-GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ.c)
 *     ?GetRemoteDesktopInformation@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AURemoteDesktopInformation@3456@XZ @ 0x18064D51C (-GetRemoteDesktopInformation@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::GetRemoteDesktopInformation(
        _QWORD *a1,
        __int64 a2)
{
  __int64 *FactoryImplObj; // rax
  _QWORD *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  FactoryImplObj = (__int64 *)winrt::Windows::Internal::Shell::implementation::GetFactoryImplObj((winrt::Windows::Internal::Shell::implementation *)&v5);
  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::GetRemoteDesktopInformation(
    *FactoryImplObj,
    a2);
  if ( v5 )
    winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v5);
  return a2;
}
