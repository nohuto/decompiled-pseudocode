/*
 * XREFs of _CMulticastSessionManager::ActivateMulticastSession_::_1_::dtor$0 @ 0x18016A556
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMulticastSessionManager::ActivateMulticastSession_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>(a2 + 40);
}
