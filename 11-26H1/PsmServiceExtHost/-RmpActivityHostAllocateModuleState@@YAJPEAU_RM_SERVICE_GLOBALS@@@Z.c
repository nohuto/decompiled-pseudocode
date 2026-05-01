/*
 * XREFs of ?RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180083364
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18007FEE4 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z @ 0x18008438C (-RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z.c)
 */

__int64 __fastcall RmpActivityHostAllocateModuleState(struct _RM_SERVICE_GLOBALS *a1)
{
  __int64 result; // rax
  char v3; // r14
  __int64 v4; // rbx
  char *Heap; // r8
  char v6; // cl
  unsigned __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // r9
  __int64 v10; // r12
  _QWORD *v11; // r10
  __int64 v12; // rdx
  void *v13; // rcx
  __int64 v14; // rbx
  char *v15; // r8
  unsigned __int64 v16; // rcx
  unsigned int v17; // edi
  __int64 v18; // r15
  __int64 v19; // r11
  _QWORD *v20; // r9
  __int64 v21; // rdx
  void *v22; // rcx
  __int64 v23; // [rsp+50h] [rbp+8h]
  __int64 v24; // [rsp+50h] [rbp+8h]

  result = RmpObjectTableAllocateState((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 16));
  if ( (int)result >= 0 )
  {
    v3 = -1;
    v4 = (unsigned int)(2 * (*((_DWORD *)a1 + 839) >> 5));
    if ( *((_DWORD *)a1 + 838) >= (unsigned int)v4 )
    {
      if ( (unsigned int)v4 < 4 )
        v4 = 4LL;
      Heap = (char *)HampAllocateHeap(8LL * (unsigned int)v4);
      if ( Heap )
      {
        if ( (((_DWORD)v4 - 1) & (unsigned int)v4) != 0 )
        {
          v6 = -1;
          do
          {
            ++v6;
            LODWORD(v4) = (unsigned int)v4 >> 1;
          }
          while ( (_DWORD)v4 );
          v4 = (unsigned int)(1 << v6);
        }
        if ( (unsigned int)v4 > 0x4000000 )
          v4 = 0x4000000LL;
        v7 = (unsigned int)v4;
        if ( Heap > &Heap[8 * v4] )
          v7 = 0LL;
        if ( v7 )
          memset64(Heap, ((unsigned __int64)a1 + 3352) | 1, v7);
        v8 = 0;
        v9 = -1LL << (*((_BYTE *)a1 + 3356) & 0x1F);
        if ( (*((_DWORD *)a1 + 839) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v10 = *((_QWORD *)a1 + 420);
            while ( 1 )
            {
              v11 = *(_QWORD **)(v10 + 8LL * v8);
              if ( ((unsigned __int8)v11 & 1) != 0 )
                break;
              *(_QWORD *)(v10 + 8LL * v8) = *v11;
              v23 = v9 & v11[1];
              v12 = ((_DWORD)v4 - 1) & (HIBYTE(v23)
                                      + 37
                                      * (BYTE6(v23)
                                       + 37
                                       * (BYTE5(v23)
                                        + 37
                                        * (BYTE4(v23)
                                         + 37
                                         * (BYTE3(v23)
                                          + 374026047
                                          + 37
                                          * (BYTE2(v23) + 37 * (BYTE1(v23) + 37 * (unsigned int)(unsigned __int8)v23)))))));
              *v11 = *(_QWORD *)&Heap[8 * v12];
              *(_QWORD *)&Heap[8 * v12] = v11;
            }
            ++v8;
          }
          while ( v8 < *((_DWORD *)a1 + 839) >> 5 );
        }
        v13 = (void *)*((_QWORD *)a1 + 420);
        *((_QWORD *)a1 + 420) = Heap;
        *((_DWORD *)a1 + 839) = (32 * v4) | *((_DWORD *)a1 + 839) & 0x1F;
        if ( v13 )
          HampFreeHeap(v13);
      }
      else if ( *((_DWORD *)a1 + 839) < 0x20u )
      {
        return 3221225495LL;
      }
    }
    v14 = (unsigned int)(2 * (*((_DWORD *)a1 + 843) >> 5));
    if ( *((_DWORD *)a1 + 842) < (unsigned int)v14 )
      goto LABEL_46;
    if ( (unsigned int)v14 < 4 )
      v14 = 4LL;
    v15 = (char *)HampAllocateHeap(8LL * (unsigned int)v14);
    if ( v15 )
    {
      if ( (((_DWORD)v14 - 1) & (unsigned int)v14) != 0 )
      {
        do
        {
          ++v3;
          LODWORD(v14) = (unsigned int)v14 >> 1;
        }
        while ( (_DWORD)v14 );
        v14 = (unsigned int)(1 << v3);
      }
      if ( (unsigned int)v14 > 0x4000000 )
        v14 = 0x4000000LL;
      v16 = (unsigned int)v14;
      if ( v15 > &v15[8 * v14] )
        v16 = 0LL;
      if ( v16 )
        memset64(v15, ((unsigned __int64)a1 + 3368) | 1, v16);
      v17 = 0;
      v18 = -1LL << (*((_BYTE *)a1 + 3372) & 0x1F);
      if ( (*((_DWORD *)a1 + 843) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v19 = *((_QWORD *)a1 + 422);
          while ( 1 )
          {
            v20 = *(_QWORD **)(v19 + 8LL * v17);
            if ( ((unsigned __int8)v20 & 1) != 0 )
              break;
            *(_QWORD *)(v19 + 8LL * v17) = *v20;
            v24 = v18 & v20[1];
            v21 = ((_DWORD)v14 - 1) & (HIBYTE(v24)
                                     + 37
                                     * (BYTE6(v24)
                                      + 37
                                      * (BYTE5(v24)
                                       + 37
                                       * (BYTE4(v24)
                                        + 37
                                        * (BYTE3(v24)
                                         + 374026047
                                         + 37
                                         * (BYTE2(v24) + 37 * (BYTE1(v24) + 37 * (unsigned int)(unsigned __int8)v24)))))));
            *v20 = *(_QWORD *)&v15[8 * v21];
            *(_QWORD *)&v15[8 * v21] = v20;
          }
          ++v17;
        }
        while ( v17 < *((_DWORD *)a1 + 843) >> 5 );
      }
      v22 = (void *)*((_QWORD *)a1 + 422);
      *((_QWORD *)a1 + 422) = v15;
      *((_DWORD *)a1 + 843) = (32 * v14) | *((_DWORD *)a1 + 843) & 0x1F;
      if ( v22 )
        HampFreeHeap(v22);
      goto LABEL_46;
    }
    if ( *((_DWORD *)a1 + 843) >= 0x20u )
    {
LABEL_46:
      result = TpAllocPool((char *)a1 + 3384, 0LL);
      if ( (int)result >= 0 )
      {
        *((_DWORD *)a1 + 848) = 3;
        *((_QWORD *)a1 + 426) = 0LL;
        *((_QWORD *)a1 + 427) = 0LL;
        *((_QWORD *)a1 + 428) = 0LL;
        *((_QWORD *)a1 + 429) = 0LL;
        *((_QWORD *)a1 + 430) = 0LL;
        *((_DWORD *)a1 + 862) = 0;
        *((_DWORD *)a1 + 863) = 1;
        *((_DWORD *)a1 + 864) = 72;
        *((_QWORD *)a1 + 425) = *((_QWORD *)a1 + 423);
        return 0LL;
      }
      return result;
    }
    return 3221225495LL;
  }
  return result;
}
