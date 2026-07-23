/*
 * XREFs of CmpLightWeightPrepareSetValueKeyUoW @ 0x1408C570C
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1408B4F40 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     CmpSwapValueInList @ 0x1404D024C (CmpSwapValueInList.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpMarkValueDataDirty @ 0x1408C3BA4 (CmpMarkValueDataDirty.c)
 *     CmpInitializeValueNameString @ 0x1408C5BB4 (CmpInitializeValueNameString.c)
 *     CmpFreeValue @ 0x1408D71B4 (CmpFreeValue.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     CmpFindNameInListWithStatus @ 0x1408DB7C0 (CmpFindNameInListWithStatus.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpAddValueKeyNew @ 0x1408E3B9C (CmpAddValueKeyNew.c)
 *     CmpAddValueToListEx @ 0x1408E3E88 (CmpAddValueToListEx.c)
 *     CmpGetValueData @ 0x140942400 (CmpGetValueData.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x140ADAE70 (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmpLightWeightCreateSetValueData @ 0x140AEAFF0 (CmpLightWeightCreateSetValueData.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpLightWeightPrepareSetValueKeyUoW(__int64 a1)
{
  _DWORD *v1; // rsi
  __int64 v2; // rax
  ULONG_PTR v4; // rdi
  unsigned int *Pool; // rax
  unsigned int *v6; // r15
  __int64 CellFlat; // rax
  ULONG_PTR v8; // r13
  unsigned int v9; // eax
  unsigned int v10; // r12d
  void *v11; // rax
  int v12; // ebx
  unsigned int v14; // r12d
  unsigned int v15; // esi
  int v16; // eax
  __int64 v17; // r13
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 CellPaged; // rax
  _DWORD *v22; // rsi
  int NameInListWithStatus; // ecx
  size_t Sizea; // [rsp+20h] [rbp-69h]
  size_t Size; // [rsp+20h] [rbp-69h]
  unsigned int v26[2]; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v27[2]; // [rsp+48h] [rbp-41h] BYREF
  unsigned int v28[2]; // [rsp+50h] [rbp-39h] BYREF
  ULONG_PTR v29; // [rsp+58h] [rbp-31h] BYREF
  _DWORD *v30; // [rsp+60h] [rbp-29h] BYREF
  __int64 v31; // [rsp+68h] [rbp-21h] BYREF
  __int64 v32; // [rsp+70h] [rbp-19h] BYREF
  PVOID Pool2; // [rsp+78h] [rbp-11h]
  PVOID P; // [rsp+80h] [rbp-9h]
  __int128 v35; // [rsp+88h] [rbp-1h]
  __int64 v36; // [rsp+98h] [rbp+Fh]
  char v37; // [rsp+F0h] [rbp+67h]
  __int64 v38; // [rsp+F8h] [rbp+6Fh] BYREF
  __int64 v39; // [rsp+100h] [rbp+77h] BYREF
  __int64 v40; // [rsp+108h] [rbp+7Fh] BYREF

  v1 = *(_DWORD **)(a1 + 104);
  v2 = *(_QWORD *)(a1 + 48);
  v28[0] = -1;
  v28[1] = 0;
  v27[0] = -1;
  v4 = *(_QWORD *)(v2 + 32);
  v27[1] = 0;
  v31 = 0xFFFFFFFFLL;
  LODWORD(v40) = 0;
  LODWORD(v29) = 0;
  v26[0] = -1;
  v26[1] = 0;
  P = 0LL;
  v32 = 0LL;
  v37 = 0;
  LODWORD(v39) = -1;
  LOBYTE(v38) = 0;
  v36 = 0LL;
  v30 = v1;
  v35 = 0LL;
  if ( !v1 )
  {
    v12 = CmpLightWeightCreateSetValueData(a1, &v30);
    if ( v12 < 0 )
      return (unsigned int)v12;
    v1 = v30;
    CmpLightWeightUpdateSharedSetValueData(v30, *(_QWORD *)(a1 + 48));
    --*v1;
  }
  Pool = (unsigned int *)CmpAllocatePool(0x100uLL);
  v6 = Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  *Pool = -1;
  Pool[1] = -1;
  if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v4, *(_DWORD *)(a1 + 92), v28);
  else
    CellFlat = HvpGetCellPaged(v4);
  v8 = CellFlat;
  if ( !CellFlat )
  {
    v12 = -1073741670;
LABEL_63:
    CmpFreeTransientPoolWithTag(v6, 0x77554D43u);
    return (unsigned int)v12;
  }
  v9 = *(_DWORD *)(CellFlat + 4);
  v10 = v9 + 0x80000000;
  if ( v9 < 0x80000000 )
    v10 = v9;
  LODWORD(v30) = v10;
  LODWORD(Pool2) = v10;
  if ( v10 )
  {
    if ( v9 < 0x80000000 )
    {
      if ( !(unsigned __int8)CmpGetValueData(v4, (__int64)&v32, (__int64)&v38, (__int64)&v31) )
      {
        v12 = -1073741670;
        goto LABEL_14;
      }
      v10 = (unsigned int)Pool2;
      v11 = (void *)v32;
      LODWORD(v30) = (_DWORD)Pool2;
      v37 = 1;
    }
    else
    {
      v11 = (void *)(v8 + 8);
    }
    P = v11;
  }
  v12 = HvpMarkCellDirty(v4, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL));
  if ( v12 >= 0 )
  {
    if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(v4, *(_DWORD *)(*(_QWORD *)(a1 + 48) + 40LL), v27);
    else
      CellPaged = HvpGetCellPaged(v4);
    v32 = CellPaged;
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 40LL) >> 31;
    Pool2 = (PVOID)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
    {
      v12 = -1073741670;
LABEL_40:
      if ( v32 )
      {
        if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v4, v27);
        else
          HvpReleaseCellPaged(v4, v27);
      }
      goto LABEL_13;
    }
    CmpInitializeValueNameString(v8);
    v22 = v1 + 1;
    NameInListWithStatus = CmpFindNameInListWithStatus(v4, (__int64)&v40, (__int64)&v29);
    if ( (int)(NameInListWithStatus + 0x80000000) >= 0 && NameInListWithStatus != -1073741772 )
    {
      v12 = -1073741670;
LABEL_39:
      ExFreePoolWithTag(Pool2, 0);
      goto LABEL_40;
    }
    LODWORD(Size) = v10;
    v12 = CmpAddValueKeyNew(v4, Size, *(_DWORD *)(a1 + 72), (__int64)&v39);
    if ( v12 < 0 )
      goto LABEL_57;
    v14 = v29;
    if ( (_DWORD)v29 == -1 )
    {
      Sizea = (size_t)v22;
      v15 = v39;
      v16 = CmpAddValueToListEx(v4, Sizea, 1);
      v17 = v36;
      goto LABEL_32;
    }
    v12 = HvpMarkCellDirty(v4, (unsigned int)v29);
    if ( v12 >= 0 )
    {
      if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
        v19 = HvpGetCellFlat(v4, v14, v26);
      else
        v19 = HvpGetCellPaged(v4);
      v17 = v19;
      if ( v19 )
      {
        v12 = CmpMarkValueDataDirty(v4, v19);
        if ( v12 < 0 )
        {
          v15 = v39;
LABEL_35:
          if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v4, v26);
          else
            HvpReleaseCellPaged(v4, v26);
LABEL_37:
          if ( v15 != -1 )
            CmpFreeValue(v4, v15);
          goto LABEL_39;
        }
        v20 = (__int64)v22;
        v15 = v39;
        v16 = CmpSwapValueInList(v4, v39, v40, v20);
LABEL_32:
        v12 = v16;
        if ( v16 >= 0 )
        {
          v12 = 0;
          *((_WORD *)v6 + 4) = v35;
          v18 = (unsigned int)v30;
          *v6 = v15;
          v6[3] = v18;
          v6[1] = v14;
          *(_QWORD *)(a1 + 112) = v6;
          v6 = 0LL;
          v15 = -1;
        }
        if ( !v17 )
          goto LABEL_37;
        goto LABEL_35;
      }
      v12 = -1073741670;
    }
LABEL_57:
    v15 = v39;
    goto LABEL_37;
  }
LABEL_13:
  if ( v37 && P )
  {
    if ( (_BYTE)v38 )
    {
      ExFreePoolWithTag(P, 0);
    }
    else if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
    {
      HvpReleaseCellFlat(v4, &v31);
    }
    else
    {
      HvpReleaseCellPaged(v4, &v31);
    }
  }
LABEL_14:
  if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v4, v28);
  else
    HvpReleaseCellPaged(v4, v28);
  if ( v6 )
    goto LABEL_63;
  return (unsigned int)v12;
}
