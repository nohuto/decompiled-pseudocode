/*
 * XREFs of NtUserUpdatePerUserImmEnabling @ 0x140212170
 * Callers:
 *     <none>
 * Callees:
 *     UpdatePerUserImmEnabling @ 0x1402121AC (UpdatePerUserImmEnabling.c)
 */

__int64 NtUserUpdatePerUserImmEnabling()
{
  __int64 updated; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  updated = (int)UpdatePerUserImmEnabling();
  UserSessionSwitchLeaveCrit(v1);
  return updated;
}
