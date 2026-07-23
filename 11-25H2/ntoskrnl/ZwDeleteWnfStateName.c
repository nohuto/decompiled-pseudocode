/*
 * XREFs of ZwDeleteWnfStateName @ 0x14069CD60
 * Callers:
 *     PspJobDelete @ 0x1404EB860 (PspJobDelete.c)
 *     PopFreeRegistration @ 0x140745274 (PopFreeRegistration.c)
 *     PspProcessDelete @ 0x1408E1310 (PspProcessDelete.c)
 *     PiUEventFreeClientRegistrationContext @ 0x140967C20 (PiUEventFreeClientRegistrationContext.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140969360 (PspAllocateAndQueryNotificationChannel.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1409CD200 (PspAllocateAndQueryProcessNotificationChannel.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDeleteWnfStateName(PCWNF_STATE_NAME StateName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}
