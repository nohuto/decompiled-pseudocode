/*
 * XREFs of MiUpdateImagePfnImportRelocations @ 0x140480C40
 * Callers:
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140514568 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiWalkImageApplyImportOptimizationToPage @ 0x140B19190 (MiWalkImageApplyImportOptimizationToPage.c)
 * Callees:
 *     MiReleasePtes @ 0x140281CE0 (MiReleasePtes.c)
 *     MiFlushSingleTbEntry @ 0x140285050 (MiFlushSingleTbEntry.c)
 *     MiMakeValidPte @ 0x1402DA020 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x14033C7D0 (MiMakeProtectionPfnCompatible.c)
 *     MiReservePtes @ 0x14035DE50 (MiReservePtes.c)
 *     MiDoesPageRequireImportLinkingFixups @ 0x140480DF4 (MiDoesPageRequireImportLinkingFixups.c)
 *     MiUpdateRetpolineImportFixups @ 0x140480E40 (MiUpdateRetpolineImportFixups.c)
 *     MI_LOCK_RELOCATIONS_SHARED @ 0x140481564 (MI_LOCK_RELOCATIONS_SHARED.c)
 *     MI_UNLOCK_RELOCATIONS_SHARED @ 0x1404815D4 (MI_UNLOCK_RELOCATIONS_SHARED.c)
 */

__int64 __fastcall MiUpdateImagePfnImportRelocations(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v5; // rcx
  __int64 v8; // r14
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rdi
  int ProtectionPfnCompatible; // eax
  struct _KTHREAD *CurrentThread; // rbp

  v5 = *(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF8uLL;
  v8 = *(_QWORD *)(v5 + 32);
  if ( !(unsigned int)MiDoesPageRequireImportLinkingFixups(v5, a3) )
    return 1LL;
  if ( a2 && (a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    v12 = 0LL;
    v11 = 0LL;
  }
  else
  {
    v11 = a2;
    v12 = MiReservePtes((__int64)&stru_140E36558.WaitBlockList, 1u, v9, v10);
    if ( !v12 )
    {
      if ( !a2 )
        return 3221225626LL;
      v12 = a2;
    }
    a2 = (__int64)(v12 << 25) >> 16;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48 * a4 - 0x220000000000LL);
    *(_QWORD *)v12 = MiMakeValidPte(v12, a4, ProtectionPfnCompatible | 0xA0000000);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(v8 + 8) == CurrentThread )
    CurrentThread = 0LL;
  else
    MI_LOCK_RELOCATIONS_SHARED(CurrentThread, v8);
  MiUpdateRetpolineImportFixups(a2, *(_QWORD *)(v8 + 88), a3);
  if ( CurrentThread )
    MI_UNLOCK_RELOCATIONS_SHARED(CurrentThread, v8);
  if ( v12 )
  {
    if ( v12 == v11 )
    {
      *(_QWORD *)v12 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      MiFlushSingleTbEntry(a2, 2LL);
    }
    else
    {
      MiReleasePtes((__int64)&stru_140E36558.WaitBlockList, (unsigned __int64 *)v12, 1u);
    }
  }
  return 0LL;
}
