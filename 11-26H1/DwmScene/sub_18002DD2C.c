/*
 * XREFs of sub_18002DD2C @ 0x18002DD2C
 * Callers:
 *     sub_1800318F4 @ 0x1800318F4 (sub_1800318F4.c)
 *     sub_180032804 @ 0x180032804 (sub_180032804.c)
 *     sub_180097A5C @ 0x180097A5C (sub_180097A5C.c)
 *     sub_180097BC0 @ 0x180097BC0 (sub_180097BC0.c)
 *     sub_180097E7C @ 0x180097E7C (sub_180097E7C.c)
 * Callees:
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 */

__int64 __fastcall sub_18002DD2C(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_1800129D0(v3 + 8);
      v3 += 56LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
