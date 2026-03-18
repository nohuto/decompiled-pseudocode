/*
 * XREFs of NtUserClearWakeMask @ 0x140294DB0
 * Callers:
 *     <none>
 * Callees:
 *     xxxClearWakeMask @ 0x14001ECD0 (xxxClearWakeMask.c)
 */

__int64 NtUserClearWakeMask()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = (int)xxxClearWakeMask(v1, v0);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
