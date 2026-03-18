/*
 * XREFs of CmpCleanupDiscardReplaceContext @ 0x140A2EE10
 * Callers:
 *     CmDeleteLayeredKey @ 0x140446A10 (CmDeleteLayeredKey.c)
 *     CmpCleanupLightWeightUoWData @ 0x14085BE94 (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140A2DFD4 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A2E164 (CmpLightWeightCommitDeleteKeyUoW.c)
 * Callees:
 *     CmpCleanupDiscardReplacePost @ 0x14085EC10 (CmpCleanupDiscardReplacePost.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A2E434 (CmpEnumerateAllHigherLayerKcbs.c)
 */

void __fastcall CmpCleanupDiscardReplaceContext(ULONG_PTR *a1, __int64 a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rdi

  v4 = *a1;
  if ( v4 )
  {
    v5 = a1 + 2;
    if ( (_QWORD *)*v5 != v5 )
    {
      CmpEnumerateAllHigherLayerKcbs(
        v4,
        (__int64)CmpCleanupDiscardReplacePre,
        (__int64)CmpCleanupDiscardReplacePost,
        a2,
        (__int64)a1,
        1,
        0);
      if ( (_QWORD *)*v5 != v5 )
        CmpCleanupDiscardReplacePost(*a1, a2, (__int64)a1);
    }
  }
}
