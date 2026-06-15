/*
 * XREFs of sub_140023530 @ 0x140023530
 * Callers:
 *     sub_140015930 @ 0x140015930 (sub_140015930.c)
 *     sub_14003F2C0 @ 0x14003F2C0 (sub_14003F2C0.c)
 * Callees:
 *     sub_1400239C4 @ 0x1400239C4 (sub_1400239C4.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140023530(int a1, int a2, int a3)
{
  _BYTE v4[32]; // [rsp+30h] [rbp-38h] BYREF

  return sub_1400239C4(a1, a2, a3, 0, 2, (__int64)v4);
}
