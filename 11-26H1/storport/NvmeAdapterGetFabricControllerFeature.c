/*
 * XREFs of NvmeAdapterGetFabricControllerFeature @ 0x1400E9A58
 * Callers:
 *     NvmeAdapterConnectFabricNvmeController @ 0x1400E5CC8 (NvmeAdapterConnectFabricNvmeController.c)
 *     NvmeAdapterReconnectFabricControllerAssociation @ 0x1400ECA24 (NvmeAdapterReconnectFabricControllerAssociation.c)
 * Callees:
 *     RaidAllocateNvmeSrb @ 0x140082B38 (RaidAllocateNvmeSrb.c)
 *     McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer @ 0x1400E3C6C (McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer.c)
 *     NvmeAdapterProcessControllerQueueRequestSync @ 0x1400EC530 (NvmeAdapterProcessControllerQueueRequestSync.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterGetFabricControllerFeature(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        _DWORD *a11)
{
  __int64 NvmeSrb; // rax
  char *v14; // rsi
  int v15; // r14d
  unsigned int v16; // r8d
  unsigned int i; // ecx
  __int64 v18; // rdx
  __int64 v19; // rbp
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rdx
  __int64 v23; // r8
  const char *v24; // rdi
  int v26; // [rsp+C8h] [rbp-70h]
  int v27; // [rsp+D8h] [rbp-60h]
  int v28; // [rsp+E8h] [rbp-50h]
  __int64 v29; // [rsp+140h] [rbp+8h]

  v29 = *(_QWORD *)(a1 + 128);
  NvmeSrb = RaidAllocateNvmeSrb(a1, 0);
  v14 = (char *)NvmeSrb;
  if ( NvmeSrb )
  {
    if ( *(_BYTE *)(NvmeSrb + 2) == 40 )
    {
      v16 = *(_DWORD *)(NvmeSrb + 56);
      if ( v16 )
      {
        for ( i = 0; i < v16; ++i )
        {
          v18 = *(unsigned int *)(NvmeSrb + 4LL * i + 120);
          if ( (unsigned int)v18 >= 0x80 && (unsigned int)v18 < *(_DWORD *)(NvmeSrb + 16) )
          {
            v19 = NvmeSrb + v18;
            if ( *(_DWORD *)(NvmeSrb + v18) == 67 )
              goto LABEL_12;
          }
        }
      }
    }
    v19 = 0LL;
LABEL_12:
    memset_0((void *)(v19 + 16), 0, 0x40uLL);
    *(_BYTE *)(v19 + 56) = a3;
    *(_DWORD *)(v19 + 56) &= 0xFFFFF8FF;
    *(_DWORD *)(v19 + 60) = a5;
    *(_BYTE *)(v19 + 16) = 10;
    *(_BYTE *)(v19 + 80) = 1;
    *(_WORD *)(v19 + 106) = 0;
    v15 = NvmeAdapterProcessControllerQueueRequestSync(*(_QWORD *)(a1 + 712), (_DWORD)v14, v20, v21, 1, 0LL, 0LL, 0);
    if ( v15 < 0 || v14[3] != 1 || (*(_WORD *)(v19 + 86) & 0xFFE) != 0 )
    {
      if ( (byte_14017344A & 1) != 0 )
      {
        v24 = (const char *)&dword_140154ADC;
        if ( *(_QWORD *)(a1 + 752) )
          v24 = *(const char **)(a1 + 752);
        McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer(
          0LL,
          v22,
          v23,
          *(_DWORD *)(v29 + 56),
          v29 + 1048,
          *(const wchar_t **)(v29 + 1032),
          *(const char **)(a1 + 792),
          *(_WORD *)(a1 + 4),
          0,
          *(_BYTE *)(a1 + 744),
          v24,
          (const char *)(a1 + 800),
          (const char *)(a1 + 841),
          "Get Feature Command",
          "NamespaceId",
          0,
          "FeatureId",
          a3,
          "Select",
          0,
          "Dword11",
          a5,
          "Dword12",
          0,
          "Dword13",
          v26,
          "Dword14",
          v27,
          "Dword15",
          v28,
          v15,
          v14[3],
          (*(_WORD *)(v19 + 86) >> 9) & 7,
          *(_WORD *)(v19 + 86) >> 1);
      }
      v15 = -1073741823;
    }
    else
    {
      *a11 = *(_DWORD *)(v19 + 96);
    }
    ExFreePoolWithTag(v14, 0x72536152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v15;
}
