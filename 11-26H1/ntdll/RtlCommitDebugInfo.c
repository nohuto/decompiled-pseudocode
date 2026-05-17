/*
 * XREFs of RtlCommitDebugInfo @ 0x180111850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
char *__fastcall RtlCommitDebugInfo(_QWORD *a1, unsigned int a2)
{
  return RtlpCommitQueryDebugInfo(a1, a2);
}
