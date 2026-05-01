/*
 * XREFs of _lambda_5af8d5de97e6639990840c940ce8594c_::__lambda_5af8d5de97e6639990840c940ce8594c_ @ 0x180116334
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5af8d5de97e6639990840c940ce8594c___::_CTaskWrapper__lambda_5af8d5de97e6639990840c940ce8594c___ @ 0x18011630C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5af8d5de97e6639990840c940ce8594c___--_CTask.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_5af8d5de97e6639990840c940ce8594c_::__lambda_5af8d5de97e6639990840c940ce8594c_(__int64 *a1)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 2);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}
