/*
 * XREFs of ??$com_query_to_nothrow@UIAudioSystemEffectsCustomFormats@@AEAV?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@@wil@@YAJAEAV?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@PEAPEAUIAudioSystemEffectsCustomFormats@@@Z @ 0x18014ED38
 * Callers:
 *     ?GetFormat@CCompositeSystemEffect@@UEAAJIPEAPEAUIAudioMediaType@@@Z @ 0x18014F360 (-GetFormat@CCompositeSystemEffect@@UEAAJIPEAPEAUIAudioMediaType@@@Z.c)
 *     ?GetFormatCount@CCompositeSystemEffect@@UEAAJPEAI@Z @ 0x18014F3F0 (-GetFormatCount@CCompositeSystemEffect@@UEAAJPEAI@Z.c)
 *     ?GetFormatRepresentation@CCompositeSystemEffect@@UEAAJIPEAPEAG@Z @ 0x18014F470 (-GetFormatRepresentation@CCompositeSystemEffect@@UEAAJIPEAPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_query_to_nothrow<IAudioSystemEffectsCustomFormats,Microsoft::WRL::ComPtr<IAudioProcessingObject> &>(
        _QWORD *a1,
        __int64 a2)
{
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097, a2);
}
