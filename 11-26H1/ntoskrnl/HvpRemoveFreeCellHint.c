/*
 * XREFs of HvpRemoveFreeCellHint @ 0x1408E2F60
 * Callers:
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 *     HvAllocateCell @ 0x1408E1DBC (HvAllocateCell.c)
 *     HvpDoAllocateCell @ 0x1408E20F0 (HvpDoAllocateCell.c)
 *     HvpDelistFreeCell @ 0x1408E3DC8 (HvpDelistFreeCell.c)
 * Callees:
 *     RtlSetBits @ 0x14035AAB0 (RtlSetBits.c)
 *     RtlClearBits @ 0x14035AF40 (RtlClearBits.c)
 *     RtlFindSetBits @ 0x1403F1120 (RtlFindSetBits.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HvpGetCellMap @ 0x140C5E690 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140C5E6F0 (HvpMapEntryGetBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140C5EAA0 (HvpGetBinContextInitialize.c)
 */

void __fastcall HvpRemoveFreeCellHint(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  char v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r10
  __int64 CellMap; // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  ULONG_PTR v13; // r10
  unsigned int v14; // r11d
  unsigned int v15; // eax
  unsigned int *v16; // rdx
  int v17; // r8d
  unsigned int v18; // ecx
  ULONG v19; // r14d
  __int64 v20; // rsi
  __int64 v21; // rdi
  int v22; // ebx
  _RTL_BITMAP *v23; // rcx
  ULONG SetBits; // eax
  int v25; // ecx
  unsigned int v26; // ecx
  __int64 v27; // r10
  int v28; // r11d
  __int64 BinAddress; // r13
  unsigned int v30; // r14d
  __int64 v31; // r12
  _WORD v32[8]; // [rsp+30h] [rbp-38h] BYREF

  v5 = a4;
  v6 = a3;
  v32[0] = 0;
  v7 = 0;
  HvpGetBinContextInitialize(v32);
  CellMap = HvpGetCellMap(v9, v8);
  if ( !CellMap )
    KeBugCheckEx(0x51u, 1uLL, v13, v14, 0x310uLL);
  BinAddress = HvpMapEntryGetBinAddress(v11, CellMap, v32, v12);
  v30 = *(_DWORD *)(BinAddress + 4);
  v16 = (unsigned int *)(BinAddress + 32);
  v31 = *(unsigned int *)(BinAddress + 8);
  v17 = ((_DWORD)v5 << 31) | (v30 + 32);
  while ( (unsigned __int64)v16 < v31 + BinAddress )
  {
    v15 = *v16;
    if ( (*v16 & 0x80000000) == 0 )
    {
      v18 = (v15 >> 3) - 1;
      if ( v18 >= 0x10 )
      {
        v26 = v18 >> 4;
        if ( v26 > 0xFF )
        {
          v18 = 23;
        }
        else
        {
          _BitScanReverse(&v26, v26);
          v18 = v26 + 16;
        }
      }
      if ( (_DWORD)v6 == v18 && v17 != v28 && v17 != a5 )
      {
        v7 = 1;
        break;
      }
    }
    else
    {
      v15 = -v15;
    }
    v16 = (unsigned int *)((char *)v16 + v15);
    v17 += v15;
  }
  v19 = v30 >> 12;
  v20 = v27 + 632 * v5 + 24 * v6;
  v21 = 632 * v5 + v27;
  v22 = 1 << v6;
  v23 = (_RTL_BITMAP *)(v20 + 320);
  if ( v7 )
  {
    *(_DWORD *)(v21 + 904) |= v22;
    *(_DWORD *)(v20 + 316) = v19;
    RtlSetBits(v23, v19, *(_DWORD *)(BinAddress + 8) >> 12);
  }
  else
  {
    RtlClearBits(v23, v19, (unsigned int)v31 >> 12);
    SetBits = RtlFindSetBits((PRTL_BITMAP)(v20 + 320), 1u, v19);
    v25 = *(_DWORD *)(v21 + 904);
    if ( SetBits == -1 )
    {
      *(_DWORD *)(v21 + 904) = v25 & ~v22;
    }
    else
    {
      *(_DWORD *)(v21 + 904) = v25 | v22;
      *(_DWORD *)(v20 + 316) = SetBits;
    }
  }
}
