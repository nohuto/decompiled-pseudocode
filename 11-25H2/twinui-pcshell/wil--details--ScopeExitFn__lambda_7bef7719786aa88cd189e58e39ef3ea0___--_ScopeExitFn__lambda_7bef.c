/*
 * XREFs of wil::details::ScopeExitFn__lambda_7bef7719786aa88cd189e58e39ef3ea0___::_ScopeExitFn__lambda_7bef7719786aa88cd189e58e39ef3ea0___ @ 0x18038EBC0
 * Callers:
 *     _CVirtualTouchpadExperienceManager::Show_::_1_::dtor$0 @ 0x1806BF6C8 (_CVirtualTouchpadExperienceManager--Show_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_7bef7719786aa88cd189e58e39ef3ea0___::_ScopeExitFn__lambda_7bef7719786aa88cd189e58e39ef3ea0___(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = *a1;
    *((_BYTE *)a1 + 8) = 0;
    *(_DWORD *)(result + 768) = 4;
  }
  return result;
}
