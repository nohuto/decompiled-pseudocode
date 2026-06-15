/*
 * XREFs of _CMulticastSessionManager::GetMulticastCapableChildEndpoints_::_1_::dtor$1 @ 0x18016A619
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMulticastSessionManager::GetMulticastCapableChildEndpoints_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>::~unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>((void **)(a2 + 96));
}
