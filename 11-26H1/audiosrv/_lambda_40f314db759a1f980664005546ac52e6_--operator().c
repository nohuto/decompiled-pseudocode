/*
 * XREFs of _lambda_40f314db759a1f980664005546ac52e6_::operator() @ 0x180135FA4
 * Callers:
 *     wil::details::lambda_call__lambda_40f314db759a1f980664005546ac52e6___::_lambda_call__lambda_40f314db759a1f980664005546ac52e6___ @ 0x1801352B8 (wil--details--lambda_call__lambda_40f314db759a1f980664005546ac52e6___--_lambda_call__lambda_40f3.c)
 * Callees:
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180086DEC (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDeviceFormatHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18013D814 (-SetDeviceFormatHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@_N@Z @ 0x18013DA80 (-SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings.c)
 */

__int64 __fastcall lambda_40f314db759a1f980664005546ac52e6_::operator()(__int64 a1)
{
  int v2; // eax
  int updated; // eax
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = CEndpointCharacteristics::SetSpatialAudioSettings(
         *(CEndpointCharacteristics **)(*(_QWORD *)a1 + 1584LL),
         *(struct EffectPack **)a1,
         **(const struct SpatialAudioSettings ***)(a1 + 8),
         **(const struct tWAVEFORMATEX ***)(a1 + 16),
         0);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      8939LL,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v2);
  updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(
              *(CEndpointCharacteristics **)(*(_QWORD *)a1 + 1584LL),
              0,
              0,
              **(const struct tWAVEFORMATEX ***)(a1 + 16));
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      8940LL,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)updated);
  if ( **(_DWORD **)(a1 + 24) )
  {
    v4 = CEndpointCharacteristics::SetDeviceFormatHwAudioEngine(
           *(CEndpointCharacteristics **)(*(_QWORD *)a1 + 1584LL),
           **(const struct tWAVEFORMATEX ***)(a1 + 16));
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        8945LL,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v4);
  }
  return CEndpointCharacteristics::ClearMixFormatCache(*(_QWORD *)(*(_QWORD *)a1 + 1584LL), 0);
}
