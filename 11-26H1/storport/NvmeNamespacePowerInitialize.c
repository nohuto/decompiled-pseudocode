/*
 * XREFs of NvmeNamespacePowerInitialize @ 0x140128254
 * Callers:
 *     NvmeControllerCreateNvmeNamespace @ 0x140100594 (NvmeControllerCreateNvmeNamespace.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidAllocatePoolEx @ 0x1400929F4 (RaidAllocatePoolEx.c)
 *     NvmeNamespacePowerUninitialize @ 0x1401289C0 (NvmeNamespacePowerUninitialize.c)
 */

__int64 __fastcall NvmeNamespacePowerInitialize(__int64 a1)
{
  _DWORD *v2; // rbp
  unsigned int v3; // edi
  __int64 Pool; // rax
  __int64 v5; // rbx
  unsigned int i; // ebx
  unsigned __int16 *v7; // rdx
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rcx

  v2 = g_CpuInfo;
  v3 = 0;
  Pool = RaidAllocatePool(72LL, 192LL, 1313890642LL, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 128) = Pool;
  if ( !Pool )
    goto LABEL_12;
  *(_QWORD *)(Pool + 144) = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 128) + 144LL) )
    goto LABEL_12;
  v5 = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(v5 + 24) = RaidAllocatePool(
                           72LL,
                           g_RecommendedSharedDataAlignment
                         * ((g_RecommendedSharedDataAlignment + 8 * v2[2] - 1)
                          / (unsigned int)g_RecommendedSharedDataAlignment),
                           1313890642LL,
                           *(_QWORD *)(a1 + 8));
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 128) + 24LL) )
    goto LABEL_12;
  for ( i = 0; i < v2[2]; ++i )
  {
    v7 = *(unsigned __int16 **)(56LL * i + *((_QWORD *)v2 + 4) + 48);
    if ( v7 )
      v8 = *v7;
    else
      v8 = 0x80000000;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 24LL) + 8LL * i) = RaidAllocatePoolEx(
                                                                         72LL,
                                                                         64LL,
                                                                         1313890642LL,
                                                                         *(_QWORD *)(a1 + 8),
                                                                         v8);
    if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 24LL) + 8LL * i) )
      goto LABEL_12;
  }
  v9 = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(v9 + 32) = RaidAllocatePool(72LL, 32LL, 1313890642LL, *(_QWORD *)(a1 + 8));
  v10 = *(_QWORD *)(a1 + 128);
  if ( *(_QWORD *)(v10 + 32) )
  {
    KeInitializeSpinLock((PKSPIN_LOCK)(v10 + 88));
    *(_DWORD *)(*(_QWORD *)(a1 + 128) + 72LL) = 1;
    *(_DWORD *)(*(_QWORD *)(a1 + 128) + 68LL) = 1;
    *(_QWORD *)(*(_QWORD *)(a1 + 128) + 16LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 128) + 40LL) = 0LL;
    *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 128) + 64LL) = 0;
    **(_BYTE **)(a1 + 128) = 1;
    *(_BYTE *)(a1 + 276) = 1;
  }
  else
  {
LABEL_12:
    v3 = -1073741670;
    NvmeNamespacePowerUninitialize(a1);
  }
  return v3;
}
