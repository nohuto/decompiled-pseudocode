/*
 * XREFs of sub_18001D8D4 @ 0x18001D8D4
 * Callers:
 *     sub_18001DB38 @ 0x18001DB38 (sub_18001DB38.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18001D1F0 @ 0x18001D1F0 (sub_18001D1F0.c)
 *     sub_18001D848 @ 0x18001D848 (sub_18001D848.c)
 */

_QWORD *__fastcall sub_18001D8D4(_QWORD *a1)
{
  _BYTE v3[256]; // [rsp+40h] [rbp-118h] BYREF

  sub_18001D848();
  sub_18001D1F0();
  sub_180011CC4(a1, v3);
  return a1;
}
