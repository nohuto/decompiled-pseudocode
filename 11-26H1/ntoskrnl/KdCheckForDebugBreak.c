/*
 * XREFs of KdCheckForDebugBreak @ 0x140487E4C
 * Callers:
 *     KeAccumulateTicks @ 0x14021F980 (KeAccumulateTicks.c)
 *     MiWalkPageTablesRecursivelyNoSynch @ 0x140326D88 (MiWalkPageTablesRecursivelyNoSynch.c)
 *     IoWriteCrashDump @ 0x1405C7FAC (IoWriteCrashDump.c)
 *     PopHiberCheckForDebugBreak @ 0x140C04A64 (PopHiberCheckForDebugBreak.c)
 * Callees:
 *     KdPollBreakIn @ 0x140487E90 (KdPollBreakIn.c)
 *     DbgBreakPointWithStatus @ 0x140534930 (DbgBreakPointWithStatus.c)
 */

void KdCheckForDebugBreak()
{
  if ( !KdPitchDebugger && (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    if ( (unsigned __int8)KdPollBreakIn() )
      DbgBreakPointWithStatus(1u);
  }
}
