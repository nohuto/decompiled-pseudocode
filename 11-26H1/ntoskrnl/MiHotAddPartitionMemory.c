/*
 * XREFs of MiHotAddPartitionMemory @ 0x14087BE70
 * Callers:
 *     MmManagePartitionInitialAddMemory @ 0x14087D018 (MmManagePartitionInitialAddMemory.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x14030C5E0 (RtlAvlRemoveNode.c)
 *     RtlAreBitsClearEx @ 0x140431D80 (RtlAreBitsClearEx.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1405C7CF8 (IoUpdateDumpPhysicalRanges.c)
 *     MiActOnPartitionNodePages @ 0x140707C4C (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x14070821C (MiAddRangeToPartitionTree.c)
 *     MiDeletePartitionPageNode @ 0x140708AD4 (MiDeletePartitionPageNode.c)
 *     MiFreePartitionTree @ 0x140708D7C (MiFreePartitionTree.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     MiInsertPartitionPages @ 0x14087C1C4 (MiInsertPartitionPages.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x14087CD4C (MiUpdatePartitionLargePfnBitMap.c)
 */

__int64 __fastcall MiHotAddPartitionMemory(ULONG *a1, __int64 *a2, unsigned int *a3)
{
  unsigned int *v4; // r13
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r14
  unsigned int v9; // eax
  unsigned int v10; // r12d
  int v11; // r15d
  int updated; // esi
  ULONG *v13; // r12
  __int64 v15; // rbx
  unsigned int i; // edi
  unsigned __int64 v17; // r8
  int v18; // eax
  int v19; // edi
  int v20; // edi
  int v21; // r15d
  int v22; // r15d
  _QWORD *v23; // rbx
  _QWORD *v24; // rax
  unsigned int v25; // r12d
  int v26; // r13d
  _QWORD **v27; // rcx
  __int64 v28; // r14
  _QWORD *v29; // rax
  _QWORD *j; // rcx
  int v31; // eax
  _QWORD *v32; // [rsp+28h] [rbp-69h] BYREF
  int v33; // [rsp+30h] [rbp-61h]
  int v34; // [rsp+38h] [rbp-59h]
  __int128 v35; // [rsp+40h] [rbp-51h] BYREF
  __int128 v36; // [rsp+50h] [rbp-41h]
  _QWORD v37[2]; // [rsp+68h] [rbp-29h] BYREF
  char v38; // [rsp+78h] [rbp-19h]
  unsigned int v39; // [rsp+7Ch] [rbp-15h]
  int v40; // [rsp+80h] [rbp-11h]
  __int64 v41; // [rsp+98h] [rbp+7h]
  __int64 v42; // [rsp+A0h] [rbp+Fh]
  unsigned int v45; // [rsp+110h] [rbp+7Fh]

  v4 = a3;
  v35 = 0LL;
  v36 = 0LL;
  memset_0(v37, 0, 0x48uLL);
  v7 = *v4;
  v45 = 14;
  v32 = 0LL;
  if ( (v7 & 0x20) != 0 )
  {
    v8 = 512LL;
  }
  else
  {
    v8 = 0x40000LL;
    if ( (v7 & 0x40) == 0 )
    {
      v9 = 0;
      if ( (v7 & 4) != 0 )
        v9 = 0x40000;
      v8 = v9;
    }
  }
  v10 = v4[1];
  *((_QWORD *)v4 + 1) = 0LL;
  if ( (v7 & 1) != 0 )
  {
    v11 = 1;
  }
  else
  {
    if ( (v7 & 4) != 0 )
    {
      updated = -1073741584;
LABEL_11:
      v13 = a1;
      goto LABEL_12;
    }
    v11 = 0;
  }
  v15 = 0LL;
  for ( i = 0; i < v10; ++i )
  {
    v17 = a2[1];
    v15 += v17;
    if ( !(unsigned int)MiAddRangeToPartitionTree((unsigned __int64 *)&v32, *a2, v17, 0) )
    {
      updated = -1073741670;
      goto LABEL_11;
    }
    a2 += 2;
  }
  v18 = *v4;
  v13 = a1;
  if ( (*v4 & 4) != 0 )
  {
    v38 = 1;
    v39 = (v18 & 2 | 4u) >> 1;
  }
  else
  {
    updated = MiUpdatePartitionLargePfnBitMap(a1, &v32);
    if ( updated < 0 )
      goto LABEL_12;
  }
  v19 = DWORD2(v36);
  updated = 0;
  if ( v11 )
  {
    v21 = *v4;
    v33 = 4 * (*v4 & 8);
    v22 = v21 & 2;
    if ( !v22 )
      v19 = DWORD2(v36) | 0x40;
    v37[0] = a1;
    v42 = v8;
    v20 = v19 | 0x80;
    v34 = v20;
    v45 = 12 - (v22 != 0);
    v23 = 0LL;
    v24 = v32;
    DWORD2(v36) = v20;
    while ( v24 )
    {
      v23 = v24;
      v24 = (_QWORD *)*v24;
    }
    if ( v23 )
    {
      v25 = v33;
      v26 = 0;
      do
      {
        v27 = (_QWORD **)v23[1];
        v28 = (__int64)v23;
        v29 = v23;
        if ( v27 )
        {
          v23 = (_QWORD *)v23[1];
          for ( j = *v27; j; j = (_QWORD *)*j )
            v23 = j;
        }
        else
        {
          while ( 1 )
          {
            v23 = (_QWORD *)(v23[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v23 || (_QWORD *)*v23 == v29 )
              break;
            v29 = v23;
          }
        }
        if ( !v26 )
        {
          MiActOnPartitionNodePages(v28, v45, v25, (__int64)v37);
          if ( v40 < 0 )
          {
            updated = v40;
            if ( v22 && RtlAreBitsClearEx((unsigned __int64 *)(v28 + 32), 0LL, *(_QWORD *)(v28 + 32)) )
              v23 = (_QWORD *)v28;
            v26 = 1;
          }
          if ( v22 )
            continue;
        }
        RtlAvlRemoveNode((unsigned __int64 *)&v32, v28);
        MiDeletePartitionPageNode((PVOID *)v28);
      }
      while ( v23 );
      v20 = v34;
      v4 = a3;
      v13 = a1;
    }
    v15 = v41;
    if ( v41 )
    {
      IoUpdateDumpPhysicalRanges(v5, v7, v6);
      goto LABEL_51;
    }
LABEL_12:
    MiFreePartitionTree((__int64)v13, (unsigned __int64 *)&v32, 0, 0);
    return (unsigned int)updated;
  }
  v20 = DWORD2(v36) | 2;
  DWORD2(v36) |= 2u;
LABEL_51:
  v31 = *v4;
  if ( (*v4 & 2) == 0 )
    DWORD2(v36) = v20 | 1;
  *(_QWORD *)&v35 = &v32;
  if ( (v31 & 4) != 0 || v13 == &MiSystemPartition )
  {
    MiFreePartitionTree((__int64)v13, (unsigned __int64 *)&v32, 0, 0);
  }
  else if ( v45 != 12 )
  {
    MiInsertPartitionPages(&MiSystemPartition, v13, &v35, v15);
  }
  *((_QWORD *)v4 + 1) = v15;
  return (unsigned int)updated;
}
