/*
 * XREFs of ??$com_query_to_nothrow@UIAudioSystemEffectsPropertyStoreInternal@@AEAPEAUIAudioSystemEffectsPropertyStore@@@wil@@YAJAEAPEAUIAudioSystemEffectsPropertyStore@@PEAPEAUIAudioSystemEffectsPropertyStoreInternal@@@Z @ 0x18016025C
 * Callers:
 *     ?CopyContextProperties@@YAJPEAUIAudioSystemEffectsPropertyStore@@0@Z @ 0x180160774 (-CopyContextProperties@@YAJPEAUIAudioSystemEffectsPropertyStore@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_query_to_nothrow<IAudioSystemEffectsPropertyStoreInternal,IAudioSystemEffectsPropertyStore * &>(
        _QWORD *a1,
        __int64 a2)
{
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_13dfcc0a_15ea_4b9e_a5a6_cc1e5c0bb317, a2);
}
