/*
 * XREFs of CmQueryMultipleValueKey @ 0x140940B3C
 * Callers:
 *     NtQueryMultipleValueKey @ 0x14093F350 (NtQueryMultipleValueKey.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvLockHiveFlusherShared @ 0x1408C9DE8 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x1408D65AC (HvUnlockHiveFlusherShared.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1408D74A0 (CmpUpdateKeyNodeAccessBits.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     CmpFindNameInListWithStatus @ 0x1408DB7C0 (CmpFindNameInListWithStatus.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1408F30DC (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpUnlockTwoKcbs @ 0x1409409F0 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x140940A90 (CmpLockTwoKcbsShared.c)
 *     CmpGetValueData @ 0x140942400 (CmpGetValueData.c)
 *     CmpFindNameInList @ 0x140AACC58 (CmpFindNameInList.c)
 *     CmpFindValueByName @ 0x140AAFFF0 (CmpFindValueByName.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140B10F94 (CmQueryMultipleValueForLayeredKey.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C5E3F0 (CmpLockKcbShared.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C5E750 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmQueryMultipleValueKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        unsigned int *a7)
{
  __int64 v9; // r12
  unsigned __int64 v10; // r13
  __int64 v11; // rsi
  ULONG_PTR v12; // r15
  __int64 v13; // rdx
  __int64 v14; // r8
  struct _KLOCK_ENTRIES *v15; // r9
  ULONG_PTR v16; // r14
  __int64 v17; // rdx
  __int64 CellFlat; // rax
  __int64 v19; // r9
  int v20; // r10d
  int v21; // esi
  unsigned int v22; // ecx
  __int64 v23; // r8
  unsigned __int16 v24; // cx
  __int64 v25; // rdx
  unsigned int ValueByName; // ecx
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned int v29; // eax
  unsigned int v30; // edx
  unsigned int v31; // r8d
  unsigned int v32; // r10d
  __int64 v33; // rcx
  __int64 v34; // rdx
  unsigned int v35; // r8d
  __int64 v36; // rcx
  int MultipleValueForLayeredKey; // eax
  char v39; // al
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 CellPaged; // rax
  char v44; // [rsp+40h] [rbp-F8h]
  __int64 v45; // [rsp+44h] [rbp-F4h] BYREF
  unsigned int Size; // [rsp+4Ch] [rbp-ECh] BYREF
  unsigned int Size_4; // [rsp+50h] [rbp-E8h]
  int v48; // [rsp+54h] [rbp-E4h]
  __int64 v49; // [rsp+58h] [rbp-E0h] BYREF
  unsigned int v50[2]; // [rsp+60h] [rbp-D8h] BYREF
  unsigned int v51[2]; // [rsp+68h] [rbp-D0h] BYREF
  int v52; // [rsp+70h] [rbp-C8h]
  unsigned int v53[2]; // [rsp+78h] [rbp-C0h] BYREF
  unsigned int v54; // [rsp+80h] [rbp-B8h]
  __int64 v55; // [rsp+88h] [rbp-B0h] BYREF
  __int64 v56; // [rsp+90h] [rbp-A8h]
  void *Src; // [rsp+98h] [rbp-A0h] BYREF
  unsigned int v58; // [rsp+A0h] [rbp-98h]
  unsigned int v59; // [rsp+A4h] [rbp-94h]
  __int64 v60; // [rsp+A8h] [rbp-90h]
  __int64 v61; // [rsp+B0h] [rbp-88h]
  __int64 v62; // [rsp+B8h] [rbp-80h]
  __int64 v63; // [rsp+C0h] [rbp-78h]
  unsigned __int64 v64; // [rsp+C8h] [rbp-70h]
  _BYTE *v65; // [rsp+D0h] [rbp-68h]
  __int64 v66; // [rsp+D8h] [rbp-60h]
  ULONG_PTR v67; // [rsp+E0h] [rbp-58h]
  __int64 v68; // [rsp+E8h] [rbp-50h]
  ULONG_PTR v69; // [rsp+F0h] [rbp-48h]
  __int64 v70; // [rsp+140h] [rbp+8h] BYREF
  __int64 v71; // [rsp+150h] [rbp+18h]
  unsigned int v72; // [rsp+158h] [rbp+20h]

  v72 = a4;
  v71 = a3;
  v61 = 0LL;
  v9 = 0LL;
  v60 = 0LL;
  v50[0] = -1;
  v50[1] = 0;
  Size_4 = 0;
  HIDWORD(v45) = 0;
  v44 = 0;
  v51[0] = -1;
  v51[1] = 0;
  v56 = 0LL;
  v63 = 0LL;
  v53[0] = -1;
  v53[1] = 0;
  v10 = 0LL;
  v64 = 0LL;
  v11 = 0LL;
  v49 = 0LL;
  LOBYTE(v52) = 0;
  LOBYTE(v48) = 0;
  Src = 0LL;
  LOBYTE(v70) = 0;
  v55 = 0xFFFFFFFFLL;
  CmpLockRegistry(0xFFFFFFFFLL, a2, a3, a4);
  v12 = *(_QWORD *)(a1 + 8);
  v69 = v12;
  if ( *(_WORD *)(v12 + 66) )
  {
    MultipleValueForLayeredKey = CmQueryMultipleValueForLayeredKey(a1, v71, v72, a5, (__int64)a6, (__int64)a7);
    goto LABEL_58;
  }
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    CmpLockKcbShared(v12);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      v21 = (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      CmpUnlockKcb(v12);
      goto LABEL_47;
    }
    CmpUnlockKcb(v12);
    MultipleValueForLayeredKey = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, &v49);
    if ( MultipleValueForLayeredKey >= 0 )
    {
      v11 = v49;
      goto LABEL_4;
    }
LABEL_58:
    v21 = MultipleValueForLayeredKey;
    goto LABEL_47;
  }
LABEL_4:
  if ( a2 )
  {
    v10 = *(_QWORD *)(a2 + 8);
    v64 = v10;
  }
  CmpLockTwoKcbsShared(v10, v12);
  if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v11) )
  {
    if ( a2 && (unsigned __int8)CmpIsKeyDeletedForKeyBody(a2, v11) )
    {
      v39 = *(_BYTE *)(a2 + 48);
      goto LABEL_67;
    }
    v16 = *(_QWORD *)(v12 + 32);
    v67 = v16;
    HvLockHiveFlusherShared(v16, v13, v14, v15);
    v17 = *(unsigned int *)(v12 + 40);
    v65 = (_BYTE *)(v16 + 140);
    if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(v16, v17, v51);
    else
      CellFlat = HvpGetCellPaged(v16, v17);
    v62 = CellFlat;
    if ( CellFlat )
    {
      CmpUpdateKeyNodeAccessBits(v16, CellFlat, *(_DWORD *)(v12 + 40));
      HvUnlockHiveFlusherShared(v16);
      if ( v11 )
      {
        v40 = (unsigned __int8)v52;
        if ( *(_QWORD *)(v12 + 288) == v11 )
          v40 = 1;
        v52 = v40;
      }
      if ( !v10 )
      {
        v19 = 0LL;
        LOBYTE(v20) = v48;
        goto LABEL_14;
      }
      v41 = *(_QWORD *)(v10 + 32);
      v61 = v41;
      v42 = *(unsigned int *)(v10 + 40);
      if ( (*(_BYTE *)(v41 + 140) & 1) != 0 )
        CellPaged = HvpGetCellFlat(v41, v42, v53);
      else
        CellPaged = HvpGetCellPaged(v41, v42);
      v19 = CellPaged;
      v56 = CellPaged;
      v63 = CellPaged;
      if ( CellPaged )
      {
        LOBYTE(v20) = v48;
        if ( v11 )
        {
          v20 = (unsigned __int8)v48;
          if ( *(_QWORD *)(v10 + 288) == v11 )
            v20 = 1;
          v48 = v20;
        }
LABEL_14:
        v21 = 0;
        v22 = 0;
        while ( 1 )
        {
          v54 = v22;
          if ( v22 >= v72 )
            break;
          v66 = 3LL * v22;
          v23 = *(_QWORD *)(v71 + 24LL * v22);
          v49 = v23;
          v24 = *(_WORD *)v23;
          if ( *(_WORD *)v23 )
          {
            v25 = *(_QWORD *)(v23 + 8);
            do
            {
              if ( *(_WORD *)(v25 + 2 * ((unsigned __int64)v24 >> 1) - 2) )
                break;
              v24 -= 2;
              *(_WORD *)v23 = v24;
            }
            while ( v24 );
          }
          ValueByName = -1;
          LODWORD(v45) = -1;
          Size = -1;
          if ( v10 )
          {
            v9 = v61;
            v60 = v61;
            if ( (_BYTE)v20 )
            {
              CmpFindNameInList(v61, v10 + 280, v23, 0, 0LL, (__int64)&Size);
              ValueByName = Size;
              LODWORD(v45) = Size;
            }
            else
            {
              ValueByName = CmpFindValueByName(v61, v19, v23);
              LODWORD(v45) = ValueByName;
              Size = ValueByName;
            }
            v23 = v49;
          }
          if ( ValueByName == -1 )
          {
            v9 = v16;
            v60 = v16;
            if ( (_BYTE)v52 )
            {
              CmpFindNameInListWithStatus(v16, (unsigned int *)(v12 + 280), (unsigned __int16 *)v23, 0, 0LL, &Size);
              ValueByName = Size;
            }
            else
            {
              LODWORD(v45) = 0;
              CmpFindNameInListWithStatus(v16, (unsigned int *)(v62 + 36), (unsigned __int16 *)v23, 0, 0LL, &v45);
              ValueByName = v45;
            }
            LODWORD(v45) = ValueByName;
            if ( ValueByName == -1 )
            {
              v21 = -1073741772;
              break;
            }
          }
          if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
            v27 = HvpGetCellFlat(v9, ValueByName, v50);
          else
            v27 = HvpGetCellPaged(v9, ValueByName);
          v28 = v27;
          v49 = v27;
          v68 = v27;
          if ( !v27 )
          {
            v21 = -1073741670;
            goto LABEL_42;
          }
          v29 = *(_DWORD *)(v27 + 4);
          v30 = v29 + 0x80000000;
          if ( v29 < 0x80000000 )
            v30 = v29;
          Size = v30;
          v31 = (HIDWORD(v45) + 3) & 0xFFFFFFFC;
          HIDWORD(v45) = v31;
          v59 = v31;
          v32 = (Size_4 + 3) & 0xFFFFFFFC;
          Size_4 = v32;
          v58 = v32;
          if ( v30 + v31 > *a6 || v30 + v31 < v31 || v44 )
          {
            v44 = 1;
          }
          else
          {
            if ( !(unsigned __int8)CmpGetValueData(v9, (__int64)&Src, (__int64)&v70, (__int64)&v55) )
            {
              v21 = -1073741670;
              v28 = v49;
              goto LABEL_42;
            }
            LODWORD(v45) = Size;
            memmove((void *)(a5 + HIDWORD(v45)), Src, Size);
            v33 = v66;
            v34 = v71;
            *(_DWORD *)(v71 + 8 * v66 + 16) = *(_DWORD *)(v49 + 12);
            *(_QWORD *)(v34 + 8 * v33 + 8) = v45;
            if ( (_BYTE)v70 )
            {
              ExFreePoolWithTag(Src, 0);
              LOBYTE(v70) = 0;
            }
            else if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
            {
              HvpReleaseCellFlat(v9, (__int64)&v55);
            }
            else
            {
              HvpReleaseCellPaged(v9, (unsigned int *)&v55);
            }
            Src = 0LL;
            v30 = v45;
            HIDWORD(v45) += v45;
            v32 = Size_4;
          }
          Size_4 = v30 + v32;
          if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v9, (__int64)v50);
          else
            HvpReleaseCellPaged(v9, v50);
          v22 = v54 + 1;
          v19 = v56;
          LOBYTE(v20) = v48;
        }
        v35 = Size_4;
        v28 = 0LL;
        if ( v21 >= 0 )
        {
          if ( v44 )
            v21 = -2147483643;
          *a6 = HIDWORD(v45);
          if ( a7 )
            *a7 = v35;
        }
LABEL_42:
        if ( v28 )
        {
          if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v9, (__int64)v50);
          else
            HvpReleaseCellPaged(v9, v50);
        }
        if ( v56 )
        {
          if ( (*(_BYTE *)(v61 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v61, (__int64)v53);
          else
            HvpReleaseCellPaged(v61, v53);
        }
        if ( (*v65 & 1) != 0 )
          HvpReleaseCellFlat(v16, (__int64)v51);
        else
          HvpReleaseCellPaged(v16, v51);
        goto LABEL_46;
      }
      if ( (*v65 & 1) != 0 )
        HvpReleaseCellFlat(v16, (__int64)v51);
      else
        HvpReleaseCellPaged(v16, v51);
    }
    else
    {
      HvUnlockHiveFlusherShared(v16);
    }
    CmpUnlockTwoKcbs((_WORD *)v10, (_WORD *)v12);
    v21 = -1073741670;
    goto LABEL_47;
  }
  v39 = *(_BYTE *)(a1 + 48);
LABEL_67:
  v21 = (v39 & 1) != 0 ? -1073740763 : -1073741444;
LABEL_46:
  CmpUnlockTwoKcbs((_WORD *)v10, (_WORD *)v12);
LABEL_47:
  CmpUnlockRegistry(v36);
  return (unsigned int)v21;
}
