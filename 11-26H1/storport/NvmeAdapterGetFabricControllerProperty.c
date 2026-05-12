/*
 * XREFs of NvmeAdapterGetFabricControllerProperty @ 0x1400E9D10
 * Callers:
 *     NvmeAdapterConnectFabricNvmeController @ 0x1400E5CC8 (NvmeAdapterConnectFabricNvmeController.c)
 *     NvmeAdapterDisableFabricController @ 0x1400E7904 (NvmeAdapterDisableFabricController.c)
 *     NvmeAdapterEnableFabricController @ 0x1400E80DC (NvmeAdapterEnableFabricController.c)
 *     NvmeAdapterReconnectFabricControllerAssociation @ 0x1400ECA24 (NvmeAdapterReconnectFabricControllerAssociation.c)
 * Callees:
 *     RaidAllocateNvmeSrb @ 0x140082B38 (RaidAllocateNvmeSrb.c)
 *     McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer @ 0x1400E3C6C (McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer.c)
 *     NvmeAdapterProcessControllerQueueRequestSync @ 0x1400EC530 (NvmeAdapterProcessControllerQueueRequestSync.c)
 *     BuildNvmePropertyGetCommand @ 0x140118F1C (BuildNvmePropertyGetCommand.c)
 */

__int64 __fastcall NvmeAdapterGetFabricControllerProperty(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v3; // r13
  __int64 NvmeSrb; // rax
  char *v8; // rdi
  int v9; // ebp
  unsigned int v10; // r8d
  unsigned int i; // ecx
  __int64 v12; // rdx
  __int64 v13; // rsi
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rdx
  __int64 v17; // rcx
  const char *v18; // rbx
  int v20; // [rsp+C8h] [rbp-70h]
  int v21; // [rsp+D8h] [rbp-60h]
  int v22; // [rsp+E8h] [rbp-50h]
  char v23; // [rsp+108h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 128);
  NvmeSrb = RaidAllocateNvmeSrb(a1, 0);
  v8 = (char *)NvmeSrb;
  if ( NvmeSrb )
  {
    if ( *(_BYTE *)(NvmeSrb + 2) == 40 )
    {
      v10 = *(_DWORD *)(NvmeSrb + 56);
      if ( v10 )
      {
        for ( i = 0; i < v10; ++i )
        {
          v12 = *(unsigned int *)(NvmeSrb + 4LL * i + 120);
          if ( (unsigned int)v12 >= 0x80 && (unsigned int)v12 < *(_DWORD *)(NvmeSrb + 16) )
          {
            v13 = NvmeSrb + v12;
            if ( *(_DWORD *)(NvmeSrb + v12) == 67 )
              goto LABEL_12;
          }
        }
      }
    }
    v13 = 0LL;
LABEL_12:
    BuildNvmePropertyGetCommand(a2, v13 + 16);
    *(_BYTE *)(v13 + 80) = 2;
    *(_WORD *)(v13 + 106) = 0;
    v9 = NvmeAdapterProcessControllerQueueRequestSync(*(_QWORD *)(a1 + 712), (_DWORD)v8, v14, v15, 1, 0LL, 0LL, 0);
    if ( v9 < 0 || v8[3] != 1 || (*(_WORD *)(v13 + 86) & 0xFFE) != 0 )
    {
      if ( (byte_14017344A & 1) != 0 )
      {
        v17 = *(unsigned __int16 *)(v13 + 86);
        v18 = (const char *)&dword_140154ADC;
        if ( *(_QWORD *)(a1 + 752) )
          v18 = *(const char **)(a1 + 752);
        v23 = (unsigned __int16)v17 >> 1;
        LOWORD(v17) = (unsigned __int16)v17 >> 9;
        LOBYTE(v17) = v17 & 7;
        McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer(
          v17,
          v16,
          a1 + 841,
          *(_DWORD *)(v3 + 56),
          v3 + 1048,
          *(const wchar_t **)(v3 + 1032),
          *(const char **)(a1 + 792),
          *(_WORD *)(a1 + 4),
          0,
          *(_BYTE *)(a1 + 744),
          v18,
          (const char *)(a1 + 800),
          (const char *)(a1 + 841),
          "Get Property Command",
          "PropertyOffset",
          a2,
          byte_14015304C,
          0,
          byte_14015304C,
          0,
          byte_14015304C,
          0,
          byte_14015304C,
          0,
          byte_14015304C,
          v20,
          byte_14015304C,
          v21,
          byte_14015304C,
          v22,
          v9,
          v8[3],
          v17,
          v23);
      }
      v9 = -1073741823;
    }
    else
    {
      *a3 = *(_QWORD *)(v13 + 96);
    }
    ExFreePoolWithTag(v8, 0x72536152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v9;
}
