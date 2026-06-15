/*
 * XREFs of ??$CopyTo@UISpatialAudioMetadataDictionary@@@?$ComPtr@VSpatialAudioMetadataDictionary@@@WRL@Microsoft@@QEBAJPEAPEAUISpatialAudioMetadataDictionary@@@Z @ 0x180130E70
 * Callers:
 *     Create_SpatialAudioMetadataDictionaryFromData @ 0x180131B50 (Create_SpatialAudioMetadataDictionaryFromData.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<SpatialAudioMetadataDictionary>::CopyTo<ISpatialAudioMetadataDictionary>(
        _QWORD *a1,
        __int64 a2)
{
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_7175fd87_aec9_42ed_ad43_364817a8ed7a, a2);
}
