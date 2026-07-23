/*
 * XREFs of KiSrcuFlushCompletedDpcRoutine @ 0x1405F7DA0
 * Callers:
 *     <none>
 * Callees:
 *     KiSrcuFlushCompleted @ 0x140531064 (KiSrcuFlushCompleted.c)
 */

_QWORD **__fastcall KiSrcuFlushCompletedDpcRoutine(__int64 a1, __int64 a2)
{
  return KiSrcuFlushCompleted(a2, 1u);
}
