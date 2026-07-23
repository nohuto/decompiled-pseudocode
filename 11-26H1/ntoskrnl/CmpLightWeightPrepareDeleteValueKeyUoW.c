/*
 * XREFs of CmpLightWeightPrepareDeleteValueKeyUoW @ 0x1408C54A0
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1408B4F40 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpRemoveValueFromList @ 0x1408C308C (CmpRemoveValueFromList.c)
 *     CmpMarkValueDataDirty @ 0x1408C3BA4 (CmpMarkValueDataDirty.c)
 *     CmpInitializeValueNameString @ 0x1408C5BB4 (CmpInitializeValueNameString.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     CmpFindNameInListWithStatus @ 0x1408DB7C0 (CmpFindNameInListWithStatus.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x140ADAE70 (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmpLightWeightCreateSetValueData @ 0x140AEAFF0 (CmpLightWeightCreateSetValueData.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpLightWeightPrepareDeleteValueKeyUoW(__int64 a1)
{
  unsigned int *v1; // rbx
  __int64 v2; // rax
  ULONG_PTR v4; // rdi
  _DWORD *Pool; // rax
  _DWORD *v6; // rsi
  __int64 CellFlat; // rax
  ULONG_PTR v8; // r15
  void *Pool2; // r13
  int NameInListWithStatus; // eax
  unsigned int v11; // r15d
  __int64 CellPaged; // rax
  __int64 v13; // r12
  int v14; // ebx
  unsigned int *v16; // [rsp+30h] [rbp-28h] BYREF
  __int128 v17; // [rsp+38h] [rbp-20h]
  ULONG_PTR v18; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+50h] BYREF
  unsigned int v20; // [rsp+B0h] [rbp+58h] BYREF
  int v21; // [rsp+B4h] [rbp+5Ch]
  unsigned int v22; // [rsp+B8h] [rbp+60h] BYREF
  int v23; // [rsp+BCh] [rbp+64h]

  v1 = *(unsigned int **)(a1 + 104);
  v2 = *(_QWORD *)(a1 + 48);
  v22 = -1;
  v23 = 0;
  LODWORD(v19) = 0;
  v4 = *(_QWORD *)(v2 + 32);
  LODWORD(v18) = 0;
  v20 = -1;
  v21 = 0;
  v16 = v1;
  v17 = 0LL;
  if ( !v1 )
  {
    v14 = CmpLightWeightCreateSetValueData(a1, &v16);
    if ( v14 < 0 )
      return (unsigned int)v14;
    v1 = v16;
    CmpLightWeightUpdateSharedSetValueData(v16, *(_QWORD *)(a1 + 48));
    --*v1;
  }
  Pool = (_DWORD *)CmpAllocatePool(0x100uLL);
  v6 = Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  *Pool = -1;
  Pool[1] = -1;
  if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v4, *(_DWORD *)(a1 + 88), &v22);
  else
    CellFlat = HvpGetCellPaged(v4);
  v8 = CellFlat;
  if ( !CellFlat )
  {
    v14 = -1073741670;
LABEL_33:
    CmpFreeTransientPoolWithTag(v6, 0x77554D43u);
    return (unsigned int)v14;
  }
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  if ( Pool2
    && ((CmpInitializeValueNameString(v8),
         v16 = v1 + 1,
         NameInListWithStatus = CmpFindNameInListWithStatus(v4, (__int64)&v19, (__int64)&v18),
         (int)(NameInListWithStatus + 0x80000000) < 0)
     || NameInListWithStatus == -1073741772) )
  {
    v11 = v18;
    if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(v4, v18, &v20);
    else
      CellPaged = HvpGetCellPaged(v4);
    v13 = CellPaged;
    v14 = CmpMarkValueDataDirty(v4, CellPaged);
    if ( v14 >= 0 )
    {
      v14 = HvpMarkCellDirty(v4, v11);
      if ( v14 >= 0 )
      {
        v14 = CmpRemoveValueFromList(v4, v19, v16);
        if ( v14 >= 0 )
        {
          v6[1] = v11;
          v14 = 0;
          *(_QWORD *)(a1 + 112) = v6;
          v6 = 0LL;
        }
      }
    }
    if ( v13 )
    {
      if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v4, &v20);
      else
        HvpReleaseCellPaged(v4, &v20);
    }
  }
  else
  {
    v14 = -1073741670;
  }
  if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v4, &v22);
  else
    HvpReleaseCellPaged(v4, &v22);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v6 )
    goto LABEL_33;
  return (unsigned int)v14;
}
