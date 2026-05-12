/*
 * XREFs of NvmeAdapterDisableFabricControllerAsyncEvent @ 0x1400E7B8C
 * Callers:
 *     NvmeAdapterCleanupFabricNvmeController @ 0x1400E5018 (NvmeAdapterCleanupFabricNvmeController.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     NvmeAdapterSetFabricControllerFeature @ 0x1400ED69C (NvmeAdapterSetFabricControllerFeature.c)
 */

__int64 __fastcall NvmeAdapterDisableFabricControllerAsyncEvent(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // ebx

  v4 = 0;
  if ( *(_DWORD *)(a1 + 568) == 2 )
  {
    v4 = NvmeAdapterSetFabricControllerFeature(a1, 0, 11, a4, 0);
    if ( v4 < 0 )
      StorEtwNvmeControllerEvent(
        a1,
        1,
        2LL,
        (__int64)L"Disabling Async Event failed",
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
  }
  return (unsigned int)v4;
}
