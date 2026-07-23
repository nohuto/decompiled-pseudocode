/*
 * XREFs of CmpSnapshotTxOwnerArray @ 0x1408D6890
 * Callers:
 *     CmDeleteKey @ 0x1408C1360 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1408C1D50 (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1408C45DC (CmpSetKeySecurity.c)
 *     CmSetValueKey @ 0x1408D53E0 (CmSetValueKey.c)
 *     CmpCreateChild @ 0x1408E5A60 (CmpCreateChild.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpSnapshotTxOwnerArray(int *a1, _DWORD *a2, void ***a3)
{
  int v3; // eax
  __int64 v4; // rbx
  __int64 v9; // rdi
  void **Pool2; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  void *v13; // rcx
  __int64 v14; // rbp
  void **v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  void *v18; // rcx

  v3 = *a1;
  v4 = 0LL;
  if ( !*a1 )
    return 3221225485LL;
  *a2 = 0;
  v9 = v3 & 0x7FFFFFFF;
  Pool2 = (void **)ExAllocatePool2(0x100uLL);
  *a3 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  if ( (_DWORD)v9 == 1 )
  {
    v11 = *((_QWORD *)a1 + 1);
    v12 = *(_QWORD *)(v11 + 56);
    if ( (*(_DWORD *)(v12 + 48) & 0x80u) == 0 )
    {
      *Pool2 = *(void **)(v12 + 72);
      v13 = **a3;
    }
    else
    {
      *Pool2 = *(void **)(v12 + 56);
      v13 = (void *)(*(_QWORD *)(*(_QWORD *)(v11 + 56) + 56LL) & 0xFFFFFFFFFFFFFFFEuLL);
    }
    PsReferenceSiloContext(v13);
  }
  else if ( (_DWORD)v9 )
  {
    v14 = v9;
    do
    {
      v15 = *a3;
      v16 = *(_QWORD *)(*((_QWORD *)a1 + 1) + v4 * 8);
      v17 = *(_QWORD *)(v16 + 56);
      if ( (*(_DWORD *)(v17 + 48) & 0x80u) == 0 )
      {
        v15[v4] = *(void **)(v17 + 72);
        v18 = (*a3)[v4];
      }
      else
      {
        v15[v4] = *(void **)(v17 + 56);
        v18 = (void *)(*(_QWORD *)(*(_QWORD *)(v16 + 56) + 56LL) & 0xFFFFFFFFFFFFFFFEuLL);
      }
      PsReferenceSiloContext(v18);
      ++v4;
      --v14;
    }
    while ( v14 );
  }
  *a2 = v9;
  return 0LL;
}
