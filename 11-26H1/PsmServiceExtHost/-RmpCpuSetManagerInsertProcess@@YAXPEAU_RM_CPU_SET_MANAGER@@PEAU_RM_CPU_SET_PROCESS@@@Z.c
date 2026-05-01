/*
 * XREFs of ?RmpCpuSetManagerInsertProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x180085860
 * Callers:
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x1800862DC (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 */

void __fastcall RmpCpuSetManagerInsertProcess(struct _RM_CPU_SET_MANAGER *a1, struct _RM_CPU_SET_PROCESS *a2)
{
  unsigned __int64 v2; // rsi
  int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rbx
  char *Heap; // r8
  char v9; // cl
  unsigned __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // rbp
  __int64 v13; // r11
  _QWORD *v14; // r9
  __int64 v15; // rdx
  void *v16; // rcx
  __int64 v17; // [rsp+40h] [rbp+8h]
  __int64 v18; // [rsp+40h] [rbp+8h]

  v2 = (unsigned __int64)a1 + 72;
  v4 = *((_DWORD *)a1 + 19) >> 5;
  v17 = *((_QWORD *)a2 + 1) & (-1LL << (*((_DWORD *)a1 + 19) & 0x1F));
  v5 = *((_QWORD *)a1 + 10);
  v6 = (v4 - 1) & (HIBYTE(v17)
                 + 37
                 * (BYTE6(v17)
                  + 37
                  * (BYTE5(v17)
                   + 37
                   * (BYTE4(v17)
                    + 37
                    * (BYTE3(v17)
                     + 374026047
                     + 37 * (BYTE2(v17) + 37 * (BYTE1(v17) + 37 * (unsigned int)(unsigned __int8)v17)))))));
  *(_QWORD *)a2 = *(_QWORD *)(v5 + 8 * v6);
  *(_QWORD *)(v5 + 8 * v6) = a2;
  ++*(_DWORD *)v2;
  v7 = (unsigned int)(2 * (*(_DWORD *)(v2 + 4) >> 5));
  if ( *(_DWORD *)v2 >= (unsigned int)v7 )
  {
    if ( (unsigned int)v7 < 4 )
      v7 = 4LL;
    Heap = (char *)HampAllocateHeap(8LL * (unsigned int)v7);
    if ( Heap )
    {
      if ( (((_DWORD)v7 - 1) & (unsigned int)v7) != 0 )
      {
        v9 = -1;
        do
        {
          ++v9;
          LODWORD(v7) = (unsigned int)v7 >> 1;
        }
        while ( (_DWORD)v7 );
        v7 = (unsigned int)(1 << v9);
      }
      if ( (unsigned int)v7 > 0x4000000 )
        v7 = 0x4000000LL;
      v10 = (unsigned int)v7;
      if ( Heap > &Heap[8 * v7] )
        v10 = 0LL;
      if ( v10 )
        memset64(Heap, v2 | 1, v10);
      v11 = 0;
      v12 = -1LL << (*(_BYTE *)(v2 + 4) & 0x1F);
      if ( (*(_DWORD *)(v2 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v13 = *(_QWORD *)(v2 + 8);
          while ( 1 )
          {
            v14 = *(_QWORD **)(v13 + 8LL * v11);
            if ( ((unsigned __int8)v14 & 1) != 0 )
              break;
            *(_QWORD *)(v13 + 8LL * v11) = *v14;
            v18 = v12 & v14[1];
            v15 = ((_DWORD)v7 - 1) & (HIBYTE(v18)
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
            *v14 = *(_QWORD *)&Heap[8 * v15];
            *(_QWORD *)&Heap[8 * v15] = v14;
          }
          ++v11;
        }
        while ( v11 < *(_DWORD *)(v2 + 4) >> 5 );
      }
      v16 = *(void **)(v2 + 8);
      *(_QWORD *)(v2 + 8) = Heap;
      *(_DWORD *)(v2 + 4) = *(_DWORD *)(v2 + 4) & 0x1F | (32 * v7);
      if ( v16 )
        HampFreeHeap(v16);
    }
  }
}
