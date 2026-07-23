/*
 * XREFs of SepFreeTokenCapabilities @ 0x1404A0930
 * Callers:
 *     SepSetTokenCapabilities @ 0x1409E2C54 (SepSetTokenCapabilities.c)
 *     SepTokenDeleteMethod @ 0x140B85580 (SepTokenDeleteMethod.c)
 * Callees:
 *     SepDeReferenceSharedSidEntries @ 0x1409E45E0 (SepDeReferenceSharedSidEntries.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SepFreeTokenCapabilities(__int64 a1)
{
  PVOID *v1; // rbx

  v1 = (PVOID *)(a1 + 792);
  if ( BYTE1(RtlpBootStatHandleLock.Queue) )
    SepDeReferenceSharedSidEntries(*v1, *(unsigned int *)(a1 + 800));
  ExFreePoolWithTag(*v1, 0);
}
