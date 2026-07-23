/*
 * XREFs of _guard_icall_bugcheck @ 0x140735D10
 * Callers:
 *     KeCheckStackAndTargetAddress @ 0x140470910 (KeCheckStackAndTargetAddress.c)
 *     _guard_check_icall_no_overrides @ 0x140735D50 (_guard_check_icall_no_overrides.c)
 * Callees:
 *     <none>
 */

void __noreturn guard_icall_bugcheck()
{
  __fastfail(0xAu);
}
