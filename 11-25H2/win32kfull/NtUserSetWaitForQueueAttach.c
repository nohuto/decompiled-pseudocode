/*
 * XREFs of NtUserSetWaitForQueueAttach @ 0x1402A0640
 * Callers:
 *     <none>
 * Callees:
 *     _SetWaitForQueueAttach @ 0x14021E34C (_SetWaitForQueueAttach.c)
 */

__int64 __fastcall NtUserSetWaitForQueueAttach(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rcx

  EnterCrit(0LL, 0LL);
  v3 = (int)SetWaitForQueueAttach(a1, v2);
  UserSessionSwitchLeaveCrit(v4);
  return v3;
}
