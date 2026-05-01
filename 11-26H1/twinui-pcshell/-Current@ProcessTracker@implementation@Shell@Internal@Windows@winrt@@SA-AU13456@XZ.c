/*
 * XREFs of ?Current@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@SA?AU13456@XZ @ 0x180660550
 * Callers:
 *     ?Current@ProcessTracker@Shell@Internal@Windows@winrt@@SA?AU12345@XZ @ 0x180660530 (-Current@ProcessTracker@Shell@Internal@Windows@winrt@@SA-AU12345@XZ.c)
 *     ?ProcessEndedCallback@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@SAXPEAXE@Z @ 0x180660670 (-ProcessEndedCallback@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@SAXPEAXE@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1802879A8 (-unconditional_release_ref@-$com_ptr@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$l.c)
 *     ??$make_factory@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x18065FE1C (--$make_factory@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt.c)
 */

__int64 *__fastcall winrt::Windows::Internal::Shell::implementation::ProcessTracker::Current(__int64 *a1)
{
  __int64 *v2; // rdi
  __int64 *v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v5; // [rsp+48h] [rbp+10h] BYREF

  v4 = a1;
  winrt::impl::make_factory<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker>((__int64 *)&v4);
  if ( v4 )
    v2 = v4 - 2;
  else
    v2 = 0LL;
  v4 = 0LL;
  v5 = v2;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v4);
  *a1 = v2[4];
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a1);
  winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v5);
  return a1;
}
