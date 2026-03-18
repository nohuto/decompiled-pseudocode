/*
 * XREFs of ViPtDeleteAvlTrees @ 0x140C2A430
 * Callers:
 *     ViPtPluginUnload @ 0x140C2A740 (ViPtPluginUnload.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x1403B8060 (RtlEnumerateGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403B8A60 (RtlDeleteElementGenericTableAvl.c)
 *     ViPtAcquireTreeLockAtDpcLevelSafe @ 0x140641CBC (ViPtAcquireTreeLockAtDpcLevelSafe.c)
 *     ViPtCleanupLockContext @ 0x140641D2C (ViPtCleanupLockContext.c)
 *     ViPtInitializeLockContext @ 0x140641D88 (ViPtInitializeLockContext.c)
 *     ViPtRaiseIrqlSafe @ 0x140641D9C (ViPtRaiseIrqlSafe.c)
 *     ViPtReleaseTreeLockFromDpcLevel @ 0x140641DF4 (ViPtReleaseTreeLockFromDpcLevel.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

unsigned __int64 ViPtDeleteAvlTrees()
{
  PVOID v0; // rax
  unsigned __int64 result; // rax
  PVOID v2; // rax
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  VfOptionFlags &= ~0x1000u;
  ViAptInitialized = 0;
  v3 = 0LL;
  if ( ViPoolInfoAvlInitialized )
  {
    ViUpdateStackInfo = 0;
    ViPtInitializeLockContext((__int64)&v3);
    ViPtRaiseIrqlSafe((__int64)&v3);
    ViPtAcquireTreeLockAtDpcLevelSafe((__int64)&ViPoolInfoAvl, (__int64)&v3);
    while ( 1 )
    {
      v0 = RtlEnumerateGenericTableAvl(&ViPoolInfoAvl, 1u);
      if ( !v0 )
        break;
      RtlDeleteElementGenericTableAvl(&ViPoolInfoAvl, v0);
    }
    ViPoolInfoAvlInitialized = 0;
    ViPoolInfoAllocInsertionFailure = 0;
    ViPoolInfoAllocDeletionFailure = 0;
    ViPtReleaseTreeLockFromDpcLevel((__int64)&ViPoolInfoAvl, (__int64)&v3);
    ViPtCleanupLockContext((__int64)&v3);
    memset_0(&ViPoolInfoAvl, 0, 0xC0uLL);
  }
  result = (unsigned int)ViPoolStackInfoAvlInitialized;
  if ( ViPoolStackInfoAvlInitialized )
  {
    ViPtInitializeLockContext((__int64)&v3);
    ViPtRaiseIrqlSafe((__int64)&v3);
    ViPtAcquireTreeLockAtDpcLevelSafe((__int64)&ViPoolStackInfoAvl, (__int64)&v3);
    while ( 1 )
    {
      v2 = RtlEnumerateGenericTableAvl(&ViPoolStackInfoAvl, 1u);
      if ( !v2 )
        break;
      RtlDeleteElementGenericTableAvl(&ViPoolStackInfoAvl, v2);
    }
    ViPoolStackInfoAvlInitialized = 0;
    ViPoolStackInfoFailureCount = 0;
    ViPoolStackInfoAllocCount = 0;
    ViPtReleaseTreeLockFromDpcLevel((__int64)&ViPoolStackInfoAvl, (__int64)&v3);
    ViPtCleanupLockContext((__int64)&v3);
    return (unsigned __int64)memset_0(&ViPoolStackInfoAvl, 0, 0xC0uLL);
  }
  return result;
}
