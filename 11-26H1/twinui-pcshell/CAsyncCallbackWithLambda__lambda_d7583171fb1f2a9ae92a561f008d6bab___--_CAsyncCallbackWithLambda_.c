/*
 * XREFs of CAsyncCallbackWithLambda__lambda_d7583171fb1f2a9ae92a561f008d6bab___::_CAsyncCallbackWithLambda__lambda_d7583171fb1f2a9ae92a561f008d6bab___ @ 0x18050EADC
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_d7583171fb1f2a9ae92a561f008d6bab___::_scalar_deleting_destructor_ @ 0x18050F4F0 (CAsyncCallbackWithLambda__lambda_d7583171fb1f2a9ae92a561f008d6bab___--_scalar_deleting_destructo.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_d7583171fb1f2a9ae92a561f008d6bab___::_CAsyncCallbackWithLambda__lambda_d7583171fb1f2a9ae92a561f008d6bab___(
        __int64 a1)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 56));
  *(_DWORD *)(a1 + 44) = -1073741823;
  return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>(a1 + 8);
}
