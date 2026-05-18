/*
 * XREFs of sub_18001291C @ 0x18001291C
 * Callers:
 *     sub_180012970 @ 0x180012970 (sub_180012970.c)
 *     sub_1800129A0 @ 0x1800129A0 (sub_1800129A0.c)
 *     sub_180027484 @ 0x180027484 (sub_180027484.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

void __fastcall __noreturn sub_18001291C(const struct stdext::exception *a1)
{
  if ( std::_Raise_handler )
    std::_Raise_handler(a1);
  (*(void (__fastcall **)(const struct stdext::exception *))(*(_QWORD *)a1 + 16LL))(a1);
  invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
}
