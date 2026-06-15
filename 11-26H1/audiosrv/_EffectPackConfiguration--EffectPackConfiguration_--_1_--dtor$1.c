/*
 * XREFs of _EffectPackConfiguration::EffectPackConfiguration_::_1_::dtor$1 @ 0x180165A1C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EffectPackConfiguration::EffectPackConfiguration_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(*(_QWORD *)(a2 + 64) + 1800LL));
}
