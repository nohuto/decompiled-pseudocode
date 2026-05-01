/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3fd5a9359bd88b84e59fbdca2ad299ce__&_::_CTaskWrapper__lambda_3fd5a9359bd88b84e59fbdca2ad299ce__&_ @ 0x180110AAC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_774bfa34314c79ae2272b980e777e42b___::_scalar_deleting_destructor_ @ 0x18010FE90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_774bfa34314c79ae2272b980e777e42b___--_scala.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b6e4afa68249b0204a2fcfbf47c2ea5d___::_scalar_deleting_destructor_ @ 0x180110A70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b6e4afa68249b0204a2fcfbf47c2ea5d___--_scala.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3fd5a9359bd88b84e59fbdca2ad299ce__&_::_scalar_deleting_destructor_ @ 0x18035D710 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3fd5a9359bd88b84e59fbdca2ad299ce__-_--_scal.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3fd5a9359bd88b84e59fbdca2ad299ce____::_CTaskWrapper__lambda_3fd5a9359bd88b84e59fbdca2ad299ce____(
        __int64 a1)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 24));
  *(_DWORD *)(a1 + 12) = -1073741823;
}
