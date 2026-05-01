/*
 * XREFs of ??1PendingActivationData@WindowEventDispatcher@@QEAA@XZ @ 0x180408348
 * Callers:
 *     ?Release@?$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@UEAAKXZ @ 0x180411DD0 (-Release@-$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@UEAAKXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall WindowEventDispatcher::PendingActivationData::~PendingActivationData(
        WindowEventDispatcher::PendingActivationData *this)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 3);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 2);
  Windows::Internal::String::~String((HSTRING *)this + 1);
}
