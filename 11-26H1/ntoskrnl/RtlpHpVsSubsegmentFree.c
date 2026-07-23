/*
 * XREFs of RtlpHpVsSubsegmentFree @ 0x140355D68
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x14024D340 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextCleanup @ 0x140354A48 (RtlpHpVsContextCleanup.c)
 *     RtlpHpVsSlotFreeList @ 0x14035501C (RtlpHpVsSlotFreeList.c)
 *     RtlpHpVsSlotCompactChunks @ 0x1404135D0 (RtlpHpVsSlotCompactChunks.c)
 * Callees:
 *     KasanMarkAddressValidNoInline @ 0x1405257D0 (KasanMarkAddressValidNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentFree(__int64 a1, ULONG_PTR a2)
{
  unsigned int v4; // ebx

  v4 = 16 * (*(unsigned __int16 *)(a2 + 32) + 3);
  if ( (RtlpHpLfhPerfFlags & 0x20000) != 0 && byte_140FC8BD8 )
    KasanMarkAddressValidNoInline(a2, v4);
  return guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8) ^ a1, a2, v4);
}
