/*
 * XREFs of MiTransferPartitionPageRun @ 0x14070E734
 * Callers:
 *     MiActOnPartitionNodePages @ 0x14070C91C (MiActOnPartitionNodePages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14028BE54 (MiUnlinkFreeOrZeroedPage.c)
 *     MiIsPageOnBadList @ 0x14028EF30 (MiIsPageOnBadList.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInvalidPteConforms @ 0x1402D64B0 (MiInvalidPteConforms.c)
 *     MiInsertPossiblyBadPage @ 0x1403D04D4 (MiInsertPossiblyBadPage.c)
 *     MiDrainZeroLookasides @ 0x140457D20 (MiDrainZeroLookasides.c)
 *     MiUnlockPartitionPair @ 0x140527DD4 (MiUnlockPartitionPair.c)
 *     MiLockPartitionPair @ 0x140530870 (MiLockPartitionPair.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiMoveBadPagePartition @ 0x14070E088 (MiMoveBadPagePartition.c)
 *     MiUpdatePartitionChildPageCounts @ 0x14070EB10 (MiUpdatePartitionChildPageCounts.c)
 *     MiUpdatePhysicalPages @ 0x14070EC74 (MiUpdatePhysicalPages.c)
 *     MiMoveBadPageChargesCrossPartition @ 0x140711E2C (MiMoveBadPageChargesCrossPartition.c)
 */

__int64 __fastcall MiTransferPartitionPageRun(unsigned __int64 a1, ULONG *a2, ULONG_PTR a3, __int64 a4)
{
  __int16 v4; // r12
  ULONG_PTR v5; // r14
  __int64 v6; // r13
  int v7; // ebx
  ULONG_PTR v8; // rdi
  KIRQL v11; // bp
  unsigned __int64 v12; // rbx
  unsigned int v13; // r8d
  char v14; // cl
  int v15; // rcx^4
  __int64 PfnPageSizeIndex; // rbp
  __int64 v17; // r12
  int v18; // r14d
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // r14
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-78h]
  __int64 v23; // [rsp+28h] [rbp-70h]
  __int64 v24; // [rsp+30h] [rbp-68h] BYREF
  __int64 v25; // [rsp+38h] [rbp-60h]
  __int64 v26; // [rsp+40h] [rbp-58h]
  ULONG_PTR v27; // [rsp+48h] [rbp-50h]
  __int64 v28; // [rsp+50h] [rbp-48h]
  __int64 v29; // [rsp+58h] [rbp-40h]
  __int64 v30; // [rsp+60h] [rbp-38h]
  __int64 v31; // [rsp+68h] [rbp-30h]
  __int64 v32; // [rsp+70h] [rbp-28h]
  __int64 v33; // [rsp+78h] [rbp-20h]
  KIRQL v34; // [rsp+A0h] [rbp+8h]
  unsigned __int16 v35; // [rsp+A8h] [rbp+10h]
  __int16 v36; // [rsp+B0h] [rbp+18h]
  int v37; // [rsp+B8h] [rbp+20h]

  v4 = *(_WORD *)a1;
  v5 = a3 + a4;
  v6 = 0LL;
  v7 = 0;
  v36 = *(_WORD *)a1;
  v35 = *(_WORD *)a2;
  v8 = a3;
  v27 = a3 + a4;
  v25 = 0LL;
  v11 = MiLockPartitionPair(a1, (unsigned __int64)a2);
  v34 = v11;
  while ( v8 != v5 )
  {
    v37 = ++v7;
    if ( (v7 & 0xF) == 0 && (*(_DWORD *)(a1 + 272) & 0x40000000) != 0 || KeShouldYieldProcessor() )
    {
      MiUnlockPartitionPair(a1, (__int64)a2, v11);
      --v8;
      MiLockPartitionPair(a1, (unsigned __int64)a2);
      goto LABEL_43;
    }
    v12 = 48 * v8 - 0x220000000000LL;
    LODWORD(v24) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v24);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    if ( ((*(_QWORD *)(v12 + 40) >> 43) & 0x3FF) == v4 )
    {
      v13 = *(_BYTE *)(v12 + 34) & 7;
      if ( v13 == 5 )
      {
        if ( !MiIsPageOnBadList(48 * v8 - 0x220000000000LL) )
        {
          if ( !MiInvalidPteConforms(*(_QWORD *)(v12 + 16)) )
            goto LABEL_44;
          if ( qword_140E2D8C0 && (v14 & 0x10) == 0 )
            v15 &= HIDWORD(qword_140E2D8C8);
          if ( v15 != -2 )
          {
LABEL_44:
            _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            KeBugCheckEx(0x1Au, 0x41000uLL, v8, v13, 0LL);
          }
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiDrainZeroLookasides(a1, 0LL, 0LL, 0);
          --v8;
          goto LABEL_42;
        }
        MiMoveBadPagePartition(a1, a2, 48 * v8 - 0x220000000000LL);
        ++v6;
      }
      else
      {
        if ( v13 > 1 )
          goto LABEL_44;
        PfnPageSizeIndex = (unsigned int)MiGetPfnPageSizeIndex(48 * v8 - 0x220000000000LL);
        v17 = MiPageSizes[PfnPageSizeIndex];
        v26 = v17;
        MiUnlinkFreeOrZeroedPage(v8, 0LL, 0);
        if ( a2 != &MiSystemPartition )
          MiUpdatePhysicalPages(a2, v17, 0LL);
        MiUpdatePhysicalPages(a1, -v17, 0LL);
        v18 = ((*(_QWORD *)(v12 + 16) & 0x3E0LL) != 0) + 1;
        HIDWORD(v24) = v18;
        if ( (_DWORD)PfnPageSizeIndex == 3 )
        {
          if ( (*(_DWORD *)(v12 + 32) & 0x40000000) != 0 )
            MiMoveBadPageChargesCrossPartition(48 * v8 - 0x220000000000LL, a1, a2);
          *(_QWORD *)(v12 + 40) = ((unsigned __int64)v35 << 43) ^ (*(_QWORD *)(v12 + 40) ^ ((unsigned __int64)v35 << 43)) & 0xFFE007FFFFFFFFFFuLL;
          MiInsertPageInFreeOrZeroedList(v8);
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v19 = v12 + 48 * v17 - 48;
          if ( v19 >= v12 )
          {
            v20 = v19 + 24;
            do
            {
              LODWORD(v24) = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)v20, 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v24);
                while ( *(__int64 *)v20 < 0 );
              }
              if ( (*(_DWORD *)(v20 + 8) & 0x40000000) != 0 )
                MiMoveBadPageChargesCrossPartition(v19, a1, a2);
              *(_QWORD *)(v20 + 16) = ((unsigned __int64)v35 << 43) ^ (*(_QWORD *)(v20 + 16) ^ ((unsigned __int64)v35 << 43)) & 0xFFE007FFFFFFFFFFuLL;
              _InterlockedAnd64((volatile signed __int64 *)v20, 0x7FFFFFFFFFFFFFFFuLL);
              v19 -= 48LL;
              v20 -= 48LL;
            }
            while ( v19 >= v12 );
            v17 = v26;
            v18 = HIDWORD(v24);
            v6 = v25;
          }
          MiInsertPossiblyBadPage(v8, v18);
        }
        MiUpdatePartitionChildPageCounts(
          a2,
          a1,
          v8,
          v17,
          BugCheckParameter4,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
        v11 = v34;
        v5 = v27;
        v8 = v17 + v8 - 1;
        v6 += v17;
        v4 = v36;
      }
      v25 = v6;
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
LABEL_42:
    v7 = v37;
LABEL_43:
    ++v8;
  }
  MiUnlockPartitionPair(a1, (__int64)a2, v11);
  return v6;
}
