/*
 * XREFs of HvpEnlistFreeCell @ 0x1408E2D90
 * Callers:
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 *     HvAllocateCell @ 0x1408E1DBC (HvAllocateCell.c)
 *     HvpDoAllocateCell @ 0x1408E20F0 (HvpDoAllocateCell.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1408E23B0 (HvpRemapAndEnlistHiveBins.c)
 *     HvpEnlistFreeCells @ 0x1408E2BC0 (HvpEnlistFreeCells.c)
 * Callees:
 *     RtlSetBits @ 0x14035AAB0 (RtlSetBits.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     HvpGetCellMap @ 0x140C5E690 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140C5E6F0 (HvpMapEntryGetBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140C5EAA0 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall HvpEnlistFreeCell(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3,
        int a4)
{
  __int64 v4; // r12
  ULONG_PTR v6; // rsi
  unsigned int v8; // ebx
  int v9; // r15d
  unsigned int v10; // edi
  __int64 v11; // rax
  _QWORD *v12; // r10
  __int64 CellMap; // rax
  int v14; // ecx
  __int64 result; // rax
  __int64 v16; // rcx
  unsigned int v17; // ebp
  unsigned int v18; // ebp
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 BinAddress; // rax
  ULONG v23; // esi
  __int64 v24; // rbx
  int v25; // [rsp+68h] [rbp+10h] BYREF

  v4 = a4;
  v6 = (unsigned int)BugCheckParameter3;
  v8 = (BugCheckParameter3 & 0xFFFFF000) - *(_DWORD *)HvpGetCellMap(BugCheckParameter2, BugCheckParameter3);
  v9 = *(_DWORD *)(HvpGetCellMap(BugCheckParameter2, v8) + 16);
  v10 = v9 + v8;
  if ( v8
    && v6 == v8 + 32LL
    && (_DWORD)v6 + a3 == v10
    && (v11 = guard_dispatch_icall_no_overrides(24LL, 0LL), (v12 = (_QWORD *)v11) != 0LL) )
  {
    *(_QWORD *)v11 = 0LL;
    *(_QWORD *)(v11 + 8) = 0LL;
    *(_DWORD *)(v11 + 16) = v9;
    for ( *(_DWORD *)(v11 + 20) = v8 & 0x7FFFFFFF; v8 < v10; *(_DWORD *)(CellMap + 20) = v14 )
    {
      CellMap = HvpGetCellMap(BugCheckParameter2, v8);
      v8 += 4096;
      v14 = *(_DWORD *)(CellMap + 20) | 2;
      *(_QWORD *)CellMap = v12;
    }
    result = BugCheckParameter2 + 632 * v4 + 888;
    v16 = *(_QWORD *)result;
    if ( *(_QWORD *)(*(_QWORD *)result + 8LL) != result )
      __fastfail(3u);
    *v12 = v16;
    v12[1] = result;
    *(_QWORD *)(v16 + 8) = v12;
    *(_QWORD *)result = v12;
  }
  else
  {
    v17 = (a3 >> 3) - 1;
    v25 = 0;
    if ( v17 >= 0x10 )
    {
      v18 = v17 >> 4;
      if ( v18 <= 0xFF )
      {
        _BitScanReverse(&v18, v18);
        v17 = v18 + 16;
      }
      else
      {
        v17 = 23;
      }
    }
    LOWORD(v25) = 0;
    HvpGetBinContextInitialize(&v25);
    v19 = HvpGetCellMap(BugCheckParameter2, (unsigned int)v6);
    if ( !v19 )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v6, 0x2B9uLL);
    BinAddress = HvpMapEntryGetBinAddress(v20, v19, &v25, v21);
    v23 = *(_DWORD *)(BinAddress + 4) >> 12;
    v24 = 632 * v4 + 24LL * v17;
    RtlSetBits((PRTL_BITMAP)(v24 + BugCheckParameter2 + 320), v23, *(_DWORD *)(BinAddress + 8) >> 12);
    *(_DWORD *)(v24 + BugCheckParameter2 + 316) = v23;
    result = (unsigned int)(1 << v17);
    *(_DWORD *)(632 * v4 + BugCheckParameter2 + 904) |= result;
  }
  return result;
}
