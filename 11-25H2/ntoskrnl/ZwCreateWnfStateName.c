/*
 * XREFs of ZwCreateWnfStateName @ 0x14069CBC0
 * Callers:
 *     ExpTrackTableInsertLimit @ 0x140649430 (ExpTrackTableInsertLimit.c)
 *     PiUEventInitClientRegistrationContext @ 0x140967DB0 (PiUEventInitClientRegistrationContext.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140969360 (PspAllocateAndQueryNotificationChannel.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1409CD200 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PopCreateNotificationName @ 0x140A73BA8 (PopCreateNotificationName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateWnfStateName(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
