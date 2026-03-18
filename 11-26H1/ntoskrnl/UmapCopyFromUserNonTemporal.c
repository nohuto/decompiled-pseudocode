/*
 * XREFs of UmapCopyFromUserNonTemporal @ 0x14077FC30
 * Callers:
 *     KasanUmaCopyFromUserNonTemporal @ 0x14071F050 (KasanUmaCopyFromUserNonTemporal.c)
 * Callees:
 *     RtlCopyMemoryNonTemporal @ 0x140730E40 (RtlCopyMemoryNonTemporal.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 */

void __fastcall UmapCopyFromUserNonTemporal(void *Destination, void *Source, SIZE_T Length)
{
  if ( Length )
  {
    ProbeForRead(Source, Length, 1u);
    RtlCopyMemoryNonTemporal(Destination, Source, Length);
  }
}
