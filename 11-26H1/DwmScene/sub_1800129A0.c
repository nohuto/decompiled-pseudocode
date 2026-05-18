/*
 * XREFs of sub_1800129A0 @ 0x1800129A0
 * Callers:
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_18004232C @ 0x18004232C (sub_18004232C.c)
 * Callees:
 *     sub_18001291C @ 0x18001291C (sub_18001291C.c)
 */

void __noreturn sub_1800129A0()
{
  _QWORD v0[3]; // [rsp+20h] [rbp-18h] BYREF

  v0[1] = "unknown";
  v0[0] = &std::bad_weak_ptr::`vftable';
  sub_18001291C((const struct stdext::exception *)v0);
}
