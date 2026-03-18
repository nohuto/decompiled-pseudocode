/*
 * XREFs of _guard_icall_bugcheck @ 0x1406A8A70
 * Callers:
 *     KeCheckStackAndTargetAddress @ 0x140439680 (KeCheckStackAndTargetAddress.c)
 *     _guard_check_icall_no_overrides @ 0x1406A8AD0 (_guard_check_icall_no_overrides.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __fastcall __noreturn guard_icall_bugcheck(ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x139u, 0xAuLL, 0LL, 0LL, BugCheckParameter4);
}
