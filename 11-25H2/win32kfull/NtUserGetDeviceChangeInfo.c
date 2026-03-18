/*
 * XREFs of NtUserGetDeviceChangeInfo @ 0x140297610
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetDeviceChangeInfo @ 0x14027C658 (xxxGetDeviceChangeInfo.c)
 */

__int64 NtUserGetDeviceChangeInfo()
{
  __int64 v0; // rcx
  unsigned int v1; // ebx
  __int64 v2; // rcx

  EnterCrit(0LL, 0LL);
  v1 = xxxGetDeviceChangeInfo(v0);
  UserSessionSwitchLeaveCrit(v2);
  return v1;
}
