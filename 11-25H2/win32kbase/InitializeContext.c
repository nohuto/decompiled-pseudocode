/*
 * XREFs of InitializeContext @ 0x1402162C0
 * Callers:
 *     InitializeInputComponents @ 0x14018C900 (InitializeInputComponents.c)
 * Callees:
 *     RegisterCoreMsgProviderPreferences @ 0x140144A70 (RegisterCoreMsgProviderPreferences.c)
 *     Feature_FocusEndpointInitialization__private_IsEnabledDeviceUsageNoInline @ 0x140216058 (Feature_FocusEndpointInitialization__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 InitializeContext()
{
  __int64 result; // rax

  RegisterCoreMsgProviderPreferences(
    20LL,
    1LL,
    2u,
    0LL,
    (__int64)lambda_7336048acd17859272a6f98208d72592_::_lambda_invoker_cdecl_);
  result = Feature_FocusEndpointInitialization__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
    return RegisterCoreMsgProviderPreferences(
             2LL,
             1LL,
             2u,
             0LL,
             (__int64)lambda_81b75235315d5765559211312549c638_::_lambda_invoker_cdecl_);
  return result;
}
