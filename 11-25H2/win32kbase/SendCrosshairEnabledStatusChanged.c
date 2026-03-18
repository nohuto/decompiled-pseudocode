/*
 * XREFs of SendCrosshairEnabledStatusChanged @ 0x1400A6F40
 * Callers:
 *     xxxSystemParametersInfo @ 0x1400A70D0 (xxxSystemParametersInfo.c)
 *     _lambda_a418699817c89276d1581a788dfe45e0_::_lambda_invoker_cdecl_ @ 0x14019B000 (_lambda_a418699817c89276d1581a788dfe45e0_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x140067640 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

__int64 __fastcall SendCrosshairEnabledStatusChanged(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  return InputExtensibilityCallout::CoreMsgSendMessage(*(_QWORD *)(UserSessionState + 16408), 0);
}
