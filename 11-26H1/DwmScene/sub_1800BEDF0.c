/*
 * XREFs of sub_1800BEDF0 @ 0x1800BEDF0
 * Callers:
 *     sub_1800BC4A0 @ 0x1800BC4A0 (sub_1800BC4A0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800B8B44 @ 0x1800B8B44 (sub_1800B8B44.c)
 *     sub_1800BA6E4 @ 0x1800BA6E4 (sub_1800BA6E4.c)
 */

__int64 __fastcall sub_1800BEDF0(__int64 a1, signed int a2)
{
  _WORD *v3; // rdx
  _WORD v5[3]; // [rsp+5Ah] [rbp-1Eh] BYREF

  if ( a2 >= 0 )
  {
    v3 = sub_1800BA6E4(v5, a2);
  }
  else
  {
    v3 = sub_1800BA6E4(v5, -a2) - 1;
    *v3 = 45;
  }
  sub_1800B8B44(a1, v3, v5);
  return a1;
}
