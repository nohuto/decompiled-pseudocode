/*
 * XREFs of NtUserWaitAvailableMessageEx @ 0x1402A33F0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSleepThread @ 0x140117848 (xxxSleepThread.c)
 */

__int64 __fastcall NtUserWaitAvailableMessageEx(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx

  EnterCrit(0LL, 0LL);
  v4 = (int)xxxSleepThread(a1, a2, 1, 1);
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
