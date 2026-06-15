/*
 * XREFs of sub_14005DF50 @ 0x14005DF50
 * Callers:
 *     sub_14005DB08 @ 0x14005DB08 (sub_14005DB08.c)
 *     sub_14005DEF4 @ 0x14005DEF4 (sub_14005DEF4.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 */

__int64 __fastcall sub_14005DF50(__int64 *a1)
{
  unsigned __int64 v2; // rdx
  __int64 result; // rax

  sub_140003238(a1 + 4);
  v2 = a1[3];
  if ( v2 > 7 )
    sub_1400453E4(*a1, 2 * v2 + 2);
  result = 0LL;
  a1[3] = 7LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  return result;
}
