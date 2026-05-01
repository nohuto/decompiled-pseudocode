/*
 * XREFs of ??$create_and_initialize@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@$$V@impl@winrt@@YAPEAUNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@1@XZ @ 0x1806700FC
 * Callers:
 *     ??$make_factory@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x1806702A4 (--$make_factory@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@@im.c)
 * Callees:
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??$make@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?A_PXZ @ 0x18067020C (--$make@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@$$V@winrt@@YA-A_PXZ.c)
 *     ??0?$producers_base@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@V?$tuple@UIActivationFactory@Foundation@Windows@winrt@@UINetworkConnectionUtilsStatics@Shell@Internal@34@@std@@@impl@winrt@@QEAA@XZ @ 0x1806704A8 (--0-$producers_base@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *winrt::impl::create_and_initialize<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils,>()
{
  _OWORD *v1; // [rsp+30h] [rbp+8h]

  v1 = operator new(0x28uLL);
  *v1 = 0LL;
  v1[1] = 0LL;
  *((_QWORD *)v1 + 4) = 0LL;
  winrt::impl::producers_base<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils,std::tuple<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::INetworkConnectionUtilsStatics>>::producers_base<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils,std::tuple<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::INetworkConnectionUtilsStatics>>(v1 + 1);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>((__int64)v1 + 8, 1LL);
  *(_QWORD *)v1 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils>::`vftable';
  winrt::make<winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils,>(v1 + 2);
  *(_QWORD *)v1 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils>::`vftable';
  return v1;
}
