/*
 * XREFs of _lambda_f3af541e54fed362ec31214e5f0f3de2_::__lambda_f3af541e54fed362ec31214e5f0f3de2_ @ 0x180598E30
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f3af541e54fed362ec31214e5f0f3de2___::_CTaskWrapper__lambda_f3af541e54fed362ec31214e5f0f3de2___ @ 0x180598E60 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f3af541e54fed362ec31214e5f0f3de2___--_CTask.c)
 *     ?FireApplicationViewChangeNotification@ApplicationViewFilteredCollection@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180599070 (-FireApplicationViewChangeNotification@ApplicationViewFilteredCollection@@AEAAJPEAUIApplicationV.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_f3af541e54fed362ec31214e5f0f3de2_::__lambda_f3af541e54fed362ec31214e5f0f3de2_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 2);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1);
}
