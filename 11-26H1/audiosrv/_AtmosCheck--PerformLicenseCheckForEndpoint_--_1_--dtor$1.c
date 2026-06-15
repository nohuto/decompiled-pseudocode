/*
 * XREFs of _AtmosCheck::PerformLicenseCheckForEndpoint_::_1_::dtor$1 @ 0x18016A679
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AtmosCheck::PerformLicenseCheckForEndpoint_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>::~unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>((void **)(a2 + 112));
}
