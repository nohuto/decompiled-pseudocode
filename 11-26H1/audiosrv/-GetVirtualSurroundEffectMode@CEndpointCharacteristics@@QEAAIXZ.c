/*
 * XREFs of ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x18003D7C0
 * Callers:
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@U_GUID@@22KPEAPEAU2@@Z @ 0x18002F210 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWA.c)
 *     AudioServerGetMixFormat @ 0x180030220 (AudioServerGetMixFormat.c)
 *     ?DecideVssEffectUsage@EffectPack@@AEAAJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003CAA8 (-DecideVssEffectUsage@EffectPack@@AEAAJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescript.c)
 *     ?GetInternalModePriorityList@@YAPEBUModeList@@W4SYSTEM_AUDIO_STREAM_TYPE@@KPEAVCEndpointCharacteristics@@H@Z @ 0x1801120FC (-GetInternalModePriorityList@@YAPEBUModeList@@W4SYSTEM_AUDIO_STREAM_TYPE@@KPEAVCEndpointCharacte.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x18003D84C (Create_SpatialAudioDevicePropertyReader.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::GetVirtualSurroundEffectMode(struct IPropertyStore **this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v6 = 0LL;
  v5 = 0;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v6);
  if ( (int)Create_SpatialAudioDevicePropertyReader(0LL, this[9]) >= 0
    && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v6 + 184LL))(v6, &v5) >= 0 )
  {
    v2 = v5;
  }
  v3 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return v2;
}
