/*
 * XREFs of PopDiagTraceFirmwareS3Stats @ 0x140BFD8EC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     RtlULongLongMult @ 0x1404655A0 (RtlULongLongMult.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void PopDiagTraceFirmwareS3Stats()
{
  guard_dispatch_icall_no_overrides(35LL, 0LL);
}
