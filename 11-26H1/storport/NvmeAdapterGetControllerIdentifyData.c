/*
 * XREFs of NvmeAdapterGetControllerIdentifyData @ 0x1400E8FAC
 * Callers:
 *     NvmeAdapterConnectFabricNvmeController @ 0x1400E5CC8 (NvmeAdapterConnectFabricNvmeController.c)
 *     NvmeAdapterFabricControllerUpdateNamespace @ 0x1400E8524 (NvmeAdapterFabricControllerUpdateNamespace.c)
 *     NvmeAdapterGetControllerNvmSetData @ 0x1400E98FC (NvmeAdapterGetControllerNvmSetData.c)
 *     NvmeAdapterReconnectFabricControllerAssociation @ 0x1400ECA24 (NvmeAdapterReconnectFabricControllerAssociation.c)
 *     NvmeAdapterStartFabricControllerNamespaces @ 0x1400EDDD0 (NvmeAdapterStartFabricControllerNamespaces.c)
 *     NvmeControllerCreateNvmeNamespace @ 0x140100594 (NvmeControllerCreateNvmeNamespace.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidAllocateNvmeSrb @ 0x140082B38 (RaidAllocateNvmeSrb.c)
 *     McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer @ 0x1400E3C6C (McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer.c)
 *     NvmeAdapterProcessControllerQueueRequestSync @ 0x1400EC530 (NvmeAdapterProcessControllerQueueRequestSync.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterGetControllerIdentifyData(
        __int64 a1,
        int a2,
        char a3,
        __int16 a4,
        unsigned __int8 a5,
        _QWORD *a6)
{
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int16 v9; // bp
  int v11; // r15d
  unsigned int v12; // edi
  __int64 NvmeSrb; // r14
  void *Pool; // r12
  unsigned int v15; // r8d
  unsigned int i; // ecx
  __int64 v17; // rdx
  int v18; // r8d
  int v19; // r9d
  const char *v20; // rbp
  int v22; // [rsp+C8h] [rbp-A0h]
  int v23; // [rsp+D8h] [rbp-90h]
  int v24; // [rsp+E8h] [rbp-80h]
  unsigned __int16 v25; // [rsp+170h] [rbp+8h]

  v6 = *(_QWORD *)(a1 + 128);
  v7 = 0LL;
  v9 = 0;
  v25 = 0;
  if ( !a3 || a3 == 1 || a3 == 2 || a3 == 3 )
  {
LABEL_11:
    v12 = 4096;
    goto LABEL_12;
  }
  if ( a3 != 4 )
  {
    if ( a3 != 5 && a3 != 6 )
    {
      if ( a3 != 28 )
        return (unsigned int)-1073741808;
      v9 = -1;
      v25 = -1;
    }
    goto LABEL_11;
  }
  v12 = 4224;
LABEL_12:
  NvmeSrb = RaidAllocateNvmeSrb(a1, 0);
  if ( NvmeSrb )
  {
    Pool = (void *)RaidAllocatePool(64LL, v12, 1380147538LL, *(_QWORD *)(v6 + 8));
    if ( Pool )
    {
      if ( *(_BYTE *)(NvmeSrb + 2) == 40 )
      {
        v15 = *(_DWORD *)(NvmeSrb + 56);
        if ( v15 )
        {
          for ( i = 0; i < v15; ++i )
          {
            v17 = *(unsigned int *)(NvmeSrb + 4LL * i + 120);
            if ( (unsigned int)v17 >= 0x80 && (unsigned int)v17 < *(_DWORD *)(NvmeSrb + 16) )
            {
              v7 = NvmeSrb + v17;
              if ( *(_DWORD *)(NvmeSrb + v17) == 67 )
                goto LABEL_26;
            }
          }
          v7 = 0LL;
        }
      }
LABEL_26:
      memset_0((void *)(v7 + 16), 0, 0x40uLL);
      *(_DWORD *)(v7 + 20) = a2;
      *(_WORD *)(v7 + 60) = a4;
      *(_BYTE *)(v7 + 63) = a5;
      *(_BYTE *)(v7 + 16) = 6;
      *(_WORD *)(v7 + 58) = v9;
      *(_BYTE *)(v7 + 56) = a3;
      *(_DWORD *)(NvmeSrb + 60) = v12;
      *(_QWORD *)(NvmeSrb + 64) = Pool;
      *(_DWORD *)(NvmeSrb + 24) = 64;
      *(_BYTE *)(v7 + 80) = 1;
      *(_WORD *)(v7 + 82) = 1;
      *(_WORD *)(v7 + 106) = 0;
      v11 = NvmeAdapterProcessControllerQueueRequestSync(*(_QWORD *)(a1 + 712), NvmeSrb, v18, v19, 1, 0LL, 0LL, 0);
      if ( v11 < 0 || *(_BYTE *)(NvmeSrb + 3) != 1 || (*(_WORD *)(v7 + 86) & 0xFFE) != 0 )
      {
        if ( (byte_14017344A & 1) != 0 )
        {
          v20 = (const char *)&dword_140154ADC;
          if ( *(_QWORD *)(a1 + 752) )
            v20 = *(const char **)(a1 + 752);
          McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer(
            v6,
            v25,
            a5,
            *(_DWORD *)(v6 + 56),
            v6 + 1048,
            *(const wchar_t **)(v6 + 1032),
            *(const char **)(a1 + 792),
            *(_WORD *)(a1 + 4),
            0,
            *(_BYTE *)(a1 + 744),
            v20,
            (const char *)(a1 + 800),
            (const char *)(a1 + 841),
            "Identify Command",
            "NamespaceId",
            a2,
            "IdentifyCNS",
            a3,
            "IdentifyCNSSpecificId",
            a4,
            "CommandSetId",
            a5,
            "ControllerId",
            v25,
            byte_14015304C,
            v22,
            byte_14015304C,
            v23,
            byte_14015304C,
            v24,
            v11,
            *(_BYTE *)(NvmeSrb + 3),
            (*(_WORD *)(v7 + 86) >> 9) & 7,
            *(_WORD *)(v7 + 86) >> 1);
        }
        v11 = -1073741823;
        ExFreePoolWithTag(Pool, 0x52436152u);
      }
      else
      {
        *a6 = Pool;
      }
    }
    else
    {
      v11 = -1073741801;
    }
    ExFreePoolWithTag((PVOID)NvmeSrb, 0x72536152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v11;
}
