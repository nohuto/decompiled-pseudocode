/*
 * XREFs of ??1LegacyWindowWrapper@@UEAA@XZ @ 0x1804210EC
 * Callers:
 *     ??_ELegacyWindowWrapper@@UEAAPEAXI@Z @ 0x180421250 (--_ELegacyWindowWrapper@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1NavigationLevelHelper@LegacyUwpWindowWrapper@@QEAA@XZ @ 0x1804289B4 (--1NavigationLevelHelper@LegacyUwpWindowWrapper@@QEAA@XZ.c)
 */

void __fastcall LegacyWindowWrapper::~LegacyWindowWrapper(LegacyWindowWrapper *this)
{
  LegacyUwpWindowWrapper::NavigationLevelHelper::~NavigationLevelHelper((LegacyWindowWrapper *)((char *)this + 648));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 77);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,WindowWrapperBase,ILegacyViewWrapper>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,WindowWrapperBase,ILegacyViewWrapper>((__int64)this);
}
