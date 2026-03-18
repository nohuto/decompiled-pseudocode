/*
 * XREFs of SepFreeTokenCapabilities @ 0x1404A72A0
 * Callers:
 *     SepSetTokenCapabilities @ 0x140A44AC4 (SepSetTokenCapabilities.c)
 *     SepTokenDeleteMethod @ 0x140B7CB10 (SepTokenDeleteMethod.c)
 * Callees:
 *     SepDeReferenceSharedSidEntries @ 0x140A46A88 (SepDeReferenceSharedSidEntries.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall SepFreeTokenCapabilities(__int64 a1)
{
  PVOID *v1; // rbx

  v1 = (PVOID *)(a1 + 792);
  if ( RtlpBootStatHandleLock.WaitBlockFill7[130] )
    SepDeReferenceSharedSidEntries(*v1, *(unsigned int *)(a1 + 800));
  ExFreePoolWithTag(*v1, 0);
}
