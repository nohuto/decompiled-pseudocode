/*
 * XREFs of PnpWatchdogTimerStart @ 0x1409DCA2C
 * Callers:
 *     PnpEnableWatchdog @ 0x1409DC9D0 (PnpEnableWatchdog.c)
 *     PiUEventNotifyUserMode @ 0x1409DD808 (PiUEventNotifyUserMode.c)
 * Callees:
 *     WdtpArmTimer @ 0x1403AA03C (WdtpArmTimer.c)
 */

__int64 __fastcall PnpWatchdogTimerStart(__int64 a1)
{
  __int64 v1; // rdx

  if ( *(_BYTE *)(a1 + 140) )
  {
    *(_BYTE *)(a1 + 140) = 0;
    v1 = 132LL;
  }
  else
  {
    v1 = 32LL;
  }
  return WdtpArmTimer(a1, *(_DWORD *)(v1 + a1));
}
