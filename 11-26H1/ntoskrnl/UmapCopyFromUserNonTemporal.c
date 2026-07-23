/*
 * XREFs of UmapCopyFromUserNonTemporal @ 0x140782730
 * Callers:
 *     KasanUmaCopyFromUserNonTemporal @ 0x140723C70 (KasanUmaCopyFromUserNonTemporal.c)
 * Callees:
 *     RtlCopyMemoryNonTemporal @ 0x140735A10 (RtlCopyMemoryNonTemporal.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

void __fastcall UmapCopyFromUserNonTemporal(void *Destination, void *Source, SIZE_T Length)
{
  if ( Length )
  {
    ProbeForRead(Source, Length, 1u);
    RtlCopyMemoryNonTemporal(Destination, Source, Length);
  }
}
