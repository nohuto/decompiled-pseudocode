/*
 * XREFs of ?UnsubscribeFromServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801356A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180067668 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800775BC (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?Shutdown@NotificationDispatcher@@QEAAXXZ @ 0x180173AE0 (-Shutdown@NotificationDispatcher@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CApplicationViewManager::UnsubscribeFromServices(
        CApplicationViewManager *this,
        struct IServiceProvider *a2)
{
  NotificationDispatcher *v3; // rcx
  __int64 v4; // rcx

  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
    (void (__fastcall ****)(_QWORD, __int64))this + 64,
    0LL);
  v3 = (NotificationDispatcher *)*((_QWORD *)this + 75);
  if ( v3 )
    NotificationDispatcher::Shutdown(v3);
  v4 = *((_QWORD *)this + 74);
  if ( v4 )
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v4 + 48LL))(
      v4,
      ((unsigned __int64)this + 96) & -(__int64)(this != (CApplicationViewManager *)72));
  SmartCookie::Unregister((CApplicationViewManager *)((char *)this + 200));
  SmartCookie::Unregister((CApplicationViewManager *)((char *)this + 328));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 66);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 67);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 73);
  return 0LL;
}
