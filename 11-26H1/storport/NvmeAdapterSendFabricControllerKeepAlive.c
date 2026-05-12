/*
 * XREFs of NvmeAdapterSendFabricControllerKeepAlive @ 0x1400ED538
 * Callers:
 *     NvmeAdapterNvmeControllerKeepAliveWork @ 0x1400EAA20 (NvmeAdapterNvmeControllerKeepAliveWork.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     NvmeAdapterProcessControllerQueueRequestAsync @ 0x1400EC344 (NvmeAdapterProcessControllerQueueRequestAsync.c)
 */

__int64 __fastcall NvmeAdapterSendFabricControllerKeepAlive(__int64 a1)
{
  int v2; // edi

  *(_BYTE *)(*(_QWORD *)(a1 + 536) + 3LL) = 0;
  v2 = NvmeAdapterProcessControllerQueueRequestAsync(
         *(_QWORD *)(a1 + 712),
         *(_QWORD *)(a1 + 536),
         1,
         1,
         1,
         0LL,
         0LL,
         0,
         (__int64)NvmeAdapterCompleteFabricControllerKeepAlive,
         0LL);
  if ( v2 < 0 )
    StorEtwNvmeControllerEvent(
      a1,
      1,
      3LL,
      (__int64)L"Keep Alive send failure",
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
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0);
  else
    StorEtwNvmeControllerEvent(
      a1,
      1,
      4LL,
      (__int64)L"Keep Alive sent",
      L"KeepAliveTimeout msecs",
      *(_DWORD *)(a1 + 1076),
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
      0,
      (void *)&word_140152E7C,
      0);
  return (unsigned int)v2;
}
