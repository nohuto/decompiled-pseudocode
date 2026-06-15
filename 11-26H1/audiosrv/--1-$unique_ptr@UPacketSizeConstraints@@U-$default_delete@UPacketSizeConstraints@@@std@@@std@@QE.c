/*
 * XREFs of ??1?$unique_ptr@UPacketSizeConstraints@@U?$default_delete@UPacketSizeConstraints@@@std@@@std@@QEAA@XZ @ 0x180135420
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x18013898C (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z @ 0x18013DEF8 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetPacketSizeConstraints@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@AEAV?$unique_ptr@UPacketSizeConstraints@@U?$default_delete@UPacketSizeConstraints@@@std@@@std@@@Z @ 0x1801613FC (-GetPacketSizeConstraints@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@AEAV-$unique_ptr@UPac.c)
 *     _CEndpointCharacteristics::DiscoverProcessingModeCharacteristics_::_1_::dtor$2 @ 0x18016B7DA (_CEndpointCharacteristics--DiscoverProcessingModeCharacteristics_--_1_--dtor$2.c)
 *     _CEndpointCharacteristics::TryAddFormat_::_1_::dtor$0 @ 0x18016BA97 (_CEndpointCharacteristics--TryAddFormat_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@UPacketSizeConstraints@@@std@@QEBAXPEAUPacketSizeConstraints@@@Z @ 0x1801375C0 (--R-$default_delete@UPacketSizeConstraints@@@std@@QEBAXPEAUPacketSizeConstraints@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<PacketSizeConstraints>::~unique_ptr<PacketSizeConstraints>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<PacketSizeConstraints>::operator()();
  return result;
}
