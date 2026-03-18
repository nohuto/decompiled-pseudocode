/*
 * XREFs of ?SmmUnlockPagedObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x140288810
 * Callers:
 *     ?SysMmUnlockObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x140053380 (-SysMmUnlockObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??$SmmAcquirePushLockExclusive@$0DB@@@YAXPEAU?$SYSMM_PUSHLOCK@$0DB@@@@Z @ 0x140059AC0 (--$SmmAcquirePushLockExclusive@$0DB@@@YAXPEAU-$SYSMM_PUSHLOCK@$0DB@@@@Z.c)
 *     ??$SmmReleasePushLockExclusive@$00@@YAXPEAU?$SYSMM_PUSHLOCK@$00@@@Z @ 0x140059DD8 (--$SmmReleasePushLockExclusive@$00@@YAXPEAU-$SYSMM_PUSHLOCK@$00@@@Z.c)
 *     SmmUnmapLockedPagesFromIommu @ 0x14009D240 (SmmUnmapLockedPagesFromIommu.c)
 *     SmmUnlockPages @ 0x140288960 (SmmUnlockPages.c)
 */

void __fastcall SmmUnlockPagedObject(struct SYSMM_PHYSICAL_OBJECT *a1, struct SYSMM_ADAPTER_OBJECT *a2)
{
  __int64 v2; // rbp

  v2 = *((_QWORD *)a2 + 2);
  SmmAcquirePushLockExclusive<49>((__int64)a1 + 32);
  if ( !*((_DWORD *)a1 + 12) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 480;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pPhysicalObject->PagedData.LockData.LockCount > 0",
      480LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_QWORD *)a1 + 7) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 481;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pPhysicalObject->PagedData.LockData.Mdl != nullptr",
      481LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (*((_DWORD *)a1 + 12))-- == 1 )
  {
    if ( *((_DWORD *)a2 + 8) )
    {
      WdLogSingleEntry5(0LL, 484LL, 5LL, a2, v2, *((_QWORD *)a1 + 7));
      WdLogGlobalForLineNumber = 495;
    }
    SmmUnmapLockedPagesFromIommu(v2, (__int64)a1, (__int64)a2, *((_QWORD *)a1 + 7));
    SmmUnlockPages(*((PMDL *)a1 + 7));
    *((_QWORD *)a1 + 7) = 0LL;
  }
  SmmReleasePushLockExclusive<1>((__int64)a1 + 32);
}
