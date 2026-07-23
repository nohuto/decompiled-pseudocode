/*
 * XREFs of CmpReleaseWriteQueue @ 0x1408BABA4
 * Callers:
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14085D0E0 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpReleaseWriteQueue(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = a2[1];
  a2[1] = 0LL;
  *a2 = 0LL;
  return result;
}
