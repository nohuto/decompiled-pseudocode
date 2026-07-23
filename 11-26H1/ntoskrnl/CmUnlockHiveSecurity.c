/*
 * XREFs of CmUnlockHiveSecurity @ 0x140C5EBA8
 * Callers:
 *     CmpCreateTombstone @ 0x1406E6C30 (CmpCreateTombstone.c)
 *     CmDumpKeyToFile @ 0x1408534F4 (CmDumpKeyToFile.c)
 *     CmSaveMergedKeys @ 0x140853684 (CmSaveMergedKeys.c)
 *     CmpAssignKeySecurity @ 0x140860E54 (CmpAssignKeySecurity.c)
 *     CmpFreeKeyByCell @ 0x1408C3264 (CmpFreeKeyByCell.c)
 *     CmpSetKeySecurity @ 0x1408C45DC (CmpSetKeySecurity.c)
 *     CmpCreateKeyControlBlock @ 0x1408CA640 (CmpCreateKeyControlBlock.c)
 *     CmpUnlockTwoSecurityCaches @ 0x1408E57C4 (CmpUnlockTwoSecurityCaches.c)
 *     CmpCreateChild @ 0x1408E5A60 (CmpCreateChild.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1408E6D20 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x14094536C (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmRestoreKey @ 0x140947D24 (CmRestoreKey.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x140A408DC (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpAssignSecurityToKcb @ 0x140A683D0 (CmpAssignSecurityToKcb.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140ABAA1C (CmpUndoDeleteKeyForTrans.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140AE38D8 (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpCreateHiveRootCell @ 0x140B4D6CC (CmpCreateHiveRootCell.c)
 *     CmpDumpKeyToBuffer @ 0x140C5E12C (CmpDumpKeyToBuffer.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 */

void __fastcall CmUnlockHiveSecurity(__int64 a1)
{
  volatile signed __int64 *v1; // rbx
  signed __int64 v2; // rax
  signed __int64 v3; // rdx

  v1 = (volatile signed __int64 *)(a1 + 1792);
  _m_prefetchw((const void *)(a1 + 1792));
  v2 = *(_QWORD *)(a1 + 1792);
  v3 = v2 - 16;
  if ( (v2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v3 = 0LL;
  if ( (v2 & 2) != 0 || v2 != _InterlockedCompareExchange64(v1, v3, v2) )
    ExfReleasePushLock(v1);
  KeAbPostRelease((unsigned __int64)v1);
}
