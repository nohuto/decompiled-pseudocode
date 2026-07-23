/*
 * XREFs of ZwGetNlsSectionPtr @ 0x14072A000
 * Callers:
 *     DifZwGetNlsSectionPtrWrapper @ 0x1406ABA00 (DifZwGetNlsSectionPtrWrapper.c)
 *     RtlpGetNormalization @ 0x140814CE4 (RtlpGetNormalization.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwGetNlsSectionPtr(
        ULONG SectionType,
        ULONG SectionData,
        PVOID ContextData,
        PVOID *SectionPointer,
        PULONG SectionSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&SectionType);
}
