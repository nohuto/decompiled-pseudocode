/*
 * XREFs of CmpCleanupDiscardReplaceContext @ 0x140A40C9C
 * Callers:
 *     CmDeleteLayeredKey @ 0x14043F510 (CmDeleteLayeredKey.c)
 *     CmpCleanupLightWeightUoWData @ 0x140862184 (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140A3FE60 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A3FFF0 (CmpLightWeightCommitDeleteKeyUoW.c)
 * Callees:
 *     CmpCleanupDiscardReplacePost @ 0x140864F00 (CmpCleanupDiscardReplacePost.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A402C0 (CmpEnumerateAllHigherLayerKcbs.c)
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
