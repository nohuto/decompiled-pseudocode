/*
 * XREFs of _lambda_6825ce5d1ace0209a4941c0102e86eff_::__lambda_6825ce5d1ace0209a4941c0102e86eff_ @ 0x180130C58
 * Callers:
 *     CIconLoadingNotificationCallback__lambda_6825ce5d1ace0209a4941c0102e86eff___::_CIconLoadingNotificationCallback__lambda_6825ce5d1ace0209a4941c0102e86eff___ @ 0x1801309FC (CIconLoadingNotificationCallback__lambda_6825ce5d1ace0209a4941c0102e86eff___--_CIconLoadingNotif.c)
 *     ?LoadIconW@CIconLoaderInternal@@UEAAJPEAUIApplicationView@@AEBUtagSIZE@@1IPEAUISwitchItem@@@Z @ 0x18048E4C0 (-LoadIconW@CIconLoaderInternal@@UEAAJPEAUIApplicationView@@AEBUtagSIZE@@1IPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18002BEFC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_6825ce5d1ace0209a4941c0102e86eff_::__lambda_6825ce5d1ace0209a4941c0102e86eff_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}
