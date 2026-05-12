/*
 * XREFs of NvmeAdapterCompleteGetControllerLogPageRequestAsyncEvent @ 0x1400E58B0
 * Callers:
 *     <none>
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer @ 0x1400E3C6C (McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer.c)
 *     NvmeAdapterScheduleFabricNvmeControllerBackgroundWork @ 0x1400ED198 (NvmeAdapterScheduleFabricNvmeControllerBackgroundWork.c)
 *     NvmeAdapterSendFabricControllerAsyncEventCommand @ 0x1400ED31C (NvmeAdapterSendFabricControllerAsyncEventCommand.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall NvmeAdapterCompleteGetControllerLogPageRequestAsyncEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r15
  char *v9; // r14
  unsigned int v10; // r9d
  unsigned int i; // ecx
  __int64 v12; // rdx
  __int64 v13; // r8
  char v14; // r9
  __int64 v15; // rdx
  char v16; // al
  unsigned __int16 v17; // ax
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // r8
  const char *v23; // rdi
  __int64 result; // rax
  int v25; // [rsp+C8h] [rbp-60h]
  int v26; // [rsp+D8h] [rbp-50h]
  int v27; // [rsp+E8h] [rbp-40h]
  char v28; // [rsp+108h] [rbp-20h]

  v6 = *(_QWORD *)(a1 + 128);
  v9 = 0LL;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v10 = *(_DWORD *)(a2 + 56);
    if ( v10 )
    {
      for ( i = 0; i < v10; ++i )
      {
        v12 = *(unsigned int *)(a2 + 4LL * i + 120);
        if ( (unsigned int)v12 >= 0x80 && (unsigned int)v12 < *(_DWORD *)(a2 + 16) )
        {
          v13 = v12 + a2;
          if ( *(_DWORD *)(v12 + a2) == 67 )
            goto LABEL_10;
        }
      }
    }
  }
  v13 = 0LL;
LABEL_10:
  v14 = *(_BYTE *)(a2 + 3);
  v15 = *(unsigned __int8 *)(v13 + 56);
  if ( v14 != 1 || (*(_WORD *)(v13 + 86) & 0xFFE) != 0 )
  {
    if ( (byte_14017344A & 1) != 0 )
    {
      v21 = *(unsigned __int16 *)(v13 + 86);
      v22 = *(unsigned int *)(v13 + 20);
      v23 = (const char *)&dword_140154ADC;
      if ( *(_QWORD *)(a1 + 752) )
        v23 = *(const char **)(a1 + 752);
      v28 = (unsigned __int16)v21 >> 1;
      LOWORD(v21) = (unsigned __int16)v21 >> 9;
      LOBYTE(v21) = v21 & 7;
      McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer(
        v21,
        v15,
        v22,
        *(_DWORD *)(v6 + 56),
        v6 + 1048,
        *(const wchar_t **)(v6 + 1032),
        *(const char **)(a1 + 792),
        *(_WORD *)(a1 + 4),
        0,
        *(_BYTE *)(a1 + 744),
        v23,
        (const char *)(a1 + 800),
        (const char *)(a1 + 841),
        "Get Log Page command",
        "NamespaceId",
        v22,
        "LogPageIdentifier",
        v15,
        byte_14015304C,
        0,
        byte_14015304C,
        0,
        byte_14015304C,
        0,
        byte_14015304C,
        v25,
        byte_14015304C,
        v26,
        byte_14015304C,
        v27,
        0,
        v14,
        v21,
        v28);
    }
  }
  else
  {
    v9 = *(char **)(a2 + 64);
    if ( (_BYTE)v15 != 1 )
    {
      if ( (_BYTE)v15 == 2 )
      {
        v16 = *v9;
        if ( *v9 && v16 != *(_BYTE *)(a1 + 946) )
        {
          *(_BYTE *)(a1 + 946) = v16;
          StorEtwNvmeControllerEvent(
            a1,
            1,
            3LL,
            (__int64)L"Health critical warning",
            L"CriticalWarning",
            *v9,
            L"AvailableSpare",
            v9[3],
            L"AvailableSpareThreshold",
            v9[4],
            L"PercentageUsed",
            v9[5],
            (void *)&word_140152E7C,
            0,
            (void *)&word_140152E7C,
            0,
            (void *)&word_140152E7C,
            0,
            (void *)&word_140152E7C,
            0);
        }
      }
      else if ( (_BYTE)v15 == 4 )
      {
        if ( *(_DWORD *)v9 )
        {
          v17 = *(_WORD *)(a1 + 24);
          v18 = 0LL;
          if ( *(_DWORD *)v9 == -1 )
          {
            if ( v17 )
            {
              do
              {
                v20 = v18 + 1;
                *(_DWORD *)(*(_QWORD *)(a1 + 608) + 4 * v18) = v18 + 1;
                v18 = (unsigned int)(v18 + 1);
              }
              while ( v20 < *(unsigned __int16 *)(a1 + 24) );
            }
          }
          else
          {
            v19 = 1024LL;
            if ( v17 < 0x400u )
              v19 = *(unsigned __int16 *)(a1 + 24);
            memmove(*(void **)(a1 + 608), *(const void **)(a2 + 64), 4 * v19);
          }
          NvmeAdapterScheduleFabricNvmeControllerBackgroundWork(a1, 100LL);
        }
        else
        {
          _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1072), 1u);
          _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1072), 2u);
        }
      }
    }
  }
  ExFreePoolWithTag(v9, 0x52436152u);
  ExFreePoolWithTag((PVOID)a2, 0x72536152u);
  result = NvmeAdapterSendFabricControllerAsyncEventCommand(a1, a6);
  if ( (int)result < 0 )
  {
    *(_QWORD *)(a1 + 136) |= 0x40000000uLL;
    if ( *(_DWORD *)(a1 + 572) == 1 )
      return NvmeAdapterScheduleFabricNvmeControllerBackgroundWork(a1, 5000LL);
  }
  return result;
}
