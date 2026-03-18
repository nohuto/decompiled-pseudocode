/*
 * XREFs of ?GetPowerWatchdogTimeoutMsec@@YAKW4_POWER_WATCHDOG_TYPE@@@Z @ 0x14015EE60
 * Callers:
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1401C1404 (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPowerWatchdogTimeoutMsec(int a1, int a2, int a3)
{
  unsigned __int64 v4; // rbx
  _DWORD *v5; // rax

  v4 = 0LL;
  v5 = (_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 368);
  while ( v4 < 5 )
  {
    if ( *v5 == a1 )
      return (unsigned int)v5[4];
    ++v4;
    v5 += 6;
  }
  return 30000LL;
}
