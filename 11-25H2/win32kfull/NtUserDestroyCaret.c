/*
 * XREFs of NtUserDestroyCaret @ 0x1401580A0
 * Callers:
 *     <none>
 * Callees:
 *     zzzDestroyCaret @ 0x1401580DC (zzzDestroyCaret.c)
 */

__int64 NtUserDestroyCaret()
{
  __int64 v0; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = (int)zzzDestroyCaret();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
