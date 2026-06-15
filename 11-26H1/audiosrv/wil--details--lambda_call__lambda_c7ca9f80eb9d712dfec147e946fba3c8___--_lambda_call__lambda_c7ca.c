/*
 * XREFs of wil::details::lambda_call__lambda_c7ca9f80eb9d712dfec147e946fba3c8___::_lambda_call__lambda_c7ca9f80eb9d712dfec147e946fba3c8___ @ 0x180135358
 * Callers:
 *     ?SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18004BA2C (-SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 *     _EffectPack::SetDeviceFormatSwAudioEngine_::_1_::dtor$3 @ 0x180165317 (_EffectPack--SetDeviceFormatSwAudioEngine_--_1_--dtor$3.c)
 * Callees:
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180086DEC (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_c7ca9f80eb9d712dfec147e946fba3c8___::_lambda_call__lambda_c7ca9f80eb9d712dfec147e946fba3c8___(
        __int64 a1)
{
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(
                *(CEndpointCharacteristics **)(*(_QWORD *)a1 + 1584LL),
                0,
                **(_DWORD **)(a1 + 8),
                **(const struct tWAVEFORMATEX ***)(a1 + 16));
    if ( updated < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        8613LL,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)updated);
  }
}
