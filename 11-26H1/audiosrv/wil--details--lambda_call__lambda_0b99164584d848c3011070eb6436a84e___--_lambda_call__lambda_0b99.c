/*
 * XREFs of wil::details::lambda_call__lambda_0b99164584d848c3011070eb6436a84e___::_lambda_call__lambda_0b99164584d848c3011070eb6436a84e___ @ 0x1800F990C
 * Callers:
 *     ?CompareProcessingModeParameters@CSharedStreamGroupProxy@@UEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x180070230 (-CompareProcessingModeParameters@CSharedStreamGroupProxy@@UEAAJAEBVCProcessingModeParameters@@PE.c)
 * Callees:
 *     _lambda_0b99164584d848c3011070eb6436a84e_::operator() @ 0x1800F9A9C (_lambda_0b99164584d848c3011070eb6436a84e_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_0b99164584d848c3011070eb6436a84e___::_lambda_call__lambda_0b99164584d848c3011070eb6436a84e___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return lambda_0b99164584d848c3011070eb6436a84e_::operator()();
  }
  return result;
}
