/*
 * XREFs of VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x14001F524
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x140032CC4 (VidSchiExecuteMmIoFlip.c)
 * Callees:
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x14001F7AC (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 */

void __fastcall VidSchiUnreferenceDisplayingAllocationsForThisEntry(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int16 v4; // r9

  if ( (*(_DWORD *)(a4 + 1152) & 0x10) != 0 )
    v4 = *(_WORD *)(a3 + 44296) & (**(_WORD **)(a4 + 1192) | (**(_DWORD **)(a4 + 1192) >> 10)) & 0x3FF;
  else
    v4 = *(_WORD *)(a3 + 44296);
  VidSchiUnreferenceDisplayingAllocations(a1, a2, (struct _VIDSCH_PRESENT_INFO *)a3, v4);
}
