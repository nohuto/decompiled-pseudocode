/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::PackageCatalog_winrt::Windows::ApplicationModel::PackageUninstallingEventArgs___lambda_b77cff33db7c166167279fbdb5843ce7___::Invoke @ 0x18063B970
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _lambda_b77cff33db7c166167279fbdb5843ce7_::operator() @ 0x180284D04 (_lambda_b77cff33db7c166167279fbdb5843ce7_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::PackageCatalog_winrt::Windows::ApplicationModel::PackageUninstallingEventArgs___lambda_b77cff33db7c166167279fbdb5843ce7___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 *v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = a3;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v6);
  v7 = a2;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v7);
  try
  {
    lambda_b77cff33db7c166167279fbdb5843ce7_::operator()(
      v4,
      (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v7,
      &v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
