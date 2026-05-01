/*
 * XREFs of wil::details::ScopeExitFn__lambda_bf5d83fa803ad7d3f77024964d972d50___::_ScopeExitFn__lambda_bf5d83fa803ad7d3f77024964d972d50___ @ 0x18047B1D8
 * Callers:
 *     _AccessibilityExperienceManager::_CreateModalExperienceAsync_::_1_::dtor$7 @ 0x1806C76BF (_AccessibilityExperienceManager--_CreateModalExperienceAsync_--_1_--dtor$7.c)
 * Callees:
 *     _lambda_bf5d83fa803ad7d3f77024964d972d50_::operator() @ 0x18047B908 (_lambda_bf5d83fa803ad7d3f77024964d972d50_--operator().c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_bf5d83fa803ad7d3f77024964d972d50___::_ScopeExitFn__lambda_bf5d83fa803ad7d3f77024964d972d50___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return lambda_bf5d83fa803ad7d3f77024964d972d50_::operator()();
  }
  return result;
}
