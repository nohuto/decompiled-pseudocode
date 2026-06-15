/*
 * XREFs of _CApplicationManager::OnApplicationClosed_::_1_::dtor$0 @ 0x18004E055
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::OnApplicationClosed_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CApplication,wil::err_returncode_policy>::~com_ptr_t<CApplication,wil::err_returncode_policy>((__int64 *)(a2 + 144));
}
