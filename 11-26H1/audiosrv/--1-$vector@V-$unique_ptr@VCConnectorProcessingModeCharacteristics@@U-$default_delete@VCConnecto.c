/*
 * XREFs of ??1?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180032558
 * Callers:
 *     _CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics_::_1_::dtor$0 @ 0x180164479 (_CEndpointCharacteristics--DiscoverConnectorProcessingModeCharacteristics_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::GetProcessingModeCharacteristicsFromPropertyStore_::_1_::dtor$0 @ 0x180164500 (_CEndpointCharacteristics--GetProcessingModeCharacteristicsFromPropertyStore_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::GetProcessingModeCharacteristicsFromPropertyStore_::_1_::dtor$1 @ 0x180164512 (_CEndpointCharacteristics--GetProcessingModeCharacteristicsFromPropertyStore_--_1_--dtor$1.c)
 *     _DeserializeProcessingModeCharacteristics_::_1_::dtor$0 @ 0x180164524 (_DeserializeProcessingModeCharacteristics_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::~vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>(
        __int64 a1)
{
  return std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Tidy(a1);
}
