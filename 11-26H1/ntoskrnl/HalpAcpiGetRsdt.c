/*
 * XREFs of HalpAcpiGetRsdt @ 0x140344EE4
 * Callers:
 *     HalpAcpiGetTableFromBios @ 0x140345224 (HalpAcpiGetTableFromBios.c)
 * Callees:
 *     HalpAcpiCheckAndMapTable @ 0x1403453F0 (HalpAcpiCheckAndMapTable.c)
 *     MiUnmapContiguousMemory @ 0x1403456A8 (MiUnmapContiguousMemory.c)
 *     HalpMap @ 0x140345A2C (HalpMap.c)
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 *     HalpFlushTLB @ 0x140524CC4 (HalpFlushTLB.c)
 *     HalpAcpiCopyBiosTable @ 0x140527B1C (HalpAcpiCopyBiosTable.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

_QWORD *__fastcall HalpAcpiGetRsdt(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rdi
  __int64 i; // rax
  __int64 v6; // rcx
  int *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  bool v13; // si
  __int64 v14; // r8
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v19; // rcx
  _QWORD *v20; // rax
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rbx
  void *v24; // rcx
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rbx
  void *v30; // rcx
  unsigned __int64 v31; // rbx
  void *v32; // rcx
  __int64 v33; // [rsp+68h] [rbp+10h] BYREF

  LODWORD(v33) = 0;
  v2 = HalpAcpiTableCacheList;
  v3 = 0LL;
  while ( (__int64 *)v2 != &HalpAcpiTableCacheList )
  {
    if ( *(_DWORD *)(v2 + 24) == 1413763922 )
    {
      v3 = (_QWORD *)(v2 + 24);
      break;
    }
    v2 = *(_QWORD *)v2;
  }
  if ( v3 )
    goto LABEL_14;
  for ( i = HalpAcpiTableCacheList; (__int64 *)i != &HalpAcpiTableCacheList; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 24) == 1413763928 )
    {
      v3 = (_QWORD *)(i + 24);
      break;
    }
  }
  if ( v3 )
  {
LABEL_14:
    v6 = *(v3 - 1);
    if ( v6 )
    {
      v7 = (int *)(a1
                 ? HalpMap(*(v3 - 1), ((*(v3 - 1) & 0xFFFuLL) + 4131) >> 12, 1, 0, 4, 0LL)
                 : MmMapIoSpaceEx(v6, 36LL, 516LL));
      v10 = (unsigned __int64)v7;
      if ( v7 )
      {
        v11 = *v7;
        if ( v11 == 1413763922 || v11 == 1413763928 )
        {
          v13 = memcmp(v3, (const void *)v10, 0x24uLL) == 0;
          if ( a1 )
          {
            v21 = ((v10 & 0xFFF) + 4131) >> 12;
            v22 = v10 + (v21 << 12) - 1;
            if ( v10 >= HalpOriginalHeapStart && v22 >= v10 && v22 <= HalpOriginalHeapEnd )
            {
              v23 = v10 & 0xFFFFFFFFFFFFF000uLL;
              v24 = (void *)(8 * ((v23 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL);
              if ( (_DWORD)v21 )
                memset_0(v24, 0, 8 * v21);
              HalpFlushTLB(v24, v12);
              if ( HalpHeapStart > v23 )
                HalpHeapStart = v23;
            }
          }
          else
          {
            LOBYTE(v14) = 1;
            MiUnmapContiguousMemory(v10, 36LL, v14);
          }
          if ( !v13 )
          {
            v15 = HalpAcpiCheckAndMapTable(a1, *(v3 - 1), 36, 0, 0LL, 0LL, 1, (__int64)&v33);
            v16 = v15;
            if ( v15 )
            {
              v17 = HalpAcpiCopyBiosTable(a1, v15, *(v3 - 1));
              if ( a1 )
              {
                v27 = ((v16 & 0xFFF) + (unsigned int)v33 + 4095LL) >> 12;
                v28 = v16 + ((unsigned __int64)(unsigned int)v27 << 12) - 1;
                if ( v16 >= HalpOriginalHeapStart && v28 >= v16 && v28 <= HalpOriginalHeapEnd )
                {
                  v29 = v16 & 0xFFFFFFFFFFFFF000uLL;
                  v30 = (void *)(8 * ((v29 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL);
                  if ( (_DWORD)v27 )
                    memset_0(v30, 0, 8LL * (unsigned int)v27);
                  HalpFlushTLB(v30, v27);
                  if ( HalpHeapStart > v29 )
                    HalpHeapStart = v29;
                }
              }
              else
              {
                LOBYTE(v18) = 1;
                MiUnmapContiguousMemory(v16, (unsigned int)v33, v18);
              }
              if ( v17 )
              {
                v19 = HalpAcpiTableCacheList;
                v20 = (_QWORD *)(v17 - 24);
                if ( *(__int64 **)(HalpAcpiTableCacheList + 8) != &HalpAcpiTableCacheList )
                  __fastfail(3u);
                *v20 = HalpAcpiTableCacheList;
                v3 = (_QWORD *)v17;
                v20[1] = &HalpAcpiTableCacheList;
                *(_QWORD *)(v19 + 8) = v20;
                HalpAcpiTableCacheList = v17 - 24;
              }
            }
          }
        }
        else if ( a1 )
        {
          v25 = ((v10 & 0xFFF) + 4131) >> 12;
          v26 = v10 + (v25 << 12) - 1;
          if ( v10 >= HalpOriginalHeapStart && v26 >= v10 && v26 <= HalpOriginalHeapEnd )
          {
            v31 = v10 & 0xFFFFFFFFFFFFF000uLL;
            v32 = (void *)(8 * ((v31 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL);
            if ( (_DWORD)v25 )
              memset_0(v32, 0, 8 * v25);
            HalpFlushTLB(v32, v8);
            if ( HalpHeapStart > v31 )
              HalpHeapStart = v31;
          }
        }
        else
        {
          LOBYTE(v9) = 1;
          MiUnmapContiguousMemory(v10, 36LL, v9);
        }
      }
    }
  }
  return v3;
}
