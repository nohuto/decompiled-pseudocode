/*
 * XREFs of _CopilotHotkeyManager::InvokeCopilotOrCustomOption_::_1_::dtor$9 @ 0x1807028C1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CopilotHotkeyManager::InvokeCopilotOrCustomOption_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)(a2 + 120));
}
