/*
 * XREFs of MiCreateDynamicPfns @ 0x14086C278
 * Callers:
 *     MiMapNewPfns @ 0x14086CA54 (MiMapNewPfns.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x14028DA04 (MiInitializeAllResidentPageBasePfns.c)
 *     MiRestrictRangeToNode @ 0x1402AC9B0 (MiRestrictRangeToNode.c)
 *     KeGenericCallDpcEx @ 0x1403CC184 (KeGenericCallDpcEx.c)
 *     MiCreatePageChains @ 0x1403CD4B8 (MiCreatePageChains.c)
 *     MiUseThreads @ 0x1403CD544 (MiUseThreads.c)
 *     MiDereferencePageChains @ 0x1403CD5A4 (MiDereferencePageChains.c)
 *     MiAddMemorySubsectionRefs @ 0x1406ECA10 (MiAddMemorySubsectionRefs.c)
 *     MiEstimateTimeToFillPfns @ 0x1406ED4E8 (MiEstimateTimeToFillPfns.c)
 *     MiInitializeDynamicPfnsWorker @ 0x1406EE0B0 (MiInitializeDynamicPfnsWorker.c)
 *     MiUpdatePartitionChildPageCounts @ 0x14070EB10 (MiUpdatePartitionChildPageCounts.c)
 *     MiUpdatePhysicalPages @ 0x14070EC74 (MiUpdatePhysicalPages.c)
 */

void __fastcall MiCreateDynamicPfns(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned int a4,
        __int64 a5)
{
  unsigned int v5; // edi
  ULONG_PTR v7; // rsi
  ULONG_PTR v9; // r14
  unsigned int v10; // ebx
  __int64 PageChains; // rax
  __int64 v12; // rbx
  _BYTE *v13; // rcx
  __int64 v14; // rdx
  _BYTE v15[32]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v16; // [rsp+60h] [rbp-28h]

  memset(v15, 0, sizeof(v15));
  v5 = a4;
  v7 = a2;
  v16 = 0LL;
  if ( (a4 & 0x4000A) == 8 )
    MiUpdatePhysicalPages((__int64)&MiSystemPartition, a2, 1);
  if ( (v5 & 0x1800) != 0 )
    MiInitializeAllResidentPageBasePfns(a3, BugCheckParameter2, v7, (v5 >> 11) & 1, 1, 1, 0);
  if ( (v5 & 2) != 0 )
  {
    if ( !*(_QWORD *)(a5 + 24) )
      MiAddMemorySubsectionRefs(*(__int64 **)a5, v7);
    v5 |= *(_DWORD *)(a5 + 32);
  }
  else if ( a3 != (unsigned __int16 *)&MiSystemPartition )
  {
    MiUpdatePartitionChildPageCounts((ULONG *)a3, &MiSystemPartition, BugCheckParameter2, v7);
  }
  if ( (v5 & 0x20000) == 0 )
    KeGenericCallDpcEx((__int64)MiAddMemoryDpcTarget, 0LL);
  if ( v7 )
  {
    while ( 1 )
    {
      v9 = MiRestrictRangeToNode(BugCheckParameter2, v7);
      v10 = MiPageToNode(BugCheckParameter2);
      if ( 2 * MiEstimateTimeToFillPfns(v10, v9) < 0x3A9B )
        break;
      PageChains = MiCreatePageChains((__int64)a3, v10, 1, 48LL, 3);
      v12 = PageChains;
      if ( !PageChains )
        goto LABEL_18;
      v13 = *(_BYTE **)(PageChains + 496);
LABEL_19:
      *(_QWORD *)v13 = a3;
      *((_QWORD *)v13 + 1) = BugCheckParameter2;
      *((_QWORD *)v13 + 2) = v9;
      *((_DWORD *)v13 + 8) = v5;
      v14 = (v9 >> 10) + 1;
      *((_QWORD *)v13 + 5) = a5;
      if ( (v9 & 0x3FF) == 0 )
        v14 = v9 >> 10;
      *((_QWORD *)v13 + 3) = v14;
      if ( v12 )
      {
        *(_QWORD *)(v12 + 520) = v14;
        *(_QWORD *)(v12 + 56) = ((48 * v9) >> 12) + 1;
        *(_QWORD *)(v12 + 504) = MiInitializeDynamicPfnsWorker;
        MiUseThreads(v12);
        MiDereferencePageChains((volatile signed __int32 *)v12);
      }
      else
      {
        MiInitializeDynamicPfnsWorker((__int64)v13, 0LL, -1LL);
      }
      BugCheckParameter2 += v9;
      v7 -= v9;
      if ( !v7 )
        return;
    }
    v12 = 0LL;
LABEL_18:
    v13 = v15;
    DWORD1(v16) = 0;
    goto LABEL_19;
  }
}
