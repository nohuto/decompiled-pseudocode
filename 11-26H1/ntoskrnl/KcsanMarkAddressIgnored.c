/*
 * XREFs of KcsanMarkAddressIgnored @ 0x1404F7F60
 * Callers:
 *     MiAllocateSlabEntry @ 0x140206EC0 (MiAllocateSlabEntry.c)
 *     MiCreatePageFileSpaceBitmaps @ 0x14086B018 (MiCreatePageFileSpaceBitmaps.c)
 *     MiInitializeDecayPfns @ 0x140D018DC (MiInitializeDecayPfns.c)
 * Callees:
 *     KasanTrackAddressNoInline @ 0x140532270 (KasanTrackAddressNoInline.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     KasanMarkAddressInvalidNoInline @ 0x1405DD740 (KasanMarkAddressInvalidNoInline.c)
 */

void __fastcall KcsanMarkAddressIgnored(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  int v4; // eax

  if ( KcsaniEnabled && byte_140FC7BE8 )
  {
    v4 = KasanTrackAddressNoInline(BugCheckParameter3, BugCheckParameter4, 0LL);
    if ( v4 < 0 )
      KeBugCheckEx(0x1F1u, 4uLL, 5uLL, v4, 2uLL);
    if ( byte_140FC7BE8 )
      KasanMarkAddressInvalidNoInline(BugCheckParameter3, BugCheckParameter4);
  }
}
