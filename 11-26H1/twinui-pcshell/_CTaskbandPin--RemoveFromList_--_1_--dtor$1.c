/*
 * XREFs of _CTaskbandPin::RemoveFromList_::_1_::dtor$1 @ 0x1806E69BD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTaskbandPin::RemoveFromList_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)(a2 + 48));
}
