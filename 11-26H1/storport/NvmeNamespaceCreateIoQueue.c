/*
 * XREFs of NvmeNamespaceCreateIoQueue @ 0x1401029C8
 * Callers:
 *     NvmeControllerCreateNvmeNamespace @ 0x140100594 (NvmeControllerCreateNvmeNamespace.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidAllocatePoolEx @ 0x1400929F4 (RaidAllocatePoolEx.c)
 */

__int64 __fastcall NvmeNamespaceCreateIoQueue(__int64 a1)
{
  _DWORD *v2; // r14
  unsigned int v3; // esi
  __int64 Pool; // rax
  unsigned __int64 v5; // r10
  __int64 v6; // r8
  unsigned int v7; // r11d
  unsigned int v8; // r13d
  __int64 v9; // r12
  unsigned __int16 *v10; // rdx
  int v11; // r15d
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // r13
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 i; // rbx
  __int64 v22; // rcx
  void *v23; // rcx
  void *v24; // rcx
  unsigned int v26; // [rsp+70h] [rbp+8h]
  unsigned int v27; // [rsp+78h] [rbp+10h]
  unsigned int v28; // [rsp+80h] [rbp+18h]

  v2 = g_CpuInfo;
  v3 = 0;
  Pool = RaidAllocatePool(
           72LL,
           g_RecommendedSharedDataAlignment
         * (unsigned int)(((unsigned int)(g_RecommendedSharedDataAlignment - 1)
                         + 24LL
                         + 8 * (unsigned __int64)*((unsigned int *)g_CpuInfo + 2))
                        / (unsigned int)g_RecommendedSharedDataAlignment),
           1296982354LL,
           *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 256) = Pool;
  if ( Pool )
  {
    v5 = (unsigned int)g_RecommendedSharedDataAlignment;
    *(_DWORD *)(Pool + 4) = 4096;
    *(_DWORD *)(*(_QWORD *)(a1 + 256) + 8LL) = 50
                                             * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 256) + 4LL)
                                             / 0x64;
    *(_DWORD *)(*(_QWORD *)(a1 + 256) + 12LL) = 90
                                              * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 256) + 4LL)
                                              / 0x64;
    v6 = (unsigned int)(v5 - 1);
    v7 = v5 * ((v6 + 128) / v5);
    v8 = v5 * ((v6 + 256) / v5);
    v27 = v7;
    v28 = v8;
    v9 = 0LL;
    v26 = v5 * ((v6 + 8 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 256) + 4LL)) / v5);
    while ( 1 )
    {
      if ( (unsigned int)v9 >= v2[2] )
      {
        *(_BYTE *)(*(_QWORD *)(a1 + 256) + 20LL) = 0;
        return v3;
      }
      v10 = *(unsigned __int16 **)(56LL * (unsigned int)v9 + *((_QWORD *)v2 + 4) + 48);
      v11 = v10 ? *v10 : 0x80000000;
      *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8 * v9 + 24) = RaidAllocatePoolEx(
                                                           72LL,
                                                           v7,
                                                           1296982354LL,
                                                           *(_QWORD *)(a1 + 8),
                                                           v11);
      v12 = *(_QWORD *)(a1 + 256);
      if ( !*(_QWORD *)(v12 + 8 * v9 + 24) )
        break;
      v13 = *(_QWORD *)(v12 + 8 * v9 + 24);
      *(_QWORD *)(v13 + 32) = RaidAllocatePoolEx(72LL, v8, 1296982354LL, *(_QWORD *)(a1 + 8), v11);
      v12 = *(_QWORD *)(a1 + 256);
      if ( !*(_QWORD *)(*(_QWORD *)(v12 + 8 * v9 + 24) + 32LL) )
        break;
      v14 = 0LL;
      v15 = 16LL;
      do
      {
        InitializeSListHead((PSLIST_HEADER)(v14 + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 256) + 8 * v9 + 24) + 32LL)));
        v14 += 16LL;
        --v15;
      }
      while ( v15 );
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 256) + 8 * v9 + 24) + 12LL) = 16;
      v16 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8 * v9 + 24);
      *(_QWORD *)(v16 + 56) = RaidAllocatePoolEx(72LL, v26, 1296982354LL, *(_QWORD *)(a1 + 8), v11);
      v12 = *(_QWORD *)(a1 + 256);
      v17 = *(_QWORD *)(v12 + 8 * v9 + 24);
      if ( !*(_QWORD *)(v17 + 56) )
        break;
      *(_QWORD *)(v17 + 16) = v12;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 256) + 8 * v9 + 24) + 24LL) = a1;
      v18 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1104LL);
      if ( v18 )
      {
        v19 = *(_QWORD *)(v18 + 8 * v9);
        if ( v19 )
        {
          *(_QWORD *)(v19 + 8LL * *(unsigned int *)(v19 + 4) + 264) = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8 * v9 + 24);
          v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 1104LL) + 8 * v9);
          ++*(_DWORD *)(v20 + 4);
        }
      }
      v7 = v27;
      v9 = (unsigned int)(v9 + 1);
      v8 = v28;
    }
    v3 = -1073741670;
    if ( v12 )
    {
      for ( i = 0LL; (unsigned int)i < v2[2]; i = (unsigned int)(i + 1) )
      {
        v22 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8 * i + 24);
        if ( v22 )
        {
          v23 = *(void **)(v22 + 32);
          if ( v23 )
            ExFreePoolWithTag(v23, 0x4D4E6152u);
          v24 = *(void **)(*(_QWORD *)(*(_QWORD *)(a1 + 256) + 8 * i + 24) + 56LL);
          if ( v24 )
            ExFreePoolWithTag(v24, 0x4D4E6152u);
          ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 256) + 8 * i + 24), 0x4D4E6152u);
          *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8 * i + 24) = 0LL;
        }
      }
      ExFreePoolWithTag(*(PVOID *)(a1 + 256), 0x4D4E6152u);
      *(_QWORD *)(a1 + 256) = 0LL;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
