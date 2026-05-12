/*
 * XREFs of CreateNVMeScatterGatherListBufferPool @ 0x1401195EC
 * Callers:
 *     NvmeControllerInitPhase1 @ 0x1400F570C (NvmeControllerInitPhase1.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     AllocateNVMeSGLBufferContext @ 0x140119170 (AllocateNVMeSGLBufferContext.c)
 *     DeleteNVMeScatterGatherListBufferPool @ 0x140119A8C (DeleteNVMeScatterGatherListBufferPool.c)
 */

__int64 __fastcall CreateNVMeScatterGatherListBufferPool(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v4; // esi
  _QWORD *v5; // r15
  unsigned int v6; // eax
  __int64 Pool; // rax
  int v8; // r12d
  __int64 v9; // r8
  unsigned int i; // ebp
  unsigned __int16 *v11; // rdx
  int v12; // r13d
  unsigned int j; // r12d
  struct _SLIST_ENTRY *NVMeSGLBufferContext; // rax
  __int64 v15; // rcx
  int v16; // [rsp+60h] [rbp+8h]
  __int64 v17; // [rsp+68h] [rbp+10h]

  v1 = 0;
  if ( _bittest64((const signed __int64 *)(a1 + 136), 0x20u) )
    return 0LL;
  v4 = 128;
  v5 = g_CpuInfo;
  v6 = *(_DWORD *)(a1 + 8) >> 2;
  if ( v6 < 0x80 )
  {
    v4 = 32;
    if ( v6 > 0x20 )
      v4 = *(_DWORD *)(a1 + 8) >> 2;
  }
  Pool = RaidAllocatePool(
           72LL,
           8LL * *((unsigned int *)g_CpuInfo + 2),
           1380147538LL,
           *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
  *(_QWORD *)(a1 + 896) = Pool;
  if ( Pool
    && (v8 = g_RecommendedSharedDataAlignment
           * (((unsigned __int64)(unsigned int)(g_RecommendedSharedDataAlignment - 1) + 64)
            / (unsigned int)g_RecommendedSharedDataAlignment),
        v16 = v8,
        v17 = RaidAllocatePool(
                72LL,
                (unsigned int)(*((_DWORD *)v5 + 2) * v8),
                1380147538LL,
                *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL)),
        (v9 = v17) != 0) )
  {
    for ( i = 0; i < *((_DWORD *)v5 + 2); ++i )
    {
      v11 = *(unsigned __int16 **)(56LL * i + v5[4] + 48);
      if ( v11 )
        v12 = *v11;
      else
        v12 = 0x80000000;
      *(_QWORD *)(*(_QWORD *)(a1 + 896) + 8LL * i) = v9 + v8 * i;
      InitializeSListHead(*(PSLIST_HEADER *)(*(_QWORD *)(a1 + 896) + 8LL * i));
      for ( j = 0; j < v4; ++j )
      {
        NVMeSGLBufferContext = (struct _SLIST_ENTRY *)AllocateNVMeSGLBufferContext(a1, i, v12);
        if ( !NVMeSGLBufferContext )
          goto LABEL_18;
        ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(a1 + 896) + 8LL * i), NVMeSGLBufferContext);
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 896) + 8LL * i);
        ++*(_DWORD *)(v15 + 16);
      }
      v8 = v16;
      v9 = v17;
    }
  }
  else
  {
LABEL_18:
    v1 = -1073741670;
    DeleteNVMeScatterGatherListBufferPool(a1);
  }
  return v1;
}
