/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@UEAA@XZ @ 0x180088254
 * Callers:
 *     _CAudioPumpDspResourceTracker::CAudioPumpDspResourceTracker_::_1_::dtor$0 @ 0x180167982 (_CAudioPumpDspResourceTracker--CAudioPumpDspResourceTracker_--_1_--dtor$0.c)
 *     _DynamicAudioEndpointManager::DynamicAudioEndpointManager_::_1_::dtor$0 @ 0x180168422 (_DynamicAudioEndpointManager--DynamicAudioEndpointManager_--_1_--dtor$0.c)
 *     _CEndpointCharacteristicsCache::CEndpointCharacteristicsCache_::_1_::dtor$0 @ 0x180169A1C (_CEndpointCharacteristicsCache--CEndpointCharacteristicsCache_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = -1073741823;
}
