/*
 * XREFs of MiCreatePfnBitMaps @ 0x1408800DC
 * Callers:
 *     MmCreatePartition @ 0x14087015C (MmCreatePartition.c)
 *     MiInitializePhysicalMemoryBlocks @ 0x140CF9A64 (MiInitializePhysicalMemoryBlocks.c)
 * Callees:
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MiInitializeDynamicBitmap @ 0x1406F9D64 (MiInitializeDynamicBitmap.c)
 *     MiDeletePfnBitMaps @ 0x1408805C0 (MiDeletePfnBitMaps.c)
 *     MiSplitPfnBitMaps @ 0x14088083C (MiSplitPfnBitMaps.c)
 *     MiWalkPagesOnLists @ 0x140C0B898 (MiWalkPagesOnLists.c)
 */

__int64 __fastcall MiCreatePfnBitMaps(__int64 a1, unsigned int *a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // rsi
  __int64 i; // rbp
  unsigned __int64 v8; // r8
  __int64 *v9; // r12
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r13
  unsigned __int64 *v12; // rdx
  unsigned int v13; // r8d
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rbp
  __int64 v18; // r8
  unsigned __int64 v19; // r9
  __int64 j; // rbp
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // rax
  unsigned __int64 *v25; // r15
  unsigned __int64 v26; // rdi
  __int64 v27; // r8
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // r15
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // rax
  unsigned __int64 *v32; // rbp
  unsigned __int64 v33; // rdi
  unsigned int k; // edi
  __int128 v35; // [rsp+30h] [rbp-38h] BYREF
  __int64 v36; // [rsp+80h] [rbp+18h]
  __int64 v37; // [rsp+80h] [rbp+18h]

  v35 = 0LL;
  v6 = qword_140E2D920 + 1;
  for ( i = 0LL; (unsigned int)i < 3; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 2 )
    {
      if ( (ULONG *)a1 != &MiSystemPartition )
        continue;
      v9 = &qword_140E2D938;
      v8 = 0x40000LL;
    }
    else
    {
      v8 = MiPageSizes[i];
      v9 = (__int64 *)(a1 + 16LL * (unsigned int)i + 16712);
    }
    v36 = v6 / v8 + (v6 % v8 != 0);
    v10 = (((unsigned __int64)(v36 + 7) >> 3) + 4095) >> 12;
    v11 = MiReservePtes((__int64)&stru_140E366D8.WaitBlockList, v10, v8, a4);
    if ( !v11 )
      goto LABEL_14;
    if ( !(unsigned int)MiInitializeDynamicBitmap((__int64)v9, (__int64)(v11 << 25) >> 16, v36, 2) )
    {
      v12 = (unsigned __int64 *)v11;
      goto LABEL_12;
    }
    *v9 = 0LL;
  }
  if ( (ULONG *)a1 == &MiSystemPartition )
  {
    v10 = (2 * ((v6 >> 4) + ((v6 & 0xF) != 0)) + 4095) >> 12;
    v15 = MiReservePtes((__int64)&stru_140E366D8.WaitBlockList, v10, a3, a4);
    if ( !v15 )
      goto LABEL_14;
    if ( !(unsigned int)MiInitializeDynamicBitmap(
                          (__int64)&v35,
                          (__int64)(v15 << 25) >> 16,
                          16 * ((v6 >> 4) + ((v6 & 0xF) != 0)),
                          2) )
    {
LABEL_19:
      v12 = (unsigned __int64 *)v15;
LABEL_12:
      v13 = v10;
LABEL_13:
      MiReleasePtes((__int64)&stru_140E366D8.WaitBlockList, v12, v13);
LABEL_14:
      MiDeletePfnBitMaps(a1);
      return 0LL;
    }
    *(_QWORD *)(a1 + 16760) = (__int64)(v15 << 25) >> 16;
  }
  v10 = (2 * ((v6 >> 9) + ((v6 & 0x1FF) != 0)) + 4095) >> 12;
  v16 = MiReservePtes((__int64)&stru_140E366D8.WaitBlockList, v10, a3, a4);
  v15 = v16;
  if ( !v16 )
    goto LABEL_14;
  v17 = (__int64)(v16 << 25) >> 16;
  if ( !(unsigned int)MiInitializeDynamicBitmap((__int64)&v35, v17, 16 * ((v6 >> 9) + ((v6 & 0x1FF) != 0)), 2) )
    goto LABEL_19;
  *(_QWORD *)(a1 + 16768) = v17;
  for ( j = 0LL; (unsigned int)j < 3; j = (unsigned int)(j + 1) )
  {
    v21 = 1LL << MiLargePageCoalesceCandidateBitmapShifts[j];
    v37 = v6 / v21 + (v6 % v21 != 0);
    v10 = (((unsigned __int64)(v37 + 7) >> 3) + 4095) >> 12;
    v22 = MiReservePtes((__int64)&stru_140E366D8.WaitBlockList, v10, v21, v19);
    v15 = v22;
    if ( !v22 )
      goto LABEL_14;
    if ( !(unsigned int)MiInitializeDynamicBitmap(
                          a1 + 16776 + 16LL * (unsigned int)j,
                          (__int64)(v22 << 25) >> 16,
                          v37,
                          2) )
      goto LABEL_19;
    *(_QWORD *)(a1 + 16LL * (unsigned int)j + 16776) = 0LL;
  }
  v23 = (4 * ((v6 >> 18) + ((v6 & 0x3FFFF) != 0)) + 4095) >> 12;
  v24 = MiReservePtes((__int64)&stru_140E366D8.WaitBlockList, v23, v18, v19);
  v25 = (unsigned __int64 *)v24;
  if ( !v24 )
    goto LABEL_14;
  v26 = (__int64)(v24 << 25) >> 16;
  if ( !(unsigned int)MiInitializeDynamicBitmap((__int64)&v35, v26, 32 * ((v6 >> 18) + ((v6 & 0x3FFFF) != 0)), 2) )
  {
    v13 = v23;
    v12 = v25;
    goto LABEL_13;
  }
  *(_QWORD *)(a1 + 16824) = v26;
  if ( (ULONG *)a1 == &MiSystemPartition )
  {
    v29 = 2 * ((v6 >> 9) + ((v6 & 0x1FF) != 0));
    v30 = (v29 + 4095) >> 12;
    v31 = MiReservePtes((__int64)&stru_140E366D8.WaitBlockList, v30, v27, v28);
    v32 = (unsigned __int64 *)v31;
    if ( !v31 )
      goto LABEL_14;
    v33 = (__int64)(v31 << 25) >> 16;
    if ( !(unsigned int)MiInitializeDynamicBitmap((__int64)&v35, v33, 8 * v29, 2) )
    {
      v13 = v30;
      v12 = v32;
      goto LABEL_13;
    }
    *(_QWORD *)(a1 + 21504) = v33;
  }
  if ( a2 )
  {
    for ( k = 0; k < *a2; ++k )
    {
      if ( !(unsigned int)MiSplitPfnBitMaps(a1, *(_QWORD *)&a2[4 * k + 4], *(_QWORD *)&a2[4 * k + 6]) )
        return 0LL;
    }
  }
  *(_BYTE *)(a1 + 16486) = 1;
  if ( a2 )
    MiWalkPagesOnLists(0, a1, 0, v28, 0);
  *(_BYTE *)(a1 + 16486) = 2;
  return 1LL;
}
