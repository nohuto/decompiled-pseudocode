/*
 * XREFs of ViPtDeleteAvlTrees @ 0x140B7C760
 * Callers:
 *     ViPtPluginUnload @ 0x140B7CA70 (ViPtPluginUnload.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x1403E0EB0 (RtlEnumerateGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403EAAD0 (RtlDeleteElementGenericTableAvl.c)
 *     ViPtAcquireTreeLockAtDpcLevelSafe @ 0x1406058BC (ViPtAcquireTreeLockAtDpcLevelSafe.c)
 *     ViPtCleanupLockContext @ 0x14060592C (ViPtCleanupLockContext.c)
 *     ViPtInitializeLockContext @ 0x140605988 (ViPtInitializeLockContext.c)
 *     ViPtRaiseIrqlSafe @ 0x14060599C (ViPtRaiseIrqlSafe.c)
 *     ViPtReleaseTreeLockFromDpcLevel @ 0x1406059F0 (ViPtReleaseTreeLockFromDpcLevel.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
    ViPoolStackInfoAllocCount = 0;
    ViPoolStackInfoAvlInitialized = 0;
    ViPoolStackInfoFailureCount = 0;
    ViPtReleaseTreeLockFromDpcLevel((__int64)&ViPoolStackInfoAvl, (__int64)&v3);
    ViPtCleanupLockContext((__int64)&v3);
    return (unsigned __int64)memset_0(&ViPoolStackInfoAvl, 0, 0xC0uLL);
  }
  return result;
}
