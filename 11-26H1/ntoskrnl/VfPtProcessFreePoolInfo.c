/*
 * XREFs of VfPtProcessFreePoolInfo @ 0x140C30318
 * Callers:
 *     ViPtProcessApt @ 0x140C307D0 (ViPtProcessApt.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1403C2960 (RtlDeleteElementGenericTableAvl.c)
 *     ViPtAcquireTreeLockAtDpcLevelSafe @ 0x14064589C (ViPtAcquireTreeLockAtDpcLevelSafe.c)
 *     ViPtCleanupLockContext @ 0x14064590C (ViPtCleanupLockContext.c)
 *     ViPtInitializeLockContext @ 0x140645968 (ViPtInitializeLockContext.c)
 *     ViPtRaiseIrqlSafe @ 0x14064597C (ViPtRaiseIrqlSafe.c)
 *     ViPtReleaseTreeLockFromDpcLevel @ 0x1406459D4 (ViPtReleaseTreeLockFromDpcLevel.c)
 */

BOOLEAN __fastcall VfPtProcessFreePoolInfo(_QWORD *a1)
{
  BOOLEAN v1; // bl
  __int128 v3; // [rsp+20h] [rbp-38h] BYREF
  _QWORD Buffer[5]; // [rsp+30h] [rbp-28h] BYREF

  Buffer[0] = *a1;
  Buffer[1] = a1[1];
  Buffer[2] = 0LL;
  v3 = 0LL;
  if ( !ViPoolInfoAvlInitialized || !ViPoolStackInfoAvlInitialized )
    return 0;
  ViPtInitializeLockContext((__int64)&v3);
  ViPtRaiseIrqlSafe((__int64)&v3);
  ViPtAcquireTreeLockAtDpcLevelSafe((__int64)&ViPoolInfoAvl, (__int64)&v3);
  v1 = RtlDeleteElementGenericTableAvl(&ViPoolInfoAvl, Buffer);
  if ( !v1 )
    ++ViPoolInfoAllocDeletionFailure;
  ViPtReleaseTreeLockFromDpcLevel((__int64)&ViPoolInfoAvl, (__int64)&v3);
  ViPtCleanupLockContext((__int64)&v3);
  return v1;
}
