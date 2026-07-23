/*
 * XREFs of MiFreeMdlPageRun @ 0x1403CE04C
 * Callers:
 *     MiFreePagesFromMdl @ 0x140347540 (MiFreePagesFromMdl.c)
 *     MiDeleteAweInfoPageRuns @ 0x140705CD0 (MiDeleteAweInfoPageRuns.c)
 *     MiFreePartitionPageRun @ 0x14070D980 (MiFreePartitionPageRun.c)
 *     MiPartitionTransferAllocateLargePages @ 0x140882E30 (MiPartitionTransferAllocateLargePages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiResidentPageDangleFree @ 0x1403CD5CC (MiResidentPageDangleFree.c)
 *     MiFreeSmallPageFromMdl @ 0x1403CE304 (MiFreeSmallPageFromMdl.c)
 *     MiSimpleInsertPage @ 0x1403CF00C (MiSimpleInsertPage.c)
 *     MiFreeLargePageMemory @ 0x1403CF1F4 (MiFreeLargePageMemory.c)
 *     MiUpdateLargePageBitMap @ 0x1403CF324 (MiUpdateLargePageBitMap.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403CF990 (MiConvertSmallPageRangeToLarge.c)
 *     MiIsPfnRangeFromSlabAllocation @ 0x1403D011C (MiIsPfnRangeFromSlabAllocation.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiFreeMdlPageRun(
        ULONG_PTR BugCheckParameter2,
        unsigned __int64 a2,
        unsigned int a3,
        char a4,
        __int64 a5)
{
  ULONG_PTR v6; // rsi
  unsigned int v8; // r12d
  int v9; // r13d
  __int64 v10; // r14
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // r11
  __int64 v15; // rsi
  int PfnPageSizeIndex; // eax
  __int64 v17; // rbp
  __int64 *v18; // r10
  __int64 v19; // r13
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int8 CurrentIrql; // di
  unsigned int v24; // [rsp+30h] [rbp-58h]
  int v25; // [rsp+3Ch] [rbp-4Ch]
  int v26; // [rsp+40h] [rbp-48h] BYREF
  ULONG_PTR v27; // [rsp+48h] [rbp-40h]
  int v29; // [rsp+A8h] [rbp+20h]

  v6 = -1LL;
  v27 = -1LL;
  v25 = a3 & 1;
  v8 = 12;
  if ( KeGetCurrentIrql() != 2 )
    v8 = 4;
  v24 = v8;
  if ( (a4 & 1) != 0 )
  {
    v8 |= 0x10u;
    v24 = v8;
  }
  v9 = a4 & 4;
  v29 = v9;
  v10 = 0LL;
  while ( a2 )
  {
    if ( (BugCheckParameter2 & 0xF) != 0 )
      goto LABEL_8;
    v15 = 48 * BugCheckParameter2 - 0x220000000000LL;
    PfnPageSizeIndex = MiGetPfnPageSizeIndex(v15);
    if ( PfnPageSizeIndex == 3 )
    {
      v17 = (KeFeatureBits & 0x2000000000LL) == 0;
      v18 = &MiPageSizes[v17];
      do
      {
        v19 = *v18;
        if ( a2 >= *v18
          && ((v19 - 1) & BugCheckParameter2) == 0
          && !(unsigned int)MiIsPfnRangeFromSlabAllocation(BugCheckParameter2, *v18)
          && (unsigned int)MiResidentPageDangleFree(BugCheckParameter2, v17) )
        {
          break;
        }
        v17 = (unsigned int)(v17 + 1);
        ++v18;
      }
      while ( (unsigned int)v17 < 3 );
      v8 = v24;
      if ( (unsigned int)v17 < 3 )
      {
        if ( v25 && a5 )
        {
          MiConvertSmallPageRangeToLarge(BugCheckParameter2, (unsigned int)v17);
          if ( (v24 & 8) != 0 )
          {
            CurrentIrql = 17;
            v26 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v26);
              while ( *(__int64 *)(v15 + 24) < 0 );
            }
          }
          else
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql != 2 )
              __writecr8(2uLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v21) = 2;
              LOBYTE(v22) = CurrentIrql;
              KiRaiseIrqlProcessIrqlFlags(v22, v21);
            }
            v26 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v26);
              while ( *(__int64 *)(v15 + 24) < 0 );
            }
          }
          *(_DWORD *)(v15 + 32) = *(_DWORD *)(v15 + 32) & 0xFFF8FFFF | 0x50000;
          MiSimpleInsertPage(a5 + 24 * v17, BugCheckParameter2, 0LL);
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( CurrentIrql < 2u )
          {
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
            __writecr8(CurrentIrql);
          }
        }
        else
        {
          v10 += MiFreeLargePageMemory(BugCheckParameter2);
        }
        BugCheckParameter2 += v19;
        a2 -= v19;
        v9 = v29;
        goto LABEL_26;
      }
      v9 = v29;
      v6 = v27;
LABEL_8:
      if ( v6 != (BugCheckParameter2 & 0xFFFFFFFFFFFFFE00uLL) )
      {
        v6 = BugCheckParameter2 & 0xFFFFFFFFFFFFFE00uLL;
        v27 = BugCheckParameter2 & 0xFFFFFFFFFFFFFE00uLL;
        if ( (unsigned int)MiGetPfnSlabType(48 * BugCheckParameter2 - 0x220000000000LL) == 9 )
          MiUpdateLargePageBitMap(v14, v13, 512LL, v12);
      }
      v10 += MiFreeSmallPageFromMdl(BugCheckParameter2++, a3, v8);
      --a2;
    }
    else
    {
      v20 = MiPageSizes[PfnPageSizeIndex];
      if ( !v9 )
        KeBugCheckEx(0x1Au, 0x1249uLL, BugCheckParameter2, MiPageSizes[PfnPageSizeIndex], 0LL);
      v10 += MiFreeLargePageMemory(BugCheckParameter2);
      BugCheckParameter2 += v20;
      a2 -= v20;
LABEL_26:
      v6 = v27;
    }
  }
  return v10;
}
