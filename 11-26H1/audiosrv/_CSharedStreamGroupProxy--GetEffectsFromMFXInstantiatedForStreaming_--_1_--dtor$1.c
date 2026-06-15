/*
 * XREFs of _CSharedStreamGroupProxy::GetEffectsFromMFXInstantiatedForStreaming_::_1_::dtor$1 @ 0x180166F23
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSharedStreamGroupProxy::GetEffectsFromMFXInstantiatedForStreaming_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::~unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>(a2 + 80);
}
