/*
 * XREFs of ?RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z @ 0x18008438C
 * Callers:
 *     ?RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180083364 (-RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800847B8 (-RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 */

__int64 __fastcall RmpObjectTableAllocateState(unsigned __int64 a1)
{
  __int64 v2; // rbx
  char *Heap; // rax
  char v4; // r8
  char v5; // cl
  unsigned __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // r10
  __int64 v9; // r14
  _QWORD *v10; // r11
  __int64 v11; // rdx
  void *v12; // rcx
  __int64 v14; // [rsp+40h] [rbp+8h]

  v2 = (unsigned int)(2 * (*(_DWORD *)(a1 + 4) >> 5));
  if ( *(_DWORD *)a1 < (unsigned int)v2 )
    goto LABEL_23;
  if ( (unsigned int)v2 < 4 )
    v2 = 4LL;
  Heap = (char *)HampAllocateHeap(8LL * (unsigned int)v2);
  v4 = 0;
  if ( Heap )
  {
    if ( (((_DWORD)v2 - 1) & (unsigned int)v2) != 0 )
    {
      v5 = -1;
      do
      {
        ++v5;
        LODWORD(v2) = (unsigned int)v2 >> 1;
      }
      while ( (_DWORD)v2 );
      v2 = (unsigned int)(1 << v5);
    }
    if ( (unsigned int)v2 > 0x4000000 )
      v2 = 0x4000000LL;
    v6 = (unsigned int)v2;
    if ( Heap > &Heap[8 * v2] )
      v6 = 0LL;
    if ( v6 )
      memset64(Heap, a1 | 1, v6);
    v7 = 0;
    v8 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
    if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v9 = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          v10 = *(_QWORD **)(v9 + 8LL * v7);
          if ( ((unsigned __int8)v10 & 1) != 0 )
            break;
          *(_QWORD *)(v9 + 8LL * v7) = *v10;
          v14 = v8 & v10[1];
          v11 = ((_DWORD)v2 - 1) & (HIBYTE(v14)
                                  + 37
                                  * (BYTE6(v14)
                                   + 37
                                   * (BYTE5(v14)
                                    + 37
                                    * (BYTE4(v14)
                                     + 37
                                     * (BYTE3(v14)
                                      + 374026047
                                      + 37 * (BYTE2(v14) + 37 * (BYTE1(v14) + 37 * (unsigned int)(unsigned __int8)v14)))))));
          *v10 = *(_QWORD *)&Heap[8 * v11];
          *(_QWORD *)&Heap[8 * v11] = v10;
        }
        ++v7;
      }
      while ( v7 < *(_DWORD *)(a1 + 4) >> 5 );
    }
    v12 = *(void **)(a1 + 8);
    *(_QWORD *)(a1 + 8) = Heap;
    *(_DWORD *)(a1 + 4) = (32 * v2) | *(_DWORD *)(a1 + 4) & 0x1F;
    if ( v12 )
      HampFreeHeap(v12);
    goto LABEL_23;
  }
  if ( *(_DWORD *)(a1 + 4) >= 0x20u )
LABEL_23:
    v4 = 1;
  return v4 == 0 ? 0xC0000017 : 0;
}
