/*
 * XREFs of _EffectPack::SetDeviceFormatSwAudioEngine_::_1_::dtor$1 @ 0x180165305
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EffectPack::SetDeviceFormatSwAudioEngine_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 288));
}
