/*
 * XREFs of KdReadEntryCount @ 0x1404B4C40
 * Callers:
 *     KdEnterDebugger @ 0x140C1D858 (KdEnterDebugger.c)
 * Callees:
 *     <none>
 */

__int64 KdReadEntryCount()
{
  return (unsigned int)KdDebuggerEnteredCount;
}
