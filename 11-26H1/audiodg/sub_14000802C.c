/*
 * XREFs of sub_14000802C @ 0x14000802C
 * Callers:
 *     sub_140007C80 @ 0x140007C80 (sub_140007C80.c)
 *     sub_140007C98 @ 0x140007C98 (sub_140007C98.c)
 *     sub_140007CC0 @ 0x140007CC0 (sub_140007CC0.c)
 *     sub_140063134 @ 0x140063134 (sub_140063134.c)
 *     sub_14006ED00 @ 0x14006ED00 (sub_14006ED00.c)
 * Callees:
 *     sub_140007C98 @ 0x140007C98 (sub_140007C98.c)
 *     sub_14000DEF8 @ 0x14000DEF8 (sub_14000DEF8.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

__int64 __fastcall sub_14000802C(__int64 *a1)
{
  __int64 result; // rax
  __int64 *v3; // rdx

  while ( a1[2] )
  {
    v3 = (__int64 *)*a1;
    if ( !*a1 )
      sub_14004639C(2147500037LL, 0LL);
    *a1 = *v3;
    result = sub_140007C98((__int64)a1, v3);
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[4] = 0LL;
  if ( a1[3] )
  {
    result = sub_14000DEF8();
    a1[3] = 0LL;
  }
  return result;
}
