/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Devices::Enumeration::DeviceInformationCollection___lambda_3e036b3644723c146ee880a5a6e63477___::Invoke @ 0x1805F77F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _lambda_3e036b3644723c146ee880a5a6e63477_::operator() @ 0x1805F5980 (_lambda_3e036b3644723c146ee880a5a6e63477_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Devices::Enumeration::DeviceInformationCollection___lambda_3e036b3644723c146ee880a5a6e63477___::Invoke(
        __int64 a1,
        struct IUnknownVtbl *a2,
        int a3)
{
  winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager **v3; // rbx
  __int64 result; // rax
  struct IUnknown v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  v3 = (winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager **)(a1 + 16);
  v5.lpVtbl = a2;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v5);
  try
  {
    lambda_3e036b3644723c146ee880a5a6e63477_::operator()(v3, &v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
