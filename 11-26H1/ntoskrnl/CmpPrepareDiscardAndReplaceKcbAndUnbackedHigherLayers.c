/*
 * XREFs of CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14085EDB4
 * Callers:
 *     CmDeleteLayeredKey @ 0x140446A10 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x1408BAD90 (CmDeleteKey.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140A2DFD4 (CmpLightWeightPrepareDeleteKeyUoW.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x140446E30 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14044EE20 (CmpInitializeDelayDerefContext.c)
 *     CmpPrepareDiscardReplacePost @ 0x14085EE60 (CmpPrepareDiscardReplacePost.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A2E434 (CmpEnumerateAllHigherLayerKcbs.c)
 */

__int64 __fastcall CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(ULONG_PTR a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  __int128 v7; // [rsp+40h] [rbp-18h] BYREF

  v7 = 0LL;
  CmpInitializeDelayDerefContext(&v7);
  *(_QWORD *)v4 = a1;
  *(_DWORD *)(v4 + 8) = 0;
  CmpEnumerateAllHigherLayerKcbs(
    a1,
    (unsigned int)CmpCleanupDiscardReplacePre,
    (unsigned int)CmpPrepareDiscardReplacePost,
    (unsigned int)&v7,
    v4,
    1,
    0);
  v5 = *(_DWORD *)(a2 + 8);
  if ( v5 >= 0 )
  {
    CmpPrepareDiscardReplacePost(a1);
    v5 = 0;
    if ( *(int *)(a2 + 8) < 0 )
      v5 = *(_DWORD *)(a2 + 8);
  }
  CmpDrainDelayDerefContext((_QWORD **)&v7);
  return (unsigned int)v5;
}
