/*
 * XREFs of _lambda_31685d6d76905a19580e009ac071d915_::_lambda_invoker_cdecl_ @ 0x180059F20
 * Callers:
 *     ?InputReportCallback@GameControllerRawInputProvider@@CAJPEAX@Z @ 0x180059EA0 (-InputReportCallback@GameControllerRawInputProvider@@CAJPEAX@Z.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800A1000 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

void __fastcall lambda_31685d6d76905a19580e009ac071d915_::_lambda_invoker_cdecl_(_DWORD *a1)
{
  int v2; // ecx
  wil::details::in1diag3 *v3; // rcx
  __int64 v4; // rdx

  v2 = *a1 - 4;
  if ( !v2 )
  {
    v4 = 368LL;
LABEL_5:
    operator delete(a1, (const struct std::nothrow_t *)v4);
    return;
  }
  v3 = (wil::details::in1diag3 *)(unsigned int)(v2 - 60);
  if ( (_DWORD)v3 )
  {
    if ( (_DWORD)v3 != 64 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(v3);
    v4 = 3008LL;
    goto LABEL_5;
  }
  operator delete(a1);
}
