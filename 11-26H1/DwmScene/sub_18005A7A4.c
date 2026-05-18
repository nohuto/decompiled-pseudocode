/*
 * XREFs of sub_18005A7A4 @ 0x18005A7A4
 * Callers:
 *     sub_180066AA4 @ 0x180066AA4 (sub_180066AA4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800143E4 @ 0x1800143E4 (sub_1800143E4.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18005A7A4(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  *(_DWORD *)(a1 + 172) = a2;
  *(_DWORD *)(a1 + 176) = 0;
  sub_1800143E4(a1 + 184, a4);
  sub_1800143E4(a1 + 216, a5);
  sub_1800143E4(a1 + 248, a6);
  sub_1800129D0(a4);
  sub_1800129D0(a5);
  return sub_1800129D0(a6);
}
