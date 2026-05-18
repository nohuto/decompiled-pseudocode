/*
 * XREFs of sub_180012970 @ 0x180012970
 * Callers:
 *     sub_1800117E8 @ 0x1800117E8 (sub_1800117E8.c)
 *     sub_180011B48 @ 0x180011B48 (sub_180011B48.c)
 *     sub_18001323C @ 0x18001323C (sub_18001323C.c)
 *     sub_180017D00 @ 0x180017D00 (sub_180017D00.c)
 *     sub_180017D30 @ 0x180017D30 (sub_180017D30.c)
 *     sub_18001EB8C @ 0x18001EB8C (sub_18001EB8C.c)
 *     sub_180025040 @ 0x180025040 (sub_180025040.c)
 *     sub_1800277D0 @ 0x1800277D0 (sub_1800277D0.c)
 *     sub_180028BA0 @ 0x180028BA0 (sub_180028BA0.c)
 *     sub_18002A9D8 @ 0x18002A9D8 (sub_18002A9D8.c)
 *     sub_18002AA04 @ 0x18002AA04 (sub_18002AA04.c)
 *     sub_18002ECC8 @ 0x18002ECC8 (sub_18002ECC8.c)
 *     sub_18006B70C @ 0x18006B70C (sub_18006B70C.c)
 *     sub_18006B814 @ 0x18006B814 (sub_18006B814.c)
 *     sub_18007D44C @ 0x18007D44C (sub_18007D44C.c)
 *     sub_1800853D8 @ 0x1800853D8 (sub_1800853D8.c)
 * Callees:
 *     sub_18001291C @ 0x18001291C (sub_18001291C.c)
 */

// Hidden C++ exception states: #wind=1
void __noreturn sub_180012970()
{
  _QWORD v0[3]; // [rsp+20h] [rbp-18h] BYREF

  v0[1] = "bad array new length";
  v0[0] = &stdext::bad_array_new_length::`vftable';
  sub_18001291C((const struct stdext::exception *)v0);
}
