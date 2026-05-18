/*
 * XREFs of sub_1800D4E78 @ 0x1800D4E78
 * Callers:
 *     sub_1800D4F08 @ 0x1800D4F08 (sub_1800D4F08.c)
 * Callees:
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 */

__int64 **__fastcall sub_1800D4E78(__int64 **a1, __int64 *a2, __int64 *a3, _QWORD *a4)
{
  __int64 *i; // rdi
  __int64 *j; // rsi
  __int64 **result; // rax

  for ( i = a2; i != a3; i += 2 )
  {
    if ( *i == *a4 )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 2; j != a3; j += 2 )
    {
      if ( *j != *a4 )
      {
        sub_180011F5C(i, j);
        i += 2;
      }
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
