/*
 * XREFs of sub_18001EA08 @ 0x18001EA08
 * Callers:
 *     sub_18002C03C @ 0x18002C03C (sub_18002C03C.c)
 *     sub_18003AFB0 @ 0x18003AFB0 (sub_18003AFB0.c)
 *     sub_18005E244 @ 0x18005E244 (sub_18005E244.c)
 *     sub_180080F34 @ 0x180080F34 (sub_180080F34.c)
 *     sub_18008F8D0 @ 0x18008F8D0 (sub_18008F8D0.c)
 * Callees:
 *     sub_18001D260 @ 0x18001D260 (sub_18001D260.c)
 *     sub_18001DF88 @ 0x18001DF88 (sub_18001DF88.c)
 */

__int64 __fastcall sub_18001EA08(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax

  v4 = sub_18001DF88(a2, a3);
  sub_18001D260(a1, v4);
  return a1;
}
