/*
 * XREFs of ?RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800594C0
 * Callers:
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18008383C (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLI.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ??R?$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z @ 0x180028630 (--R-$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?RmpObjectTableAddObjectWithLock@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x18005979C (-RmpObjectTableAddObjectWithLock@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z.c)
 */

void __fastcall RmpActivityHostAddToTables(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v1; // r15
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rdi
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

  v1 = *((_QWORD *)a1 + 6);
  *((_QWORD *)a1 + 175) = utl::hash<_RM_PSM_HOST_INFO>::operator()((__int64)a1, (unsigned __int64)a1 + 80);
  RtlAcquireSRWLockExclusive(v1 + 32);
  RmpObjectTableAddObjectWithLock((struct _RM_OBJECT_TABLE *)(v1 + 16), a1);
  v3 = (unsigned int)(2 * (*(_DWORD *)(v1 + 3356) >> 5));
  if ( *(_DWORD *)(v1 + 3352) >= (unsigned int)v3 )
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
        memset64(Heap, (v1 + 3352) | 1, v8);
      v9 = 0;
      v10 = -1LL << (*(_BYTE *)(v1 + 3356) & 0x1F);
      if ( (*(_DWORD *)(v1 + 3356) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v13 = *(_QWORD *)(v1 + 3360);
          while ( 1 )
          {
            v14 = *(_QWORD **)(v13 + 8LL * v9);
            if ( ((unsigned __int8)v14 & 1) != 0 )
              break;
            *(_QWORD *)(v13 + 8LL * v9) = *v14;
            v16 = v10 & v14[1];
            v15 = ((_DWORD)v3 - 1) & (HIBYTE(v16)
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
            *v14 = *(_QWORD *)&Heap[8 * v15];
            *(_QWORD *)&Heap[8 * v15] = v14;
          }
          ++v9;
        }
        while ( v9 < *(_DWORD *)(v1 + 3356) >> 5 );
      }
      v11 = *(void **)(v1 + 3360);
      *(_QWORD *)(v1 + 3360) = Heap;
      *(_DWORD *)(v1 + 3356) = (32 * v3) | *(_DWORD *)(v1 + 3356) & 0x1F;
      if ( v11 )
        HampFreeHeap(v11);
    }
  }
  v4 = *((_QWORD *)a1 + 175) & (-1LL << (*(_DWORD *)(v1 + 3356) & 0x1F));
  v5 = *(_QWORD *)(v1 + 3360);
  v6 = ((*(_DWORD *)(v1 + 3356) >> 5) - 1) & (HIBYTE(v4)
                                            + 37
                                            * (BYTE6(v4)
                                             + 37
                                             * (BYTE5(v4)
                                              + 37
                                              * (BYTE4(v4)
                                               + 37
                                               * (BYTE3(v4)
                                                + 374026047
                                                + 37
                                                * (BYTE2(v4) + 37 * (BYTE1(v4) + 37 * (unsigned int)(unsigned __int8)v4)))))));
  *((_QWORD *)a1 + 174) = *(_QWORD *)(v5 + 8 * v6);
  *(_QWORD *)(v5 + 8 * v6) = (char *)a1 + 1392;
  ++*(_DWORD *)(v1 + 3352);
  RtlReleaseSRWLockExclusive(v1 + 32);
}
