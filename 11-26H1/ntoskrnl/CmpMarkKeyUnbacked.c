/*
 * XREFs of CmpMarkKeyUnbacked @ 0x1408C065C
 * Callers:
 *     CmDeleteLayeredKey @ 0x14043F510 (CmDeleteLayeredKey.c)
 *     CmpRemoveHiveFromNamespace @ 0x1404C6120 (CmpRemoveHiveFromNamespace.c)
 *     CmpRefreshWorkerRoutine @ 0x140854510 (CmpRefreshWorkerRoutine.c)
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x140865030 (CmpInvalidateAllHigherLayerKcbsPostCallback.c)
 *     CmpCompleteUnloadKey @ 0x1408C009C (CmpCompleteUnloadKey.c)
 *     CmDeleteKey @ 0x1408C1360 (CmDeleteKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1408C2CA0 (CmpTransMgrFreeVolatileData.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A3FFF0 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpCommitDiscardReplacePost @ 0x140A41418 (CmpCommitDiscardReplacePost.c)
 *     CmpInvalidateSubtreeWorker @ 0x140B1EA00 (CmpInvalidateSubtreeWorker.c)
 * Callees:
 *     CmpCleanUpKcbCachedSymlink @ 0x1408C8684 (CmpCleanUpKcbCachedSymlink.c)
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
