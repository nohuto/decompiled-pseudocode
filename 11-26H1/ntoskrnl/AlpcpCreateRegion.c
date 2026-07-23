/*
 * XREFs of AlpcpCreateRegion @ 0x1408F19C0
 * Callers:
 *     AlpcpCreateSectionView @ 0x1408F1878 (AlpcpCreateSectionView.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     AlpcpAllocateBlob @ 0x1408F1B80 (AlpcpAllocateBlob.c)
 *     AlpcpReferenceBlob @ 0x14098FE98 (AlpcpReferenceBlob.c)
 */

__int64 __fastcall AlpcpCreateRegion(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rbx
  unsigned __int64 v8; // r12
  __int64 v9; // rcx
  unsigned __int64 v10; // r14
  _QWORD *v11; // rsi
  _QWORD *v12; // rcx
  _QWORD *v13; // rdx
  unsigned __int64 v14; // r9
  __int64 v15; // r8
  _QWORD *Blob; // rax
  _QWORD *v17; // rdi
  _QWORD *v18; // rax
  __int64 v20; // r10
  unsigned __int64 v21; // rax
  __int64 v22; // rbx

  CurrentThread = KeGetCurrentThread();
  v6 = a2;
  *a4 = 0LL;
  if ( *(_KPROCESS **)(BugCheckParameter2 + 32) != CurrentThread->ApcState.Process )
    return 3221225506LL;
  v8 = ~((unsigned int)AlpcpViewGranularity - 1LL) & (a3 + (unsigned int)(AlpcpViewGranularity - 1));
  v9 = ~((unsigned int)AlpcpRegionGranularity - 1LL);
  v10 = v9 & ((unsigned int)(AlpcpRegionGranularity - 1) + a3);
  if ( v8 < a3 || v10 < a3 )
    return 3221225485LL;
  v11 = (_QWORD *)(BugCheckParameter2 + 56);
  if ( a2 )
  {
    v6 = v9 & ((unsigned int)(AlpcpRegionGranularity - 1) + a2);
  }
  else
  {
    v12 = (_QWORD *)*v11;
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    while ( v12 != v11 )
    {
      v20 = v12[3];
      v21 = v20 - v6;
      if ( v20 - v6 == v10 )
      {
        v11 = v12;
        goto LABEL_9;
      }
      if ( v21 > v10 && (!v13 || v14 > v21) )
      {
        v13 = v12;
        v15 = v6;
        v14 = v12[3] - v6;
      }
      v22 = v12[4];
      v12 = (_QWORD *)*v12;
      v6 = v20 + v22;
    }
    if ( v13 )
    {
      v11 = v13;
      v6 = v15;
    }
    else if ( *(_QWORD *)(BugCheckParameter2 + 8) - v6 < v10 )
    {
      return 3221225626LL;
    }
  }
LABEL_9:
  Blob = (_QWORD *)AlpcpAllocateBlob(AlpcRegionType, 88LL, 0LL);
  v17 = Blob;
  if ( !Blob )
    return 3221225626LL;
  memset_0(Blob, 0, 0x58uLL);
  v17[8] = v17 + 7;
  v17[7] = v17 + 7;
  *((_DWORD *)v17 + 12) &= ~1u;
  v17[3] = v6;
  v17[4] = v10;
  v17[5] = v8;
  AlpcpReferenceBlob(BugCheckParameter2);
  v17[2] = BugCheckParameter2;
  v17[1] = v11[1];
  *v17 = v11;
  v18 = (_QWORD *)v11[1];
  *a4 = v17;
  *v18 = v17;
  v11[1] = v17;
  ++*(_DWORD *)(BugCheckParameter2 + 52);
  return 0LL;
}
