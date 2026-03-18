/*
 * XREFs of ?CleanupChannelObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@UEAAXW4_HMGRENTRY_TYPE@@PEAX@Z @ 0x14020D520
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 DXG_GUEST_REMOTEOBJECTCHANNEL::CleanupChannelObject()
{
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 236;
  return DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", 236LL, 0LL, 0LL, 0LL, 0LL);
}
