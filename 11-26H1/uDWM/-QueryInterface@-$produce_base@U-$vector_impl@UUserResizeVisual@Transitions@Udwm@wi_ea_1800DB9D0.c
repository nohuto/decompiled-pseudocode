/*
 * XREFs of ?QueryInterface@?$produce_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800DB9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?query_interface_common@?$root_implements@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18002E630 (-query_interface_common@-$root_implements@UWindowMoveResizeCrossfadeTransition@implementation@Pr.c)
 *     ?AddRef@?$root_implements@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@@impl@winrt@@QEAAIXZ @ 0x18002ECD8 (-AddRef@-$root_implements@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transition.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::produce_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Udwm::Transitions::UserResizeVisual>,void>::QueryInterface(
        unsigned __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  _QWORD *v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // r11d

  v5 = (_QWORD *)((a1 - 24) & ((unsigned __int128)-(__int128)a1 >> 64));
  v6 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 48LL))(v5);
  *a3 = v6;
  if ( v6 )
    winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition,winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition>::AddRef((__int64)v5);
  else
    return (unsigned int)winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition,winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition>::query_interface_common(
                           v5,
                           a2,
                           a3);
  return v7;
}
