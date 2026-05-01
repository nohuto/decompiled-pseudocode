/*
 * XREFs of _VirtualDesktopSwitcherHost::VirtualDesktopSwitcherHost_::_1_::dtor$8 @ 0x18070724D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopSwitcherHost::VirtualDesktopSwitcherHost_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 48) + 216LL));
}
