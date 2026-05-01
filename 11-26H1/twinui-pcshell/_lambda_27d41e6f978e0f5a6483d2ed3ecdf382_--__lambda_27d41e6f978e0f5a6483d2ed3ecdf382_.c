/*
 * XREFs of _lambda_27d41e6f978e0f5a6483d2ed3ecdf382_::__lambda_27d41e6f978e0f5a6483d2ed3ecdf382_ @ 0x1802C5768
 * Callers:
 *     ?UwpWindowShowRequested@UwpWindowEventDispatcher@@UEAAJPEAUIShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1800ECAE0 (-UwpWindowShowRequested@UwpWindowEventDispatcher@@UEAAJPEAUIShowRequestedEventArgs@WindowManagem.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_27d41e6f978e0f5a6483d2ed3ecdf382___::_CTaskWrapper__lambda_27d41e6f978e0f5a6483d2ed3ecdf382___ @ 0x180412DDC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_27d41e6f978e0f5a6483d2ed3ecdf382___--_CTask.c)
 *     ?AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180415A60 (-AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedE.c)
 *     ?AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804163E0 (-AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManag.c)
 *     ?AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180416830 (-AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowM.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__IAsyncCallback_Microsoft::WRL::FtmBase___lambda_ec5d955e16bd0abce266b4b0ac713b48___1_long_::_DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__IAsyncCallback_Microsoft::WRL::FtmBase___lambda_ec5d955e16bd0abce266b4b0ac713b48___1_long_ @ 0x180421DF4 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_180421DF4.c)
 *     ?UwpWindowSwitchRequested@UwpWindowEventDispatcher@@UEAAJPEAUISwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180424B30 (-UwpWindowSwitchRequested@UwpWindowEventDispatcher@@UEAAJPEAUISwitchRequestedEventArgs@WindowMan.c)
 *     _UwpWindowEventDispatcher::UwpWindowShowRequested_::_1_::dtor$9 @ 0x1806D3BC8 (_UwpWindowEventDispatcher--UwpWindowShowRequested_--_1_--dtor$9.c)
 *     _UwpWindowEventDispatcher::UwpWindowSwitchRequested_::_1_::dtor$3 @ 0x1806EAE5D (_UwpWindowEventDispatcher--UwpWindowSwitchRequested_--_1_--dtor$3.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall lambda_27d41e6f978e0f5a6483d2ed3ecdf382_::__lambda_27d41e6f978e0f5a6483d2ed3ecdf382_(__int64 *a1)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 1);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1);
}
