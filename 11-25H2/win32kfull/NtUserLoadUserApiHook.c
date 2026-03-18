/*
 * XREFs of NtUserLoadUserApiHook @ 0x1401D9C40
 * Callers:
 *     <none>
 * Callees:
 *     xxxLoadUserApiHook @ 0x1401D9C7C (xxxLoadUserApiHook.c)
 */

__int64 NtUserLoadUserApiHook()
{
  __int64 UserApiHook; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  UserApiHook = (int)xxxLoadUserApiHook();
  UserSessionSwitchLeaveCrit(v1);
  return UserApiHook;
}
