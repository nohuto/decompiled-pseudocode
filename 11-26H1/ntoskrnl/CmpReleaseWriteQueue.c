/*
 * XREFs of CmpReleaseWriteQueue @ 0x1408B45D0
 * Callers:
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140856D48 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpFlushHive @ 0x1408B321C (CmpFlushHive.c)
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
