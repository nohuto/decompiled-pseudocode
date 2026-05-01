/*
 * XREFs of _BroadcastDVRComponent::ApplyGameRelatedForGameModeProcess_::_1_::dtor$0 @ 0x1806AD8C4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BroadcastDVRComponent::ApplyGameRelatedForGameModeProcess_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<KnownGameList::GMRelatedProcess [0],wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KnownGameList::GMRelatedProcess [0],wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 168));
}
