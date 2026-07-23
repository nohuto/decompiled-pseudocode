/*
 * XREFs of MiDeletePfnBitMaps @ 0x1408805C0
 * Callers:
 *     MiDeletePartitionResources @ 0x14086F208 (MiDeletePartitionResources.c)
 *     MiCreatePfnBitMaps @ 0x1408800DC (MiCreatePfnBitMaps.c)
 * Callees:
 *     MiDeleteSparseRange @ 0x1408807B0 (MiDeleteSparseRange.c)
 */

__int64 __fastcall MiDeletePfnBitMaps(__int64 a1)
{
  __int64 *v1; // r14
  unsigned __int64 v2; // rdi
  unsigned int v3; // esi
  __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  __int64 *v7; // r15
  __int64 *v8; // r14
  _QWORD *v9; // rsi
  __int64 v10; // rsi
  __int64 result; // rax
  __int64 v12; // rcx

  v1 = MiPageSizes;
  v2 = qword_140E2D920 + 1;
  v3 = 0;
  v5 = 3LL;
  do
  {
    if ( v3 >= 2 )
    {
      if ( (ULONG *)a1 != &MiSystemPartition )
        goto LABEL_7;
      v6 = 0x40000LL;
      v7 = &qword_140E2D940;
    }
    else
    {
      v6 = *v1;
      v7 = (__int64 *)(a1 + 16 * (v3 + 1045LL));
    }
    MiDeleteSparseRange(*v7, (unsigned int)((((v2 / v6 + (v2 % v6 != 0) + 7LL) >> 3) + 4095) >> 12));
    *v7 = 0LL;
LABEL_7:
    ++v3;
    ++v1;
  }
  while ( v3 < 3 );
  v8 = MiLargePageCoalesceCandidateBitmapShifts;
  v9 = (_QWORD *)(a1 + 16784);
  do
  {
    MiDeleteSparseRange(*v9, (unsigned int)((((v2 / (1LL << *v8) + (v2 % (1LL << *v8) != 0) + 7LL) >> 3) + 4095) >> 12));
    *v9 = 0LL;
    v9 += 2;
    ++v8;
    --v5;
  }
  while ( v5 );
  MiDeleteSparseRange(*(_QWORD *)(a1 + 16824), (unsigned int)((4 * ((v2 >> 18) + ((v2 & 0x3FFFF) != 0)) + 4095) >> 12));
  *(_QWORD *)(a1 + 16824) = 0LL;
  v10 = (unsigned int)((2 * ((v2 >> 9) + ((v2 & 0x1FF) != 0)) + 4095) >> 12);
  result = MiDeleteSparseRange(*(_QWORD *)(a1 + 16768), v10);
  *(_QWORD *)(a1 + 16768) = 0LL;
  if ( (ULONG *)a1 == &MiSystemPartition )
  {
    MiDeleteSparseRange(*(_QWORD *)(a1 + 16760), (unsigned int)((2 * ((v2 >> 4) + ((v2 & 0xF) != 0)) + 4095) >> 12));
    v12 = *(_QWORD *)(a1 + 21504);
    *(_QWORD *)(a1 + 16760) = 0LL;
    result = MiDeleteSparseRange(v12, (unsigned int)v10);
    *(_QWORD *)(a1 + 21504) = 0LL;
  }
  return result;
}
