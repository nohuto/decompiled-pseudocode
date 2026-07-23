/*
 * XREFs of MiCreateUltraThreadContextHelper @ 0x1402D4790
 * Callers:
 *     MiGetUltraMdlContext @ 0x1404DACD8 (MiGetUltraMdlContext.c)
 * Callees:
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiReleaseNonPagedResources @ 0x14028B5D0 (MiReleaseNonPagedResources.c)
 *     MiReleaseFreshPage @ 0x1402916F0 (MiReleaseFreshPage.c)
 *     MiReplenishUltraPageTables @ 0x1402D64DC (MiReplenishUltraPageTables.c)
 *     MiChargePartitionResidentAvailable @ 0x1402D8150 (MiChargePartitionResidentAvailable.c)
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     MiGetSlabPage @ 0x14033C304 (MiGetSlabPage.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 */

__int64 __fastcall MiCreateUltraThreadContextHelper(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  signed __int32 v4; // eax
  unsigned int v5; // r15d
  signed __int32 v8; // ett
  unsigned __int64 v9; // rdi
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int32 CachedResidentAvailable; // eax
  unsigned __int32 v12; // ett
  unsigned int v13; // ebp
  int v14; // edx
  unsigned int v15; // ebx
  int v16; // r14d
  __int64 v17; // rdx
  __int64 SlabPage; // r8
  __int64 v19; // rax
  int v21; // r9d
  _QWORD *v22; // rbx
  __int64 v23; // rax

  v4 = dword_140E34D64;
  v5 = a4;
  do
  {
    if ( v4 == dword_140E34D60 )
      return 0LL;
    v8 = v4;
    v4 = _InterlockedCompareExchange(&dword_140E34D64, v4 + 1, v4);
  }
  while ( v8 != v4 );
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = -1LL;
  *(_QWORD *)(a1 + 16) = -1LL;
  v9 = a2;
  if ( a2 )
  {
    if ( a2 > 2uLL )
      v9 = 2LL;
    if ( (unsigned int)MiChargeCommit(&MiSystemPartition, (unsigned int)v9, 0LL, a4) )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      while ( v9 <= CachedResidentAvailable && CachedResidentAvailable != -1 )
      {
        v12 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                    CachedResidentAvailable - v9,
                                    CachedResidentAvailable);
        if ( v12 == CachedResidentAvailable )
          goto LABEL_12;
      }
      if ( !(unsigned int)MiChargePartitionResidentAvailable(&MiSystemPartition, v9, 0LL) )
      {
        MiReturnCommit(&MiSystemPartition, v9, 0LL);
        goto LABEL_23;
      }
LABEL_12:
      if ( byte_140E2D89A )
        MiReplenishUltraPageTables((*(_DWORD *)(a3 + 8) >> 9) & 0x3F, v5);
      v13 = 0;
      while ( 2 )
      {
        if ( v13 >= v9 )
          goto LABEL_20;
        v14 = *(_DWORD *)(a3 + 8);
        v15 = v14 & 0xFFF7FF00 ^ (unsigned __int8)_InterlockedExchangeAdd(*(volatile signed __int32 **)a3, 1u) | 0x40000;
        if ( (v5 & 8) != 0 )
        {
          v21 = 28;
          v16 = v5 & 4;
          if ( (v5 & 4) == 0 )
            v21 = 12;
          SlabPage = MiGetSlabPage((unsigned int)&MiSystemPartition, 7, v15, v21, 0LL, 0);
          if ( SlabPage == -1 )
            goto LABEL_18;
        }
        else
        {
          v16 = v5 & 4;
LABEL_18:
          SlabPage = MiGetPage((__int64)&MiSystemPartition, v15, (unsigned int)(v16 != 0) + 176);
          if ( SlabPage == -1 )
          {
            _InterlockedDecrement(&dword_140E34D64);
            if ( v13 )
            {
              v22 = (_QWORD *)(a1 + 8 + 8LL * v13);
              do
              {
                v23 = *--v22;
                MiReleaseFreshPage(48 * v23 - 0x220000000000LL, v17, SlabPage);
                *v22 = -1LL;
                --v13;
              }
              while ( v13 );
            }
            MiReleaseNonPagedResources((__int64)&MiSystemPartition, v9);
            return 0LL;
          }
        }
        *(_QWORD *)(48 * SlabPage - 0x21FFFFFFFFF0LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        v19 = v13++;
        *(_QWORD *)(a1 + 8 * v19 + 8) = SlabPage;
        continue;
      }
    }
LABEL_23:
    _InterlockedDecrement(&dword_140E34D64);
    return 0LL;
  }
  else
  {
LABEL_20:
    *(_WORD *)(a1 + 24) = 1;
    return 1LL;
  }
}
