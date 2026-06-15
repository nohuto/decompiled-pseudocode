/*
 * XREFs of sub_140058AB4 @ 0x140058AB4
 * Callers:
 *     sub_1400574A0 @ 0x1400574A0 (sub_1400574A0.c)
 * Callees:
 *     sub_140056B1C @ 0x140056B1C (sub_140056B1C.c)
 *     sub_140058500 @ 0x140058500 (sub_140058500.c)
 */

char __fastcall sub_140058AB4(__int64 a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  sub_140056B1C(a1, &v5);
  v2 = v5 & 1;
  sub_140058500(a1, v5 & 1, v3);
  return v2;
}
