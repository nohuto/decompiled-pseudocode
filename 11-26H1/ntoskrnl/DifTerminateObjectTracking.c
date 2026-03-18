/*
 * XREFs of DifTerminateObjectTracking @ 0x14064B400
 * Callers:
 *     VfVolatileClearDifRuleClass @ 0x140647964 (VfVolatileClearDifRuleClass.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x1403B8060 (RtlEnumerateGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403B8A60 (RtlDeleteElementGenericTableAvl.c)
 *     DifFreeChunks @ 0x14064CF4C (DifFreeChunks.c)
 *     DifAcquireSpinLockAtDpcLevelSafe @ 0x14064D16C (DifAcquireSpinLockAtDpcLevelSafe.c)
 *     DifReleaseSpinLockFromDpcLevelSafe @ 0x14064D224 (DifReleaseSpinLockFromDpcLevelSafe.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

_UNKNOWN **__fastcall DifTerminateObjectTracking(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  $AA7B8230874764A53E1F7A8CE5E032EC *v3; // rbx
  __int64 v4; // rdi
  PVOID v5; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  __int16 v7; // [rsp+30h] [rbp+8h] BYREF

  result = &retaddr;
  v7 = 0;
  if ( DifObjTrkInitialized )
  {
    _InterlockedAnd64(&ExpPoolFlags, 0xFFFFFFFFFFFFFFEFuLL);
    DifAcquireSpinLockAtDpcLevelSafe(&v7, a2, stru_140E27B08.Spare35);
    v3 = &stru_140E27B08.1144;
    v4 = 5LL;
    do
    {
      while ( 1 )
      {
        v5 = RtlEnumerateGenericTableAvl((PRTL_AVL_TABLE)v3, 1u);
        if ( !v5 )
          break;
        RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)v3, v5);
      }
      v3 += 15;
      --v4;
    }
    while ( v4 );
    DifFreeChunks(&stru_140E27B08.ReservedPreviousReadyTimeValue);
    memset_0(&stru_140E27B08.ReservedPreviousReadyTimeValue, 0, 0x60uLL);
    DifObjTrkInitialized = 0;
    return (_UNKNOWN **)DifReleaseSpinLockFromDpcLevelSafe(&v7, stru_140E27B08.Spare35);
  }
  return result;
}
