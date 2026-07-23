/*
 * XREFs of RtlCopyFromUserNonTemporal @ 0x140781D1C
 * Callers:
 *     MmCopyToCachedPage @ 0x1402B23B0 (MmCopyToCachedPage.c)
 * Callees:
 *     RtlCopyMemoryNonTemporal @ 0x140735A10 (RtlCopyMemoryNonTemporal.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

void __fastcall RtlCopyFromUserNonTemporal(void *Destination, void *Source, SIZE_T Length)
{
  if ( Length )
  {
    ProbeForRead(Source, Length, 1u);
    RtlCopyMemoryNonTemporal(Destination, Source, Length);
  }
}
