/*
 * XREFs of MxCreateSparsePfnDatabase @ 0x140CFC864
 * Callers:
 *     MiCreatePfnDatabase @ 0x140CF8B98 (MiCreatePfnDatabase.c)
 * Callees:
 *     MxInstallMoreMemory @ 0x1406EC098 (MxInstallMoreMemory.c)
 *     MxAddSmallFreeDescriptorsToFreeList @ 0x140CFB240 (MxAddSmallFreeDescriptorsToFreeList.c)
 *     MxCreateNodeFreeZeroList @ 0x140CFC0E0 (MxCreateNodeFreeZeroList.c)
 *     MxCreatePfnsForPfns @ 0x140CFC488 (MxCreatePfnsForPfns.c)
 *     MxInsertAllUsedRegionsInLoaderTree @ 0x140CFD550 (MxInsertAllUsedRegionsInLoaderTree.c)
 *     MxMapPfnRange @ 0x140CFE128 (MxMapPfnRange.c)
 *     MxReducePhysicalPageCount @ 0x140CFE55C (MxReducePhysicalPageCount.c)
 */

__int64 __fastcall MxCreateSparsePfnDatabase(__int64 a1)
{
  int v1; // esi
  ULONG_PTR v2; // r10
  unsigned int v3; // edi
  __int64 v4; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned __int64 v9; // rbp
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  _QWORD **v13; // rcx
  unsigned __int64 v14; // rax
  _QWORD *i; // rcx
  unsigned int v16; // ebx

  v1 = 3;
  v2 = -1LL;
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 360);
  if ( (v4 & 1) != 0 )
  {
    if ( v4 == 1 )
      v6 = 0LL;
    else
      v6 = v4 ^ ((a1 + 352) | 1);
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 360);
  }
  v7 = 0LL;
  BYTE4(v8) = 0;
  while ( v6 )
  {
    v9 = *(int *)(v6 + 24);
    if ( (_DWORD)v9 == 30 || (unsigned int)v9 <= 0x2C && (v10 = 0x15C580C00048LL, _bittest64(&v10, v9)) )
    {
      if ( v2 == -1LL )
        goto LABEL_32;
    }
    else
    {
      if ( v2 == -1LL )
        goto LABEL_31;
      if ( v7 + v2 == *(_QWORD *)(v6 + 32) )
      {
        if ( ((v8 & 0x100000000LL) == 0 || v1 == 2 || v1 == 24)
          && ((*(_DWORD *)(v6 + 28) & 1) == 0 || (_DWORD)v9 == 2 || (_DWORD)v9 == 24)
          || (v8 & 0x100000000LL) != 0
          && v1 != 2
          && v1 != 24
          && (*(_DWORD *)(v6 + 28) & 1) != 0
          && (v11 = *(_DWORD *)(v6 + 24), v11 != 2)
          && v11 != 24 )
        {
          v7 += *(_QWORD *)(v6 + 40);
          goto LABEL_32;
        }
      }
    }
    if ( !(unsigned int)MxMapPfnRange(v2) )
      goto LABEL_51;
    if ( (unsigned int)v9 > 0x2C || (v12 = 0x15C5C0C00048LL, !_bittest64(&v12, v9)) )
    {
LABEL_31:
      v8 = *(_QWORD *)(v6 + 24);
      v7 = *(_QWORD *)(v6 + 40);
      v1 = v8;
      v2 = *(_QWORD *)(v6 + 32);
      goto LABEL_32;
    }
    v2 = -1LL;
LABEL_32:
    v13 = *(_QWORD ***)(v6 + 8);
    v14 = v6;
    if ( v13 )
    {
      v6 = *(_QWORD *)(v6 + 8);
      for ( i = *v13; i; i = (_QWORD *)*i )
        v6 = (unsigned __int64)i;
    }
    else
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v6 || *(_QWORD *)v6 == v14 )
          break;
        v14 = v6;
      }
    }
  }
  if ( v2 != -1LL && !(unsigned int)MxMapPfnRange(v2)
    || !(unsigned int)MxMapPfnRange(qword_140E2D920 + 1)
    || qword_140E34930 != qword_140E2D920 + 1 && !(unsigned int)MxMapPfnRange(qword_140E34930) )
  {
    goto LABEL_51;
  }
  v16 = 64;
  if ( (unsigned __int16)KeNumberNodes <= 0x40u )
    v16 = (unsigned __int16)KeNumberNodes;
  if ( !(unsigned int)MxCreatePfnsForPfns() )
LABEL_51:
    MxInstallMoreMemory(0);
  if ( v16 )
  {
    do
    {
      MxCreateNodeFreeZeroList(v3);
      MxAddSmallFreeDescriptorsToFreeList(v3++);
    }
    while ( v3 < v16 );
  }
  MxInsertAllUsedRegionsInLoaderTree(a1);
  return MxReducePhysicalPageCount();
}
