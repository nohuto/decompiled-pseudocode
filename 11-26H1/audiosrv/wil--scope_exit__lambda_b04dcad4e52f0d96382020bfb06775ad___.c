/*
 * XREFs of wil::scope_exit__lambda_b04dcad4e52f0d96382020bfb06775ad___ @ 0x1800C3D60
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004A3BC (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?DetermineCurrentEffectPack@CEndpointCharacteristics@@QEAAJXZ @ 0x180083398 (-DetermineCurrentEffectPack@CEndpointCharacteristics@@QEAAJXZ.c)
 *     ?UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@_N1@Z @ 0x1800CBEE0 (-UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@_N1@Z.c)
 *     ?RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18013BAF0 (-RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z.c)
 *     ?SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x18013D040 (-SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::scope_exit__lambda_b04dcad4e52f0d96382020bfb06775ad___(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int64 result; // rax
  __int128 v4; // xmm1

  v2 = *a2;
  *(_BYTE *)(a1 + 32) = 1;
  result = a1;
  v4 = a2[1];
  *(_OWORD *)a1 = v2;
  *(_OWORD *)(a1 + 16) = v4;
  return result;
}
