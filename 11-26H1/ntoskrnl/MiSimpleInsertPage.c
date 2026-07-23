/*
 * XREFs of MiSimpleInsertPage @ 0x1403CF00C
 * Callers:
 *     MiInsertFreeZeroPage @ 0x1402BEC30 (MiInsertFreeZeroPage.c)
 *     MiReplenishUltraPageTables @ 0x1402D64DC (MiReplenishUltraPageTables.c)
 *     MiMapUserLargePages @ 0x1402F1DE0 (MiMapUserLargePages.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x1402F278C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiCommitVadFillPageTables @ 0x140312F04 (MiCommitVadFillPageTables.c)
 *     MiProcessPageGroupInfo @ 0x1403CDA40 (MiProcessPageGroupInfo.c)
 *     MiZeroAndReleasePages @ 0x1403CDB20 (MiZeroAndReleasePages.c)
 *     MiFreeMdlPageRun @ 0x1403CE04C (MiFreeMdlPageRun.c)
 *     MiFreeSmallPageFromMdl @ 0x1403CE304 (MiFreeSmallPageFromMdl.c)
 *     MiInsertMdlPageNeedsZero @ 0x1403CE638 (MiInsertMdlPageNeedsZero.c)
 *     MiBeginPageAccessor @ 0x1403CED40 (MiBeginPageAccessor.c)
 *     MiAllocateLargeZeroPages @ 0x1403D0630 (MiAllocateLargeZeroPages.c)
 *     MiGetFastLargePages @ 0x1403D0A5C (MiGetFastLargePages.c)
 *     MiManageUltraSpacePageTable @ 0x14048EB9C (MiManageUltraSpacePageTable.c)
 *     MiTryUnlinkNodeLargePages @ 0x140520D5C (MiTryUnlinkNodeLargePages.c)
 *     MiPfnRangeIsZero @ 0x1406EE840 (MiPfnRangeIsZero.c)
 *     MiInitializeFastLargePagesMdlPfns @ 0x1406F2DD0 (MiInitializeFastLargePagesMdlPfns.c)
 *     MiMakeMdlPfnsDesiredSize @ 0x1406F36C0 (MiMakeMdlPfnsDesiredSize.c)
 *     MiDemotePfnListChain @ 0x1407164C4 (MiDemotePfnListChain.c)
 *     MiEmptyCacheSlice @ 0x14071675C (MiEmptyCacheSlice.c)
 *     MmCreateShadowMapping @ 0x14087BD54 (MmCreateShadowMapping.c)
 * Callees:
 *     MiSetPfnBlink @ 0x1402AA140 (MiSetPfnBlink.c)
 */

unsigned __int64 __fastcall MiSimpleInsertPage(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // r14
  __int64 v6; // rdi
  BOOL v7; // ebp
  unsigned __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r12

  v5 = *(_QWORD *)a1;
  v6 = 48 * a2 - 0x220000000000LL;
  v7 = (a3 & 2) == 0;
  if ( *(_QWORD *)a1 == 0x3FFFFFFFFFLL )
  {
    MiSetPfnBlink(v6, 0x3FFFFFFFFFLL, (a3 & 2) == 0);
    result = 0xFFFFFF3FFFFFFFFFuLL;
    *(_QWORD *)v6 = *(_QWORD *)v6 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
    *(_QWORD *)a1 = a2;
    *(_QWORD *)(a1 + 8) = a2;
  }
  else
  {
    if ( (a3 & 1) != 0 )
    {
      MiSetPfnBlink(v6, 0x3FFFFFFFFFLL, (a3 & 2) == 0);
      MiSetPfnBlink(48 * v5 - 0x220000000000LL, a2, 0);
      *(_QWORD *)a1 = a2;
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 8);
      v10 = 48 * v9;
      v11 = 48 * v9 - 0x220000000000LL;
      v12 = v11;
      if ( (a3 & 8) != 0 && (*(_DWORD *)(v6 + 32) & 0x80000) == 0 && (*(_DWORD *)(v11 + 32) & 0x80000) != 0 )
      {
        do
        {
          v9 = *(_QWORD *)(v11 + 24) & 0xFFFFFFFFFFLL;
          if ( v9 == 0x3FFFFFFFFFLL )
          {
            v11 = v12;
            v9 = v10 / 48;
            goto LABEL_13;
          }
          v11 = 48 * v9 - 0x220000000000LL;
          v13 = v11;
        }
        while ( (*(_DWORD *)(v11 + 32) & 0x80000) != 0 );
        if ( v11 == v12 )
          goto LABEL_13;
        v5 = *(_QWORD *)v11 & 0xFFFFFFFFFFLL;
        MiSetPfnBlink(48 * v5 - 0x220000000000LL, a2, 0);
        v11 = v13;
      }
      else
      {
LABEL_13:
        *(_QWORD *)(a1 + 8) = a2;
        v5 = 0x3FFFFFFFFFLL;
      }
      *(_QWORD *)v11 = a2 ^ (a2 ^ *(_QWORD *)v11) & 0xFFFFFF0000000000uLL;
      MiSetPfnBlink(v6, v9, v7);
    }
    result = v5 ^ (v5 ^ *(_QWORD *)v6) & 0xFFFFFF0000000000uLL;
    *(_QWORD *)v6 = result;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 16));
  return result;
}
