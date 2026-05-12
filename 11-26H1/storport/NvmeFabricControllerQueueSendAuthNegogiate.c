/*
 * XREFs of NvmeFabricControllerQueueSendAuthNegogiate @ 0x1400FE088
 * Callers:
 *     NvmeFabricControllerQueueAuthenticate @ 0x1400FBB60 (NvmeFabricControllerQueueAuthenticate.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     NvmeAdapterProcessControllerQueueRequestSync @ 0x1400EC530 (NvmeAdapterProcessControllerQueueRequestSync.c)
 *     NvmeControllerQueueIncrementProcessingCount @ 0x1400F9698 (NvmeControllerQueueIncrementProcessingCount.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeFabricControllerQueueSendAuthNegogiate(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v5; // r8d
  unsigned int i; // edx
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  int v13; // edx

  v2 = *(_QWORD *)(a1 + 88);
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
  v9 = *(_QWORD *)(a1 + 96);
  memset_0((void *)(v9 + 1578), 0, 0xFFEuLL);
  *(_WORD *)(v9 + 1576) = 0;
  *(_WORD *)(v9 + 1580) = **(_WORD **)(a1 + 96);
  *(_BYTE *)(v9 + 1582) = *(_BYTE *)(*(_QWORD *)(a1 + 96) + 2LL);
  *(_WORD *)(v9 + 1583) = 257;
  *(_DWORD *)(v9 + 1586) = 33620995;
  *(_BYTE *)(v9 + 1590) = 3;
  *(_DWORD *)(v9 + 1618) = 50462976;
  memset_0((void *)(v8 + 16), 0, 0x40uLL);
  *(_BYTE *)(v8 + 16) = 127;
  *(_DWORD *)(v8 + 60) = 72;
  *(_BYTE *)(v8 + 20) = 5;
  *(_WORD *)(v8 + 57) = 257;
  *(_BYTE *)(v8 + 59) = -23;
  v12 = *(_QWORD *)(a1 + 96);
  *(_DWORD *)(a2 + 60) = 72;
  *(_QWORD *)(a2 + 64) = v12 + 1576;
  *(_DWORD *)(a2 + 24) = 128;
  *(_BYTE *)(v8 + 80) = 2;
  *(_WORD *)(v8 + 82) = 2;
  *(_WORD *)(v8 + 106) = *(_WORD *)(a1 + 136);
  if ( *(_WORD *)(a1 + 136) )
    NvmeControllerQueueIncrementProcessingCount(a1);
  v13 = NvmeAdapterProcessControllerQueueRequestSync(a1, a2, v10, v11, 1, 0LL, 0LL, 0);
  if ( v13 < 0 || *(_BYTE *)(a2 + 3) != 1 || (*(_WORD *)(v8 + 86) & 0xFFE) != 0 )
  {
    StorEtwNvmeControllerEvent(
      v2,
      1,
      2LL,
      (__int64)L"Authentication send - negotiate failed",
      L"Status",
      v13,
      L"SrbStatus",
      *(_BYTE *)(a2 + 3),
      L"SCT",
      ((unsigned __int64)*(unsigned __int16 *)(v8 + 86) >> 9) & 7,
      L"SC",
      (unsigned __int64)*(unsigned __int16 *)(v8 + 86) >> 1,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0);
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v13;
}
