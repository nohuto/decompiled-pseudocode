/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::PackageCatalog_winrt::Windows::ApplicationModel::PackageInstallingEventArgs___lambda_923aa8ecc56be0e8a63daaa295f97817___::Invoke @ 0x180606B00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _lambda_923aa8ecc56be0e8a63daaa295f97817_::operator() @ 0x180605DDC (_lambda_923aa8ecc56be0e8a63daaa295f97817_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::PackageCatalog_winrt::Windows::ApplicationModel::PackageInstallingEventArgs___lambda_923aa8ecc56be0e8a63daaa295f97817___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = a3;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v6);
  v7 = a2;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v7);
  lambda_923aa8ecc56be0e8a63daaa295f97817_::operator()(
    (__int64 *)(a1 + 16),
    (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v7,
    &v6);
  return 0LL;
}
