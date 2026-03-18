/*
 * XREFs of PopValidateContextMembership @ 0x140B3EFE0
 * Callers:
 *     PopGetSettingNotificationName @ 0x140A3B2C4 (PopGetSettingNotificationName.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x140499FD0 (RtlCheckTokenMembership.c)
 */

__int64 __fastcall PopValidateContextMembership(void *a1)
{
  RtlCheckTokenMembership(0LL, a1);
  return 3221225506LL;
}
