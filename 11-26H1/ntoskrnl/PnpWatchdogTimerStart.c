/*
 * XREFs of PnpWatchdogTimerStart @ 0x140A19CDC
 * Callers:
 *     PnpEnableWatchdog @ 0x140A19C80 (PnpEnableWatchdog.c)
 *     PiUEventNotifyUserMode @ 0x140A1AAC0 (PiUEventNotifyUserMode.c)
 * Callees:
 *     WdtpArmTimer @ 0x1403B3C4C (WdtpArmTimer.c)
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
