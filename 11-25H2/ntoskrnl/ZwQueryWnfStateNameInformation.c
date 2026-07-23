/*
 * XREFs of ZwQueryWnfStateNameInformation @ 0x14069DF60
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405E3BE0 (RtlRaiseCustomSystemEventTrigger.c)
 *     DbgkpStartSystemErrorHandler @ 0x1408B7284 (DbgkpStartSystemErrorHandler.c)
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
