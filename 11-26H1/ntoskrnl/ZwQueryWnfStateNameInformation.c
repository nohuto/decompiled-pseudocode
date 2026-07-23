/*
 * XREFs of ZwQueryWnfStateNameInformation @ 0x14072AE00
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1406227E0 (RtlRaiseCustomSystemEventTrigger.c)
 *     DifZwQueryWnfStateNameInformationWrapper @ 0x1406B8D90 (DifZwQueryWnfStateNameInformationWrapper.c)
 *     DbgkpStartSystemErrorHandler @ 0x14078DAAC (DbgkpStartSystemErrorHandler.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryWnfStateNameInformation(
        PCWNF_STATE_NAME StateName,
        WNF_STATE_NAME_INFORMATION NameInfoClass,
        const void *ExplicitScope,
        PVOID InfoBuffer,
        ULONG InfoBufferSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}
