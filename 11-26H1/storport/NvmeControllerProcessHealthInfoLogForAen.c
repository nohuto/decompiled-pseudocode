/*
 * XREFs of NvmeControllerProcessHealthInfoLogForAen @ 0x1400F8E6C
 * Callers:
 *     NvmeControllerGetLogPageCompletionForAER @ 0x1400F4110 (NvmeControllerGetLogPageCompletionForAER.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     NvmeAdapterProcessStorageEventNotification @ 0x14012C4F0 (NvmeAdapterProcessStorageEventNotification.c)
 */

char __fastcall NvmeControllerProcessHealthInfoLogForAen(__int64 a1, char *a2)
{
  char v4; // r14
  char v6; // si
  int v7; // edx
  char v8; // al
  __int64 v9; // rax
  __int64 v10; // rax
  __int128 v11; // [rsp+A8h] [rbp+27h] BYREF

  v4 = 0;
  v11 = 0LL;
  if ( !a2 )
    return 0;
  v6 = *a2;
  if ( *a2 && v6 != *(_BYTE *)(a1 + 946) )
  {
    *(_BYTE *)(a1 + 946) = v6;
    StorEtwNvmeControllerEvent(
      a1,
      2,
      2LL,
      (__int64)L"Health Status : Critical Warning",
      L"Critical Warning",
      v6,
      L"Spare Below Threshold",
      *a2 & 1,
      L"Temperature Threshold",
      (*a2 & 2) != 0LL,
      L"Reliability Degraded",
      (*a2 & 4) != 0,
      L"ReadOnly",
      (*a2 & 8) != 0LL,
      L"Volatile Memory Backup Device Failure",
      (*a2 & 0x10) != 0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0);
    if ( v6 != 2 )
    {
      v7 = *(_DWORD *)(a1 + 1224);
      if ( ((unsigned __int8)v7 & *(_BYTE *)(a1 + 946) & 0xFD) != 0 )
      {
        v4 = 1;
        *(_DWORD *)(a1 + 1224) = v7 & ~*(unsigned __int8 *)(a1 + 946) | 2;
      }
    }
    v8 = *a2;
    if ( (*a2 & 1) != 0 )
    {
      *(_QWORD *)&v11 = v11 | 1;
    }
    else if ( (v8 & 2) != 0 )
    {
      *(_QWORD *)&v11 = v11 | 2;
    }
    else if ( (v8 & 4) != 0 )
    {
      *(_QWORD *)&v11 = v11 | 4;
    }
    else if ( (v8 & 8) != 0 )
    {
      *(_QWORD *)&v11 = v11 | 8;
    }
    else if ( (v8 & 0x10) != 0 )
    {
      *(_QWORD *)&v11 = v11 | 0x10;
    }
    else
    {
      *(_QWORD *)&v11 = v11 | 0x800;
    }
    NvmeAdapterProcessStorageEventNotification(*(_QWORD *)(a1 + 128), &v11, a2, 512LL);
  }
  if ( (unsigned __int8)a2[5] >= 0x5Fu )
  {
    v9 = *(_QWORD *)(a1 + 136);
    if ( (v9 & 0x800000000LL) == 0 )
    {
      *(_QWORD *)(a1 + 136) = v9 | 0x800000000LL;
      StorEtwNvmeControllerEvent(
        a1,
        2,
        2LL,
        (__int64)L"Health Status : Percentage Used",
        L"Percentage Used",
        a2[5],
        L"Endurance Threshold Limit",
        95,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
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
  if ( (unsigned __int8)a2[3] <= 2u )
  {
    v10 = *(_QWORD *)(a1 + 136);
    if ( (v10 & 0x1000000000LL) == 0 )
    {
      *(_QWORD *)(a1 + 136) = v10 | 0x1000000000LL;
      StorEtwNvmeControllerEvent(
        a1,
        2,
        2LL,
        (__int64)L"Health Status : Available Spare",
        L"Available Spare",
        a2[3],
        L"Spare Threshold Limit",
        2,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
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
  return v4;
}
