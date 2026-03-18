/*
 * XREFs of SendPositionChanged @ 0x1400A6ED0
 * Callers:
 *     _lambda_a418699817c89276d1581a788dfe45e0_::_lambda_invoker_cdecl_ @ 0x14019B000 (_lambda_a418699817c89276d1581a788dfe45e0_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x140067640 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

__int64 SendPositionChanged()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 UserSessionState; // rax

  KeQueryPerformanceCounter(0LL);
  UserSessionState = W32GetUserSessionState(v1, v0);
  return InputExtensibilityCallout::CoreMsgSendMessage(*(_QWORD *)(UserSessionState + 16408), 0);
}
