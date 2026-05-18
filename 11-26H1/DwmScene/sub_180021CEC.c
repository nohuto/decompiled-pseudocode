/*
 * XREFs of sub_180021CEC @ 0x180021CEC
 * Callers:
 *     sub_180022B8C @ 0x180022B8C (sub_180022B8C.c)
 *     sub_180023FFC @ 0x180023FFC (sub_180023FFC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800219C0 @ 0x1800219C0 (sub_1800219C0.c)
 */

__int64 __fastcall sub_180021CEC(__int64 a1)
{
  GUID v3; // [rsp+20h] [rbp-38h] BYREF
  GUID pguid; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)(a1 + 152) = 64LL;
  pguid = 0LL;
  CoCreateGuid(&pguid);
  v3 = pguid;
  sub_1800219C0(a1, (__int128 *)&v3);
  return a1;
}
