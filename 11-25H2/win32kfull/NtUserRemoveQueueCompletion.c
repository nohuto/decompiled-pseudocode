/*
 * XREFs of NtUserRemoveQueueCompletion @ 0x14029D740
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoveQueueCompletion @ 0x140020350 (xxxRemoveQueueCompletion.c)
 */

__int64 NtUserRemoveQueueCompletion()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = (int)xxxRemoveQueueCompletion(v1, v0);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
