/*
 * XREFs of MiDeleteSectionCluster @ 0x14031A390
 * Callers:
 *     MiInsertPurgedPages @ 0x1402EBF44 (MiInsertPurgedPages.c)
 * Callees:
 *     MiInitializeAllResidentPageBasePfns @ 0x14028DA04 (MiInitializeAllResidentPageBasePfns.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlockBatchPage @ 0x14031A580 (MiUnlockBatchPage.c)
 *     MiClearPfnReuseFields @ 0x14031C280 (MiClearPfnReuseFields.c)
 *     MiSetPfnIdentity @ 0x14036B1E0 (MiSetPfnIdentity.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     MiCreateInitialLargeLeafPfns @ 0x1404645B0 (MiCreateInitialLargeLeafPfns.c)
 *     MiClearPfnImageVerified @ 0x1404691E4 (MiClearPfnImageVerified.c)
 */

__int64 __fastcall MiDeleteSectionCluster(__int64 a1, ULONG_PTR a2)
{
  __int64 v4; // r15
  __int64 v5; // rdi
  int v6; // r12d
  unsigned int v7; // r13d
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  int v12; // r10d
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // r11d
  unsigned __int16 *v17; // [rsp+70h] [rbp+8h]

  v17 = *(unsigned __int16 **)(a1 + 8);
  v4 = 48 * a2 - 0x220000000000LL;
  v5 = v4 + 32;
  v6 = (*(_DWORD *)(v4 + 32) >> 22) & 3;
  v7 = 0;
  do
  {
    if ( ((*(_QWORD *)(v5 + 8) >> 60) & 7) == 3 )
      MiClearPfnImageVerified(v5 - 32, 12LL);
    if ( (*(_QWORD *)(v5 + 8) & 0x20000000000000LL) == 0 )
      *(_DWORD *)v5 &= 0xF8FFFFFF;
    MiSetPfnIdentity(v5 - 32, 0LL);
    MiClearPfnReuseFields(v5 - 32, v8, v9, v10);
    v12 = *(_DWORD *)v5;
    if ( (*(_DWORD *)v5 & 0x80000) != 0
      && (unsigned int)MiCanPfnOriginalPteBeLost(v11)
      && (*(_QWORD *)(v5 - 16) & 8LL) != 0
      && (v12 & 0x100000) == 0 )
    {
      *(_QWORD *)(v5 - 16) &= ~8uLL;
    }
    *(_DWORD *)v5 = v12 & 0xFFEFFFFF;
    ++v7;
    *(_DWORD *)v5 = *(_DWORD *)v5 & 0xFFF8FFFF | 0x10000;
    *(_QWORD *)(v5 - 24) = 0LL;
    *(_QWORD *)(v5 - 8) &= 0xC000000000000000uLL;
    *(_QWORD *)(v5 - 8) &= ~0x4000000000000000uLL;
    *(_QWORD *)(v5 - 16) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    v5 += 48LL;
  }
  while ( v7 < 0x10 );
  MiInitializeAllResidentPageBasePfns(v17, a2, 16LL, 2, v6, 1, 1);
  MiCreateInitialLargeLeafPfns(a2, 16, 2, v6, *v17, 1);
  v13 = v4 + 48;
  do
  {
    MiUnlockBatchPage(a1, v13);
    v13 = v14 + 48;
  }
  while ( (unsigned int)(v15 + 1) < 0x10 );
  MiInsertPageInFreeOrZeroedList(a2);
  return MiUnlockBatchPage(a1, v4);
}
