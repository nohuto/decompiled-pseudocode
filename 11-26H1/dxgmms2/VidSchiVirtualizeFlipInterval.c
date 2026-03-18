/*
 * XREFs of VidSchiVirtualizeFlipInterval @ 0x140034838
 * Callers:
 *     ?VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x140032608 (-VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAU.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1400329BC (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 * Callees:
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x14004BA9C (McTemplateK0qqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchiVirtualizeFlipInterval(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  __int64 v5; // rcx
  __int64 result; // rax
  unsigned int v7; // edx
  unsigned int v8; // r8d

  v2 = *(_DWORD *)(a2 + 1336);
  if ( !v2 )
  {
    v2 = 1;
    *(_DWORD *)(a2 + 1336) = 1;
  }
  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 1040) + 48LL);
  if ( !*(_BYTE *)(*(_QWORD *)(v5 + 16) + 138LL) )
  {
    v7 = *(_DWORD *)(a1 + 83092);
    if ( v2 != v7 && (*(_DWORD *)(a2 + 1152) & 0x100) == 0 && *(_DWORD *)(a1 + 4) != 3 )
    {
      v8 = *(_DWORD *)(a2 + 1072);
      if ( v2 < v7 )
      {
        if ( v8 )
          v7 *= v8;
      }
      else
      {
        v7 = v8 / v2;
      }
      *(_DWORD *)(a2 + 1072) = v7;
      if ( (byte_14008A204 & 0x20) != 0 )
        McTemplateK0qqqq_EtwWriteTransfer(
          v5,
          (unsigned int)&EventVirtualizeFlipSubmissionRate,
          v8,
          v2,
          *(_DWORD *)(a1 + 83092),
          v8,
          v7);
    }
  }
  result = *(unsigned int *)(a1 + 83092);
  *(_DWORD *)(a2 + 1336) = result;
  return result;
}
