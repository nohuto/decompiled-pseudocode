/*
 * XREFs of ??1ApplicationFlyoutView@@QEAA@XZ @ 0x1805D6DC0
 * Callers:
 *     ??1?$unique_ptr@VApplicationFlyoutView@@U?$default_delete@VApplicationFlyoutView@@@std@@@std@@QEAA@XZ @ 0x1805D6D90 (--1-$unique_ptr@VApplicationFlyoutView@@U-$default_delete@VApplicationFlyoutView@@@std@@@std@@QE.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@QEAA@XZ @ 0x18022EEE4 (--1-$unique_ptr@VProtocolLauncher@Utils@@U-$default_delete@VProtocolLauncher@Utils@@@std@@@std@@.c)
 */

void __fastcall ApplicationFlyoutView::~ApplicationFlyoutView(ApplicationFlyoutView *this)
{
  std::wstring::_Tidy_deallocate((void **)this + 4);
  std::unique_ptr<Utils::ProtocolLauncher>::~unique_ptr<Utils::ProtocolLauncher>((_QWORD *)this + 3);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 2);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 1);
}
