/*
 * XREFs of ?RmpObjectTableAddObjectWithLock@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x18005979C
 * Callers:
 *     ?RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800594C0 (-RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectTableAddObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x180059744 (-RmpObjectTableAddObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 */

void __fastcall RmpObjectTableAddObjectWithLock(unsigned __int64 a1, struct _RM_OBJECT_HEADER *a2)
{
  __int64 v3; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  char *Heap; // r8
  unsigned __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // r9
  void *v11; // rcx
  char v12; // cl
  __int64 v13; // r14
  _QWORD *v14; // r10
  __int64 v15; // rdx
  __int64 v16; // [rsp+50h] [rbp+8h]
  __int64 v17; // [rsp+50h] [rbp+8h]

  v3 = (unsigned int)(2 * (*(_DWORD *)(a1 + 4) >> 5));
  if ( *(_DWORD *)a1 >= (unsigned int)v3 )
  {
    if ( (unsigned int)v3 < 4 )
      v3 = 4LL;
    Heap = (char *)HampAllocateHeap(8LL * (unsigned int)v3);
    if ( Heap )
    {
      if ( (((_DWORD)v3 - 1) & (unsigned int)v3) != 0 )
      {
        v12 = -1;
        do
        {
          ++v12;
          LODWORD(v3) = (unsigned int)v3 >> 1;
        }
        while ( (_DWORD)v3 );
        v3 = (unsigned int)(1 << v12);
      }
      if ( (unsigned int)v3 > 0x4000000 )
        v3 = 0x4000000LL;
      v8 = (unsigned int)v3;
      if ( Heap > &Heap[8 * v3] )
        v8 = 0LL;
      if ( v8 )
        memset64(Heap, a1 | 1, v8);
      v9 = 0;
      v10 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
      if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v13 = *(_QWORD *)(a1 + 8);
          while ( 1 )
          {
            v14 = *(_QWORD **)(v13 + 8LL * v9);
            if ( ((unsigned __int8)v14 & 1) != 0 )
              break;
            *(_QWORD *)(v13 + 8LL * v9) = *v14;
            v17 = v10 & v14[1];
            v15 = ((_DWORD)v3 - 1) & (HIBYTE(v17)
                                    + 37
                                    * (BYTE6(v17)
                                     + 37
                                     * (BYTE5(v17)
                                      + 37
                                      * (BYTE4(v17)
                                       + 37
                                       * (BYTE3(v17)
                                        + 374026047
                                        + 37
                                        * (BYTE2(v17) + 37 * (BYTE1(v17) + 37 * (unsigned int)(unsigned __int8)v17)))))));
            *v14 = *(_QWORD *)&Heap[8 * v15];
            *(_QWORD *)&Heap[8 * v15] = v14;
          }
          ++v9;
        }
        while ( v9 < *(_DWORD *)(a1 + 4) >> 5 );
      }
      v11 = *(void **)(a1 + 8);
      *(_QWORD *)(a1 + 8) = Heap;
      *(_DWORD *)(a1 + 4) = (32 * v3) | *(_DWORD *)(a1 + 4) & 0x1F;
      if ( v11 )
        HampFreeHeap(v11);
    }
  }
  v16 = *((_QWORD *)a2 + 1) & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
  v5 = *(_QWORD *)(a1 + 8);
  v6 = ((*(_DWORD *)(a1 + 4) >> 5) - 1) & (HIBYTE(v16)
                                         + 37
                                         * (BYTE6(v16)
                                          + 37
                                          * (BYTE5(v16)
                                           + 37
                                           * (BYTE4(v16)
                                            + 37
                                            * (BYTE3(v16)
                                             + 374026047
                                             + 37
                                             * (BYTE2(v16) + 37 * (BYTE1(v16) + 37 * (unsigned int)(unsigned __int8)v16)))))));
  *(_QWORD *)a2 = *(_QWORD *)(v5 + 8 * v6);
  *(_QWORD *)(v5 + 8 * v6) = a2;
  ++*(_DWORD *)a1;
}
