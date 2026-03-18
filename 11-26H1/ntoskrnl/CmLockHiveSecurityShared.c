/*
 * XREFs of CmLockHiveSecurityShared @ 0x140C58B30
 * Callers:
 *     CmDumpKeyToFile @ 0x14084D1E8 (CmDumpKeyToFile.c)
 *     CmSaveMergedKeys @ 0x14084D378 (CmSaveMergedKeys.c)
 *     CmpCreateKeyControlBlock @ 0x1408C4070 (CmpCreateKeyControlBlock.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x1408DF154 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpCreateChild @ 0x1408DF4A0 (CmpCreateChild.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1408E0760 (CmpRebuildKcbCacheFromNode.c)
 *     CmRestoreKey @ 0x140986024 (CmRestoreKey.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x140A2EA50 (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpAssignSecurityToKcb @ 0x140A5B410 (CmpAssignSecurityToKcb.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140AE5B18 (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpDumpKeyToBuffer @ 0x140C5812C (CmpDumpKeyToBuffer.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall CmLockHiveSecurityShared(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  signed __int64 *v4; // rdi
  void *v5; // rdx
  LegacyAutoBoost *v6; // rbx

  v4 = (signed __int64 *)(a1 + 1792);
  v6 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 1792, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v6, (struct _KTHREAD *)v4);
  if ( v6 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v6, v5);
    else
      *((_BYTE *)v6 + 10) = 1;
  }
}
