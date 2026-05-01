/*
 * XREFs of _lambda_c5bad73058b4167fadc00bcfc86ad84b_::__lambda_c5bad73058b4167fadc00bcfc86ad84b_ @ 0x1802F4D24
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_c5bad73058b4167fadc00bcfc86ad84b___1_long_::_DelegateInvokeHelper_IAsyncCallback__lambda_c5bad73058b4167fadc00bcfc86ad84b___1_long_ @ 0x1802F4E18 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1802F4E18.c)
 *     ?PrepareToSwitch@CAppViewManager@@UEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x1802F8140 (-PrepareToSwitch@CAppViewManager@@UEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallbac.c)
 *     ?ShowView@CAppViewManager@@UEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1PEAUIAsyncCallback@@@Z @ 0x1802F89F0 (-ShowView@CAppViewManager@@UEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1PEAUIAsyncCall.c)
 *     ?SwitchViews@CAppViewManager@@UEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x1802FA400 (-SwitchViews@CAppViewManager@@UEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@.c)
 *     _CAppViewManager::SwitchViews_::_1_::dtor$2 @ 0x1806B9F7D (_CAppViewManager--SwitchViews_--_1_--dtor$2.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall lambda_c5bad73058b4167fadc00bcfc86ad84b_::__lambda_c5bad73058b4167fadc00bcfc86ad84b_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 4);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}
