/*
 * XREFs of ?GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000E350
 * Callers:
 *     ?GetConnectorFormatForProcessingMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000D8C0 (-GetConnectorFormatForProcessingMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_00.c)
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x1800121EC (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 *     ?RefreshDeviceFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800861B8 (-RefreshDeviceFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 *     _lambda_97007f1ceff6ad1a52493035158c464e_::operator() @ 0x180136C3C (_lambda_97007f1ceff6ad1a52493035158c464e_--operator().c)
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBU_tlgProvider_t@@PEAUIEndpointResourceManagerProvider@@@Z @ 0x18013C178 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJAEAV-$basic_string@GU-$char_traits@G@std@.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18000B910 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x18000E450 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___.c)
 *     ?GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@W4SED_RESOLVEOPT@@@Z @ 0x18000EDF0 (-GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MID.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F5F0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 */

__int64 __fastcall EffectPack::GetDeviceFormat(
        CEndpointCharacteristics **this,
        __int64 a2,
        __int64 a3,
        __int32 a4,
        struct tWAVEFORMATEX **a5)
{
  __int64 SupportedConnectorModesInternal; // rcx
  __int64 v8; // rcx
  GUID v9; // xmm0
  CEndpointCharacteristics *v10; // rcx
  __int64 v12; // rcx
  __m256i v13; // [rsp+30h] [rbp-48h]
  __m256i v14; // [rsp+50h] [rbp-28h] BYREF

  SupportedConnectorModesInternal = EffectPack::GetSupportedConnectorModesInternal(
                                      this,
                                      a4 & (unsigned int)-(((a4 - 2) & 0xFFFFFFFD) != 0),
                                      0LL,
                                      1LL);
  if ( *(_DWORD *)(SupportedConnectorModesInternal + 8) )
  {
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         SupportedConnectorModesInternal,
                         &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) == -1 )
    {
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                           v8,
                           &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
        v9 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v12, 0);
      else
        v9 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    }
    else
    {
      v9 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    }
  }
  else
  {
    v9 = GUID_00000000_0000_0000_0000_000000000000;
  }
  v10 = this[198];
  *(GUID *)((char *)&v13.m256i_u64[1] + 4) = v9;
  v13.m256i_i64[0] = (__int64)this;
  v13.m256i_i32[2] = a4;
  v14 = v13;
  return CEndpointCharacteristics::GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___(
           v10,
           (__int64)&v14,
           (__int64)a5);
}
