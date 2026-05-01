/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Xaml::Controls::ListViewBase_winrt::Windows::UI::Xaml::Controls::DragItemsCompletedEventArgs___lambda_95528747bebe02d956eab525d53e8eb3___::Invoke @ 0x1806AE4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _lambda_95528747bebe02d956eab525d53e8eb3_::operator() @ 0x1806ACA28 (_lambda_95528747bebe02d956eab525d53e8eb3_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Xaml::Controls::ListViewBase_winrt::Windows::UI::Xaml::Controls::DragItemsCompletedEventArgs___lambda_95528747bebe02d956eab525d53e8eb3___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = a3;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v6);
  v7 = a2;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v7);
  lambda_95528747bebe02d956eab525d53e8eb3_::operator()(
    (struct IWeakReference **)(a1 + 16),
    (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v7,
    &v6);
  return 0LL;
}
