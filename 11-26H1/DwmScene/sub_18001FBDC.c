/*
 * XREFs of sub_18001FBDC @ 0x18001FBDC
 * Callers:
 *     sub_18001F524 @ 0x18001F524 (sub_18001F524.c)
 * Callees:
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 *     sub_18001EE58 @ 0x18001EE58 (sub_18001EE58.c)
 */

__int64 *__fastcall sub_18001FBDC(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 *result; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 *v9; // r10
  _WORD *v10; // rdi
  __int64 i; // rcx

  v2 = a1[2];
  if ( a2 > v2 )
  {
    v6 = a2 - v2;
    if ( v6 > a1[3] - v2 )
    {
      return sub_18001EE58(a1, v6, 0LL, v6);
    }
    else
    {
      a1[2] = a2;
      result = (__int64 *)sub_1800141BC((__int64)a1);
      v9 = result;
      v10 = (_WORD *)result + v2;
      if ( v7 )
      {
        result = 0LL;
        for ( i = v7; i; --i )
          *v10++ = 0;
      }
      *((_WORD *)v9 + v8) = 0;
    }
  }
  else
  {
    a1[2] = a2;
    result = (__int64 *)sub_1800141BC((__int64)a1);
    *((_WORD *)result + v5) = 0;
  }
  return result;
}
