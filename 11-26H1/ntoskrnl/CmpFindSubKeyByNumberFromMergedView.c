/*
 * XREFs of CmpFindSubKeyByNumberFromMergedView @ 0x140B42968
 * Callers:
 *     CmEnumerateKey @ 0x1408C8770 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1408CBC30 (CmQueryKey.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpFindSubKeyByNumberEx @ 0x1408C94A0 (CmpFindSubKeyByNumberEx.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1408C9E60 (CmpDelayDerefKeyControlBlock.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpCompareKeysByName @ 0x140A50214 (CmpCompareKeysByName.c)
 */

__int64 __fastcall CmpFindSubKeyByNumberFromMergedView(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        unsigned int *a7,
        ULONG_PTR *a8,
        _DWORD *a9)
{
  unsigned int v9; // r9d
  unsigned int v10; // edi
  char v11; // r14
  unsigned int v12; // ebx
  unsigned int v13; // r13d
  unsigned int v14; // r12d
  ULONG_PTR v15; // rsi
  ULONG_PTR v16; // r15
  __int64 v17; // r13
  int SubKeyByNumber; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // r12
  int v22; // eax
  int v23; // r14d
  ULONG_PTR v24; // rcx
  _WORD *v25; // rax
  ULONG_PTR v26; // rcx
  __int64 CellFlat; // rax
  __int64 v28; // r8
  __int64 v29; // rcx
  char v30; // r12
  int v31; // r14d
  unsigned int v32; // eax
  bool v33; // zf
  int v34; // eax
  bool v35; // sf
  bool v36; // cc
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  char v41; // [rsp+58h] [rbp-61h]
  unsigned int v42; // [rsp+5Ch] [rbp-5Dh] BYREF
  int v43; // [rsp+60h] [rbp-59h]
  unsigned int v44[2]; // [rsp+68h] [rbp-51h] BYREF
  unsigned int v45[3]; // [rsp+70h] [rbp-49h] BYREF
  BOOL v46; // [rsp+7Ch] [rbp-3Dh]
  unsigned int v47; // [rsp+80h] [rbp-39h] BYREF
  unsigned int v48; // [rsp+84h] [rbp-35h]
  unsigned int v49; // [rsp+88h] [rbp-31h]
  __int64 v50; // [rsp+90h] [rbp-29h]
  _WORD *v51; // [rsp+98h] [rbp-21h]
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp-19h] BYREF
  ULONG_PTR v53; // [rsp+A8h] [rbp-11h] BYREF

  v9 = a3;
  v48 = 0;
  v49 = 0;
  v41 = 0;
  *a6 = 0LL;
  v10 = -1073741670;
  v11 = 0;
  v50 = 0LL;
  v12 = 0;
  v45[0] = -1;
  v45[1] = 0;
  v13 = -1;
  *a7 = -1;
  v14 = -1;
  v15 = 0LL;
  v44[0] = -1;
  v46 = a2 == 0;
  v16 = 0LL;
  v44[1] = 0;
  v47 = -1;
  v42 = -1;
  LOBYTE(v43) = 0;
  BugCheckParameter2 = 0LL;
  v53 = 0LL;
LABEL_2:
  v51 = 0LL;
  while ( 1 )
  {
    if ( v11 && v12 >= v9 )
    {
LABEL_85:
      v10 = -2147483622;
      goto LABEL_36;
    }
    if ( v15 )
    {
      CmpDelayDerefKeyControlBlock(v15, a5);
      v15 = 0LL;
      BugCheckParameter2 = 0LL;
    }
    if ( v16 )
    {
      CmpDelayDerefKeyControlBlock(v16, a5);
      v16 = 0LL;
      v53 = 0LL;
    }
    if ( !(_BYTE)v43 && v13 == -1 )
    {
      v17 = a1;
      SubKeyByNumber = CmpFindSubKeyByNumberEx(
                         *(_QWORD *)(a1 + 32),
                         *(_DWORD *)(a1 + 40),
                         v48,
                         (int *)&v47,
                         a1 & -(__int64)(a4 != 0),
                         a2 & -(__int64)(a4 != 0),
                         a4,
                         a5,
                         (ULONG_PTR *)((unsigned __int64)&BugCheckParameter2 & -(__int64)(a4 != 0)));
      v15 = BugCheckParameter2;
      v10 = SubKeyByNumber;
      if ( SubKeyByNumber < 0 )
        goto LABEL_37;
      v13 = v47;
      v19 = (unsigned __int8)v43;
      if ( v47 == -1 )
        v19 = 1;
      v43 = v19;
    }
    LOBYTE(v20) = v46;
    if ( !v46 && v14 == -1 )
    {
      v21 = a2;
      v22 = CmpFindSubKeyByNumberEx(
              *(_QWORD *)(a2 + 32),
              *(_DWORD *)(a2 + 40),
              v49,
              (int *)&v42,
              a2 & -(__int64)(a4 != 0),
              a1 & -(__int64)(a4 != 0),
              a4,
              a5,
              (ULONG_PTR *)((unsigned __int64)&v53 & -(__int64)(a4 != 0)));
      v16 = v53;
      v10 = v22;
      if ( v22 < 0 )
        goto LABEL_56;
      v14 = v42;
      v20 = v46;
      if ( v42 == -1 )
        v20 = 1;
      v46 = v20;
    }
    if ( (_BYTE)v43 )
    {
      if ( (_BYTE)v20 )
        goto LABEL_85;
      v23 = 2;
    }
    else
    {
      v23 = (_BYTE)v20 != 0;
    }
    if ( v14 != -1 )
    {
      v24 = *(_QWORD *)(a2 + 32);
      v25 = (_WORD *)((*(_BYTE *)(v24 + 140) & 1) != 0 ? HvpGetCellFlat(v24, v14, v44) : HvpGetCellPaged(v24, v14));
      v51 = v25;
      if ( !v25 )
      {
LABEL_35:
        v11 = v41;
LABEL_36:
        v17 = a1;
LABEL_37:
        v21 = a2;
        goto LABEL_38;
      }
    }
    if ( v13 == -1 )
    {
      v28 = v50;
    }
    else
    {
      v26 = *(_QWORD *)(a1 + 32);
      if ( (*(_BYTE *)(v26 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(v26, v13, v45);
      else
        CellFlat = HvpGetCellPaged(v26, v13);
      v50 = CellFlat;
      v28 = CellFlat;
      if ( !CellFlat )
        goto LABEL_35;
    }
    v30 = 0;
    if ( !v23 )
      break;
    v31 = v23 - 1;
    if ( !v31 )
    {
      v32 = v12 + 1;
      v11 = 1;
LABEL_58:
      if ( !v41 )
        v32 = v12;
      v12 = v32;
      if ( v32 == a3 )
        goto LABEL_61;
LABEL_70:
      v13 = -1;
      v41 = 1;
      ++v48;
      v47 = -1;
      if ( v30 )
        goto LABEL_71;
      v14 = v42;
LABEL_74:
      v28 = v50;
      goto LABEL_75;
    }
    if ( v31 == 1 )
    {
      v32 = v12 + 1;
      v11 = 1;
      goto LABEL_50;
    }
    v14 = v42;
LABEL_75:
    if ( v28 )
    {
      v37 = *(_QWORD *)(a1 + 32);
      if ( (*(_BYTE *)(v37 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v37, (__int64)v45);
      else
        HvpReleaseCellPaged(v37, v45);
      v50 = 0LL;
    }
    v11 = v41;
    v9 = a3;
    if ( v51 )
    {
      v38 = *(_QWORD *)(a2 + 32);
      if ( (*(_BYTE *)(v38 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v38, (__int64)v44);
      else
        HvpReleaseCellPaged(v38, v44);
      v9 = a3;
      goto LABEL_2;
    }
  }
  v34 = CmpCompareKeysByName(v28, v51);
  v35 = v34 < 0;
  v36 = v34 <= 0;
  v32 = v12 + 1;
  v11 = 1;
  if ( v35 )
    goto LABEL_58;
  if ( v36 )
  {
    if ( !v41 )
      v32 = v12;
    v12 = v32;
    if ( v32 == a3 )
    {
LABEL_61:
      *a6 = *(_QWORD *)(a1 + 32);
      *a7 = v13;
      if ( a8 )
      {
        *a8 = v15;
        v15 = 0LL;
      }
      v10 = 0;
      goto LABEL_36;
    }
    v30 = 1;
    goto LABEL_70;
  }
LABEL_50:
  v33 = v41 == 0;
  v41 = 1;
  if ( v33 )
    v32 = v12;
  v12 = v32;
  if ( v32 != a3 )
  {
LABEL_71:
    v14 = -1;
    ++v49;
    v42 = -1;
    goto LABEL_74;
  }
  v21 = a2;
  *a6 = *(_QWORD *)(a2 + 32);
  *a7 = v42;
  if ( a8 )
  {
    *a8 = v16;
    v16 = 0LL;
  }
  v10 = 0;
LABEL_56:
  v17 = a1;
LABEL_38:
  if ( v15 )
    CmpDelayDerefKeyControlBlock(v15, a5);
  if ( v16 )
    CmpDelayDerefKeyControlBlock(v16, a5);
  if ( v51 )
  {
    v29 = *(_QWORD *)(v21 + 32);
    if ( (*(_BYTE *)(v29 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v29, (__int64)v44);
    else
      HvpReleaseCellPaged(v29, v44);
  }
  if ( v50 )
  {
    v39 = *(_QWORD *)(v17 + 32);
    if ( (*(_BYTE *)(v39 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v39, (__int64)v45);
    else
      HvpReleaseCellPaged(v39, v45);
  }
  *a9 = v11 != 0 ? v12 + 1 : 0;
  return v10;
}
