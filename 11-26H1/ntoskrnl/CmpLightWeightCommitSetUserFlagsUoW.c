/*
 * XREFs of CmpLightWeightCommitSetUserFlagsUoW @ 0x140AD9B1C
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1408B4F40 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpLightWeightCommitSetUserFlagsUoW(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  ULONG_PTR v5; // rbx
  __int64 v6; // rdx
  __int64 CellFlat; // rax
  int v8; // r9d
  unsigned int v10; // [rsp+30h] [rbp+8h] BYREF
  int v11; // [rsp+34h] [rbp+Ch]

  v10 = -1;
  v11 = 0;
  v2 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(v2 + 32);
  v6 = *(unsigned int *)(v2 + 40);
  if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v5, v6, &v10);
  else
    CellFlat = HvpGetCellPaged(v5, v6);
  v8 = *(_DWORD *)(a1 + 88);
  *(_DWORD *)(CellFlat + 52) ^= (*(_DWORD *)(CellFlat + 52) ^ (v8 << 16)) & 0xF0000;
  *(_DWORD *)(*(_QWORD *)(a1 + 48) + 184LL) ^= ((unsigned __int8)v8 ^ (unsigned __int8)*(_DWORD *)(*(_QWORD *)(a1 + 48)
                                                                                                 + 184LL)) & 0xF;
  *(_QWORD *)(CellFlat + 4) = *a2;
  ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 304LL);
  if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
    return HvpReleaseCellFlat(v5, (__int64)&v10);
  else
    return HvpReleaseCellPaged(v5, &v10);
}
