/*
 * XREFs of HvpFindNextDirtyBlock @ 0x1408BF140
 * Callers:
 *     HvpGenerateLogEntryDirtyData @ 0x140358118 (HvpGenerateLogEntryDirtyData.c)
 *     HvStoreModifiedData @ 0x1408BD840 (HvStoreModifiedData.c)
 *     HvWriteHivePrimaryFile @ 0x140AA80BC (HvWriteHivePrimaryFile.c)
 * Callees:
 *     HvpFindNextDirtyRun @ 0x140457080 (HvpFindNextDirtyRun.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     HvpMapEntryGetFreeBin @ 0x1408BF5C0 (HvpMapEntryGetFreeBin.c)
 *     HvpMapEntryGetBlockAddress @ 0x1408BF840 (HvpMapEntryGetBlockAddress.c)
 *     HvpMapEntryIsNewAlloc @ 0x1408E1C80 (HvpMapEntryIsNewAlloc.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     HvpGetCellMap @ 0x140C5E690 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140C5E6F0 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x140C5E710 (HvpMapEntryReleaseBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140C5EAA0 (HvpGetBinContextInitialize.c)
 */

char __fastcall HvpFindNextDirtyBlock(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _QWORD *a4,
        unsigned int *a5,
        _DWORD *a6,
        char a7)
{
  char *Pool2; // rdi
  unsigned int *v9; // r10
  unsigned int *v10; // r11
  unsigned int v11; // r12d
  unsigned int v12; // ebx
  unsigned int v13; // r14d
  __int64 CellMap; // rcx
  ULONG_PTR v15; // r10
  __int64 FreeBin; // rax
  __int64 v17; // rcx
  __int64 BlockAddress; // rcx
  __int64 v19; // r10
  int v20; // r11d
  char *v21; // rax
  unsigned int v22; // esi
  unsigned int v23; // r8d
  __int64 v24; // rdx
  unsigned int v25; // r13d
  unsigned int v26; // r12d
  unsigned int v28; // ebx
  unsigned int v29; // esi
  ULONG_PTR v30; // r10
  __int64 v31; // rax
  __int64 v32; // rcx
  const void *v33; // rdx
  size_t v34; // r11
  __int64 v35; // rcx
  __int64 BinAddress; // rax
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // r9
  _WORD v40[2]; // [rsp+30h] [rbp-20h] BYREF
  _WORD v41[2]; // [rsp+34h] [rbp-1Ch] BYREF
  unsigned int v42; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v43; // [rsp+3Ch] [rbp-14h] BYREF
  unsigned int v44; // [rsp+40h] [rbp-10h]
  unsigned int v45; // [rsp+44h] [rbp-Ch]

  v43 = 0;
  v41[0] = 0;
  v42 = 0;
  v40[0] = 0;
  HvpGetBinContextInitialize(v41);
  HvpGetBinContextInitialize(v40);
  Pool2 = 0LL;
  if ( !HvpFindNextDirtyRun(v9, v10, &v42, &v43) )
    return 0;
  v11 = v43;
  v12 = v42 << 9;
  v13 = (v43 << 9) - (v42 << 9);
  v45 = v43;
  v44 = v43 << 9;
  if ( a7 && (Pool2 = (char *)ExAllocatePool2(0x100uLL)) == 0LL )
  {
    *a4 = 0LL;
  }
  else
  {
    CellMap = HvpGetCellMap(a1, v12);
    if ( !CellMap )
      KeBugCheckEx(0x51u, 1uLL, v15, v12, 0x12AEuLL);
    FreeBin = HvpMapEntryGetFreeBin(CellMap);
    if ( FreeBin )
    {
      BinAddress = HvpMapEntryGetBinAddress(v17, v17, v40, FreeBin);
      BlockAddress = v12 - *(_DWORD *)(v37 + 20) + BinAddress;
    }
    else
    {
      BlockAddress = HvpMapEntryGetBlockAddress(v17, v17, v40);
    }
    if ( a7 )
      v21 = Pool2;
    else
      v21 = (char *)(BlockAddress + (v12 & 0xFFF));
    *a4 = v21;
    v22 = v12 + 4096;
    v23 = v11 - v20;
    v24 = v20 & 7;
    v43 = v11 - v20;
    v25 = v11 - v20;
    *a6 = v12 + 4096;
    if ( v11 - v20 >= 8 - (int)v24 )
      v25 = 8 - v24;
    v26 = v25 << 9;
    if ( a7 )
    {
      memmove(Pool2, (const void *)(BlockAddress + (unsigned int)((_DWORD)v24 << 9)), v26);
      v19 = a1;
      Pool2 += v26;
      v23 = v43;
    }
    if ( v23 > v25 )
    {
      v28 = v44;
      v29 = v22 & 0xFFFFF000;
      while ( 1 )
      {
        if ( v26 >= v13 )
          goto LABEL_27;
        BlockAddress = HvpGetCellMap(v19, v29);
        if ( !BlockAddress )
          KeBugCheckEx(0x51u, 1uLL, v30, v29, 0x1318uLL);
        if ( !a7 && (unsigned __int8)HvpMapEntryIsNewAlloc(BlockAddress) )
        {
LABEL_27:
          *a5 = v26;
          if ( v25 + v42 != v45 )
          {
            BlockAddress = (__int64)a3;
            *a3 = v25 + v42;
          }
          goto LABEL_14;
        }
        v31 = HvpMapEntryGetFreeBin(BlockAddress);
        if ( v31 )
        {
          v38 = HvpMapEntryGetBinAddress(v32, v32, v41, v31);
          v33 = (const void *)(v29 - *(_DWORD *)(v39 + 20) + v38);
        }
        else
        {
          v33 = (const void *)HvpMapEntryGetBlockAddress(v32, v32, v41);
        }
        v35 = v28 - v29;
        if ( (unsigned int)v35 <= (unsigned int)v34 )
          break;
        if ( a7 )
        {
          memmove(Pool2, v33, v34);
          LODWORD(v34) = 4096;
          Pool2 += 4096;
        }
        v26 += v34;
        v25 += 8;
        v29 += v34;
        HvpMapEntryReleaseBinAddress(v35, v33, v41);
      }
      if ( a7 )
        memmove(Pool2, v33, (unsigned int)v35);
      *a5 = v13;
      HvpMapEntryReleaseBinAddress(v35, v33, v41);
    }
    else
    {
      *a5 = v13;
    }
LABEL_14:
    HvpMapEntryReleaseBinAddress(BlockAddress, v24, v40);
  }
  return 1;
}
