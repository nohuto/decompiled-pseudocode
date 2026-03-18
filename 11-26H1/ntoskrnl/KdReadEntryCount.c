/*
 * XREFs of KdReadEntryCount @ 0x1404BB460
 * Callers:
 *     KdEnterDebugger @ 0x140C17858 (KdEnterDebugger.c)
 * Callees:
 *     <none>
 */

__int64 KdReadEntryCount()
{
  return (unsigned int)KdDebuggerEnteredCount;
}
