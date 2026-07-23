/*
 * XREFs of CarWriteEarlyRuleViolationEvents @ 0x140650230
 * Callers:
 *     CarInitLogging @ 0x14064CD54 (CarInitLogging.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x1403C1F60 (RtlEnumerateGenericTableAvl.c)
 *     ViPtRaiseIrqlSafe @ 0x14064597C (ViPtRaiseIrqlSafe.c)
 *     CarEtwWriteBugCheckEvent @ 0x14064C808 (CarEtwWriteBugCheckEvent.c)
 *     CarAcquireDbLockAtDpcLevelSafe @ 0x14064FC18 (CarAcquireDbLockAtDpcLevelSafe.c)
 *     CarCleanDbLockContext @ 0x14064FEE4 (CarCleanDbLockContext.c)
 *     CarReleaseDbLockFromDpcLevel @ 0x1406501DC (CarReleaseDbLockFromDpcLevel.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

_UNKNOWN **CarWriteEarlyRuleViolationEvents()
{
  _UNKNOWN **result; // rax
  BOOLEAN i; // dl
  __int64 v2; // rdi
  void *v3; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  if ( CarDb && CarLogInitialized )
  {
    v6 = 0LL;
    BYTE9(v6) = 4;
    ViPtRaiseIrqlSafe((__int64)&v6);
    CarAcquireDbLockAtDpcLevelSafe((__int64)&v6);
    if ( CarDbInitialized )
    {
      for ( i = 1; ; i = 0 )
      {
        v4 = RtlEnumerateGenericTableAvl(CarDb, i);
        v5 = v4;
        if ( !v4 )
          break;
        v2 = v4[3];
        if ( v2 )
        {
          CarEtwWriteBugCheckEvent(
            *(_QWORD *)(v2 + 88),
            (const WCHAR *)(v2 + 2),
            *(_DWORD *)(v2 + 80),
            *(const CHAR **)(v2 + 72),
            *(_BYTE *)v2,
            *(_DWORD *)(v2 + 96));
          v3 = *(void **)(v2 + 72);
          if ( v3 )
            ExFreePoolWithTag(v3, 0);
          ExFreePoolWithTag((PVOID)v2, 0);
          v5[3] = 0LL;
        }
      }
    }
    CarReleaseDbLockFromDpcLevel((__int64)&v6);
    return (_UNKNOWN **)CarCleanDbLockContext((__int64)&v6);
  }
  return result;
}
