/*
 * XREFs of ??0NetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18064A4E4
 * Callers:
 *     ??$create_and_initialize@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@$$V@impl@winrt@@YAPEAUNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@1@XZ @ 0x18064A130 (--$create_and_initialize@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@w.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ??0?$producers_base@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@V?$tuple@UIActivationFactory@Foundation@Windows@winrt@@UINetworkConnectionUtilsStatics@Shell@Internal@34@@std@@@impl@winrt@@QEAA@XZ @ 0x18064A4A8 (--0-$producers_base@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@.c)
 *     ??0?$producers_base@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@V?$tuple@UNetworkConnectionUtils@Shell@Internal@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x18064A4CC (--0-$producers_base@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@V-$tupl.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils *__fastcall winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils::NetworkConnectionUtils(
        winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils *this)
{
  __int64 v2; // rcx
  _QWORD *v4; // [rsp+30h] [rbp+8h]

  winrt::impl::producers_base<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils,std::tuple<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::INetworkConnectionUtilsStatics>>::producers_base<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils,std::tuple<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::INetworkConnectionUtilsStatics>>();
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *((_QWORD *)this + 1) = 1LL;
  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils>::`vftable';
  v4 = operator new(0x40uLL);
  memset_0(v4, 0, 0x40uLL);
  winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils,std::tuple<winrt::Windows::Internal::Shell::NetworkConnectionUtils>>::producers_base<winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils,std::tuple<winrt::Windows::Internal::Shell::NetworkConnectionUtils>>();
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  v4[1] = 1LL;
  v4[3] = 0LL;
  v4[4] = 0LL;
  v4[5] = 0LL;
  v4[6] = 0LL;
  v4[7] = 0LL;
  *v4 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils>::`vftable';
  *((_QWORD *)this + 4) = v2;
  return this;
}
