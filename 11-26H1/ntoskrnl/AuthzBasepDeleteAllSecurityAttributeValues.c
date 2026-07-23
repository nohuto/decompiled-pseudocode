/*
 * XREFs of AuthzBasepDeleteAllSecurityAttributeValues @ 0x1403B2304
 * Callers:
 *     AuthzBasepDeleteSecurityAttribute @ 0x1403B050C (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepDeleteAllSecurityAttributes @ 0x140719CDC (AuthzBasepDeleteAllSecurityAttributes.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributeValues @ 0x1403B2380 (AuthzBasepFreeSecurityAttributeValues.c)
 */

__int64 __fastcall AuthzBasepDeleteAllSecurityAttributeValues(__int64 a1, __int64 a2)
{
  __int64 *i; // rax
  int v4; // ecx
  int v5; // ecx
  _QWORD *v6; // r9
  _QWORD *v7; // rcx
  __int64 result; // rax

  LOBYTE(a2) = 1;
  AuthzBasepFreeSecurityAttributeValues(a1, a2);
  for ( i = *(__int64 **)(a1 + 72); i != (__int64 *)(a1 + 72); i = (__int64 *)*i )
  {
    v4 = *((_DWORD *)i + 8);
    if ( (v4 & 2) == 0 )
    {
      v5 = v4 | 4;
      *((_DWORD *)i + 8) = v5;
      if ( (v5 & 2) == 0 )
      {
        v6 = *(_QWORD **)(a1 + 104);
        v7 = i + 2;
        if ( *v6 != a1 + 96 )
          __fastfail(3u);
        *v7 = a1 + 96;
        i[3] = (__int64)v6;
        *v6 = v7;
        *(_QWORD *)(a1 + 104) = v7;
        *((_DWORD *)i + 8) |= 2u;
        ++*(_DWORD *)(a1 + 88);
      }
    }
  }
  result = *(unsigned int *)(a1 + 60);
  *(_DWORD *)(a1 + 64) = result;
  return result;
}
