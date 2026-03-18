/*
 * XREFs of ?SmmLockPagedObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x140288370
 * Callers:
 *     ?SysMmLockObject@@YAJPEAUSYSMM_ADAPTER_OBJECT@@I@Z @ 0x140040D64 (-SysMmLockObject@@YAJPEAUSYSMM_ADAPTER_OBJECT@@I@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?SysMmUnmapPhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAX_K@Z @ 0x14003F220 (-SysMmUnmapPhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAX_K@Z.c)
 *     ?SysMmMapPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@D_K1IPEAPEAXPEA_K3@Z @ 0x14004F204 (-SysMmMapPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@D_K1IPEAPEAXPEA_K3@Z.c)
 *     ??$SmmAcquirePushLockExclusive@$0DB@@@YAXPEAU?$SYSMM_PUSHLOCK@$0DB@@@@Z @ 0x140059AC0 (--$SmmAcquirePushLockExclusive@$0DB@@@YAXPEAU-$SYSMM_PUSHLOCK@$0DB@@@@Z.c)
 *     ??$SmmReleasePushLockExclusive@$00@@YAXPEAU?$SYSMM_PUSHLOCK@$00@@@Z @ 0x140059DD8 (--$SmmReleasePushLockExclusive@$00@@YAXPEAU-$SYSMM_PUSHLOCK@$00@@@Z.c)
 *     SmmMapLockedPagesToIommu @ 0x14009D188 (SmmMapLockedPagesToIommu.c)
 *     SmmLockPagesForAdapter @ 0x140288708 (SmmLockPagesForAdapter.c)
 *     SmmUnlockPages @ 0x140288960 (SmmUnlockPages.c)
 */

__int64 __fastcall SmmLockPagedObject(struct SYSMM_PHYSICAL_OBJECT *a1, struct SYSMM_ADAPTER_OBJECT *a2)
{
  __int64 v2; // r12
  struct _MDL *v4; // rbx
  int locked; // r14d
  __int64 v7; // rax
  __int64 v8; // r9
  SIZE_T NumberOfBytes; // [rsp+A0h] [rbp+48h] BYREF
  PMDL Mdl; // [rsp+A8h] [rbp+50h] BYREF
  PVOID BaseAddress; // [rsp+B0h] [rbp+58h] BYREF
  unsigned __int64 v13; // [rsp+B8h] [rbp+60h] BYREF

  v2 = *((_QWORD *)a2 + 2);
  v4 = 0LL;
  Mdl = 0LL;
  locked = 0;
  SmmAcquirePushLockExclusive<49>((__int64)a1 + 32);
  v7 = *((_QWORD *)a1 + 7);
  if ( *((_DWORD *)a1 + 12) )
  {
    if ( !v7 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 429;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pPhysicalObject->PagedData.LockData.Mdl != nullptr",
        429LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    if ( v7 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 378;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pPhysicalObject->PagedData.LockData.Mdl == nullptr",
        378LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v8 = *(_QWORD *)a1;
    BaseAddress = 0LL;
    NumberOfBytes = 0LL;
    v13 = 0LL;
    locked = SysMmMapPhysicalObject(a1, 0LL, 0LL, v8, 0, &BaseAddress, &v13, &NumberOfBytes);
    if ( locked < 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 390;
      goto LABEL_16;
    }
    locked = SmmLockPagesForAdapter(v2, (char *)BaseAddress + v13, NumberOfBytes, &Mdl);
    SysMmUnmapPhysicalObject(a1, BaseAddress, NumberOfBytes);
    if ( locked < 0 )
    {
      WdLogSingleEntry1(3LL);
      v4 = Mdl;
      WdLogGlobalForLineNumber = 404;
      goto LABEL_14;
    }
    v4 = Mdl;
    locked = SmmMapLockedPagesToIommu(v2, (__int64)a1, (__int64)a2, (__int64)Mdl);
    if ( locked < 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 417;
      goto LABEL_14;
    }
    *((_QWORD *)a1 + 7) = v4;
    v4 = 0LL;
  }
  ++*((_DWORD *)a1 + 12);
LABEL_14:
  if ( v4 )
    SmmUnlockPages(v4);
LABEL_16:
  SmmReleasePushLockExclusive<1>((__int64)a1 + 32);
  return (unsigned int)locked;
}
