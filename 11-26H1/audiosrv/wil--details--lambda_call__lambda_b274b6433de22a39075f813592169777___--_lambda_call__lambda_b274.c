/*
 * XREFs of wil::details::lambda_call__lambda_b274b6433de22a39075f813592169777___::_lambda_call__lambda_b274b6433de22a39075f813592169777___ @ 0x180135338
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004A3BC (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     _EffectPack::DeriveAndCacheMixFormatsForConnector_::_1_::dtor$3 @ 0x180165299 (_EffectPack--DeriveAndCacheMixFormatsForConnector_--_1_--dtor$3.c)
 * Callees:
 *     _lambda_b274b6433de22a39075f813592169777_::operator() @ 0x180136E4C (_lambda_b274b6433de22a39075f813592169777_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_b274b6433de22a39075f813592169777___::_lambda_call__lambda_b274b6433de22a39075f813592169777___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return lambda_b274b6433de22a39075f813592169777_::operator()();
  }
  return result;
}
