/*
 * XREFs of NvmeAdapterPowerInitialize @ 0x140124528
 * Callers:
 *     CreateNvmeAdapter @ 0x1400D162C (CreateNvmeAdapter.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidAllocatePoolEx @ 0x1400929F4 (RaidAllocatePoolEx.c)
 *     NvmeAdapterPowerUninitialize @ 0x140124B00 (NvmeAdapterPowerUninitialize.c)
 */

__int64 __fastcall NvmeAdapterPowerInitialize(__int64 a1, struct _DEVICE_OBJECT *a2)
{
  _DWORD *v2; // r15
  unsigned int v5; // edi
  __int64 Pool; // rax
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rbx
  unsigned int i; // ebx
  unsigned __int16 *v11; // rdx
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rax

  v2 = g_CpuInfo;
  v5 = 0;
  Pool = RaidAllocatePool(72LL, 384LL, 1313890642LL, (__int64)a2);
  *(_QWORD *)(a1 + 160) = Pool;
  if ( !Pool )
    goto LABEL_13;
  KeInitializeSpinLock((PKSPIN_LOCK)(Pool + 120));
  InitializeSListHead((PSLIST_HEADER)(*(_QWORD *)(a1 + 160) + 96LL));
  v7 = *(_QWORD *)(a1 + 160);
  *(_QWORD *)(v7 + 56) = IoAllocateWorkItem(a2);
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 160) + 56LL) )
    goto LABEL_13;
  v8 = *(_QWORD *)(a1 + 160);
  *(_QWORD *)(v8 + 216) = IoAllocateWorkItem(a2);
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 160) + 216LL) )
    goto LABEL_13;
  v9 = *(_QWORD *)(a1 + 160);
  *(_QWORD *)(v9 + 16) = RaidAllocatePool(
                           72LL,
                           g_RecommendedSharedDataAlignment
                         * ((g_RecommendedSharedDataAlignment + 8 * v2[2] - 1)
                          / (unsigned int)g_RecommendedSharedDataAlignment),
                           1313890642LL,
                           (__int64)a2);
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 160) + 16LL) )
    goto LABEL_13;
  for ( i = 0; i < v2[2]; ++i )
  {
    v11 = *(unsigned __int16 **)(56LL * i + *((_QWORD *)v2 + 4) + 48);
    if ( v11 )
      v12 = *v11;
    else
      v12 = 0x80000000;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 160) + 16LL) + 8LL * i) = RaidAllocatePoolEx(
                                                                         72LL,
                                                                         64LL,
                                                                         1313890642LL,
                                                                         (__int64)a2,
                                                                         v12);
    if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 160) + 16LL) + 8LL * i) )
      goto LABEL_13;
  }
  v13 = *(_QWORD *)(a1 + 160);
  *(_QWORD *)(v13 + 24) = RaidAllocatePool(72LL, 72LL, 1313890642LL, (__int64)a2);
  v14 = *(_QWORD *)(a1 + 160);
  if ( *(_QWORD *)(v14 + 24) )
  {
    *(_BYTE *)(v14 + 112) = 10;
    *(_DWORD *)(*(_QWORD *)(a1 + 160) + 68LL) = 1;
    *(_DWORD *)(*(_QWORD *)(a1 + 160) + 64LL) = 1;
    *(_QWORD *)(*(_QWORD *)(a1 + 160) + 280LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 160) + 288LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 160) + 296LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 160) + 304LL) = 0LL;
    **(_BYTE **)(a1 + 160) = 0;
    *(_BYTE *)(a1 + 100) = 1;
  }
  else
  {
LABEL_13:
    v5 = -1073741670;
    NvmeAdapterPowerUninitialize(a1);
  }
  return v5;
}
