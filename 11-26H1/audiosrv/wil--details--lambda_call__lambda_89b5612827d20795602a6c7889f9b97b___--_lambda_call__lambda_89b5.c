/*
 * XREFs of wil::details::lambda_call__lambda_89b5612827d20795602a6c7889f9b97b___::_lambda_call__lambda_89b5612827d20795602a6c7889f9b97b___ @ 0x1801352F8
 * Callers:
 *     ?RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18013BAF0 (-RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z.c)
 *     _CEndpointCharacteristics::RemoveEffectPack_::_1_::dtor$2 @ 0x18016B926 (_CEndpointCharacteristics--RemoveEffectPack_--_1_--dtor$2.c)
 * Callees:
 *     _lambda_89b5612827d20795602a6c7889f9b97b_::operator() @ 0x180136784 (_lambda_89b5612827d20795602a6c7889f9b97b_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_89b5612827d20795602a6c7889f9b97b___::_lambda_call__lambda_89b5612827d20795602a6c7889f9b97b___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    return lambda_89b5612827d20795602a6c7889f9b97b_::operator()();
  }
  return result;
}
