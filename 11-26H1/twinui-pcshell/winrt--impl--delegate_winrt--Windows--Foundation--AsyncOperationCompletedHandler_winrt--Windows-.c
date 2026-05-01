/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Devices::Enumeration::DeviceInformationCollection___lambda_aa297103944b40500ac49b04ee807ad8___::Invoke @ 0x18061B9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _lambda_aa297103944b40500ac49b04ee807ad8_::operator() @ 0x18061A160 (_lambda_aa297103944b40500ac49b04ee807ad8_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Devices::Enumeration::DeviceInformationCollection___lambda_aa297103944b40500ac49b04ee807ad8___::Invoke(
        __int64 a1,
        struct IUnknownVtbl *a2,
        int a3)
{
  __int64 result; // rax
  struct IUnknown v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  v5.lpVtbl = a2;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v5);
  try
  {
    lambda_aa297103944b40500ac49b04ee807ad8_::operator()(
      (winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager **)(a1 + 16),
      &v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
