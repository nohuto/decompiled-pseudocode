/*
 * XREFs of _guard_icall_bugcheck @ 0x140731140
 * Callers:
 *     KeCheckStackAndTargetAddress @ 0x140477190 (KeCheckStackAndTargetAddress.c)
 *     _guard_check_icall_no_overrides @ 0x140731180 (_guard_check_icall_no_overrides.c)
 * Callees:
 *     <none>
 */

void __noreturn guard_icall_bugcheck()
{
  __fastfail(0xAu);
}
