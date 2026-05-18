/*
 * XREFs of sub_18001275C @ 0x18001275C
 * Callers:
 *     sub_180011840 @ 0x180011840 (sub_180011840.c)
 *     sub_1800142EC @ 0x1800142EC (sub_1800142EC.c)
 *     sub_18001490C @ 0x18001490C (sub_18001490C.c)
 *     sub_180017894 @ 0x180017894 (sub_180017894.c)
 *     sub_18001CD80 @ 0x18001CD80 (sub_18001CD80.c)
 *     sub_18001CE78 @ 0x18001CE78 (sub_18001CE78.c)
 *     sub_18001D290 @ 0x18001D290 (sub_18001D290.c)
 *     sub_18001E4B0 @ 0x18001E4B0 (sub_18001E4B0.c)
 *     sub_18001EF20 @ 0x18001EF20 (sub_18001EF20.c)
 *     sub_18002D874 @ 0x18002D874 (sub_18002D874.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_18001275C(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r9
  unsigned __int64 result; // rax

  v3 = a1 | 0xF;
  if ( v3 > a3 )
    return a3;
  v4 = a2 >> 1;
  if ( a2 > a3 - (a2 >> 1) )
    return a3;
  result = v4 + a2;
  if ( v3 >= v4 + a2 )
    return v3;
  return result;
}
