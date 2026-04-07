/*
 * XREFs of ??1?$root_implements@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@@impl@winrt@@MEAA@XZ @ 0x18002F6CC
 * Callers:
 *     ??1ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800D29EC (--1ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ??1WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800D5E0C (--1WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ??1?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UEAA@XZ @ 0x1800DA694 (--1-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserResizeVisual@Transitio.c)
 * Callees:
 *     ?subtract_final_reference@?$root_implements@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@U?$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@5673@U?$IIterable@UUserResizeVisual@Transitions@Udwm@winrt@@@5673@@impl@winrt@@IEAAIXZ @ 0x18002F240 (-subtract_final_reference@-$root_implements@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@wi.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition,winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition>::~root_implements<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition,winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition>(
        __int64 a1)
{
  winrt::impl::root_implements<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Windows::Foundation::Collections::IIterable<winrt::Udwm::Transitions::UserResizeVisual>>::subtract_final_reference(a1);
  return winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
