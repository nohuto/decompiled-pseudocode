/*
 * XREFs of HvStoreModifiedData @ 0x1408BD840
 * Callers:
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 * Callees:
 *     RtlMergeBitMaps @ 0x14045F150 (RtlMergeBitMaps.c)
 *     RtlClearAllBits @ 0x140478400 (RtlClearAllBits.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     HvpGenerateLogEntry @ 0x1408BD3E8 (HvpGenerateLogEntry.c)
 *     HvpCountSetRangesInVector @ 0x1408BD754 (HvpCountSetRangesInVector.c)
 *     HvResetDirtyData @ 0x1408BE918 (HvResetDirtyData.c)
 *     HvpTruncateBins @ 0x1408BEFE0 (HvpTruncateBins.c)
 *     HvpFindNextDirtyBlock @ 0x1408BF140 (HvpFindNextDirtyBlock.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HvStoreModifiedData(ULONG_PTR a1, char a2, char a3)
{
  char v3; // zf
  void *v5; // rdi
  PVOID *v6; // rsi
  unsigned int v7; // r13d
  unsigned int *v8; // r12
  PVOID *v9; // r15
  size_t v10; // r14
  void *Pool2; // rax
  int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // ebx
  void *v17; // rax
  _OWORD *v18; // rcx
  _OWORD *v19; // rax
  __int64 v20; // rdx
  __int128 v21; // xmm1
  unsigned int *v22; // rax
  __int64 v23; // r14
  void *v24; // r8
  int v25; // edx
  __int64 v26; // rcx
  int v27; // eax
  PVOID *v28; // rdi
  __int64 v29; // r14
  PVOID *v30; // rdi
  __int64 v31; // rsi
  unsigned int SizeOfBitMap; // [rsp+40h] [rbp-49h] BYREF
  int v33; // [rsp+44h] [rbp-45h] BYREF
  int v34; // [rsp+48h] [rbp-41h] BYREF
  int v35; // [rsp+4Ch] [rbp-3Dh]
  unsigned int v36; // [rsp+50h] [rbp-39h] BYREF
  PVOID v37; // [rsp+58h] [rbp-31h] BYREF
  PVOID P; // [rsp+60h] [rbp-29h]
  _RTL_BITMAP BitMapHeader; // [rsp+68h] [rbp-21h] BYREF
  void *v40; // [rsp+78h] [rbp-11h] BYREF
  __int128 v41; // [rsp+80h] [rbp-9h] BYREF
  size_t Size; // [rsp+90h] [rbp+7h]
  char v43; // [rsp+F0h] [rbp+67h]
  unsigned int v46; // [rsp+108h] [rbp+7Fh]

  v3 = (*(_DWORD *)(a1 + 160) & 0x8000) == 0;
  v40 = 0LL;
  v34 = 0;
  v5 = 0LL;
  v33 = 0;
  v6 = 0LL;
  v37 = 0LL;
  v7 = 0;
  SizeOfBitMap = 0;
  v8 = 0LL;
  v36 = 0;
  v9 = 0LL;
  v43 = 0;
  v46 = 0;
  P = 0LL;
  v41 = 0LL;
  BitMapHeader = 0LL;
  if ( !v3 )
    return 1;
  *(_DWORD *)(a1 + 1732) = (unsigned __int8)HvpTruncateBins(a1);
  if ( (*(_DWORD *)(a1 + 160) & 1) != 0 )
    return 1;
  v10 = *(unsigned int *)(a1 + 108);
  Size = v10;
  if ( *(_DWORD *)(a1 + 104) )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    v5 = Pool2;
    if ( !Pool2 )
      return 2;
    memmove(Pool2, *(const void **)(a1 + 96), (unsigned int)v10);
    v3 = *(_DWORD *)(a1 + 180) == 0;
    v35 = *(_DWORD *)(a1 + 88);
    LODWORD(v41) = v35;
    *((_QWORD *)&v41 + 1) = v5;
    v43 = v3;
    v12 = HvpGenerateLogEntry(a1, v3, (__int64 *)&v37, &SizeOfBitMap, &v36);
    v6 = (PVOID *)v37;
    v7 = SizeOfBitMap;
    if ( v12 < 0 )
    {
      v15 = 2;
      goto LABEL_47;
    }
  }
  else
  {
    v35 = v41;
  }
  if ( !a2 && !a3 )
    goto LABEL_8;
  v17 = (void *)ExAllocatePool2(0x100uLL);
  P = v17;
  if ( !v17 )
  {
LABEL_45:
    v15 = 2;
    goto LABEL_16;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 64) + 40LL) = *(_DWORD *)(a1 + 280);
  v18 = v17;
  v19 = *(_OWORD **)(a1 + 64);
  v20 = 4LL;
  do
  {
    *v18 = *v19;
    v18[1] = v19[1];
    v18[2] = v19[2];
    v18[3] = v19[3];
    v18[4] = v19[4];
    v18[5] = v19[5];
    v18[6] = v19[6];
    v18 += 8;
    v21 = v19[7];
    v19 += 8;
    *(v18 - 1) = v21;
    --v20;
  }
  while ( v20 );
  if ( a3 )
  {
    v22 = (unsigned int *)ExAllocatePool2(0x100uLL);
    v8 = v22;
    if ( v22 )
    {
      memmove(v22, *(const void **)(a1 + 120), v10);
      SizeOfBitMap = *(_DWORD *)(a1 + 112);
      BitMapHeader.SizeOfBitMap = SizeOfBitMap;
      BitMapHeader.Buffer = v8;
      if ( *(_DWORD *)(a1 + 104) )
        RtlMergeBitMaps((__int64)&BitMapHeader, (unsigned int *)&v41);
      v46 = HvpCountSetRangesInVector(&BitMapHeader);
      v9 = (PVOID *)ExAllocatePool2(0x100uLL);
      if ( v9 )
      {
        v23 = 0LL;
        LODWORD(v37) = 0;
        while ( (unsigned int)v23 < v46
             && (unsigned __int8)HvpFindNextDirtyBlock(
                                   a1,
                                   (unsigned int)&BitMapHeader,
                                   (unsigned int)&v37,
                                   (unsigned int)&v40,
                                   (__int64)&v34,
                                   (__int64)&v33,
                                   1) )
        {
          v24 = v40;
          if ( !v40 )
            goto LABEL_45;
          v25 = v33;
          v26 = 3 * v23;
          v27 = v34;
          LODWORD(v9[v26]) = v33;
          v33 = v27 + v25;
          v23 = (unsigned int)(v23 + 1);
          LODWORD(v9[v26 + 2]) = v27;
          v9[v26 + 1] = v24;
        }
        LODWORD(v10) = Size;
        memmove(v8, *(const void **)(a1 + 120), Size);
        goto LABEL_9;
      }
    }
    goto LABEL_45;
  }
LABEL_8:
  SizeOfBitMap = BitMapHeader.SizeOfBitMap;
LABEL_9:
  v13 = *(_DWORD *)(a1 + 280);
  if ( *(_DWORD *)(a1 + 1800) < v13 || *(_DWORD *)(a1 + 1732) )
    *(_DWORD *)(a1 + 1800) = v13;
  if ( *(_DWORD *)(a1 + 104) )
  {
    *(_DWORD *)(a1 + 1688) = v35;
    v14 = v36;
    *(_QWORD *)(a1 + 1696) = v5;
    v5 = 0LL;
    *(_DWORD *)(a1 + 1724) = v14;
    *(_QWORD *)(a1 + 1712) = v6;
    v6 = 0LL;
    *(_BYTE *)(a1 + 1728) = v43;
    *(_DWORD *)(a1 + 1704) = v10;
    *(_DWORD *)(a1 + 1720) = v7;
    HvResetDirtyData(a1);
  }
  if ( a2 || a3 )
  {
    v3 = *(_BYTE *)(a1 + 195) == 0;
    *(_QWORD *)(a1 + 1784) = P;
    P = 0LL;
    if ( !v3 )
      *(_BYTE *)(a1 + 1736) = 1;
    if ( a3 )
    {
      *(_DWORD *)(a1 + 1744) = SizeOfBitMap;
      *(_QWORD *)(a1 + 1752) = v8;
      v8 = 0LL;
      *(_QWORD *)(a1 + 1768) = v9;
      v9 = 0LL;
      *(_DWORD *)(a1 + 1760) = v10;
      *(_DWORD *)(a1 + 1776) = v46;
      if ( *(_QWORD *)(a1 + 120) )
      {
        RtlClearAllBits((PRTL_BITMAP)(a1 + 112));
        *(_BYTE *)(a1 + 195) = 0;
        *(_DWORD *)(a1 + 128) = 0;
      }
    }
  }
  v15 = 0;
LABEL_16:
  if ( v5 )
LABEL_47:
    ExFreePoolWithTag(v5, 0);
  if ( v6 )
  {
    if ( v7 )
    {
      v28 = v6 + 1;
      v29 = v7;
      do
      {
        if ( *v28 )
        {
          ExFreePoolWithTag(*v28, 0);
          *v28 = 0LL;
        }
        v28 += 3;
        --v29;
      }
      while ( v29 );
    }
    ExFreePoolWithTag(v6, 0);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v9 )
  {
    if ( v46 )
    {
      v30 = v9 + 1;
      v31 = v46;
      do
      {
        if ( *v30 )
          ExFreePoolWithTag(*v30, 0);
        v30 += 3;
        --v31;
      }
      while ( v31 );
    }
    ExFreePoolWithTag(v9, 0);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v15;
}
