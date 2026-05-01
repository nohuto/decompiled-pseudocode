/*
 * XREFs of wil::details::lambda_call__lambda_0a4dda7089592679dd7aa39e71934212___::_lambda_call__lambda_0a4dda7089592679dd7aa39e71934212___ @ 0x180460A94
 * Callers:
 *     _XamlLauncherState::ShowStartView_::_1_::dtor$0 @ 0x1806EE6D0 (_XamlLauncherState--ShowStartView_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::lambda_call__lambda_0a4dda7089592679dd7aa39e71934212___::_lambda_call__lambda_0a4dda7089592679dd7aa39e71934212___(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = *a1;
    *((_BYTE *)a1 + 8) = 0;
    *(_BYTE *)(result + 1116) = 0;
  }
  return result;
}
