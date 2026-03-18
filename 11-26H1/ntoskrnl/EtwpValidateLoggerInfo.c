/*
 * XREFs of EtwpValidateLoggerInfo @ 0x14091F33C
 * Callers:
 *     EtwpTransitionToRealtime @ 0x14052ECDC (EtwpTransitionToRealtime.c)
 *     EtwpIncrementTraceFile @ 0x14077B460 (EtwpIncrementTraceFile.c)
 *     EtwpQueryTrace @ 0x14091F240 (EtwpQueryTrace.c)
 *     NtTraceControl @ 0x14093CB40 (NtTraceControl.c)
 *     EtwpUpdateTrace @ 0x140A6C6F0 (EtwpUpdateTrace.c)
 *     EtwpStopTrace @ 0x140A6F2F8 (EtwpStopTrace.c)
 *     EtwpFlushTrace @ 0x140A6F6CC (EtwpFlushTrace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpValidateLoggerInfo(_DWORD *a1)
{
  if ( !a1 )
    return 3221225485LL;
  if ( *a1 < 0xB0u )
    return 3221225990LL;
  return (a1[11] & 0x20000) == 0 ? 0xC000000D : 0;
}
