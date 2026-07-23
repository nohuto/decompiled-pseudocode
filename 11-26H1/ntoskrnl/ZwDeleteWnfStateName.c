/*
 * XREFs of ZwDeleteWnfStateName @ 0x140729BE0
 * Callers:
 *     PspJobDelete @ 0x1406187E0 (PspJobDelete.c)
 *     DifZwDeleteWnfStateNameWrapper @ 0x1406A8220 (DifZwDeleteWnfStateNameWrapper.c)
 *     PopFreeRegistration @ 0x1407D2738 (PopFreeRegistration.c)
 *     PspProcessDelete @ 0x140800D10 (PspProcessDelete.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1409A8FAC (PiUEventFreeClientRegistrationContext.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x140B3FE50 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PspCheckEnableNotificationChannel @ 0x140B68198 (PspCheckEnableNotificationChannel.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDeleteWnfStateName(PCWNF_STATE_NAME StateName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}
