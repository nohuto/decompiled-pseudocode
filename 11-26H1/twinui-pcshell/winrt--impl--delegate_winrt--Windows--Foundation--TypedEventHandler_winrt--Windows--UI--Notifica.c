/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::Foundation::IInspectable___lambda_d81cebd908bc953c0c32f92e43af8435___::Invoke @ 0x1805F00C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _lambda_d81cebd908bc953c0c32f92e43af8435_::operator() @ 0x1805EE474 (_lambda_d81cebd908bc953c0c32f92e43af8435_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::Foundation::IInspectable___lambda_d81cebd908bc953c0c32f92e43af8435___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7[2]; // [rsp+28h] [rbp-10h] BYREF

  v6 = a3;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v6);
  v7[0] = a2;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v7);
  try
  {
    lambda_d81cebd908bc953c0c32f92e43af8435_::operator()(
      a1 + 16,
      (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v7,
      &v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
