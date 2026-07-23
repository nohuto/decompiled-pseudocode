/*
 * XREFs of CmpLightWeightPrepareSetKeyUserFlags @ 0x140AD1290
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1408B4F40 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpLightWeightPrepareSetKeyUserFlags(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  ULONG_PTR v3; // rdi
  unsigned int v4; // esi
  __int64 CellFlat; // rax
  int v6; // eax
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+34h] [rbp+Ch]

  v1 = 0;
  v8 = -1;
  v9 = 0;
  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(v2 + 32);
  v4 = *(_DWORD *)(v2 + 40);
  if ( (*(_BYTE *)(v3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v3, v4, &v8);
  else
    CellFlat = HvpGetCellPaged(v3, v4);
  if ( CellFlat )
  {
    v6 = HvpMarkCellDirty(v3, v4, 0);
    if ( v6 < 0 )
      v1 = v6;
    if ( (*(_BYTE *)(v3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v3, (__int64)&v8);
    else
      HvpReleaseCellPaged(v3, &v8);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
