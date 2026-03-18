/*
 * XREFs of RtlpHpVsSubsegmentFree @ 0x140353CE8
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x14024B9E0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextCleanup @ 0x1403529C8 (RtlpHpVsContextCleanup.c)
 *     RtlpHpVsSlotFreeList @ 0x140352F9C (RtlpHpVsSlotFreeList.c)
 *     RtlpHpVsSlotCompactChunks @ 0x14041BD80 (RtlpHpVsSlotCompactChunks.c)
 * Callees:
 *     KasanMarkAddressValidNoInline @ 0x140523160 (KasanMarkAddressValidNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentFree(__int64 a1, ULONG_PTR a2)
{
  unsigned int v4; // ebx

  v4 = 16 * (*(unsigned __int16 *)(a2 + 32) + 3);
  if ( (RtlpHpLfhPerfFlags & 0x20000) != 0 && byte_140FC7BE8 )
    KasanMarkAddressValidNoInline(a2, v4);
  return guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8) ^ a1, a2, v4);
}
