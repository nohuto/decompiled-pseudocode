/*
 * XREFs of RtlCopyFromUserNonTemporal @ 0x14077F21C
 * Callers:
 *     MmCopyToCachedPage @ 0x1402D05F0 (MmCopyToCachedPage.c)
 * Callees:
 *     RtlCopyMemoryNonTemporal @ 0x140730E40 (RtlCopyMemoryNonTemporal.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 */

void __fastcall RtlCopyFromUserNonTemporal(void *Destination, void *Source, SIZE_T Length)
{
  if ( Length )
  {
    ProbeForRead(Source, Length, 1u);
    RtlCopyMemoryNonTemporal(Destination, Source, Length);
  }
}
