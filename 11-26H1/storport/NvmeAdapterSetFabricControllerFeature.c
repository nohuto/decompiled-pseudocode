/*
 * XREFs of NvmeAdapterSetFabricControllerFeature @ 0x1400ED69C
 * Callers:
 *     NvmeAdapterDisableFabricControllerAsyncEvent @ 0x1400E7B8C (NvmeAdapterDisableFabricControllerAsyncEvent.c)
 *     NvmeAdapterEnableFabricControllerAsyncEvent @ 0x1400E829C (NvmeAdapterEnableFabricControllerAsyncEvent.c)
 *     NvmeAdapterSetControllerArbitrationBurst @ 0x1400ED658 (NvmeAdapterSetControllerArbitrationBurst.c)
 *     NvmeAdapterSetFabricControllerIoQueueCount @ 0x1400ED958 (NvmeAdapterSetFabricControllerIoQueueCount.c)
 *     NvmeAdapterSetFabricControllerKeepAliveTimeout @ 0x1400EDA88 (NvmeAdapterSetFabricControllerKeepAliveTimeout.c)
 *     NvmeNamespaceScsiModeSelectRequest @ 0x140117DCC (NvmeNamespaceScsiModeSelectRequest.c)
 * Callees:
 *     RaidAllocateNvmeSrb @ 0x140082B38 (RaidAllocateNvmeSrb.c)
 *     McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer @ 0x1400E3C6C (McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer.c)
 *     NvmeAdapterProcessControllerQueueRequestSync @ 0x1400EC530 (NvmeAdapterProcessControllerQueueRequestSync.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterSetFabricControllerFeature(
        __int64 a1,
        int a2,
        char a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        _DWORD *a12)
{
  __int64 NvmeSrb; // rax
  char *v16; // rsi
  int v17; // r14d
  unsigned int v18; // r8d
  unsigned int i; // ecx
  __int64 v20; // rdx
  __int64 v21; // rbp
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  const char *v26; // rdi
  int v28; // [rsp+C8h] [rbp-80h]
  int v29; // [rsp+D8h] [rbp-70h]
  int v30; // [rsp+E8h] [rbp-60h]
  __int64 v31; // [rsp+150h] [rbp+8h]
  char v32; // [rsp+158h] [rbp+10h]

  v32 = a2;
  v31 = *(_QWORD *)(a1 + 128);
  NvmeSrb = RaidAllocateNvmeSrb(a1, 0);
  v16 = (char *)NvmeSrb;
  if ( NvmeSrb )
  {
    if ( *(_BYTE *)(NvmeSrb + 2) == 40 )
    {
      v18 = *(_DWORD *)(NvmeSrb + 56);
      if ( v18 )
      {
        for ( i = 0; i < v18; ++i )
        {
          v20 = *(unsigned int *)(NvmeSrb + 4LL * i + 120);
          if ( (unsigned int)v20 >= 0x80 && (unsigned int)v20 < *(_DWORD *)(NvmeSrb + 16) )
          {
            v21 = NvmeSrb + v20;
            if ( *(_DWORD *)(NvmeSrb + v20) == 67 )
              goto LABEL_12;
          }
        }
      }
    }
    v21 = 0LL;
LABEL_12:
    memset_0((void *)(v21 + 16), 0, 0x40uLL);
    *(_BYTE *)(v21 + 56) = a3;
    *(_DWORD *)(v21 + 56) &= ~0x80000000;
    *(_DWORD *)(v21 + 60) = a5;
    *(_BYTE *)(v21 + 16) = 9;
    *(_DWORD *)(v21 + 20) = a2;
    *(_BYTE *)(v21 + 80) = 1;
    *(_WORD *)(v21 + 106) = 0;
    v17 = NvmeAdapterProcessControllerQueueRequestSync(*(_QWORD *)(a1 + 712), (__int64)v16, v22, v23, 1, 0LL, 0LL, 0);
    if ( v17 < 0 || v16[3] != 1 || (*(_WORD *)(v21 + 86) & 0xFFE) != 0 )
    {
      if ( (byte_14017344A & 1) != 0 )
      {
        v26 = (const char *)&dword_140154ADC;
        if ( *(_QWORD *)(a1 + 752) )
          v26 = *(const char **)(a1 + 752);
        McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer(
          0LL,
          v24,
          v25,
          *(_DWORD *)(v31 + 56),
          v31 + 1048,
          *(const wchar_t **)(v31 + 1032),
          *(const char **)(a1 + 792),
          *(_WORD *)(a1 + 4),
          0,
          *(_BYTE *)(a1 + 744),
          v26,
          (const char *)(a1 + 800),
          (const char *)(a1 + 841),
          "Set Feature Command",
          "NamespaceId",
          v32,
          "FeatureId",
          a3,
          "Save",
          0,
          "Dword11",
          a5,
          "Dword12",
          0,
          "Dword13",
          v28,
          "Dword14",
          v29,
          "Dword15",
          v30,
          v17,
          v16[3],
          (*(_WORD *)(v21 + 86) >> 9) & 7,
          *(_WORD *)(v21 + 86) >> 1);
      }
      v17 = -1073741823;
    }
    else
    {
      *a12 = *(_DWORD *)(v21 + 96);
    }
    ExFreePoolWithTag(v16, 0x72536152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v17;
}
