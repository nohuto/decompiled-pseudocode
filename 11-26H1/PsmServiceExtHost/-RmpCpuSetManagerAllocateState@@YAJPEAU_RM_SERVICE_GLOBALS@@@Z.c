/*
 * XREFs of ?RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800847B8
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18007FEE4 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z @ 0x18008438C (-RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z.c)
 *     ?RmpCpuSetManagerInitializeReservedCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800857A0 (-RmpCpuSetManagerInitializeReservedCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180086694 (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 */

__int64 __fastcall RmpCpuSetManagerAllocateState(struct _RM_SERVICE_GLOBALS *a1)
{
  char *v1; // rbp
  int State; // edi
  __int64 v3; // rbx
  char *Heap; // r8
  char v5; // cl
  unsigned __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // r9
  __int64 v9; // r14
  _QWORD *v10; // r10
  __int64 v11; // rdx
  void *v12; // rcx
  __int64 v14; // [rsp+40h] [rbp+8h]

  v1 = (char *)a1 + 792;
  State = RmpObjectTableAllocateState((unsigned __int64)a1 + 816);
  if ( State >= 0 )
  {
    State = RmpObjectTableAllocateState((unsigned __int64)(v1 + 48));
    if ( State >= 0 )
    {
      v3 = (unsigned int)(2 * (*((_DWORD *)v1 + 19) >> 5));
      if ( *((_DWORD *)v1 + 18) >= (unsigned int)v3 )
      {
        if ( (unsigned int)v3 < 4 )
          v3 = 4LL;
        Heap = (char *)HampAllocateHeap(8LL * (unsigned int)v3);
        if ( Heap )
        {
          if ( (((_DWORD)v3 - 1) & (unsigned int)v3) != 0 )
          {
            v5 = -1;
            do
            {
              ++v5;
              LODWORD(v3) = (unsigned int)v3 >> 1;
            }
            while ( (_DWORD)v3 );
            v3 = (unsigned int)(1 << v5);
          }
          if ( (unsigned int)v3 > 0x4000000 )
            v3 = 0x4000000LL;
          v6 = (unsigned int)v3;
          if ( Heap > &Heap[8 * v3] )
            v6 = 0LL;
          if ( v6 )
            memset64(Heap, (unsigned __int64)(v1 + 72) | 1, v6);
          v7 = 0;
          v8 = -1LL << (v1[76] & 0x1F);
          if ( (*((_DWORD *)v1 + 19) & 0xFFFFFFE0) != 0 )
          {
            do
            {
              v9 = *((_QWORD *)v1 + 10);
              while ( 1 )
              {
                v10 = *(_QWORD **)(v9 + 8LL * v7);
                if ( ((unsigned __int8)v10 & 1) != 0 )
                  break;
                *(_QWORD *)(v9 + 8LL * v7) = *v10;
                v14 = v8 & v10[1];
                v11 = ((_DWORD)v3 - 1) & (HIBYTE(v14)
                                        + 37
                                        * (BYTE6(v14)
                                         + 37
                                         * (BYTE5(v14)
                                          + 37
                                          * (BYTE4(v14)
                                           + 37
                                           * (BYTE3(v14)
                                            + 374026047
                                            + 37
                                            * (BYTE2(v14) + 37 * (BYTE1(v14) + 37 * (unsigned int)(unsigned __int8)v14)))))));
                *v10 = *(_QWORD *)&Heap[8 * v11];
                *(_QWORD *)&Heap[8 * v11] = v10;
              }
              ++v7;
            }
            while ( v7 < *((_DWORD *)v1 + 19) >> 5 );
          }
          v12 = (void *)*((_QWORD *)v1 + 10);
          *((_QWORD *)v1 + 10) = Heap;
          *((_DWORD *)v1 + 19) = (32 * v3) | *((_DWORD *)v1 + 19) & 0x1F;
          if ( v12 )
            HampFreeHeap(v12);
        }
        else if ( *((_DWORD *)v1 + 19) < 0x20u )
        {
          return (unsigned int)-1073741801;
        }
      }
      State = RmpCpuSetManagerInitializeReservedCpuSets((struct _RM_CPU_SET_MANAGER *)v1);
      if ( State >= 0 )
      {
        RmpAcquireGlobalLock();
        State = RmpCpuSetManagerResetValidMask((struct _RM_CPU_SET_MANAGER *)v1);
        RmpReleaseGlobalLock();
        if ( State >= 0 )
          return 0;
      }
    }
  }
  return (unsigned int)State;
}
