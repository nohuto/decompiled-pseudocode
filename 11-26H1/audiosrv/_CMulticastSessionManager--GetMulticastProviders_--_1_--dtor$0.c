/*
 * XREFs of _CMulticastSessionManager::GetMulticastProviders_::_1_::dtor$0 @ 0x18016A667
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMulticastSessionManager::GetMulticastProviders_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>::~unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>((void **)(a2 + 32));
}
