/*
 * XREFs of CmpLightWeightCommitDeleteValueKeyUoW @ 0x140AAFA18
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1408B4F40 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1408C8684 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpFreeValue @ 0x1408D71B4 (CmpFreeValue.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x140AAFCD4 (CmpLightWeightCleanupSetValueKeyUoW.c)
 */

__int64 __fastcall CmpLightWeightCommitDeleteValueKeyUoW(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  ULONG_PTR v6; // rbx
  __int64 v7; // rdx
  __int64 CellFlat; // rax
  __int64 v9; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // r8d
  unsigned int v14; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+54h] [rbp+Ch]

  v2 = *(_QWORD *)(a1 + 104);
  v15 = 0;
  v14 = -1;
  v3 = *(_QWORD *)(a1 + 48);
  v6 = *(_QWORD *)(v3 + 32);
  v7 = *(unsigned int *)(v3 + 40);
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v6, v7, &v14);
  else
    CellFlat = HvpGetCellPaged(v6, v7);
  v9 = CellFlat;
  CmpFreeValue(v6, *(unsigned int *)(*(_QWORD *)(a1 + 112) + 4LL));
  CmpFreeTransientPoolWithTag(*(void **)(a1 + 112), 0x77554D43u);
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(v9 + 4) = *a2;
  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 168LL) = *a2;
  ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 304LL);
  if ( *(_DWORD *)v2 == 1 )
  {
    v11 = *(_QWORD *)(v9 + 36);
    *(_QWORD *)(v9 + 36) = *(_QWORD *)(v2 + 4);
    *(_QWORD *)(v2 + 4) = v11;
    CmpCleanUpKcbCachedSymlink(*(_QWORD *)(a1 + 48));
    v12 = *(_QWORD *)(a1 + 48);
    v13 = *(_DWORD *)(v9 + 40);
    *(_DWORD *)(v12 + 96) = *(_DWORD *)(v9 + 36);
    *(_DWORD *)(v12 + 100) = v13;
    if ( !*(_DWORD *)(v9 + 36) )
    {
      *(_QWORD *)(v9 + 60) = 0LL;
      *(_WORD *)(*(_QWORD *)(a1 + 48) + 178LL) = 0;
      *(_DWORD *)(*(_QWORD *)(a1 + 48) + 180LL) = 0;
    }
  }
  CmpLightWeightCleanupSetValueKeyUoW(v6, v2);
  *(_QWORD *)(a1 + 104) = 0LL;
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    return HvpReleaseCellFlat(v6, (__int64)&v14);
  else
    return HvpReleaseCellPaged(v6, &v14);
}
