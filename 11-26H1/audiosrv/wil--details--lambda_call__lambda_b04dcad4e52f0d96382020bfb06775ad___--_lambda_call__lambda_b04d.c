/*
 * XREFs of wil::details::lambda_call__lambda_b04dcad4e52f0d96382020bfb06775ad___::_lambda_call__lambda_b04dcad4e52f0d96382020bfb06775ad___ @ 0x180135318
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004A3BC (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     _EffectPack::DeriveAndCacheMixFormatsForConnector_::_1_::dtor$11 @ 0x1801652CF (_EffectPack--DeriveAndCacheMixFormatsForConnector_--_1_--dtor$11.c)
 * Callees:
 *     _lambda_b04dcad4e52f0d96382020bfb06775ad_::operator() @ 0x180136D48 (_lambda_b04dcad4e52f0d96382020bfb06775ad_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_b04dcad4e52f0d96382020bfb06775ad___::_lambda_call__lambda_b04dcad4e52f0d96382020bfb06775ad___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    return lambda_b04dcad4e52f0d96382020bfb06775ad_::operator()();
  }
  return result;
}
