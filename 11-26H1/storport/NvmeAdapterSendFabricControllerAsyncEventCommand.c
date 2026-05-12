/*
 * XREFs of NvmeAdapterSendFabricControllerAsyncEventCommand @ 0x1400ED31C
 * Callers:
 *     NvmeAdapterCompleteFabricControllerAsyncEventCommand @ 0x1400E53B0 (NvmeAdapterCompleteFabricControllerAsyncEventCommand.c)
 *     NvmeAdapterCompleteGetControllerLogPageRequestAsyncEvent @ 0x1400E58B0 (NvmeAdapterCompleteGetControllerLogPageRequestAsyncEvent.c)
 *     NvmeAdapterNvmeControllerBackgroundWork @ 0x1400EA6E0 (NvmeAdapterNvmeControllerBackgroundWork.c)
 *     NvmeAdapterStartFabricNvmeControllerOperations @ 0x1400EE3F8 (NvmeAdapterStartFabricNvmeControllerOperations.c)
 * Callees:
 *     McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer @ 0x1400E3C6C (McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer.c)
 *     NvmeAdapterProcessControllerQueueRequestAsync @ 0x1400EC344 (NvmeAdapterProcessControllerQueueRequestAsync.c)
 */

__int64 __fastcall NvmeAdapterSendFabricControllerAsyncEventCommand(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned int v5; // r8d
  unsigned int i; // edx
  __int64 v7; // rcx
  __int64 v8; // rbp
  int v9; // r14d
  const char *v10; // rbx
  int v12; // [rsp+C8h] [rbp-60h]
  int v13; // [rsp+D8h] [rbp-50h]
  int v14; // [rsp+E8h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 128);
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v5 = *(_DWORD *)(a2 + 56);
    if ( v5 )
    {
      for ( i = 0; i < v5; ++i )
      {
        v7 = *(unsigned int *)(a2 + 4LL * i + 120);
        if ( (unsigned int)v7 >= 0x80 && (unsigned int)v7 < *(_DWORD *)(a2 + 16) )
        {
          v8 = a2 + v7;
          if ( *(_DWORD *)(a2 + v7) == 67 )
            goto LABEL_10;
        }
      }
    }
  }
  v8 = 0LL;
LABEL_10:
  *(_BYTE *)(a2 + 3) = 0;
  v9 = NvmeAdapterProcessControllerQueueRequestAsync(
         *(_QWORD *)(a1 + 712),
         a2,
         1,
         1,
         1,
         0LL,
         0LL,
         0,
         (__int64)NvmeAdapterCompleteFabricControllerAsyncEventCommand,
         0LL);
  if ( v9 < 0 )
  {
    if ( (byte_14017344A & 1) != 0 )
    {
      v10 = (const char *)&dword_140154ADC;
      if ( *(_QWORD *)(a1 + 752) )
        v10 = *(const char **)(a1 + 752);
      McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer(
        (*(_WORD *)(v8 + 86) >> 9) & 7,
        *(unsigned int *)(v8 + 96),
        a1 + 841,
        *(_DWORD *)(v2 + 56),
        v2 + 1048,
        *(const wchar_t **)(v2 + 1032),
        *(const char **)(a1 + 792),
        *(_WORD *)(a1 + 4),
        0,
        *(_BYTE *)(a1 + 744),
        v10,
        (const char *)(a1 + 800),
        (const char *)(a1 + 841),
        "Async Event Request Command",
        "DW0",
        *(_DWORD *)(v8 + 96),
        byte_14015304C,
        0,
        byte_14015304C,
        0,
        byte_14015304C,
        0,
        byte_14015304C,
        0,
        byte_14015304C,
        v12,
        byte_14015304C,
        v13,
        byte_14015304C,
        v14,
        v9,
        *(_BYTE *)(a2 + 3),
        (*(_WORD *)(v8 + 86) >> 9) & 7,
        *(_WORD *)(v8 + 86) >> 1);
    }
    *(_BYTE *)(a2 + 3) = 48;
  }
  return (unsigned int)v9;
}
