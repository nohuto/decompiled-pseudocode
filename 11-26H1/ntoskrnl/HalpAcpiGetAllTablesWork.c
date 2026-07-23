/*
 * XREFs of HalpAcpiGetAllTablesWork @ 0x14057BAAC
 * Callers:
 *     HalpAcpiGetAllTables @ 0x140504F10 (HalpAcpiGetAllTables.c)
 * Callees:
 *     HalpAcpiGetTableWork @ 0x140344BEC (HalpAcpiGetTableWork.c)
 *     HalpAcpiCheckAndMapTable @ 0x1403453F0 (HalpAcpiCheckAndMapTable.c)
 *     MiUnmapContiguousMemory @ 0x1403456A8 (MiUnmapContiguousMemory.c)
 *     HalpAcpiCopyBiosTable @ 0x140527B1C (HalpAcpiCopyBiosTable.c)
 *     HalpAcpiAllocateMemory @ 0x140527BBC (HalpAcpiAllocateMemory.c)
 *     HalpAcpiCacheTable @ 0x14057BA40 (HalpAcpiCacheTable.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalpAcpiGetAllTablesWork(__int64 a1)
{
  unsigned int v1; // edi
  __int64 TableWork; // rax
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned int v11; // r13d
  unsigned int *v12; // r15
  __int64 *v13; // r12
  __int64 v14; // rbx
  unsigned int *v15; // rax
  char *v16; // rbx
  __int64 v17; // rax
  int v18; // esi
  int v19; // ecx
  _DWORD *Memory; // rax
  _DWORD *v21; // rbx
  __int64 i; // rcx
  int v23; // eax
  __int64 v24; // rax
  unsigned int v26; // [rsp+80h] [rbp+8h] BYREF
  int v27; // [rsp+84h] [rbp+Ch]
  unsigned int *v28; // [rsp+88h] [rbp+10h]

  v27 = HIDWORD(a1);
  v1 = 0;
  v26 = 0;
  if ( !HalpAcpiTablePointers )
  {
    TableWork = HalpAcpiGetTableWork(0LL, 0x54445358u, 0LL, 0LL);
    v3 = TableWork;
    if ( TableWork )
    {
      v9 = *(unsigned int *)(TableWork + 4);
      v10 = 36LL;
      v5 = 0LL;
      if ( (unsigned int)v9 < 0x24 )
        v10 = (unsigned int)v9;
      v8 = (unsigned __int64)(v9 - v10) >> 3;
    }
    else
    {
      v4 = HalpAcpiGetTableWork(0LL, 0x54445352u, 0LL, 0LL);
      v5 = v4;
      if ( !v4 )
        return HalpAcpiTablePointers;
      v6 = *(unsigned int *)(v4 + 4);
      v7 = 36LL;
      if ( (unsigned int)v6 < 0x24 )
        v7 = (unsigned int)v6;
      v8 = (unsigned __int64)(v6 - v7) >> 2;
    }
    v11 = 0;
    if ( (_DWORD)v8 )
    {
      v12 = (unsigned int *)(v5 + 36);
      v13 = (__int64 *)(v3 + 36);
      do
      {
        if ( v3 )
          v14 = *v13;
        else
          v14 = *v12;
        v15 = (unsigned int *)HalpAcpiCheckAndMapTable(0LL, v14, 0x24u, 0, 0LL, 0LL, 1, &v26);
        v28 = v15;
        if ( v15 )
        {
          v16 = HalpAcpiCopyBiosTable(0LL, v15, v14);
          MiUnmapContiguousMemory((unsigned __int64)v28, v26, 1);
          if ( v16 )
            HalpAcpiCacheTable(0LL, (__int64)v16);
        }
        ++v11;
        ++v12;
        ++v13;
      }
      while ( v11 < (unsigned int)v8 );
    }
    v17 = HalpAcpiTableCacheList;
    v18 = 0;
    while ( (__int64 *)v17 != &HalpAcpiTableCacheList )
    {
      v19 = *(_DWORD *)(v17 + 24);
      if ( v19 != 1413763922 && v19 != 1413763928 && v19 != 1396916550 && v19 != 1413763908 )
        ++v18;
      v17 = *(_QWORD *)v17;
    }
    Memory = (_DWORD *)HalpAcpiAllocateMemory(0LL, 8 * v18 + 8);
    v21 = Memory;
    if ( Memory )
    {
      memset_0(Memory, 0, (unsigned int)(8 * v18 + 8));
      *v21 = v18;
      for ( i = HalpAcpiTableCacheList; (__int64 *)i != &HalpAcpiTableCacheList; i = *(_QWORD *)i )
      {
        v23 = *(_DWORD *)(i + 24);
        if ( v23 != 1413763922 && v23 != 1413763928 && v23 != 1396916550 && v23 != 1413763908 )
        {
          v24 = v1++;
          *(_QWORD *)&v21[2 * v24 + 2] = i + 24;
        }
      }
      HalpAcpiTablePointers = (__int64)v21;
    }
  }
  return HalpAcpiTablePointers;
}
