/*
 * XREFs of sub_1800328D8 @ 0x1800328D8
 * Callers:
 *     sub_180036410 @ 0x180036410 (sub_180036410.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_1800328D8(__int64 ***a1)
{
  __int64 *result; // rax
  __int64 **v2; // rdx
  __int64 *i; // rcx
  __int64 *j; // rdx

  result = **a1;
  while ( !*((_BYTE *)result + 25) )
  {
    *((_DWORD *)result + 10) = -8388609;
    *(__int64 *)((char *)result + 44) = 2139095039LL;
    result[7] = 0LL;
    v2 = (__int64 **)result[2];
    if ( *((_BYTE *)v2 + 25) )
    {
      for ( i = (__int64 *)result[1]; !*((_BYTE *)i + 25) && result == (__int64 *)i[2]; i = (__int64 *)i[1] )
        result = i;
      result = i;
    }
    else
    {
      result = (__int64 *)result[2];
      for ( j = *v2; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        result = j;
    }
  }
  return result;
}
