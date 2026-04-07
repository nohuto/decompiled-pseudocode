/*
 * XREFs of wil::details::lambda_call__CWindowSnapshot::Create_::_2_::_lambda_1___::_lambda_call__CWindowSnapshot::Create_::_2_::_lambda_1___ @ 0x18003414C
 * Callers:
 *     _CWindowSnapshot::Create_::_1_::dtor$0 @ 0x1800E769A (_CWindowSnapshot--Create_--_1_--dtor$0.c)
 * Callees:
 *     _CWindowSnapshot::Create_::_2_::_lambda_1_::operator() @ 0x18003465C (_CWindowSnapshot--Create_--_2_--_lambda_1_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__CWindowSnapshot::Create_::_2_::_lambda_1___::_lambda_call__CWindowSnapshot::Create_::_2_::_lambda_1___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return CWindowSnapshot::Create_::_2_::_lambda_1_::operator()();
  }
  return result;
}
