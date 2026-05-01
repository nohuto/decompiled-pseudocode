/*
 * XREFs of CAsyncCallbackWithLambda__lambda_b9aff6db1ba7d59bcc50491da7f18a76___::_CAsyncCallbackWithLambda__lambda_b9aff6db1ba7d59bcc50491da7f18a76___ @ 0x1804EA778
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_aaa29ad71ed7f57812cd6c4aeeafb90e___::_scalar_deleting_destructor_ @ 0x1804EAC40 (CAsyncCallbackWithLambda__lambda_aaa29ad71ed7f57812cd6c4aeeafb90e___--_scalar_deleting_destructo.c)
 *     CAsyncCallbackWithLambda__lambda_b9aff6db1ba7d59bcc50491da7f18a76___::_scalar_deleting_destructor_ @ 0x1804F87F0 (CAsyncCallbackWithLambda__lambda_b9aff6db1ba7d59bcc50491da7f18a76___--_scalar_deleting_destructo.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_b9aff6db1ba7d59bcc50491da7f18a76___::_CAsyncCallbackWithLambda__lambda_b9aff6db1ba7d59bcc50491da7f18a76___(
        __int64 a1)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 48));
  *(_DWORD *)(a1 + 44) = -1073741823;
  return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>(a1 + 8);
}
