/*
 * XREFs of _BroadcastDVRComponent::ApplyGameRelatedForGameModeProcess_::_1_::dtor$1 @ 0x1806AD8D6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BroadcastDVRComponent::ApplyGameRelatedForGameModeProcess_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::details::out_param_ptr_t<KnownGameList::GMRelatedProcess * *,wistd::unique_ptr<KnownGameList::GMRelatedProcess [0],wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_ptr_t<KnownGameList::GMRelatedProcess * *,wistd::unique_ptr<KnownGameList::GMRelatedProcess [0],wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 48);
}
