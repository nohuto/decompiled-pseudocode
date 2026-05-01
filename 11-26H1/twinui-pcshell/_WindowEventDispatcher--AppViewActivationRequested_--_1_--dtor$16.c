/*
 * XREFs of _WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor$16 @ 0x1806E9EE7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor_16(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<ViewEventArgsForSelectTargetView,wil::err_exception_policy>::~com_ptr_t<ViewEventArgsForSelectTargetView,wil::err_exception_policy>((__int64 *)(a2 + 184));
}
