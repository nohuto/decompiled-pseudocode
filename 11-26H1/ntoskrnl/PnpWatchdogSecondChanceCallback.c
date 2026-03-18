/*
 * XREFs of PnpWatchdogSecondChanceCallback @ 0x1405D9DD0
 * Callers:
 *     <none>
 * Callees:
 *     PnpWatchdogEtwWrite @ 0x14049FA50 (PnpWatchdogEtwWrite.c)
 *     PnpWatchdogBugcheck @ 0x1405D9A74 (PnpWatchdogBugcheck.c)
 */

__int64 __fastcall PnpWatchdogSecondChanceCallback(__int64 *a1)
{
  char v1; // dl

  v1 = 0;
  if ( !(_BYTE)dword_140FBE22C && (PnpSetupOOBEInProgress || PnpSetupInProgress) )
    v1 = 1;
  if ( PnpWatchdogBugcheckConfig && (PnpWatchdogBugcheckConfig == 1 || v1) )
    PnpWatchdogBugcheck((__int64)a1);
  return PnpWatchdogEtwWrite(a1, 2);
}
