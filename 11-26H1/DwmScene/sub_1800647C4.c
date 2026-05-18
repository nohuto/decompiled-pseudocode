/*
 * XREFs of sub_1800647C4 @ 0x1800647C4
 * Callers:
 *     sub_180068050 @ 0x180068050 (sub_180068050.c)
 * Callees:
 *     sub_18005F93C @ 0x18005F93C (sub_18005F93C.c)
 */

__int64 *__fastcall sub_1800647C4(__int64 a1, _DWORD *a2, __int64 *a3)
{
  __int64 *result; // rax
  _DWORD *v5; // rdx
  __int64 **v6; // rdx
  __int64 *i; // rcx
  __int64 *j; // rdx

  result = **(__int64 ***)(sub_18005F93C(*a3, (__int64)a2) + 104);
  while ( !*((_BYTE *)result + 25) )
  {
    v5 = (_DWORD *)result[5];
    v5[23] = *a2;
    v5[24] = a2[1];
    v5[25] = a2[2];
    v5[26] = a2[3];
    v6 = (__int64 **)result[2];
    if ( *((_BYTE *)v6 + 25) )
    {
      for ( i = (__int64 *)result[1]; !*((_BYTE *)i + 25) && result == (__int64 *)i[2]; i = (__int64 *)i[1] )
        result = i;
      result = i;
    }
    else
    {
      result = (__int64 *)result[2];
      for ( j = *v6; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        result = j;
    }
  }
  return result;
}
