/*
 * XREFs of AuthzBasepAddSecurityAttribute @ 0x1403B0444
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x1403AFD64 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepReplaceSecurityAttribute @ 0x1403B03D4 (AuthzBasepReplaceSecurityAttribute.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x1403B1DF0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepAllocateSecurityAttribute @ 0x1403B2050 (AuthzBasepAllocateSecurityAttribute.c)
 *     AuthzBasepAddSecurityAttributeValues @ 0x1403B24FC (AuthzBasepAddSecurityAttributeValues.c)
 */

__int64 __fastcall AuthzBasepAddSecurityAttribute(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 SecurityAttribute; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // r8
  _QWORD *v9; // rax
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_DWORD *)(a2 + 24) == 0;
  v11 = 0LL;
  if ( v2 )
    return 3221225485LL;
  LOWORD(v11) = *(_WORD *)a2;
  WORD1(v11) = v11;
  *((_QWORD *)&v11 + 1) = *(_QWORD *)(a2 + 8);
  SecurityAttribute = AuthzBasepFindSecurityAttribute(a1, &v11);
  v6 = SecurityAttribute;
  if ( SecurityAttribute )
  {
    *(_DWORD *)(SecurityAttribute + 56) &= ~4u;
  }
  else
  {
    v7 = AuthzBasepAllocateSecurityAttribute(&v11);
    v6 = v7;
    if ( !v7 )
      return 3221225626LL;
    *(_DWORD *)(v7 + 52) = *(_DWORD *)(a2 + 20);
    *(_WORD *)(v7 + 48) = *(_WORD *)(a2 + 16);
  }
  if ( (*(_DWORD *)(v6 + 56) & 2) == 0 )
  {
    v8 = *(_QWORD **)(a1 + 40);
    v9 = (_QWORD *)(v6 + 16);
    if ( *v8 != a1 + 32 )
      __fastfail(3u);
    *v9 = a1 + 32;
    *(_QWORD *)(v6 + 24) = v8;
    *v8 = v9;
    *(_QWORD *)(a1 + 40) = v9;
    *(_DWORD *)(v6 + 56) |= 2u;
    ++*(_DWORD *)(a1 + 24);
  }
  return AuthzBasepAddSecurityAttributeValues(v6, a2);
}
