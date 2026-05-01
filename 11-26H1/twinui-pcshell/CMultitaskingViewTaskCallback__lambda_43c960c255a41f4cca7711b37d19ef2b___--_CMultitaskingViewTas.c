/*
 * XREFs of CMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b___::_CMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b___ @ 0x180497F14
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b___::_scalar_deleting_destructor_ @ 0x180497F40 (CMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b___--_scalar_deleting_dest.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall CMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b___::_CMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b___(
        __int64 a1)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 48));
  *(_DWORD *)(a1 + 44) = -1073741823;
  return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>(a1);
}
