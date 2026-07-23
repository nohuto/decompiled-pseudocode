/*
 * XREFs of AuthzBasepFreeSecurityAttributeValues @ 0x1403B2380
 * Callers:
 *     AuthzBasepDeleteSecurityAttribute @ 0x1403B050C (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepDeleteAllSecurityAttributeValues @ 0x1403B2304 (AuthzBasepDeleteAllSecurityAttributeValues.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x140719D34 (AuthzBasepRollbackSecurityAttributeChanges.c)
 * Callees:
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x1403AF8F0 (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall AuthzBasepFreeSecurityAttributeValues(__int64 a1, char a2)
{
  void **v3; // rdi
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx
  void **v6; // rax
  __int64 *v7; // rdi
  __int64 *v8; // rsi
  _QWORD **v9; // rdx
  void **v10; // rax
  int v11; // eax
  __int64 *v12; // r11
  PVOID v13; // r11

  if ( !a2 )
  {
    v3 = (void **)(a1 + 72);
    while ( 1 )
    {
      v4 = *v3;
      if ( *v3 == v3 )
        break;
      if ( (v4[4] & 2) != 0 )
      {
        v9 = (_QWORD **)v4[2];
        if ( v9[1] != v4 + 2 || (v10 = (void **)v4[3], *v10 != v4 + 2) )
LABEL_18:
          __fastfail(3u);
        *v10 = v9;
        v9[1] = v10;
        *((_DWORD *)v4 + 8) &= ~2u;
        if ( a1 )
          --*(_DWORD *)(a1 + 88);
      }
      if ( (v4[4] & 1) != 0 )
      {
        v5 = (_QWORD *)*v4;
        if ( *(_QWORD **)(*v4 + 8LL) != v4 )
          goto LABEL_18;
        v6 = (void **)v4[1];
        if ( *v6 != v4 )
          goto LABEL_18;
        *v6 = v5;
        v5[1] = v6;
        *((_DWORD *)v4 + 8) &= ~1u;
        if ( a1 )
        {
          --*(_DWORD *)(a1 + 60);
          if ( (v4[4] & 4) != 0 )
            --*(_DWORD *)(a1 + 64);
        }
      }
      ExFreePoolWithTag(v4, 0);
    }
  }
  v7 = (__int64 *)(a1 + 96);
  v8 = *(__int64 **)(a1 + 96);
  if ( (__int64 *)*v7 != v7 )
  {
    do
    {
      v11 = *((_DWORD *)v8 + 4);
      v12 = v8 - 2;
      v8 = (__int64 *)*v8;
      if ( (v11 & 1) == 0 )
      {
        AuthzBasepRemoveSecurityAttributeValueFromLists((_DWORD *)a1, v12, 0);
        ExFreePoolWithTag(v13, 0);
      }
    }
    while ( v8 != v7 );
  }
}
