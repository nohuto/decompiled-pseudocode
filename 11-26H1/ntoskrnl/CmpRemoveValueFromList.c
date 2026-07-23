/*
 * XREFs of CmpRemoveValueFromList @ 0x1408C308C
 * Callers:
 *     CmDeleteValueKey @ 0x1408C1D50 (CmDeleteValueKey.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x1408C54A0 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmSetValueKey @ 0x1408D53E0 (CmSetValueKey.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvReallocateCell @ 0x1408E3254 (HvReallocateCell.c)
 */

__int64 __fastcall CmpRemoveValueFromList(ULONG_PTR BugCheckParameter2, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // esi
  __int64 v4; // r14
  ULONG_PTR v6; // rdx
  unsigned int v8; // esi
  __int64 result; // rax
  bool v10; // zf
  __int64 CellPaged; // rax
  _DWORD *v12; // rdx
  ULONG_PTR v13; // rdx
  __int64 v14; // [rsp+40h] [rbp-10h] BYREF
  __int64 v15; // [rsp+90h] [rbp+40h] BYREF
  __int64 v16; // [rsp+98h] [rbp+48h] BYREF

  v3 = *a3;
  v4 = a2;
  v6 = a3[1];
  LODWORD(v15) = 0;
  v8 = v3 - 1;
  if ( v8 )
  {
    v10 = (*(_BYTE *)(BugCheckParameter2 + 140) & 1) == 0;
    v16 = 0xFFFFFFFFLL;
    if ( v10 )
      CellPaged = HvpGetCellPaged(BugCheckParameter2);
    else
      CellPaged = HvpGetCellFlat(BugCheckParameter2, v6, (unsigned int *)&v16);
    if ( (unsigned int)v4 < v8 )
    {
      v12 = (_DWORD *)(CellPaged + 4 * v4);
      do
      {
        v4 = (unsigned int)(v4 + 1);
        *v12++ = *(_DWORD *)(CellPaged + 4 * v4);
      }
      while ( (unsigned int)v4 < v8 );
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, &v16);
    else
      HvpReleaseCellPaged(BugCheckParameter2, &v16);
    v13 = a3[1];
    v14 = 0LL;
    HvReallocateCell(BugCheckParameter2, v13, (__int64)&v15, (__int64)&v14, (__int64)&v16);
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, &v16);
    else
      HvpReleaseCellPaged(BugCheckParameter2, &v16);
    a3[1] = v15;
  }
  else
  {
    HvFreeCell(BugCheckParameter2, v6);
    a3[1] = -1;
  }
  result = 0LL;
  *a3 = v8;
  return result;
}
