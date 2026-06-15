/*
 * XREFs of sub_1400934A0 @ 0x1400934A0
 * Callers:
 *     sub_140093730 @ 0x140093730 (sub_140093730.c)
 * Callees:
 *     sub_14004591C @ 0x14004591C (sub_14004591C.c)
 */

__int64 **__fastcall sub_1400934A0(__int64 **a1, __int64 *a2, __int64 *a3, int a4)
{
  __int64 *i; // rsi
  __int64 *j; // r14
  __int64 **result; // rax

  for ( i = a2; i != a3; i += 2 )
  {
    if ( *(_DWORD *)i == a4 )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 2; j != a3; j += 2 )
    {
      if ( *(_DWORD *)j != a4 )
      {
        *(_DWORD *)i = *(_DWORD *)j;
        sub_14004591C((__int64)(i + 1), j + 1);
        i += 2;
      }
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
