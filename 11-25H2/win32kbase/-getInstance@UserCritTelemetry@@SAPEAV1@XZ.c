/*
 * XREFs of ?getInstance@UserCritTelemetry@@SAPEAV1@XZ @ 0x14003D960
 * Callers:
 *     EtwTraceAcquiredSharedUserCrit @ 0x14003CB40 (EtwTraceAcquiredSharedUserCrit.c)
 *     EtwTraceAcquireExclusiveUserCrit @ 0x14003CDD0 (EtwTraceAcquireExclusiveUserCrit.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x14003CED0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     EtwTraceReleaseUserCrit @ 0x14003D690 (EtwTraceReleaseUserCrit.c)
 * Callees:
 *     <none>
 */

struct UserCritTelemetry *__fastcall UserCritTelemetry::getInstance(__int64 a1, __int64 a2)
{
  return (struct UserCritTelemetry *)(W32GetUserSessionState(a1, a2) + 36448);
}
