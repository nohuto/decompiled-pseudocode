/*
 * XREFs of NvmeAdapterGetControllerLogPageSync @ 0x1400E95A0
 * Callers:
 *     NvmeAdapterPerformFabricControllerDiscovery @ 0x1400EBB5C (NvmeAdapterPerformFabricControllerDiscovery.c)
 *     NvmeNamespacePopulateLogSenseInformationalExceptions @ 0x140117898 (NvmeNamespacePopulateLogSenseInformationalExceptions.c)
 *     NvmeNamespacePopulateLogSenseTemperature @ 0x140117990 (NvmeNamespacePopulateLogSenseTemperature.c)
 *     NvmeNamespaceScsiModeSenseRequest @ 0x140117FC8 (NvmeNamespaceScsiModeSenseRequest.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidAllocateNvmeSrb @ 0x140082B38 (RaidAllocateNvmeSrb.c)
 *     McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer @ 0x1400E3C6C (McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer.c)
 *     NvmeAdapterProcessControllerQueueRequestSync @ 0x1400EC530 (NvmeAdapterProcessControllerQueueRequestSync.c)
 *     BuildNvmeGetLogPageCommand @ 0x140118E4C (BuildNvmeGetLogPageCommand.c)
 */

__int64 __fastcall NvmeAdapterGetControllerLogPageSync(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        char a7,
        _QWORD *a8,
        _BYTE *a9,
        _BYTE *a10)
{
  __int64 v10; // r13
  __int64 v11; // rbx
  __int64 v14; // rbp
  __int64 NvmeSrb; // rdi
  int v16; // esi
  char v17; // r12
  __int64 v18; // rdx
  unsigned int v19; // r8d
  void *Pool; // r15
  unsigned int i; // ecx
  int v22; // r8d
  int v23; // r9d
  _WORD *v24; // rdx
  const char *v25; // rbx
  __int64 v26; // rcx
  int v28; // [rsp+30h] [rbp-108h]
  int v29; // [rsp+C8h] [rbp-70h]
  int v30; // [rsp+D8h] [rbp-60h]
  int v31; // [rsp+E8h] [rbp-50h]
  char v32; // [rsp+108h] [rbp-30h]

  v10 = *(_QWORD *)(a1 + 128);
  v11 = a4;
  v14 = 0LL;
  NvmeSrb = RaidAllocateNvmeSrb(a1, 0);
  if ( NvmeSrb )
  {
    v17 = v11;
    Pool = (void *)RaidAllocatePool(64LL, v11, 1380147538LL, *(_QWORD *)(v10 + 8));
    if ( !Pool )
    {
      v16 = -1073741801;
LABEL_28:
      ExFreePoolWithTag((PVOID)NvmeSrb, 0x72536152u);
      return (unsigned int)v16;
    }
    if ( *(_BYTE *)(NvmeSrb + 2) == 40 )
    {
      v19 = *(_DWORD *)(NvmeSrb + 56);
      if ( v19 )
      {
        for ( i = 0; i < v19; ++i )
        {
          v18 = *(unsigned int *)(NvmeSrb + 4LL * i + 120);
          if ( (unsigned int)v18 >= 0x80 && (unsigned int)v18 < *(_DWORD *)(NvmeSrb + 16) )
          {
            v14 = NvmeSrb + v18;
            if ( *(_DWORD *)(NvmeSrb + v18) == 67 )
              goto LABEL_14;
          }
        }
        v14 = 0LL;
      }
    }
LABEL_14:
    LOBYTE(v19) = a3;
    LOBYTE(v18) = (*(_BYTE *)(*(_QWORD *)(a1 + 592) + 261LL) & 4) != 0;
    BuildNvmeGetLogPageCommand(*(_DWORD *)(a1 + 576), v18, v19, v11, v18, a5, v28, a7, (void *)(v14 + 16));
    *(_DWORD *)(NvmeSrb + 60) = v11;
    *(_QWORD *)(NvmeSrb + 64) = Pool;
    *(_DWORD *)(NvmeSrb + 24) = 64;
    *(_BYTE *)(v14 + 80) = 1;
    *(_WORD *)(v14 + 82) = 1;
    *(_WORD *)(v14 + 106) = 0;
    v16 = NvmeAdapterProcessControllerQueueRequestSync(*(_QWORD *)(a1 + 712), NvmeSrb, v22, v23, 1, 0LL, 0LL, 0);
    if ( v16 >= 0 )
    {
      v24 = (_WORD *)(v14 + 86);
      if ( *(_BYTE *)(NvmeSrb + 3) == 1 && (*v24 & 0xFFE) == 0 )
      {
        *a8 = Pool;
        goto LABEL_28;
      }
      if ( a9 )
        *a9 = (*v24 >> 9) & 7;
      if ( a10 )
        *a10 = *v24 >> 1;
      v16 = -1073741823;
    }
    if ( (byte_14017344A & 1) != 0 )
    {
      v25 = (const char *)&dword_140154ADC;
      v26 = *(unsigned __int16 *)(v14 + 86);
      if ( *(_QWORD *)(a1 + 752) )
        v25 = *(const char **)(a1 + 752);
      v32 = (unsigned __int16)v26 >> 1;
      LOWORD(v26) = (unsigned __int16)v26 >> 9;
      LOBYTE(v26) = v26 & 7;
      McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer(
        v26,
        a3,
        a1 + 841,
        *(_DWORD *)(v10 + 56),
        v10 + 1048,
        *(const wchar_t **)(v10 + 1032),
        *(const char **)(a1 + 792),
        *(_WORD *)(a1 + 4),
        0,
        *(_BYTE *)(a1 + 744),
        v25,
        (const char *)(a1 + 800),
        (const char *)(a1 + 841),
        "Get Log Page command",
        "NamespaceId",
        -1,
        "LogPageIdentifier",
        a3,
        "LogPageSize",
        v17,
        "LogPageOffset",
        a5,
        "LogSpecificIdentifier",
        0,
        byte_14015304C,
        v29,
        byte_14015304C,
        v30,
        byte_14015304C,
        v31,
        v16,
        *(_BYTE *)(NvmeSrb + 3),
        v26,
        v32);
    }
    ExFreePoolWithTag(Pool, 0x52436152u);
    goto LABEL_28;
  }
  return (unsigned int)-1073741801;
}
