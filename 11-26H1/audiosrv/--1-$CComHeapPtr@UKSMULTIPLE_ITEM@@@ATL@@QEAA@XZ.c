/*
 * XREFs of ??1?$CComHeapPtr@UKSMULTIPLE_ITEM@@@ATL@@QEAA@XZ @ 0x18007008C
 * Callers:
 *     _CEndpointCharacteristics::DiscoverProcessingModeCharacteristics_::_1_::dtor$3 @ 0x180162794 (_CEndpointCharacteristics--DiscoverProcessingModeCharacteristics_--_1_--dtor$3.c)
 *     _EffectPolicy::GetDelayedAECInsertionPolicy_::_1_::dtor$0 @ 0x1801627CA (_EffectPolicy--GetDelayedAECInsertionPolicy_--_1_--dtor$0.c)
 *     _EffectPolicy::GetDelayedAECInsertionPolicy_::_1_::dtor$1 @ 0x1801627DC (_EffectPolicy--GetDelayedAECInsertionPolicy_--_1_--dtor$1.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$1 @ 0x180162B90 (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$1.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$2 @ 0x180162BB0 (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$2.c)
 *     _CEndpointCharacteristics::DiscoverProcessingModeCharacteristics_::_1_::dtor$0 @ 0x180164291 (_CEndpointCharacteristics--DiscoverProcessingModeCharacteristics_--_1_--dtor$0.c)
 *     _DeriveConnectorFormatFromStreamFormat_::_1_::dtor$2 @ 0x1801642A3 (_DeriveConnectorFormatFromStreamFormat_--_1_--dtor$2.c)
 *     _EffectPolicy::IsValidMicArrayForAEC_::_1_::dtor$1 @ 0x1801642B5 (_EffectPolicy--IsValidMicArrayForAEC_--_1_--dtor$1.c)
 *     _CUnsupportedConnectorFormats::GetBlob_::_1_::dtor$0 @ 0x1801642D9 (_CUnsupportedConnectorFormats--GetBlob_--_1_--dtor$0.c)
 *     _EffectPack::GetInitializedSystemEffectInterface_::_1_::dtor$3 @ 0x1801642EB (_EffectPack--GetInitializedSystemEffectInterface_--_1_--dtor$3.c)
 *     _EffectPolicy::IsValidMicArrayForAEC_::_1_::dtor$0 @ 0x1801642FD (_EffectPolicy--IsValidMicArrayForAEC_--_1_--dtor$0.c)
 *     _EffectPack::DecideVssEffectUsage_::_1_::dtor$2 @ 0x1801645F0 (_EffectPack--DecideVssEffectUsage_--_1_--dtor$2.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$4 @ 0x180164E87 (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$4.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$5 @ 0x180164E99 (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$5.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$8 @ 0x180164ECF (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$8.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$9 @ 0x180164EE1 (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$9.c)
 *     _CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor$8 @ 0x180166A57 (_CEndpointCharacteristicsCache--PopulateEndpointCharacteristicsCache_--_1_--dtor$8.c)
 *     _CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor$15 @ 0x180166A7B (_CEndpointCharacteristicsCache--PopulateEndpointCharacteristicsCache_--_1_--dtor$15.c)
 *     _CMonitor::IsCaptureMonitorEnabled_::_1_::dtor$3 @ 0x180168CB1 (_CMonitor--IsCaptureMonitorEnabled_--_1_--dtor$3.c)
 *     _CBtAudioResourceManagerBase::ReconnectStreamGroupsToNewSaDevices_::_1_::dtor$5 @ 0x180168CC3 (_CBtAudioResourceManagerBase--ReconnectStreamGroupsToNewSaDevices_--_1_--dtor$5.c)
 *     _GetSupportedDataRangeForEndpoint_::_1_::dtor$5 @ 0x180168CD5 (_GetSupportedDataRangeForEndpoint_--_1_--dtor$5.c)
 *     _CEndpointCharacteristics::DiscoverProcessingModeCharacteristics_::_1_::dtor$1 @ 0x18016B7C8 (_CEndpointCharacteristics--DiscoverProcessingModeCharacteristics_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComHeapPtr<KSMULTIPLE_ITEM>::~CComHeapPtr<KSMULTIPLE_ITEM>(LPVOID *a1)
{
  CoTaskMemFree(*a1);
  *a1 = 0LL;
}
