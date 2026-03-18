/*
 * XREFs of CmListGetNextElement @ 0x140C58A70
 * Callers:
 *     CmUnRegisterCallback @ 0x1408505D0 (CmUnRegisterCallback.c)
 *     CmpRmAnalysisPhase @ 0x14085E2FC (CmpRmAnalysisPhase.c)
 *     CmpRmUnDoPhase @ 0x14085E718 (CmpRmUnDoPhase.c)
 *     CmSnapshotRMTxArray @ 0x1408ACD84 (CmSnapshotRMTxArray.c)
 *     CmpLogCheckpoint @ 0x1408ADB44 (CmpLogCheckpoint.c)
 *     CmpIsCmRm @ 0x1408AE404 (CmpIsCmRm.c)
 *     CmpCommitLightWeightTransaction @ 0x1408AE64C (CmpCommitLightWeightTransaction.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x1408AE814 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x1408AE99C (CmpPrepareLightWeightTransaction.c)
 *     CmpTransMgrRollback @ 0x1408AEDA8 (CmpTransMgrRollback.c)
 *     CmpTransMgrPrepare @ 0x1408AEE6C (CmpTransMgrPrepare.c)
 *     CmGetVisibleSubkeyCount @ 0x1408BCA28 (CmGetVisibleSubkeyCount.c)
 *     CmpQueryKeyDataFromCache @ 0x1408C0940 (CmpQueryKeyDataFromCache.c)
 *     CmpIsKeyDeleted @ 0x1408C1E30 (CmpIsKeyDeleted.c)
 *     CmpQueryKeyDataFromNode @ 0x1408C27F0 (CmpQueryKeyDataFromNode.c)
 *     CmpFindSubKeyByNumberEx @ 0x1408C2ED0 (CmpFindSubKeyByNumberEx.c)
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 *     CmpIsKeyStackDeleted @ 0x1408CECF0 (CmpIsKeyStackDeleted.c)
 *     CmpWalkOneLevel @ 0x1408D5620 (CmpWalkOneLevel.c)
 *     CmpLightWeightUpdateModificationActions @ 0x140A2EDB4 (CmpLightWeightUpdateModificationActions.c)
 *     CmpSearchForTrans @ 0x140ABEAA4 (CmpSearchForTrans.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x140ADE100 (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmpCleanupLightWeightPrepare @ 0x140AEB104 (CmpCleanupLightWeightPrepare.c)
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
