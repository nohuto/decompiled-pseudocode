/*
 * XREFs of CmpLightWeightCommitRecreateKeyUoW @ 0x140A401A0
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1408B4F40 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1408C06E4 (CmpFlushNotifiesOnKeyBodyList.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x140A4026C (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 */

__int64 __fastcall CmpLightWeightCommitRecreateKeyUoW(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rax
  ULONG_PTR v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 CellFlat; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r9
  unsigned int v15; // [rsp+40h] [rbp+8h] BYREF
  int v16; // [rsp+44h] [rbp+Ch]

  v15 = -1;
  v16 = 0;
  v4 = *(_QWORD *)(a1 + 48);
  v7 = *(_QWORD *)(v4 + 32);
  v8 = *(_QWORD *)(v4 + 72);
  v9 = *(unsigned int *)(v8 + 40);
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v7, v9, &v15);
  else
    CellFlat = HvpGetCellPaged(v7, v9);
  *(_QWORD *)(CellFlat + 4) = *a2;
  v11 = *a2;
  ++*(_QWORD *)(v8 + 304);
  *(_QWORD *)(v8 + 168) = v11;
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v7, (__int64)&v15);
  else
    HvpReleaseCellPaged(v7, &v15);
  LOBYTE(v13) = 1;
  CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(*(_QWORD *)(a1 + 48), v12, a3, v13);
  return CmpFlushNotifiesOnKeyBodyList(*(_QWORD *)(a1 + 48), 8LL, a3, 1);
}
