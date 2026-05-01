/*
 * XREFs of ??1?$ScopeExitFn@V_lambda_bf0c31f178687dd5d0af47a31b5c5700_@@@details@wil@@QEAA@XZ @ 0x1801A8188
 * Callers:
 *     _winrt::immersive_shell_component::PublishServices_::_1_::dtor$4 @ 0x1806B12AE (_winrt--immersive_shell_component--PublishServices_--_1_--dtor$4.c)
 * Callees:
 *     ??R_lambda_bf0c31f178687dd5d0af47a31b5c5700_@@QEBA@XZ @ 0x1801A8458 (--R_lambda_bf0c31f178687dd5d0af47a31b5c5700_@@QEBA@XZ.c)
 */

__int64 __fastcall wil::details::ScopeExitFn<_lambda_bf0c31f178687dd5d0af47a31b5c5700_>::~ScopeExitFn<_lambda_bf0c31f178687dd5d0af47a31b5c5700_>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return _lambda_bf0c31f178687dd5d0af47a31b5c5700_::operator()();
  }
  return result;
}
