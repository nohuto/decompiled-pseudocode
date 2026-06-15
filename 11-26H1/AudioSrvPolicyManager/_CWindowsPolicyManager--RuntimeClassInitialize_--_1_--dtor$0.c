/*
 * XREFs of _CWindowsPolicyManager::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18004E4DA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowsPolicyManager::RuntimeClassInitialize_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CApplicationManager,wil::err_returncode_policy>::~com_ptr_t<CApplicationManager,wil::err_returncode_policy>((volatile signed __int32 **)(a2 + 48));
}
