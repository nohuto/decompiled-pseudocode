/*
 * XREFs of NtUserRemoteShadowSetup @ 0x14029D5B0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoteShadowSetup @ 0x1402B9814 (xxxRemoteShadowSetup.c)
 */

__int64 NtUserRemoteShadowSetup()
{
  unsigned int v0; // ebx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = xxxRemoteShadowSetup();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
