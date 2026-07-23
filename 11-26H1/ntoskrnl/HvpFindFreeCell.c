/*
 * XREFs of HvpFindFreeCell @ 0x1408E1930
 * Callers:
 *     HvAllocateCell @ 0x1408E1DBC (HvAllocateCell.c)
 *     HvpDoAllocateCell @ 0x1408E20F0 (HvpDoAllocateCell.c)
 * Callees:
 *     RtlFindSetBits @ 0x1403F1120 (RtlFindSetBits.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpMapEntryIsDiscardable @ 0x1408DF910 (HvpMapEntryIsDiscardable.c)
 *     HvpMarkDirty @ 0x1408E1510 (HvpMarkDirty.c)
 *     HvpMapEntryIsTrimmed @ 0x1408E1C70 (HvpMapEntryIsTrimmed.c)
 *     HvpMapEntryIsNewAlloc @ 0x1408E1C80 (HvpMapEntryIsNewAlloc.c)
 *     HvpGetCellMap @ 0x140C5E690 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140C5E6F0 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x140C5E710 (HvpMapEntryReleaseBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140C5EAA0 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall HvpFindFreeCell(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        unsigned int a3,
        int a4,
        __int64 *a5,
        unsigned int *a6)
{
  __int64 v7; // rbp
  __int64 v8; // r12
  int v9; // edx
  int v10; // r9d
  __int64 v11; // r13
  unsigned int v12; // r14d
  unsigned int v13; // edi
  unsigned int v14; // eax
  int v15; // r15d
  ULONG i; // edx
  __int64 v17; // rbx
  ULONG SetBits; // ecx
  int v19; // eax
  __int64 CellMap; // rcx
  unsigned int v21; // r10d
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 BinAddress; // rax
  __int64 v27; // rcx
  int v28; // r11d
  int v29; // r9d
  unsigned int *v30; // rdx
  int v31; // r10d
  unsigned __int64 v32; // r8
  unsigned int v33; // eax
  unsigned int v34; // ebx
  int v35; // eax
  __int64 CellFlat; // rax
  int *v37; // rdi
  bool v38; // zf
  int *v39; // rax
  int v40; // edi
  int v41; // eax
  __int64 CellPaged; // rax
  __int64 v43; // rax
  ULONG v45; // [rsp+30h] [rbp-58h]
  unsigned int v46[20]; // [rsp+38h] [rbp-50h] BYREF
  unsigned int v47; // [rsp+90h] [rbp+8h]
  __int16 v48; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v49; // [rsp+A0h] [rbp+18h]
  int v50; // [rsp+A8h] [rbp+20h]

  v50 = a4;
  v49 = a3;
  v7 = 0LL;
  v48 = 0;
  v8 = a2;
  HvpGetBinContextInitialize(&v48);
  v11 = 632LL * v10;
  v12 = -1;
  v13 = (-1 << v9) & *(_DWORD *)(BugCheckParameter2 + v11 + 904);
  v47 = v13;
  if ( !v13 )
    return v12;
  _BitScanForward(&v14, v13);
  v15 = -1;
  if ( v14 != v9 )
    v8 = v14;
  for ( i = *(_DWORD *)(v11 + 24 * v8 + BugCheckParameter2 + 316); ; i = v45 )
  {
    v17 = v11 + 24 * v8;
    SetBits = RtlFindSetBits((PRTL_BITMAP)(v17 + BugCheckParameter2 + 320), 1u, i);
    *(_DWORD *)(v17 + BugCheckParameter2 + 316) = SetBits;
    v45 = SetBits + 1;
    if ( v15 == SetBits )
    {
      v13 &= v13 - 1;
      v47 = v13;
      if ( !v13 )
        return v12;
      _BitScanForward((unsigned int *)&v8, v13);
      v22 = v11 + 24 * v8;
      SetBits = RtlFindSetBits(
                  (PRTL_BITMAP)(v22 + BugCheckParameter2 + 320),
                  1u,
                  *(_DWORD *)(v22 + BugCheckParameter2 + 316));
      *(_DWORD *)(v22 + BugCheckParameter2 + 316) = SetBits;
      v15 = SetBits;
      v45 = SetBits + 1;
    }
    v19 = SetBits;
    if ( v15 != -1 )
      v19 = v15;
    v15 = v19;
    CellMap = HvpGetCellMap(BugCheckParameter2, (SetBits << 12) + (v50 << 31));
    if ( !CellMap )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v21, 0x48AuLL);
    if ( !HvpMapEntryIsDiscardable(CellMap)
      && !(unsigned __int8)HvpMapEntryIsTrimmed()
      && (unsigned __int8)HvpMapEntryIsNewAlloc(v23) )
    {
      break;
    }
LABEL_33:
    ;
  }
  BinAddress = HvpMapEntryGetBinAddress(v24, v24, &v48, v25);
  v29 = BinAddress;
  v30 = (unsigned int *)(BinAddress + 32);
  v31 = *(_DWORD *)(BinAddress + 4);
  v32 = BinAddress + *(unsigned int *)(BinAddress + 8);
  while ( 1 )
  {
    if ( (unsigned __int64)v30 >= v32 )
      goto LABEL_32;
    v33 = *v30;
    if ( (*v30 & 0x80000000) != 0 )
    {
      v33 = -v33;
      goto LABEL_19;
    }
    v34 = (_DWORD)v30 + v31 + v28 - v29;
    if ( v49 <= v33 )
      break;
LABEL_19:
    v27 = v33;
    v30 = (unsigned int *)((char *)v30 + v33);
  }
  v35 = *(_DWORD *)(BugCheckParameter2 + 160);
  v46[0] = -1;
  v46[1] = 0;
  if ( (v35 & 1) != 0 || (v34 & 0x80000000) != 0 )
    goto LABEL_41;
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter2, v34, v46);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter2, v34);
  v27 = CellFlat;
  v37 = 0LL;
  v38 = CellFlat == 0;
  v39 = (int *)(CellFlat - 4);
  if ( !v38 )
    v37 = v39;
  if ( v37 )
  {
    if ( !HvpGetCellMap(BugCheckParameter2, v34) )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v34, 0x2A7uLL);
    v40 = *v37;
    if ( v40 < 0 )
      v40 = -v40;
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, (__int64)v46);
    else
      HvpReleaseCellPaged(BugCheckParameter2, v46);
    v41 = HvpMarkDirty(BugCheckParameter2, v34 - 4, v40, 0);
    if ( v41 < 0 )
    {
      if ( v41 == -1073741275 )
      {
        v13 = v47;
LABEL_32:
        HvpMapEntryReleaseBinAddress(v27, v30, &v48);
        goto LABEL_33;
      }
    }
    else
    {
      *(_BYTE *)(BugCheckParameter2 + 141) = 1;
LABEL_41:
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
        CellPaged = HvpGetCellFlat(BugCheckParameter2, v34, a6);
      else
        CellPaged = HvpGetCellPaged(BugCheckParameter2, v34);
      v27 = CellPaged;
      v12 = v34;
      v43 = CellPaged - 4;
      if ( v27 )
        v7 = v43;
      *a5 = v7;
    }
  }
  HvpMapEntryReleaseBinAddress(v27, v30, &v48);
  return v12;
}
