/*
 * XREFs of KiBugCheckShouldEnterPostBugCheckDebugger @ 0x1405E7850
 * Callers:
 *     KeBugCheck2 @ 0x1405E5F10 (KeBugCheck2.c)
 *     KiAttemptBugcheckRecovery @ 0x1405F9734 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     KdRefreshDebuggerNotPresent @ 0x1404F06C0 (KdRefreshDebuggerNotPresent.c)
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
