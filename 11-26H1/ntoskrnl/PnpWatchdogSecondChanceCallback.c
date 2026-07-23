/*
 * XREFs of PnpWatchdogSecondChanceCallback @ 0x1405DC5D0
 * Callers:
 *     <none>
 * Callees:
 *     PnpWatchdogEtwWrite @ 0x1404995A0 (PnpWatchdogEtwWrite.c)
 *     PnpWatchdogBugcheck @ 0x1405DC274 (PnpWatchdogBugcheck.c)
 */

__int64 __fastcall PnpWatchdogSecondChanceCallback(__int64 *a1)
{
  char v1; // dl

  v1 = 0;
  if ( !(_BYTE)dword_140FBF22C && (PnpSetupOOBEInProgress || PnpSetupInProgress) )
    v1 = 1;
  if ( PnpWatchdogBugcheckConfig && (PnpWatchdogBugcheckConfig == 1 || v1) )
    PnpWatchdogBugcheck((__int64)a1);
  return PnpWatchdogEtwWrite(a1, 2);
}
