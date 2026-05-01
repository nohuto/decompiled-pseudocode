/*
 * XREFs of _WindowDragInputProvider::MsgWindowWndProc_::_1_::dtor$0 @ 0x1806D26BE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowDragInputProvider::MsgWindowWndProc_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<WindowDragInputProvider,wil::err_exception_policy>::~com_ptr_t<WindowDragInputProvider,wil::err_exception_policy>((__int64 *)(a2 + 32));
}
