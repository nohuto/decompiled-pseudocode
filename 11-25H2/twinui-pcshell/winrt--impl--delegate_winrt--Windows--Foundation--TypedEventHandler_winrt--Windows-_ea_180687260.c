/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Xaml::UIElement_winrt::Windows::UI::Xaml::DragStartingEventArgs___lambda_941eca72fc43b2c4835a5fc6680f0a4a___::Invoke @ 0x180687260
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _lambda_941eca72fc43b2c4835a5fc6680f0a4a_::operator() @ 0x180685548 (_lambda_941eca72fc43b2c4835a5fc6680f0a4a_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Xaml::UIElement_winrt::Windows::UI::Xaml::DragStartingEventArgs___lambda_941eca72fc43b2c4835a5fc6680f0a4a___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  struct IWeakReference **v4; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v4 = (struct IWeakReference **)(a1 + 16);
  v6 = a3;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v6);
  v7 = a2;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v7);
  lambda_941eca72fc43b2c4835a5fc6680f0a4a_::operator()(
    v4,
    (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v7,
    (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
  return 0LL;
}
