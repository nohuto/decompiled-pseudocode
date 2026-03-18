/*
 * XREFs of ?ProcessChannelMessage@DXG_GUEST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x14020E6E0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXG_GUEST_REMOTEOBJECTCHANNEL::ProcessChannelMessage(DXG_GUEST_REMOTEOBJECTCHANNEL *this, void *a2)
{
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 222;
  DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", 222LL, 0LL, 0LL, 0LL, 0LL);
  return 0LL;
}
