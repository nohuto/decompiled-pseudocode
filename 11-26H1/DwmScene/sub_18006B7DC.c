/*
 * XREFs of sub_18006B7DC @ 0x18006B7DC
 * Callers:
 *     sub_18006B73C @ 0x18006B73C (sub_18006B73C.c)
 *     sub_18006B96C @ 0x18006B96C (sub_18006B96C.c)
 *     sub_18006BB90 @ 0x18006BB90 (sub_18006BB90.c)
 *     sub_18006BBE4 @ 0x18006BBE4 (sub_18006BBE4.c)
 *     sub_18006BFF0 @ 0x18006BFF0 (sub_18006BFF0.c)
 *     sub_18006C06C @ 0x18006C06C (sub_18006C06C.c)
 *     sub_18006C104 @ 0x18006C104 (sub_18006C104.c)
 * Callees:
 *     sub_18008F4EC @ 0x18008F4EC (sub_18008F4EC.c)
 */

__int64 __fastcall sub_18006B7DC(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_18008F4EC(v3);
      v3 += 128LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
