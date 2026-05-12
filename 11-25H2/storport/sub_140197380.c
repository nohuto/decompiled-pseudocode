/*
 * XREFs of sub_140197380 @ 0x140197380
 * Callers:
 *     <none>
 * Callees:
 *     sub_140197274 @ 0x140197274 (sub_140197274.c)
 */

__int64 __fastcall sub_140197380(_QWORD *a1, int a2, __int64 a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 != 2 )
  {
    if ( a2 == 7 )
      return sub_140197274(a3, a1);
    else
      return 3221225659LL;
  }
  return result;
}
