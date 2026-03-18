/*
 * XREFs of ZwCreateWnfStateName @ 0x140724E70
 * Callers:
 *     DifZwCreateWnfStateNameWrapper @ 0x1406A36F0 (DifZwCreateWnfStateNameWrapper.c)
 *     ExpTrackTableInsertLimit @ 0x1406CCD60 (ExpTrackTableInsertLimit.c)
 *     PspAllocateNotificationChannel @ 0x1407F7938 (PspAllocateNotificationChannel.c)
 *     PiUEventInitClientRegistrationContext @ 0x1409D7674 (PiUEventInitClientRegistrationContext.c)
 *     PopCreateNotificationName @ 0x140A3AE38 (PopCreateNotificationName.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x140B3DD70 (PspAllocateAndQueryProcessNotificationChannel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateWnfStateName(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
