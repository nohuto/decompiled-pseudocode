/*
 * XREFs of BreakPoint @ 0x140070AE0
 * Callers:
 *     <none>
 * Callees:
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 *     AMLIDebugger @ 0x140055228 (AMLIDebugger.c)
 */

__int64 BreakPoint()
{
  ConPrintf("\nHit a code breakpoint.\n");
  AMLIDebugger();
  return 0LL;
}
