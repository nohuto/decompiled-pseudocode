/*
 * XREFs of CmpAddToLeaf @ 0x1408D7CDC
 * Callers:
 *     CmpAddSubKeyToList @ 0x1408C7F40 (CmpAddSubKeyToList.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpHashUnicodeComponent @ 0x1408D7A30 (CmpHashUnicodeComponent.c)
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 *     CmpCompareInIndex @ 0x1408D8DA0 (CmpCompareInIndex.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1408D94A0 (CmpFindSubKeyInLeafWithStatus.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     HvLockHiveWriter @ 0x1408E1470 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408E14D4 (HvUnlockHiveWriter.c)
 *     HvpMarkDirty @ 0x1408E1510 (HvpMarkDirty.c)
 *     HvReallocateCell @ 0x1408E3254 (HvReallocateCell.c)
 *     CmpGenerateFastLeafHintForUnicodeString @ 0x140A20C44 (CmpGenerateFastLeafHintForUnicodeString.c)
 *     HvpGetCellMap @ 0x140C5E690 (HvpGetCellMap.c)
 */

__int64 __fastcall CmpAddToLeaf(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        int a3,
        __m128i *a4,
        unsigned int *a5)
{
  ULONG_PTR v5; // r15
  unsigned int v8; // r12d
  __int64 CellFlat; // rax
  int SubKeyInLeafWithStatus; // esi
  __int64 CellPaged; // rax
  _WORD *v12; // rdi
  int v13; // eax
  int v14; // ecx
  unsigned int v15; // r9d
  int v16; // ecx
  _WORD *v17; // r14
  __int64 v18; // rsi
  int v19; // eax
  int v20; // eax
  int FastLeafHintForUnicodeString; // eax
  int v23; // eax
  __int64 v24; // [rsp+40h] [rbp-20h] BYREF
  __int64 v25; // [rsp+48h] [rbp-18h] BYREF
  __int64 v26; // [rsp+50h] [rbp-10h] BYREF
  __int64 v27; // [rsp+A0h] [rbp+40h] BYREF
  int v28; // [rsp+B0h] [rbp+50h]

  v28 = a3;
  v5 = (unsigned int)BugCheckParameter3;
  v25 = 0LL;
  v24 = 0LL;
  HvpGetCellContextInitialize(&v25);
  v8 = -1;
  v27 = 0xFFFFFFFFLL;
  if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 1) != 0 || (v5 & 0x80000000) != 0LL )
    goto LABEL_13;
  HvLockHiveWriter(BugCheckParameter2);
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter2, v5, (unsigned int *)&v27);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter2);
  if ( ((CellFlat - 4) & -(__int64)(CellFlat != 0)) == 0 )
  {
    HvUnlockHiveWriter(BugCheckParameter2);
    return (unsigned int)-1073741670;
  }
  if ( !HvpGetCellMap(BugCheckParameter2, (unsigned int)v5) )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v5, 0x2A7uLL);
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter2, &v27);
  else
    HvpReleaseCellPaged(BugCheckParameter2, &v27);
  SubKeyInLeafWithStatus = HvpMarkDirty(BugCheckParameter2);
  HvUnlockHiveWriter(BugCheckParameter2);
  if ( SubKeyInLeafWithStatus >= 0 )
  {
    *(_BYTE *)(BugCheckParameter2 + 141) = 1;
LABEL_13:
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(BugCheckParameter2, v5, (unsigned int *)&v25);
    else
      CellPaged = HvpGetCellPaged(BugCheckParameter2);
    v12 = (_WORD *)CellPaged;
    v13 = *(unsigned __int16 *)(CellPaged + 2);
    if ( (_WORD)v13 == 0xFFFF )
    {
      SubKeyInLeafWithStatus = -1073741670;
    }
    else
    {
      v14 = -4 - *((_DWORD *)v12 - 1);
      if ( *v12 == 26988 )
      {
        v15 = 4;
        v16 = v14 - 4 * v13;
        v17 = 0LL;
      }
      else
      {
        v15 = 8;
        v16 = v14 - 8 * v13;
        v17 = v12;
      }
      LODWORD(v27) = v5;
      v8 = v5;
      if ( v16 - 4 < v15 )
      {
        if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter2, &v25);
        else
          HvpReleaseCellPaged(BugCheckParameter2, &v25);
        v26 = 0LL;
        v23 = HvReallocateCell(BugCheckParameter2, (unsigned int)v5, (__int64)&v27, (__int64)&v26, (__int64)&v25);
        v12 = (_WORD *)v26;
        SubKeyInLeafWithStatus = v23;
        v8 = v27;
        if ( v23 < 0 )
          goto LABEL_34;
        if ( v17 )
          v17 = (_WORD *)v26;
      }
      SubKeyInLeafWithStatus = CmpFindSubKeyInLeafWithStatus(BugCheckParameter2, (__int64)&v24 + 4, (__int64)&v24);
      if ( SubKeyInLeafWithStatus == -1073741772 )
      {
        v18 = (unsigned int)v24;
        if ( (_DWORD)v24 == (unsigned __int16)v12[1] )
          goto LABEL_25;
        v19 = CmpCompareInIndex(BugCheckParameter2, (__int64)v12, (__int64)&v24 + 4);
        if ( v19 != 2 )
        {
          if ( v19 > 0 )
            v18 = (unsigned int)(v18 + 1);
          v20 = (unsigned __int16)v12[1];
          if ( (_DWORD)v18 != v20 )
          {
            if ( v17 )
            {
              memmove(
                &v17[4 * (unsigned int)(v18 + 1) + 2],
                &v17[4 * v18 + 2],
                8LL * ((unsigned __int16)v17[1] - (unsigned int)v18));
              goto LABEL_26;
            }
            memmove(
              &v12[2 * (unsigned int)(v18 + 1) + 2],
              &v12[2 * (unsigned int)v18 + 2],
              4LL * (unsigned int)(v20 - v18));
LABEL_43:
            *(_DWORD *)&v12[2 * v18 + 2] = v28;
LABEL_29:
            ++v12[1];
            if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter2, &v25);
            else
              HvpReleaseCellPaged(BugCheckParameter2, &v25);
            v12 = 0LL;
            if ( v8 != (_DWORD)v5 )
              HvFreeCell(BugCheckParameter2, (unsigned int)v5);
            *a5 = v8;
            v8 = -1;
            SubKeyInLeafWithStatus = 0;
            goto LABEL_34;
          }
LABEL_25:
          if ( v17 )
          {
LABEL_26:
            *(_DWORD *)&v17[4 * v18 + 2] = v28;
            if ( *v17 == 26732 )
              FastLeafHintForUnicodeString = CmpHashUnicodeComponent(a4);
            else
              FastLeafHintForUnicodeString = CmpGenerateFastLeafHintForUnicodeString(a4);
            *(_DWORD *)&v17[4 * v18 + 4] = FastLeafHintForUnicodeString;
            goto LABEL_29;
          }
          goto LABEL_43;
        }
        SubKeyInLeafWithStatus = -1073741670;
      }
    }
LABEL_34:
    if ( v12 )
    {
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter2, &v25);
      else
        HvpReleaseCellPaged(BugCheckParameter2, &v25);
    }
    if ( v8 != -1 && v8 != (_DWORD)v5 )
      HvFreeCell(BugCheckParameter2, v8);
  }
  return (unsigned int)SubKeyInLeafWithStatus;
}
