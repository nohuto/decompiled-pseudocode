/*
 * XREFs of ??1LegacyUwpWindowWrapper@@UEAA@XZ @ 0x180427140
 * Callers:
 *     ??_ELegacyUwpWindowWrapper@@UEAAPEAXI@Z @ 0x1804271C0 (--_ELegacyUwpWindowWrapper@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1NavigationLevelHelper@LegacyUwpWindowWrapper@@QEAA@XZ @ 0x1804289B4 (--1NavigationLevelHelper@LegacyUwpWindowWrapper@@QEAA@XZ.c)
 */

void __fastcall LegacyUwpWindowWrapper::~LegacyUwpWindowWrapper(LegacyUwpWindowWrapper *this)
{
  LegacyUwpWindowWrapper::NavigationLevelHelper::~NavigationLevelHelper((LegacyUwpWindowWrapper *)((char *)this + 640));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 78);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,UwpWindowWrapperBase,ILegacyViewWrapper>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,UwpWindowWrapperBase,ILegacyViewWrapper>((__int64)this);
}
