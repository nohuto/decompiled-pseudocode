/*
 * XREFs of CmpMarkKeyUnbacked @ 0x1408BA08C
 * Callers:
 *     CmDeleteLayeredKey @ 0x140446A10 (CmDeleteLayeredKey.c)
 *     CmpRemoveHiveFromNamespace @ 0x1404CC980 (CmpRemoveHiveFromNamespace.c)
 *     CmpRefreshWorkerRoutine @ 0x14084E200 (CmpRefreshWorkerRoutine.c)
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 *     CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x14085ED40 (CmpInvalidateAllHigherLayerKcbsPostCallback.c)
 *     CmpCompleteUnloadKey @ 0x1408B9ACC (CmpCompleteUnloadKey.c)
 *     CmDeleteKey @ 0x1408BAD90 (CmDeleteKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1408BC6D0 (CmpTransMgrFreeVolatileData.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A2E164 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpCommitDiscardReplacePost @ 0x140A2F58C (CmpCommitDiscardReplacePost.c)
 *     CmpInvalidateSubtreeWorker @ 0x140B1C7F0 (CmpInvalidateSubtreeWorker.c)
 * Callees:
 *     CmpCleanUpKcbCachedSymlink @ 0x1408C20B4 (CmpCleanUpKcbCachedSymlink.c)
 */

__int64 __fastcall CmpMarkKeyUnbacked(__int64 a1)
{
  char v1; // al
  __int64 v3; // rcx
  __int64 result; // rax

  v1 = 1;
  *(_DWORD *)(a1 + 40) = -1;
  ++*(_QWORD *)(a1 + 304);
  v3 = *(_QWORD *)(a1 + 72);
  if ( !v3 || *(_BYTE *)(v3 + 65) != 3 )
    v1 = 0;
  *(_BYTE *)(a1 + 65) = v1;
  result = CmpCleanUpKcbCachedSymlink(a1);
  *(_WORD *)(a1 + 186) &= 4u;
  *(_DWORD *)(a1 + 184) &= 0xFFFFFF00;
  *(_BYTE *)(a1 + 185) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = -1;
  *(_DWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  return result;
}
