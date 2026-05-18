/*
 * XREFs of sub_180024D50 @ 0x180024D50
 * Callers:
 *     sub_180025178 @ 0x180025178 (sub_180025178.c)
 *     sub_180025AA4 @ 0x180025AA4 (sub_180025AA4.c)
 *     sub_180025C5C @ 0x180025C5C (sub_180025C5C.c)
 *     sub_180025E50 @ 0x180025E50 (sub_180025E50.c)
 *     sub_180026DB0 @ 0x180026DB0 (sub_180026DB0.c)
 *     sub_180027368 @ 0x180027368 (sub_180027368.c)
 *     sub_18002B48C @ 0x18002B48C (sub_18002B48C.c)
 * Callees:
 *     sub_180013494 @ 0x180013494 (sub_180013494.c)
 */

__int64 __fastcall sub_180024D50(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_180013494(v3, a2);
      v3 += 64LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
