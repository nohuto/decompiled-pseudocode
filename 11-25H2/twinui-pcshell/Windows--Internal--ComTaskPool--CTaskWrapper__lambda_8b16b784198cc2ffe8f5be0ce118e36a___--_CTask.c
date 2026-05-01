/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8b16b784198cc2ffe8f5be0ce118e36a___::_CTaskWrapper__lambda_8b16b784198cc2ffe8f5be0ce118e36a___ @ 0x180422960
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8b16b784198cc2ffe8f5be0ce118e36a___::_scalar_deleting_destructor_ @ 0x180422F50 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8b16b784198cc2ffe8f5be0ce118e36a___--_scala.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8b16b784198cc2ffe8f5be0ce118e36a___::_CTaskWrapper__lambda_8b16b784198cc2ffe8f5be0ce118e36a___(
        __int64 a1)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
}
