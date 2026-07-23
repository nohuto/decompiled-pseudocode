/*
 * XREFs of MiHotAddPartitionMemory @ 0x140882270
 * Callers:
 *     MmManagePartitionInitialAddMemory @ 0x140883418 (MmManagePartitionInitialAddMemory.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     RtlAreBitsClearEx @ 0x14041EDB0 (RtlAreBitsClearEx.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1405CA5C8 (IoUpdateDumpPhysicalRanges.c)
 *     MiActOnPartitionNodePages @ 0x14070C91C (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x14070CED0 (MiAddRangeToPartitionTree.c)
 *     MiDeletePartitionPageNode @ 0x14070D788 (MiDeletePartitionPageNode.c)
 *     MiFreePartitionTree @ 0x14070DA30 (MiFreePartitionTree.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiInsertPartitionPages @ 0x1408825C4 (MiInsertPartitionPages.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x14088314C (MiUpdatePartitionLargePfnBitMap.c)
 */

__int64 __fastcall MiHotAddPartitionMemory(ULONG *a1, __int64 *a2, int *a3)
{
  int *v4; // r13
  int v5; // edx
  __int64 v6; // r14
  unsigned int v7; // eax
  unsigned int v8; // r12d
  int v9; // r15d
  int updated; // esi
  ULONG *v11; // r12
  __int64 v13; // rbx
  unsigned int i; // edi
  unsigned __int64 v15; // r8
  int v16; // eax
  int v17; // edi
  int v18; // edi
  int v19; // r15d
  int v20; // r15d
  _QWORD *v21; // rbx
  _QWORD *v22; // rax
  unsigned int v23; // r12d
  int v24; // r13d
  _QWORD **v25; // rcx
  __int64 v26; // r14
  _QWORD *v27; // rax
  _QWORD *j; // rcx
  int v29; // eax
  _QWORD *v30; // [rsp+28h] [rbp-69h] BYREF
  int v31; // [rsp+30h] [rbp-61h]
  int v32; // [rsp+38h] [rbp-59h]
  __int128 v33; // [rsp+40h] [rbp-51h] BYREF
  __int128 v34; // [rsp+50h] [rbp-41h]
  _QWORD v35[2]; // [rsp+68h] [rbp-29h] BYREF
  char v36; // [rsp+78h] [rbp-19h]
  unsigned int v37; // [rsp+7Ch] [rbp-15h]
  int v38; // [rsp+80h] [rbp-11h]
  __int64 v39; // [rsp+98h] [rbp+7h]
  __int64 v40; // [rsp+A0h] [rbp+Fh]
  unsigned int v43; // [rsp+110h] [rbp+7Fh]

  v4 = a3;
  v33 = 0LL;
  v34 = 0LL;
  memset_0(v35, 0, 0x48uLL);
  v5 = *v4;
  v43 = 14;
  v30 = 0LL;
  if ( (v5 & 0x20) != 0 )
  {
    v6 = 512LL;
  }
  else
  {
    v6 = 0x40000LL;
    if ( (v5 & 0x40) == 0 )
    {
      v7 = 0;
      if ( (v5 & 4) != 0 )
        v7 = 0x40000;
      v6 = v7;
    }
  }
  v8 = v4[1];
  *((_QWORD *)v4 + 1) = 0LL;
  if ( (v5 & 1) != 0 )
  {
    v9 = 1;
  }
  else
  {
    if ( (v5 & 4) != 0 )
    {
      updated = -1073741584;
LABEL_11:
      v11 = a1;
      goto LABEL_12;
    }
    v9 = 0;
  }
  v13 = 0LL;
  for ( i = 0; i < v8; ++i )
  {
    v15 = a2[1];
    v13 += v15;
    if ( !(unsigned int)MiAddRangeToPartitionTree((unsigned __int64 *)&v30, *a2, v15, 0) )
    {
      updated = -1073741670;
      goto LABEL_11;
    }
    a2 += 2;
  }
  v16 = *v4;
  v11 = a1;
  if ( (*v4 & 4) != 0 )
  {
    v36 = 1;
    v37 = (v16 & 2 | 4u) >> 1;
  }
  else
  {
    updated = MiUpdatePartitionLargePfnBitMap(a1, &v30);
    if ( updated < 0 )
      goto LABEL_12;
  }
  v17 = DWORD2(v34);
  updated = 0;
  if ( v9 )
  {
    v19 = *v4;
    v31 = 4 * (*v4 & 8);
    v20 = v19 & 2;
    if ( !v20 )
      v17 = DWORD2(v34) | 0x40;
    v35[0] = a1;
    v40 = v6;
    v18 = v17 | 0x80;
    v32 = v18;
    v43 = 12 - (v20 != 0);
    v21 = 0LL;
    v22 = v30;
    DWORD2(v34) = v18;
    while ( v22 )
    {
      v21 = v22;
      v22 = (_QWORD *)*v22;
    }
    if ( v21 )
    {
      v23 = v31;
      v24 = 0;
      do
      {
        v25 = (_QWORD **)v21[1];
        v26 = (__int64)v21;
        v27 = v21;
        if ( v25 )
        {
          v21 = (_QWORD *)v21[1];
          for ( j = *v25; j; j = (_QWORD *)*j )
            v21 = j;
        }
        else
        {
          while ( 1 )
          {
            v21 = (_QWORD *)(v21[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v21 || (_QWORD *)*v21 == v27 )
              break;
            v27 = v21;
          }
        }
        if ( !v24 )
        {
          MiActOnPartitionNodePages(v26, v43, v23, v35);
          if ( v38 < 0 )
          {
            updated = v38;
            if ( v20 && RtlAreBitsClearEx((unsigned __int64 *)(v26 + 32), 0LL, *(_QWORD *)(v26 + 32)) )
              v21 = (_QWORD *)v26;
            v24 = 1;
          }
          if ( v20 )
            continue;
        }
        RtlAvlRemoveNode((unsigned __int64 *)&v30, v26);
        MiDeletePartitionPageNode((PVOID *)v26);
      }
      while ( v21 );
      v18 = v32;
      v4 = a3;
      v11 = a1;
    }
    v13 = v39;
    if ( v39 )
    {
      IoUpdateDumpPhysicalRanges();
      goto LABEL_51;
    }
LABEL_12:
    MiFreePartitionTree((__int64)v11, (unsigned __int64 *)&v30, 0, 0);
    return (unsigned int)updated;
  }
  v18 = DWORD2(v34) | 2;
  DWORD2(v34) |= 2u;
LABEL_51:
  v29 = *v4;
  if ( (*v4 & 2) == 0 )
    DWORD2(v34) = v18 | 1;
  *(_QWORD *)&v33 = &v30;
  if ( (v29 & 4) != 0 || v11 == &MiSystemPartition )
  {
    MiFreePartitionTree((__int64)v11, (unsigned __int64 *)&v30, 0, 0);
  }
  else if ( v43 != 12 )
  {
    MiInsertPartitionPages(&MiSystemPartition, v11, &v33, v13);
  }
  *((_QWORD *)v4 + 1) = v13;
  return (unsigned int)updated;
}
