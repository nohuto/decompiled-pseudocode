/*
 * XREFs of ZwRegisterProtocolAddressInformation @ 0x14072AF40
 * Callers:
 *     DifZwRegisterProtocolAddressInformationWrapper @ 0x1406BA170 (DifZwRegisterProtocolAddressInformationWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRegisterProtocolAddressInformation(
        HANDLE ResourceManager,
        PCRM_PROTOCOL_ID ProtocolId,
        ULONG ProtocolInformationSize,
        PVOID ProtocolInformation,
        ULONG CreateOptions)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManager);
}
