/*
 * XREFs of __guard_retpoline_icall_handler @ 0x140BAD080
 * Callers:
 *     <none>
 * Callees:
 *     sub_140BAD0A0 @ 0x140BAD0A0 (sub_140BAD0A0.c)
 */

void __noreturn _guard_retpoline_icall_handler()
{
  sub_140BAD0A0();
  __debugbreak();
}
