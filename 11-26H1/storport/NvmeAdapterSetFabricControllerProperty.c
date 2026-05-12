/*
 * XREFs of NvmeAdapterSetFabricControllerProperty @ 0x1400EDB68
 * Callers:
 *     NvmeAdapterConfigureFabricController @ 0x1400E5C6C (NvmeAdapterConfigureFabricController.c)
 *     NvmeAdapterDisableFabricController @ 0x1400E7904 (NvmeAdapterDisableFabricController.c)
 *     NvmeAdapterEnableFabricController @ 0x1400E80DC (NvmeAdapterEnableFabricController.c)
 * Callees:
 *     RaidAllocateNvmeSrb @ 0x140082B38 (RaidAllocateNvmeSrb.c)
 *     McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer @ 0x1400E3C6C (McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer.c)
 *     NvmeAdapterProcessControllerQueueRequestSync @ 0x1400EC530 (NvmeAdapterProcessControllerQueueRequestSync.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterSetFabricControllerProperty(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r15
  __int64 NvmeSrb; // rax
  char *v7; // rdi
  int v8; // ebx
  unsigned int v9; // r8d
  unsigned int i; // ecx
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  const char *v16; // r11
  int v18; // [rsp+C8h] [rbp-60h]
  int v19; // [rsp+D8h] [rbp-50h]
  int v20; // [rsp+E8h] [rbp-40h]
  char v21; // [rsp+108h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 128);
  NvmeSrb = RaidAllocateNvmeSrb(a1, 0);
  v7 = (char *)NvmeSrb;
  if ( NvmeSrb )
  {
    if ( *(_BYTE *)(NvmeSrb + 2) == 40 )
    {
      v9 = *(_DWORD *)(NvmeSrb + 56);
      if ( v9 )
      {
        for ( i = 0; i < v9; ++i )
        {
          v11 = *(unsigned int *)(NvmeSrb + 4LL * i + 120);
          if ( (unsigned int)v11 >= 0x80 && (unsigned int)v11 < *(_DWORD *)(NvmeSrb + 16) )
          {
            v12 = NvmeSrb + v11;
            if ( *(_DWORD *)(NvmeSrb + v11) == 67 )
              goto LABEL_12;
          }
        }
      }
    }
    v12 = 0LL;
LABEL_12:
    memset_0((void *)(v12 + 16), 0, 0x40uLL);
    *(_BYTE *)(v12 + 56) &= 0xF8u;
    *(_BYTE *)(v12 + 16) = 127;
    *(_DWORD *)(v12 + 60) = 20;
    *(_DWORD *)(v12 + 64) = a3;
    *(_BYTE *)(v12 + 80) = 2;
    *(_WORD *)(v12 + 106) = 0;
    v8 = NvmeAdapterProcessControllerQueueRequestSync(*(_QWORD *)(a1 + 712), (__int64)v7, v13, v14, 1, 0LL, 0LL, 0);
    if ( v8 < 0 || v7[3] != 1 || (*(_WORD *)(v12 + 86) & 0xFFE) != 0 )
    {
      if ( (byte_14017344A & 1) != 0 )
      {
        v15 = *(unsigned __int16 *)(v12 + 86);
        v16 = (const char *)&dword_140154ADC;
        if ( *(_QWORD *)(a1 + 752) )
          v16 = *(const char **)(a1 + 752);
        v21 = (unsigned __int16)v15 >> 1;
        LOWORD(v15) = (unsigned __int16)v15 >> 9;
        LOBYTE(v15) = v15 & 7;
        McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer(
          v15,
          a1 + 841,
          a1 + 800,
          *(_DWORD *)(v3 + 56),
          v3 + 1048,
          *(const wchar_t **)(v3 + 1032),
          *(const char **)(a1 + 792),
          *(_WORD *)(a1 + 4),
          0,
          *(_BYTE *)(a1 + 744),
          v16,
          (const char *)(a1 + 800),
          (const char *)(a1 + 841),
          "Set Property Command",
          "PropertyOffset",
          20,
          byte_14015304C,
          0,
          byte_14015304C,
          0,
          byte_14015304C,
          0,
          byte_14015304C,
          0,
          byte_14015304C,
          v18,
          byte_14015304C,
          v19,
          byte_14015304C,
          v20,
          v8,
          v7[3],
          v15,
          v21);
      }
      v8 = -1073741823;
    }
    ExFreePoolWithTag(v7, 0x72536152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v8;
}
