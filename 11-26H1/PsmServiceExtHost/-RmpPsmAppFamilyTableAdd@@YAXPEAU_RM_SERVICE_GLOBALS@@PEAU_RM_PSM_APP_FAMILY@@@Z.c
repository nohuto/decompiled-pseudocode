/*
 * XREFs of ?RmpPsmAppFamilyTableAdd@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180031D98
 * Callers:
 *     ?RmpPsmAppFamilyTableFindOrCreate@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180032778 (-RmpPsmAppFamilyTableFindOrCreate@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 */

void __fastcall RmpPsmAppFamilyTableAdd(struct _RM_SERVICE_GLOBALS *a1, struct _RM_PSM_APP_FAMILY *a2)
{
  unsigned __int64 v2; // rsi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  char *Heap; // r8
  unsigned __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // r9
  void *v12; // rcx
  char v13; // cl
  __int64 v14; // r14
  _QWORD *v15; // r10
  __int64 v16; // rdx
  __int64 v17; // [rsp+50h] [rbp+8h]
  __int64 v18; // [rsp+50h] [rbp+8h]

  v2 = (unsigned __int64)a1 + 3368;
  v5 = (unsigned int)(2 * (*((_DWORD *)a1 + 843) >> 5));
  if ( *((_DWORD *)a1 + 842) >= (unsigned int)v5 )
  {
    if ( (unsigned int)v5 < 4 )
      v5 = 4LL;
    Heap = (char *)HampAllocateHeap(8LL * (unsigned int)v5);
    if ( Heap )
    {
      if ( (((_DWORD)v5 - 1) & (unsigned int)v5) != 0 )
      {
        v13 = -1;
        do
        {
          ++v13;
          LODWORD(v5) = (unsigned int)v5 >> 1;
        }
        while ( (_DWORD)v5 );
        v5 = (unsigned int)(1 << v13);
      }
      if ( (unsigned int)v5 > 0x4000000 )
        v5 = 0x4000000LL;
      v9 = (unsigned int)v5;
      if ( Heap > &Heap[8 * v5] )
        v9 = 0LL;
      if ( v9 )
        memset64(Heap, v2 | 1, v9);
      v10 = 0;
      v11 = -1LL << (*(_BYTE *)(v2 + 4) & 0x1F);
      if ( (*(_DWORD *)(v2 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v14 = *(_QWORD *)(v2 + 8);
          while ( 1 )
          {
            v15 = *(_QWORD **)(v14 + 8LL * v10);
            if ( ((unsigned __int8)v15 & 1) != 0 )
              break;
            *(_QWORD *)(v14 + 8LL * v10) = *v15;
            v18 = v11 & v15[1];
            v16 = ((_DWORD)v5 - 1) & (HIBYTE(v18)
                                    + 37
                                    * (BYTE6(v18)
                                     + 37
                                     * (BYTE5(v18)
                                      + 37
                                      * (BYTE4(v18)
                                       + 37
                                       * (BYTE3(v18)
                                        + 374026047
                                        + 37
                                        * (BYTE2(v18) + 37 * (BYTE1(v18) + 37 * (unsigned int)(unsigned __int8)v18)))))));
            *v15 = *(_QWORD *)&Heap[8 * v16];
            *(_QWORD *)&Heap[8 * v16] = v15;
          }
          ++v10;
        }
        while ( v10 < *(_DWORD *)(v2 + 4) >> 5 );
      }
      v12 = *(void **)(v2 + 8);
      *(_QWORD *)(v2 + 8) = Heap;
      *(_DWORD *)(v2 + 4) = (32 * v5) | *(_DWORD *)(v2 + 4) & 0x1F;
      if ( v12 )
        HampFreeHeap(v12);
    }
  }
  v17 = *((_QWORD *)a2 + 1) & (-1LL << (*((_DWORD *)a1 + 843) & 0x1F));
  v6 = *((_QWORD *)a1 + 422);
  v7 = ((*((_DWORD *)a1 + 843) >> 5) - 1) & (HIBYTE(v17)
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
                                               * (BYTE2(v17)
                                                + 37 * (BYTE1(v17) + 37 * (unsigned int)(unsigned __int8)v17)))))));
  *(_QWORD *)a2 = *(_QWORD *)(v6 + 8 * v7);
  *(_QWORD *)(v6 + 8 * v7) = a2;
  ++*((_DWORD *)a1 + 842);
}
