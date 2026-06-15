/*
 * XREFs of wil::details::lambda_call__lambda_40f314db759a1f980664005546ac52e6___::_lambda_call__lambda_40f314db759a1f980664005546ac52e6___ @ 0x1801352B8
 * Callers:
 *     ?SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x18013D040 (-SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     _EffectPack::SetDeviceFormatAndSpatialSettings_::_1_::dtor$7 @ 0x18016BA4F (_EffectPack--SetDeviceFormatAndSpatialSettings_--_1_--dtor$7.c)
 * Callees:
 *     _lambda_40f314db759a1f980664005546ac52e6_::operator() @ 0x180135FA4 (_lambda_40f314db759a1f980664005546ac52e6_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_40f314db759a1f980664005546ac52e6___::_lambda_call__lambda_40f314db759a1f980664005546ac52e6___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    return lambda_40f314db759a1f980664005546ac52e6_::operator()();
  }
  return result;
}
