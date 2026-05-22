/*
 * XREFs of wil::details::lambda_call__lambda_846207132ca0d62201dd0675f9ebdb0a___::_lambda_call__lambda_846207132ca0d62201dd0675f9ebdb0a___ @ 0x1800994D4
 * Callers:
 *     _RegistryWatcher::Initialize_::_1_::dtor$0 @ 0x1801D65FB (_RegistryWatcher--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     _lambda_846207132ca0d62201dd0675f9ebdb0a_::operator() @ 0x18010C0EC (_lambda_846207132ca0d62201dd0675f9ebdb0a_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_846207132ca0d62201dd0675f9ebdb0a___::_lambda_call__lambda_846207132ca0d62201dd0675f9ebdb0a___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return lambda_846207132ca0d62201dd0675f9ebdb0a_::operator()(a1);
  }
  return result;
}
