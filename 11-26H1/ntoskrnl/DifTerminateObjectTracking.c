/*
 * XREFs of DifTerminateObjectTracking @ 0x14064EFE0
 * Callers:
 *     VfVolatileClearDifRuleClass @ 0x14064B544 (VfVolatileClearDifRuleClass.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x1403C1F60 (RtlEnumerateGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403C2960 (RtlDeleteElementGenericTableAvl.c)
 *     DifFreeChunks @ 0x140650B2C (DifFreeChunks.c)
 *     DifAcquireSpinLockAtDpcLevelSafe @ 0x140650D4C (DifAcquireSpinLockAtDpcLevelSafe.c)
 *     DifReleaseSpinLockFromDpcLevelSafe @ 0x140650E04 (DifReleaseSpinLockFromDpcLevelSafe.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

_UNKNOWN **__fastcall DifTerminateObjectTracking(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  unsigned __int64 *Spare35; // rbx
  __int64 v4; // rdi
  PVOID v5; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  __int16 v7; // [rsp+30h] [rbp+8h] BYREF

  result = &retaddr;
  v7 = 0;
  if ( DifObjTrkInitialized )
  {
    _InterlockedAnd64(&ExpPoolFlags, 0xFFFFFFFFFFFFFFEFuLL);
    DifAcquireSpinLockAtDpcLevelSafe(&v7, a2, &stru_140E27C48.InGlobalUpdateVpThreadPriorityList);
    Spare35 = stru_140E27C48.Spare35;
    v4 = 5LL;
    do
    {
      while ( 1 )
      {
        v5 = RtlEnumerateGenericTableAvl((PRTL_AVL_TABLE)Spare35, 1u);
        if ( !v5 )
          break;
        RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)Spare35, v5);
      }
      Spare35 += 15;
      --v4;
    }
    while ( v4 );
    DifFreeChunks(&DifObjTrkSegContext);
    memset_0(&DifObjTrkSegContext, 0, 0x60uLL);
    DifObjTrkInitialized = 0;
    return (_UNKNOWN **)DifReleaseSpinLockFromDpcLevelSafe(&v7, &stru_140E27C48.InGlobalUpdateVpThreadPriorityList);
  }
  return result;
}
