/*
 * XREFs of KcsanMarkAddressIgnored @ 0x1404F1570
 * Callers:
 *     MiAllocateSlabEntry @ 0x140206FA0 (MiAllocateSlabEntry.c)
 *     MiCreatePageFileSpaceBitmaps @ 0x1408713F8 (MiCreatePageFileSpaceBitmaps.c)
 *     MiInitializeDecayPfns @ 0x140D07C7C (MiInitializeDecayPfns.c)
 * Callees:
 *     KasanTrackAddressNoInline @ 0x140534710 (KasanTrackAddressNoInline.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     KasanMarkAddressInvalidNoInline @ 0x1405E00B0 (KasanMarkAddressInvalidNoInline.c)
 */

void __fastcall KcsanMarkAddressIgnored(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  int v4; // eax

  if ( KcsaniEnabled && byte_140FC8BD8 )
  {
    v4 = KasanTrackAddressNoInline(BugCheckParameter3, BugCheckParameter4, 0LL);
    if ( v4 < 0 )
      KeBugCheckEx(0x1F1u, 4uLL, 5uLL, v4, 2uLL);
    if ( byte_140FC8BD8 )
      KasanMarkAddressInvalidNoInline(BugCheckParameter3, BugCheckParameter4);
  }
}
