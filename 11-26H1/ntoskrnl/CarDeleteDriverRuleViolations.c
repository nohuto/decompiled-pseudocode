/*
 * XREFs of CarDeleteDriverRuleViolations @ 0x14064FF90
 * Callers:
 *     VfTargetDriversRemove @ 0x1403C1B48 (VfTargetDriversRemove.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x1403C1F60 (RtlEnumerateGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403C2960 (RtlDeleteElementGenericTableAvl.c)
 *     ViPtRaiseIrqlSafe @ 0x14064597C (ViPtRaiseIrqlSafe.c)
 *     CarAcquireDbLockAtDpcLevelSafe @ 0x14064FC18 (CarAcquireDbLockAtDpcLevelSafe.c)
 *     CarCleanDbLockContext @ 0x14064FEE4 (CarCleanDbLockContext.c)
 *     CarReleaseDbLockFromDpcLevel @ 0x1406501DC (CarReleaseDbLockFromDpcLevel.c)
 */

_UNKNOWN **__fastcall CarDeleteDriverRuleViolations(unsigned __int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  BOOLEAN i; // dl
  unsigned __int64 v6; // rcx
  _RTL_AVL_TABLE *v7; // rbx
  _QWORD *v8; // rax
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  if ( CarDb )
  {
    v9 = 0LL;
    BYTE9(v9) = 4;
    ViPtRaiseIrqlSafe((__int64)&v9);
    CarAcquireDbLockAtDpcLevelSafe((__int64)&v9);
    if ( CarDbInitialized )
    {
      for ( i = 1; ; i = 0 )
      {
        v7 = CarDb;
        v8 = RtlEnumerateGenericTableAvl(CarDb, i);
        if ( !v8 )
          break;
        v6 = v8[1];
        if ( v6 >= a1 && v6 < a1 + a2 )
          RtlDeleteElementGenericTableAvl(v7, v8);
      }
    }
    CarReleaseDbLockFromDpcLevel(&v9);
    return (_UNKNOWN **)CarCleanDbLockContext((__int64)&v9);
  }
  return result;
}
