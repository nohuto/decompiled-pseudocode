/*
 * XREFs of NtUserRemotePassthruEnable @ 0x14029D380
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemotePassthruEnable @ 0x1402B95D8 (xxxRemotePassthruEnable.c)
 */

__int64 NtUserRemotePassthruEnable()
{
  unsigned int v0; // ebx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = xxxRemotePassthruEnable();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
