/*
 * XREFs of ??0?$produce@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMapView@_KUhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@XZ @ 0x1806233F8
 * Callers:
 *     ??0?$producer@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMapView@_KUhstring@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@QEAA@XZ @ 0x1806235A8 (--0-$producer@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$less@_K@std_ea_1806235A8.c)
 * Callees:
 *     ??0?$produce_base@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIControlWindow@34567@X@impl@winrt@@QEAA@XZ @ 0x18029A1CC (--0-$produce_base@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@W_ea_18029A1CC.c)
 */

_QWORD *__fastcall winrt::impl::produce<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMapView<unsigned __int64,winrt::hstring>>::produce<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMapView<unsigned __int64,winrt::hstring>>(
        _QWORD *a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  winrt::impl::produce_base<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::IControlWindow,void>::produce_base<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::IControlWindow,void>(a1);
  result = v1;
  *v1 = &winrt::impl::produce<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMapView<unsigned __int64,winrt::hstring>>::`vftable';
  return result;
}
