/*
 * XREFs of ??1?$ComPtr@UIAudioProcessingObjectPreferredFormatSupport@@@WRL@Microsoft@@QEAA@XZ @ 0x18014ED58
 * Callers:
 *     _CCompositeSystemEffect::GetPreferredFormat_::_1_::dtor$2 @ 0x18016BF56 (_CCompositeSystemEffect--GetPreferredFormat_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 Microsoft::WRL::ComPtr<IAudioProcessingObjectPreferredFormatSupport>::~ComPtr<IAudioProcessingObjectPreferredFormatSupport>()
{
  return Microsoft::WRL::ComPtr<IAudioProcessingObjectPreferredFormatSupport>::InternalRelease();
}
