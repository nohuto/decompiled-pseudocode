/*
 * XREFs of sub_18004C0E0 @ 0x18004C0E0
 * Callers:
 *     sub_18004D1C8 @ 0x18004D1C8 (sub_18004D1C8.c)
 *     sub_18004E254 @ 0x18004E254 (sub_18004E254.c)
 *     sub_180059AA0 @ 0x180059AA0 (sub_180059AA0.c)
 *     sub_18005CCD0 @ 0x18005CCD0 (sub_18005CCD0.c)
 *     sub_18005CE48 @ 0x18005CE48 (sub_18005CE48.c)
 *     sub_180061A20 @ 0x180061A20 (sub_180061A20.c)
 *     sub_180075CF8 @ 0x180075CF8 (sub_180075CF8.c)
 *     sub_18007661C @ 0x18007661C (sub_18007661C.c)
 *     sub_180076C20 @ 0x180076C20 (sub_180076C20.c)
 *     sub_180076D44 @ 0x180076D44 (sub_180076D44.c)
 *     sub_18007A030 @ 0x18007A030 (sub_18007A030.c)
 *     sub_180080F34 @ 0x180080F34 (sub_180080F34.c)
 *     sub_180086020 @ 0x180086020 (sub_180086020.c)
 *     sub_1800908AC @ 0x1800908AC (sub_1800908AC.c)
 * Callees:
 *     sub_18004C250 @ 0x18004C250 (sub_18004C250.c)
 */

__int64 __fastcall sub_18004C0E0(void **a1, __int64 a2)
{
  sub_18004C250(a1, a2, *((_QWORD *)*a1 + 1));
  return sub_18000E26C(*a1, 0x40uLL);
}
