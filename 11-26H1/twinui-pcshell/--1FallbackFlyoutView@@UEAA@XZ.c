/*
 * XREFs of ??1FallbackFlyoutView@@UEAA@XZ @ 0x1805FABC8
 * Callers:
 *     ??_EFallbackFlyoutView@@UEAAPEAXI@Z @ 0x1805FABF0 (--_EFallbackFlyoutView@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall FallbackFlyoutView::~FallbackFlyoutView(FallbackFlyoutView *this)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 3);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 1);
}
