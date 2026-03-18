/*
 * XREFs of NtUserRemoteShadowStop @ 0x14029D640
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoteShadowStop @ 0x1402B9924 (xxxRemoteShadowStop.c)
 */

__int64 NtUserRemoteShadowStop()
{
  unsigned int v0; // ebx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = xxxRemoteShadowStop();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
