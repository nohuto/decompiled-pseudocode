/*
 * XREFs of UmapCopyToUserNonTemporal @ 0x14077FC90
 * Callers:
 *     KasanUmaCopyToUserNonTemporal @ 0x14071F2B0 (KasanUmaCopyToUserNonTemporal.c)
 * Callees:
 *     RtlCopyMemoryNonTemporal @ 0x140730E40 (RtlCopyMemoryNonTemporal.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 */

void __fastcall UmapCopyToUserNonTemporal(void *Destination, void *Source, SIZE_T Length)
{
  if ( Length )
  {
    ProbeForRead(Destination, Length, 1u);
    RtlCopyMemoryNonTemporal(Destination, Source, Length);
  }
}
