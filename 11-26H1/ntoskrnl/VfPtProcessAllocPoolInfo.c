/*
 * XREFs of VfPtProcessAllocPoolInfo @ 0x140C2A25C
 * Callers:
 *     ViPtProcessApt @ 0x140C2A7C0 (ViPtProcessApt.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x1403B88C0 (RtlInsertElementGenericTableAvl.c)
 *     ViPtAcquireTreeLockAtDpcLevelSafe @ 0x140641CBC (ViPtAcquireTreeLockAtDpcLevelSafe.c)
 *     ViPtCleanupLockContext @ 0x140641D2C (ViPtCleanupLockContext.c)
 *     ViPtInitializeLockContext @ 0x140641D88 (ViPtInitializeLockContext.c)
 *     ViPtRaiseIrqlSafe @ 0x140641D9C (ViPtRaiseIrqlSafe.c)
 *     ViPtReleaseTreeLockFromDpcLevel @ 0x140641DF4 (ViPtReleaseTreeLockFromDpcLevel.c)
 */

BOOLEAN __fastcall VfPtProcessAllocPoolInfo(_QWORD *a1, __int64 a2)
{
  BOOLEAN result; // al
  __int128 v3; // [rsp+20h] [rbp-30h] BYREF
  _QWORD Buffer[4]; // [rsp+30h] [rbp-20h] BYREF
  BOOLEAN NewElement; // [rsp+60h] [rbp+10h] BYREF

  Buffer[0] = *a1;
  Buffer[1] = a1[1];
  result = ViPoolInfoAvlInitialized;
  NewElement = 0;
  Buffer[2] = a2;
  v3 = 0LL;
  if ( ViPoolInfoAvlInitialized )
  {
    ViPtInitializeLockContext((__int64)&v3);
    ViPtRaiseIrqlSafe((__int64)&v3);
    ViPtAcquireTreeLockAtDpcLevelSafe((__int64)&ViPoolInfoAvl, (__int64)&v3);
    RtlInsertElementGenericTableAvl(&ViPoolInfoAvl, Buffer, 0x18u, &NewElement);
    if ( !NewElement )
      ++ViPoolInfoAllocInsertionFailure;
    ViPtReleaseTreeLockFromDpcLevel((__int64)&ViPoolInfoAvl, (__int64)&v3);
    ViPtCleanupLockContext((__int64)&v3);
    return NewElement;
  }
  return result;
}
