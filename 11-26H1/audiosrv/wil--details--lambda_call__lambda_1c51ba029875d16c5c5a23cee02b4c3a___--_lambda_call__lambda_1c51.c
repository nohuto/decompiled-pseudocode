/*
 * XREFs of wil::details::lambda_call__lambda_1c51ba029875d16c5c5a23cee02b4c3a___::_lambda_call__lambda_1c51ba029875d16c5c5a23cee02b4c3a___ @ 0x180135238
 * Callers:
 *     ?DetermineCurrentEffectPack@CEndpointCharacteristics@@QEAAJXZ @ 0x180083398 (-DetermineCurrentEffectPack@CEndpointCharacteristics@@QEAAJXZ.c)
 *     _CEndpointCharacteristics::DetermineCurrentEffectPack_::_1_::dtor$1 @ 0x180166C75 (_CEndpointCharacteristics--DetermineCurrentEffectPack_--_1_--dtor$1.c)
 * Callees:
 *     _lambda_1c51ba029875d16c5c5a23cee02b4c3a_::operator() @ 0x180135728 (_lambda_1c51ba029875d16c5c5a23cee02b4c3a_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_1c51ba029875d16c5c5a23cee02b4c3a___::_lambda_call__lambda_1c51ba029875d16c5c5a23cee02b4c3a___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    return lambda_1c51ba029875d16c5c5a23cee02b4c3a_::operator()();
  }
  return result;
}
