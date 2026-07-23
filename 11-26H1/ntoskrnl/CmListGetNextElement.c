/*
 * XREFs of CmListGetNextElement @ 0x140C5EA70
 * Callers:
 *     CmUnRegisterCallback @ 0x1408568E0 (CmUnRegisterCallback.c)
 *     CmpRmAnalysisPhase @ 0x1408645EC (CmpRmAnalysisPhase.c)
 *     CmpRmUnDoPhase @ 0x140864A08 (CmpRmUnDoPhase.c)
 *     CmSnapshotRMTxArray @ 0x1408B31C4 (CmSnapshotRMTxArray.c)
 *     CmpLogCheckpoint @ 0x1408B3F84 (CmpLogCheckpoint.c)
 *     CmpIsCmRm @ 0x1408B4844 (CmpIsCmRm.c)
 *     CmpCommitLightWeightTransaction @ 0x1408B4A8C (CmpCommitLightWeightTransaction.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x1408B4C54 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x1408B4DDC (CmpPrepareLightWeightTransaction.c)
 *     CmpTransMgrRollback @ 0x1408B51E8 (CmpTransMgrRollback.c)
 *     CmpTransMgrPrepare @ 0x1408B52AC (CmpTransMgrPrepare.c)
 *     CmGetVisibleSubkeyCount @ 0x1408C2FF8 (CmGetVisibleSubkeyCount.c)
 *     CmpQueryKeyDataFromCache @ 0x1408C6F10 (CmpQueryKeyDataFromCache.c)
 *     CmpIsKeyDeleted @ 0x1408C8400 (CmpIsKeyDeleted.c)
 *     CmpQueryKeyDataFromNode @ 0x1408C8DC0 (CmpQueryKeyDataFromNode.c)
 *     CmpFindSubKeyByNumberEx @ 0x1408C94A0 (CmpFindSubKeyByNumberEx.c)
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 *     CmpIsKeyStackDeleted @ 0x1408D52A0 (CmpIsKeyStackDeleted.c)
 *     CmpWalkOneLevel @ 0x1408DBBE0 (CmpWalkOneLevel.c)
 *     CmpLightWeightUpdateModificationActions @ 0x140A40C40 (CmpLightWeightUpdateModificationActions.c)
 *     CmpSearchForTrans @ 0x140AC0B44 (CmpSearchForTrans.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x140ADAE70 (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmpCleanupLightWeightPrepare @ 0x140AEDED4 (CmpCleanupLightWeightPrepare.c)
 * Callees:
 *     <none>
 */

char *__fastcall CmListGetNextElement(_QWORD **a1, _QWORD **a2, int a3)
{
  _QWORD *v3; // rax

  v3 = *a2;
  if ( !*a2 )
  {
    v3 = *a1;
    *a2 = *a1;
  }
  if ( a1 == v3 )
    return 0LL;
  *a2 = (_QWORD *)*v3;
  return (char *)v3 - a3;
}
