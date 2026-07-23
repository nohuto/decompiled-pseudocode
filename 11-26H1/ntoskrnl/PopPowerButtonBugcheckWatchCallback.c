/*
 * XREFs of PopPowerButtonBugcheckWatchCallback @ 0x1407DEA40
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerButtonBugcheckConfigure @ 0x1407DE904 (PopPowerButtonBugcheckConfigure.c)
 */

void __fastcall PopPowerButtonBugcheckWatchCallback(void *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  PopPowerButtonBugcheckConfigure(a1, 1, &v4, a4);
}
