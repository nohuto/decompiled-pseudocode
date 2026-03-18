/*
 * XREFs of KiSrcuFlushCompletedDpcRoutine @ 0x1405F53E0
 * Callers:
 *     <none>
 * Callees:
 *     KiSrcuFlushCompleted @ 0x14052EB44 (KiSrcuFlushCompleted.c)
 */

_QWORD **__fastcall KiSrcuFlushCompletedDpcRoutine(__int64 a1, __int64 a2)
{
  return KiSrcuFlushCompleted(a2, 1u);
}
