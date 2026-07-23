/*
 * XREFs of AuthzBasepDeleteSecurityAttribute @ 0x1403B050C
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x1403AFD64 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepReplaceSecurityAttribute @ 0x1403B03D4 (AuthzBasepReplaceSecurityAttribute.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x1403B1DF0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepDeleteAllSecurityAttributeValues @ 0x1403B2304 (AuthzBasepDeleteAllSecurityAttributeValues.c)
 *     AuthzBasepFreeSecurityAttributeValues @ 0x1403B2380 (AuthzBasepFreeSecurityAttributeValues.c)
 *     AuthzBasepRemoveSecurityAttributeFromLists @ 0x14045DB80 (AuthzBasepRemoveSecurityAttributeFromLists.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x14052E95C (AuthzBasepDeleteSecurityAttributeValues.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepDeleteSecurityAttribute(__int64 a1, __int64 a2)
{
  int v3; // edi
  __int64 SecurityAttribute; // rax
  __int64 v6; // rbx
  int v8; // eax
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // r9
  int v12; // eax
  __int128 v13; // [rsp+20h] [rbp-18h] BYREF
  char v14; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0LL;
  v3 = 0;
  v14 = 0;
  LOWORD(v13) = *(_WORD *)a2;
  WORD1(v13) = v13;
  *((_QWORD *)&v13 + 1) = *(_QWORD *)(a2 + 8);
  SecurityAttribute = AuthzBasepFindSecurityAttribute(a1, &v13);
  v6 = SecurityAttribute;
  if ( !SecurityAttribute )
    return (unsigned int)-1073741275;
  v8 = *(_DWORD *)(SecurityAttribute + 56);
  if ( (v8 & 4) != 0 )
  {
    return (unsigned int)-1073741275;
  }
  else
  {
    if ( (v8 & 2) == 0 )
    {
      v9 = *(_QWORD **)(a1 + 40);
      v10 = (_QWORD *)(v6 + 16);
      if ( *v9 != a1 + 32 )
        __fastfail(3u);
      *v10 = a1 + 32;
      *(_QWORD *)(v6 + 24) = v9;
      *v9 = v10;
      *(_QWORD *)(a1 + 40) = v10;
      *(_DWORD *)(v6 + 56) |= 2u;
      ++*(_DWORD *)(a1 + 24);
    }
    if ( *(_DWORD *)(a2 + 24) )
    {
      v3 = AuthzBasepDeleteSecurityAttributeValues(v6, a2, &v14);
      if ( v3 < 0 )
        return (unsigned int)v3;
      if ( v14 )
        *(_DWORD *)(v6 + 56) |= 4u;
    }
    else
    {
      *(_DWORD *)(v6 + 56) |= 4u;
      AuthzBasepDeleteAllSecurityAttributeValues(v6);
    }
    v12 = *(_DWORD *)(v6 + 56);
    if ( (v12 & 4) != 0 && (v12 & 1) == 0 )
    {
      LOBYTE(v11) = 1;
      AuthzBasepRemoveSecurityAttributeFromLists(a1, v6, 0LL, v11);
      AuthzBasepFreeSecurityAttributeValues(v6, 0LL);
      ExFreePoolWithTag((PVOID)v6, 0);
    }
  }
  return (unsigned int)v3;
}
