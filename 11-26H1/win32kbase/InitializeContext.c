/*
 * XREFs of InitializeContext @ 0x14021B720
 * Callers:
 *     InitializeInputComponents @ 0x14021B770 (InitializeInputComponents.c)
 * Callees:
 *     RegisterCoreMsgProviderPreferences @ 0x14017FE40 (RegisterCoreMsgProviderPreferences.c)
 */

__int64 InitializeContext()
{
  RegisterCoreMsgProviderPreferences(
    0x14u,
    1u,
    2u,
    0LL,
    (__int64)lambda_7336048acd17859272a6f98208d72592_::_lambda_invoker_cdecl_);
  return RegisterCoreMsgProviderPreferences(
           2u,
           1u,
           2u,
           0LL,
           (__int64)lambda_c92a1355a24c64b2e5b1950f66ad99d0_::_lambda_invoker_cdecl_);
}
