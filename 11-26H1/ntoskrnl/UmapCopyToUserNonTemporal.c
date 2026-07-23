/*
 * XREFs of UmapCopyToUserNonTemporal @ 0x140782790
 * Callers:
 *     KasanUmaCopyToUserNonTemporal @ 0x140723ED0 (KasanUmaCopyToUserNonTemporal.c)
 * Callees:
 *     RtlCopyMemoryNonTemporal @ 0x140735A10 (RtlCopyMemoryNonTemporal.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

void __fastcall UmapCopyToUserNonTemporal(void *Destination, void *Source, SIZE_T Length)
{
  if ( Length )
  {
    ProbeForRead(Destination, Length, 1u);
    RtlCopyMemoryNonTemporal(Destination, Source, Length);
  }
}
