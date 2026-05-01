/*
 * XREFs of ??1TabTipAdapter@KeyboardHosting@@UEAA@XZ @ 0x180178B58
 * Callers:
 *     ??_E?$heap_implements@UTabTipAdapter@KeyboardHosting@@@impl@winrt@@UEAAPEAXI@Z @ 0x180178B1C (--_E-$heap_implements@UTabTipAdapter@KeyboardHosting@@@impl@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800C0A4C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ?UnInitialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x1802BEAF4 (-UnInitialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     ??1?$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V?$allocator@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@std@@@std@@QEAA@XZ @ 0x1802BED10 (--1-$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V-$allocator@UPendingShowHide.c)
 *     ?Release@SharedMessagePortRefPtr@@QEAAXXZ @ 0x1802C25D8 (-Release@SharedMessagePortRefPtr@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1802CF57C (--1-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1-del.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall KeyboardHosting::TabTipAdapter::~TabTipAdapter(KeyboardHosting::TabTipAdapter *this)
{
  struct wil::details::wnf_subscription_state_base *v2; // rdx
  wil::details *v3; // rcx

  *(_QWORD *)this = &winrt::impl::heap_implements<KeyboardHosting::TabTipAdapter>::`vftable'{for `winrt::impl::producer_convert<KeyboardHosting::TabTipAdapter,IMessageProxyReconnectAdapterOwner,void>'};
  *((_QWORD *)this + 1) = &KeyboardHosting::TabTipAdapter::`vftable'{for `winrt::impl::producer_convert<KeyboardHosting::TabTipAdapter,IRemoteTabTipAdapter,void>'};
  *((_QWORD *)this + 2) = &winrt::impl::heap_implements<KeyboardHosting::TabTipAdapter>::`vftable';
  KeyboardHosting::TabTipAdapter::UnInitialize(this);
  SharedMessagePortRefPtr::Release((KeyboardHosting::TabTipAdapter *)((char *)this + 144));
  wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>((char *)this + 560);
  v3 = (wil::details *)*((_QWORD *)this + 69);
  if ( v3 )
    wil::details::delete_wnf_subscription_state(v3, v2);
  std::deque<KeyboardHosting::TabTipAdapter::PendingShowHideViewData>::~deque<KeyboardHosting::TabTipAdapter::PendingShowHideViewData>((char *)this + 512);
  SharedMessagePortRefPtr::Release((KeyboardHosting::TabTipAdapter *)((char *)this + 144));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 17);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 14);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 13);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 11);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 10);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 8);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 4);
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,winrt::Windows::Internal::Shell::SnapComponent::ImmersiveShellThreadDispatcher>::~root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,winrt::Windows::Internal::Shell::SnapComponent::ImmersiveShellThreadDispatcher>((__int64)this + 16);
}
