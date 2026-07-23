/*
 * XREFs of PopNotifyShutdownListener @ 0x140C03FA4
 * Callers:
 *     PopSaveHiberContext @ 0x140C01D50 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x140C04024 (PopShutdownSystem.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopNotifyShutdownListener(__int64 a1, __int64 a2)
{
  PVOID *i; // rbx
  __int64 result; // rax

  for ( i = (PVOID *)PopShutdownNotificationCallbackList; i != &PopShutdownNotificationCallbackList; i = (PVOID *)*i )
    result = guard_dispatch_icall_no_overrides((__int64)i[4], a2);
  return result;
}
