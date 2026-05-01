/*
 * XREFs of CAsyncCallbackWithLambda__lambda_661fca75c14b05debe6631555b9145eb___::_CAsyncCallbackWithLambda__lambda_661fca75c14b05debe6631555b9145eb___ @ 0x1804D8240
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_661fca75c14b05debe6631555b9145eb___::_scalar_deleting_destructor_ @ 0x1804D8740 (CAsyncCallbackWithLambda__lambda_661fca75c14b05debe6631555b9145eb___--_scalar_deleting_destructo.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_661fca75c14b05debe6631555b9145eb___::_CAsyncCallbackWithLambda__lambda_661fca75c14b05debe6631555b9145eb___(
        __int64 a1)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 48));
  *(_DWORD *)(a1 + 44) = -1073741823;
  return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>(a1 + 8);
}
