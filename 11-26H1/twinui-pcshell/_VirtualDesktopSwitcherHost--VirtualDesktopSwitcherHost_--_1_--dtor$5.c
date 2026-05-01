/*
 * XREFs of _VirtualDesktopSwitcherHost::VirtualDesktopSwitcherHost_::_1_::dtor$5 @ 0x18070721B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopSwitcherHost::VirtualDesktopSwitcherHost_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 48) + 192LL));
}
