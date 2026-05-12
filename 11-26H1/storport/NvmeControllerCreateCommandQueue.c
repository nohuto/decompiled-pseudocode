/*
 * XREFs of NvmeControllerCreateCommandQueue @ 0x1400F1E78
 * Callers:
 *     NvmeAdapterCreateNvmeController @ 0x1401A0988 (NvmeAdapterCreateNvmeController.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidAllocatePoolEx @ 0x1400929F4 (RaidAllocatePoolEx.c)
 *     NvmeControllerDeleteCommandQueue @ 0x1400F2814 (NvmeControllerDeleteCommandQueue.c)
 */

__int64 __fastcall NvmeControllerCreateCommandQueue(__int64 a1)
{
  _QWORD *v2; // r13
  unsigned int v3; // esi
  __int64 Pool; // rax
  unsigned __int64 v5; // r10
  unsigned int v6; // r15d
  __int64 v7; // r8
  unsigned int v8; // r11d
  unsigned int v9; // r12d
  __int64 v10; // rbp
  unsigned __int16 *v11; // rdx
  int v12; // r14d
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // r12
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int v21; // [rsp+70h] [rbp+8h]
  unsigned int v22; // [rsp+78h] [rbp+10h]
  unsigned int v23; // [rsp+80h] [rbp+18h]

  v2 = g_CpuInfo;
  v3 = 0;
  Pool = RaidAllocatePool(
           72LL,
           g_RecommendedSharedDataAlignment
         * (unsigned int)(((unsigned int)(g_RecommendedSharedDataAlignment - 1)
                         + 24LL
                         + 8 * (unsigned __int64)*((unsigned int *)g_CpuInfo + 2))
                        / (unsigned int)g_RecommendedSharedDataAlignment),
           1363370322LL,
           *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
  *(_QWORD *)(a1 + 1024) = Pool;
  if ( Pool )
  {
    v5 = (unsigned int)g_RecommendedSharedDataAlignment;
    v6 = 0;
    *(_DWORD *)(Pool + 4) = *(unsigned __int16 *)(a1 + 6);
    *(_DWORD *)(*(_QWORD *)(a1 + 1024) + 8LL) = 50
                                              * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 1024) + 4LL)
                                              / 0x64;
    *(_DWORD *)(*(_QWORD *)(a1 + 1024) + 12LL) = 90
                                               * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 1024) + 4LL)
                                               / 0x64;
    v7 = (unsigned int)(v5 - 1);
    v8 = v5 * ((v7 + 128) / v5);
    v9 = v5 * ((v7 + 256) / v5);
    v22 = v8;
    v23 = v9;
    v21 = v5 * ((v7 + 8 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 1024) + 4LL)) / v5);
    while ( v6 < *((_DWORD *)v2 + 2) )
    {
      v10 = v6;
      v11 = *(unsigned __int16 **)(56LL * v6 + v2[4] + 48);
      if ( v11 )
        v12 = *v11;
      else
        v12 = 0x80000000;
      *(_QWORD *)(*(_QWORD *)(a1 + 1024) + 8LL * v6 + 24) = RaidAllocatePoolEx(
                                                              72LL,
                                                              v8,
                                                              1363370322LL,
                                                              *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL),
                                                              v12);
      v13 = *(_QWORD *)(a1 + 1024);
      if ( !*(_QWORD *)(v13 + 8LL * v6 + 24) )
        goto LABEL_13;
      v14 = *(_QWORD *)(v13 + 8LL * v6 + 24);
      *(_QWORD *)(v14 + 32) = RaidAllocatePoolEx(72LL, v9, 1363370322LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL), v12);
      if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1024) + 8LL * v6 + 24) + 32LL) )
        goto LABEL_13;
      v15 = 0LL;
      v16 = 16LL;
      do
      {
        InitializeSListHead((PSLIST_HEADER)(v15 + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1024) + 8LL * v6 + 24) + 32LL)));
        v15 += 16LL;
        --v16;
      }
      while ( v16 );
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1024) + 8LL * v6 + 24) + 12LL) = 16;
      v17 = *(_QWORD *)(*(_QWORD *)(a1 + 1024) + 8LL * v6 + 24);
      *(_QWORD *)(v17 + 56) = RaidAllocatePoolEx(72LL, v21, 1363370322LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL), v12);
      v18 = *(_QWORD *)(a1 + 1024);
      v19 = *(_QWORD *)(v18 + 8LL * v6 + 24);
      if ( !*(_QWORD *)(v19 + 56) )
        goto LABEL_13;
      v8 = v22;
      ++v6;
      v9 = v23;
      *(_QWORD *)(v19 + 16) = v18;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1024) + 8 * v10 + 24) + 24LL) = a1;
    }
    *(_BYTE *)(*(_QWORD *)(a1 + 1024) + 20LL) = 1;
  }
  else
  {
LABEL_13:
    v3 = -1073741670;
    NvmeControllerDeleteCommandQueue(a1);
  }
  return v3;
}
