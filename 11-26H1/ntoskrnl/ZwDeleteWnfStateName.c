/*
 * XREFs of ZwDeleteWnfStateName @ 0x140725010
 * Callers:
 *     PspJobDelete @ 0x140615810 (PspJobDelete.c)
 *     DifZwDeleteWnfStateNameWrapper @ 0x1406A4640 (DifZwDeleteWnfStateNameWrapper.c)
 *     PopFreeRegistration @ 0x1407CF698 (PopFreeRegistration.c)
 *     PspProcessDelete @ 0x1407FB2E0 (PspProcessDelete.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1409D80BC (PiUEventFreeClientRegistrationContext.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x140B3DD70 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PspCheckEnableNotificationChannel @ 0x140B650F8 (PspCheckEnableNotificationChannel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDeleteWnfStateName(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
