/*
 * XREFs of _CMulticastSessionManager::GetMulticastSessions_::_1_::dtor$0 @ 0x18016A607
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMulticastSessionManager::GetMulticastSessions_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::vector<wistd::unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::~vector<wistd::unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>(a2 + 32);
}
