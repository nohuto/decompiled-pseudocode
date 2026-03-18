/*
 * XREFs of CmpSwapValueInList @ 0x1404D6A7C
 * Callers:
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1408BF13C (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmSetValueKey @ 0x1408CEE30 (CmSetValueKey.c)
 * Callees:
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpSwapValueInList(ULONG_PTR a1, int a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v5; // rsi
  bool v6; // zf
  __int64 v8; // rdx
  __int64 CellPaged; // rax
  int v12; // [rsp+30h] [rbp+8h] BYREF
  int v13; // [rsp+34h] [rbp+Ch]

  v4 = 0;
  v5 = a3;
  v6 = (*(_BYTE *)(a1 + 140) & 1) == 0;
  v12 = -1;
  v8 = *(unsigned int *)(a4 + 4);
  v13 = 0;
  if ( v6 )
    CellPaged = HvpGetCellPaged(a1);
  else
    CellPaged = HvpGetCellFlat(a1, v8, &v12);
  if ( CellPaged )
  {
    *(_DWORD *)(CellPaged + 4 * v5) = a2;
    if ( (*(_BYTE *)(a1 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a1, &v12);
    else
      HvpReleaseCellPaged(a1, &v12);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
