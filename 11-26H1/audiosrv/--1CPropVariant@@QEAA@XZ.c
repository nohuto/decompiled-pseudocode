/*
 * XREFs of ??1CPropVariant@@QEAA@XZ @ 0x18007B104
 * Callers:
 *     _GetApoDeviceFromFxPropStore_::_1_::dtor$0 @ 0x180162922 (_GetApoDeviceFromFxPropStore_--_1_--dtor$0.c)
 *     _EffectPackConfiguration::CreateDriverEffectPackConfiguration_::_1_::dtor$3 @ 0x180162A34 (_EffectPackConfiguration--CreateDriverEffectPackConfiguration_--_1_--dtor$3.c)
 *     _GetPacketSizeConstraints_::_1_::dtor$2 @ 0x180162AC4 (_GetPacketSizeConstraints_--_1_--dtor$2.c)
 *     _GetConnectorProcessingModeDataFormatsFromDriver_::_1_::dtor$1 @ 0x180164321 (_GetConnectorProcessingModeDataFormatsFromDriver_--_1_--dtor$1.c)
 *     _GetDeviceInstanceId_::_1_::dtor$1 @ 0x180164333 (_GetDeviceInstanceId_--_1_--dtor$1.c)
 *     _GetFxClsidsFromPropertyStore_::_1_::dtor$0 @ 0x18016442B (_GetFxClsidsFromPropertyStore_--_1_--dtor$0.c)
 *     _EffectPack::RefreshConnectorFormats_::_1_::dtor$1 @ 0x180164642 (_EffectPack--RefreshConnectorFormats_--_1_--dtor$1.c)
 *     _GetProposedConnectorFormatForProcessingMode_::_1_::dtor$0 @ 0x180164666 (_GetProposedConnectorFormatForProcessingMode_--_1_--dtor$0.c)
 *     _GetProposedConnectorFormatForProcessingMode_::_1_::dtor$1 @ 0x180164678 (_GetProposedConnectorFormatForProcessingMode_--_1_--dtor$1.c)
 *     _GetPacketSizeConstraints_::_1_::dtor$1 @ 0x1801646C0 (_GetPacketSizeConstraints_--_1_--dtor$1.c)
 *     _CEndpointCharacteristics::GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda____::_1_::dtor$0 @ 0x1801646D2 (_CEndpointCharacteristics--GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed_ea_1801646D2.c)
 *     _CEndpointCharacteristics::GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda____::_1_::dtor$1 @ 0x1801646E4 (_CEndpointCharacteristics--GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed_ea_1801646E4.c)
 *     _CEndpointCharacteristics::UpdateDeviceFormatEPProperty_::_1_::dtor$0 @ 0x180166E9C (_CEndpointCharacteristics--UpdateDeviceFormatEPProperty_--_1_--dtor$0.c)
 *     _CopyProperties_::_1_::dtor$0 @ 0x1801679F6 (_CopyProperties_--_1_--dtor$0.c)
 *     _CConstraintModel::GetEndpointInformationFromId_::_1_::dtor$10 @ 0x18016A74B (_CConstraintModel--GetEndpointInformationFromId_--_1_--dtor$10.c)
 *     _CVolumeSoftware::LoadVolumeDefaultsForEndpoint_::_1_::dtor$0 @ 0x18016AB67 (_CVolumeSoftware--LoadVolumeDefaultsForEndpoint_--_1_--dtor$0.c)
 *     _CVolumeSoftware::LoadVolumeDefaultsForEndpoint_::_1_::dtor$1 @ 0x18016AB79 (_CVolumeSoftware--LoadVolumeDefaultsForEndpoint_--_1_--dtor$1.c)
 *     _CVolumeSoftware::LoadVolumeDefaultsForEndpoint_::_1_::dtor$2 @ 0x18016AB8B (_CVolumeSoftware--LoadVolumeDefaultsForEndpoint_--_1_--dtor$2.c)
 *     _CEndpointCharacteristics::UpdateEffectPackDeviceIdInFxPropStore_::_1_::dtor$2 @ 0x18016B0DF (_CEndpointCharacteristics--UpdateEffectPackDeviceIdInFxPropStore_--_1_--dtor$2.c)
 *     __lambda_2105041f0c5016ef5fdaddf32fc575ff_::operator()_::_1_::dtor$9 @ 0x18016B720 (__lambda_2105041f0c5016ef5fdaddf32fc575ff_--operator()_--_1_--dtor$9.c)
 *     _CConstraintModel::GetEndpointInformationFromId_::_1_::dtor$8 @ 0x18016B8C5 (_CConstraintModel--GetEndpointInformationFromId_--_1_--dtor$8.c)
 *     _CEndpointCharacteristics::SetCurrentEffectPackInternal_::_1_::dtor$2 @ 0x18016B9C8 (_CEndpointCharacteristics--SetCurrentEffectPackInternal_--_1_--dtor$2.c)
 *     _EffectPack::SetDeviceFormatAndSpatialSettings_::_1_::dtor$6 @ 0x18016BA3D (_EffectPack--SetDeviceFormatAndSpatialSettings_--_1_--dtor$6.c)
 *     _CSpatialProperties::ProcessPropertyChange_::_1_::dtor$0 @ 0x18016BBE6 (_CSpatialProperties--ProcessPropertyChange_--_1_--dtor$0.c)
 *     _CSpatialProperties::SetSpatialAudioSettingsInternal_::_1_::dtor$2 @ 0x18016BC40 (_CSpatialProperties--SetSpatialAudioSettingsInternal_--_1_--dtor$2.c)
 *     _CConstraintModel::GetEndpointInformationFromId_::_1_::dtor$7 @ 0x18016C541 (_CConstraintModel--GetEndpointInformationFromId_--_1_--dtor$7.c)
 *     _CConstraintModel::GetEndpointInformationFromId_::_1_::dtor$9 @ 0x18016C553 (_CConstraintModel--GetEndpointInformationFromId_--_1_--dtor$9.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall CPropVariant::~CPropVariant(PROPVARIANT *pvar)
{
  return PropVariantClear(pvar);
}
