/*
 * XREFs of ??1_lambda_47165361db58358e4b915b09b8be8c40_@@QEAA@XZ @ 0x180622CDC
 * Callers:
 *     ??$?0V_lambda_47165361db58358e4b915b09b8be8c40_@@@?$AsyncOperationCompletedHandler@ULaunchUriResult@System@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@V_lambda_47165361db58358e4b915b09b8be8c40_@@@Z @ 0x18061D3C8 (--$-0V_lambda_47165361db58358e4b915b09b8be8c40_@@@-$AsyncOperationCompletedHandler@ULaunchUriRes.c)
 *     ??1?$implements_delegate@U?$AsyncOperationCompletedHandler@ULaunchUriResult@System@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_47165361db58358e4b915b09b8be8c40_@@@impl@winrt@@QEAA@XZ @ 0x180622D8C (--1-$implements_delegate@U-$AsyncOperationCompletedHandler@ULaunchUriResult@System@Windows@winrt.c)
 *     _winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::System::LaunchUriResult_::AsyncOperationCompletedHandler_winrt::Windows::System::LaunchUriResult___lambda_a8f92f18f131270a1181fbecf37b830c____::_1_::dtor$0 @ 0x1807025A4 (_winrt--Windows--Foundation--AsyncOperationCompletedHandler_winrt--Windows--System--LaunchUriRes.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800254EC (--1-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$integr.c)
 */

void __fastcall _lambda_47165361db58358e4b915b09b8be8c40_::~_lambda_47165361db58358e4b915b09b8be8c40_(HWND *this)
{
  wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>(this + 8);
  std::wstring::_Tidy_deallocate(this + 1);
}
