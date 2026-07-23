/*
 * XREFs of KiBugCheckShouldEnterPostBugCheckDebugger @ 0x1405EA1C0
 * Callers:
 *     KeBugCheck2 @ 0x1405E8880 (KeBugCheck2.c)
 *     KiAttemptBugcheckRecovery @ 0x1405FC154 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     KdRefreshDebuggerNotPresent @ 0x1404E9CA0 (KdRefreshDebuggerNotPresent.c)
 */

char __fastcall KiBugCheckShouldEnterPostBugCheckDebugger(int a1, __int64 a2)
{
  char v4; // bl

  v4 = 1;
  if ( !(_BYTE)KdDebuggerEnabled && !KdEventLoggingEnabled
    || KiHypervisorInitiatedCrashDump
    || KdRefreshDebuggerNotPresent() && !KdEventLoggingPresent )
  {
    return 0;
  }
  if ( a1 == 226 || a1 == 523 )
    v4 = 0;
  if ( a2 )
    return *(_BYTE *)a2;
  return v4;
}
