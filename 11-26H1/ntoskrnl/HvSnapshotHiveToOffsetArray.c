/*
 * XREFs of HvSnapshotHiveToOffsetArray @ 0x140C5E46C
 * Callers:
 *     CmDumpKeyToFile @ 0x1408534F4 (CmDumpKeyToFile.c)
 *     CmpFlushBackupHive @ 0x140860750 (CmpFlushBackupHive.c)
 *     CmpDumpKeyToBuffer @ 0x140C5E12C (CmpDumpKeyToBuffer.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     HvpGetCellMap @ 0x140C5E690 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140C5E6F0 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x140C5E710 (HvpMapEntryReleaseBinAddress.c)
 *     HvpHeaderCheckSum @ 0x140C5E720 (HvpHeaderCheckSum.c)
 */

__int64 __fastcall HvSnapshotHiveToOffsetArray(__int64 a1, int a2, __int64 a3)
{
  const void *v3; // r11
  unsigned int v4; // ebx
  unsigned int v5; // edi
  unsigned int v7; // r10d
  __int64 v8; // rsi
  unsigned int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  _DWORD *v13; // rax
  int v14; // r10d
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // r14d
  _DWORD *v18; // rcx
  int v19; // eax
  __int64 v20; // r9
  unsigned int v21; // r15d
  unsigned int v22; // r12d
  unsigned int v23; // edi
  unsigned int *v24; // rdx
  __int64 v25; // r13
  __int64 CellMap; // rax
  __int64 v27; // rcx
  __int64 v28; // r9
  unsigned int *BinAddress; // r9
  size_t v30; // r8
  void *v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int v36; // eax
  int v37; // [rsp+78h] [rbp+10h] BYREF
  __int64 v38; // [rsp+80h] [rbp+18h]
  unsigned int *v39; // [rsp+88h] [rbp+20h]

  v38 = a3;
  v37 = a2;
  v3 = *(const void **)(a1 + 64);
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 280);
  LOWORD(v37) = 0;
  v7 = 0;
  v8 = a3;
  v9 = v5;
  while ( 1 )
  {
    if ( v7 >= v9 )
    {
      v17 = 4096;
      memmove(*(void **)(v8 + 8), v3, 0x1000uLL);
      v18 = *(_DWORD **)(v8 + 8);
      v18[2] = v18[1];
      v18[10] = v5;
      v19 = HvpHeaderCheckSum(v18);
      *(_DWORD *)(v20 + 508) = v19;
      v21 = 0;
      v22 = *(_DWORD *)(v8 + 16);
      v23 = 0;
      v24 = 0LL;
      v39 = 0LL;
      LODWORD(v25) = 0;
      while ( 1 )
      {
        if ( v21 >= *(_DWORD *)(a1 + 280) )
          return v4;
        if ( v17 == v22 )
        {
          v25 = (unsigned int)(v25 + 1);
          v17 = 0;
          v22 = *(_DWORD *)(v8 + 24 * v25 + 16);
        }
        if ( v23 )
          break;
        CellMap = HvpGetCellMap(a1, v21);
        if ( !CellMap )
          return (unsigned int)-1073741275;
        BinAddress = (unsigned int *)HvpMapEntryGetBinAddress(v27, CellMap, &v37, v28);
        v39 = BinAddress;
        v30 = BinAddress[2];
        v23 = v22 - v17 < (unsigned int)v30 ? BinAddress[2] - (v22 - v17) : 0;
        if ( (unsigned int)v30 > v22 - v17 )
          v30 = v22 - v17;
        v31 = (void *)(*(_QWORD *)(v8 + 24LL * (unsigned int)v25 + 8) + v17);
        v32 = (unsigned int)v30;
        memmove(v31, BinAddress, v30);
        if ( !v23 )
          goto LABEL_17;
        v24 = (unsigned int *)((char *)v39 + v32);
        v39 = (unsigned int *)((char *)v39 + v32);
LABEL_19:
        v17 += v32;
        v21 += v32;
        v8 = v38;
      }
      v36 = v23;
      if ( v23 > v22 )
        v36 = v22;
      LODWORD(v32) = v36;
      memmove(*(void **)(v38 + 24LL * (unsigned int)v25 + 8), v24, v36);
      v23 -= v32;
      if ( !v23 )
LABEL_17:
        HvpMapEntryReleaseBinAddress(v34, v33, &v37);
      v24 = v39;
      goto LABEL_19;
    }
    v10 = HvpGetCellMap(a1, v7);
    v13 = (_DWORD *)HvpMapEntryGetBinAddress(v11, v10, &v37, v12);
    if ( *v13 != 1852400232 )
      break;
    if ( v13[1] != v14 )
      break;
    v15 = (unsigned int)v13[2];
    v16 = *(unsigned int *)(a1 + 280);
    if ( (int)v15 + v14 > (unsigned int)v16 || (v15 & 0xFFF) != 0 )
      break;
    HvpMapEntryReleaseBinAddress(v16, v15, &v37);
  }
  return (unsigned int)-1073741492;
}
