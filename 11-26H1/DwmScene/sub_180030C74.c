/*
 * XREFs of sub_180030C74 @ 0x180030C74
 * Callers:
 *     sub_180033900 @ 0x180033900 (sub_180033900.c)
 *     sub_180035030 @ 0x180035030 (sub_180035030.c)
 *     sub_1800351DC @ 0x1800351DC (sub_1800351DC.c)
 *     sub_18003587C @ 0x18003587C (sub_18003587C.c)
 *     sub_180035A5C @ 0x180035A5C (sub_180035A5C.c)
 *     sub_180035EE0 @ 0x180035EE0 (sub_180035EE0.c)
 *     sub_1800369D4 @ 0x1800369D4 (sub_1800369D4.c)
 *     sub_180036FAC @ 0x180036FAC (sub_180036FAC.c)
 *     sub_180037410 @ 0x180037410 (sub_180037410.c)
 *     sub_1800597B4 @ 0x1800597B4 (sub_1800597B4.c)
 *     sub_180059AA0 @ 0x180059AA0 (sub_180059AA0.c)
 *     sub_180063CC0 @ 0x180063CC0 (sub_180063CC0.c)
 *     sub_180064090 @ 0x180064090 (sub_180064090.c)
 *     sub_18008F8D0 @ 0x18008F8D0 (sub_18008F8D0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18002A0A4 @ 0x18002A0A4 (sub_18002A0A4.c)
 *     sub_1800382B8 @ 0x1800382B8 (sub_1800382B8.c)
 *     sub_180097BF8 @ 0x180097BF8 (sub_180097BF8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_180030C74(__int64 *a1, __int64 a2)
{
  __int64 v3; // r10
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  sub_1800382B8(a2, &v5);
  if ( v5 )
  {
    a1[2] = sub_180097BF8(v5, v3);
    sub_18002A0A4(a1, &v5);
  }
  if ( v6 )
    sub_180010EC8(v6);
  return a1;
}
