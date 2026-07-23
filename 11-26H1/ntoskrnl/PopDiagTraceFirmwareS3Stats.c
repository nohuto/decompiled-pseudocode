/*
 * XREFs of PopDiagTraceFirmwareS3Stats @ 0x140C038EC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     RtlULongLongMult @ 0x14045E560 (RtlULongLongMult.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void PopDiagTraceFirmwareS3Stats()
{
  guard_dispatch_icall_no_overrides(35LL, 0LL);
}
