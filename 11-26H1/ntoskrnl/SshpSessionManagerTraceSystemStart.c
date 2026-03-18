/*
 * XREFs of SshpSessionManagerTraceSystemStart @ 0x1407E4364
 * Callers:
 *     SshpSessionManagerInitialize @ 0x140CD7604 (SshpSessionManagerInitialize.c)
 * Callees:
 *     SshpSessionManagerSendControlEvent @ 0x140B2FF48 (SshpSessionManagerSendControlEvent.c)
 */

__int64 SshpSessionManagerTraceSystemStart()
{
  return SshpSessionManagerSendControlEvent(SLEEPSTUDY_EVT_SYSTEM_STARTED_CONTROL_EVENT, 0LL, 0LL);
}
