/*
 * XREFs of AuthzBasepFreeSecurityAttributesList @ 0x1403CF030
 * Callers:
 *     SepCleanSingletonEntry @ 0x1403CB1DC (SepCleanSingletonEntry.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1403CB2B8 (AuthzBasepSetSecurityAttributesToken.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403CC2F0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1403CDD60 (AuthzBasepEvaluateAceCondition.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1403D0998 (SepVerifyDesktopAppxPackageName.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14048B6E4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x14088FB44 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepExamineSaclEx @ 0x1409F7C30 (SepExamineSaclEx.c)
 *     SeExamineSacl @ 0x1409F8430 (SeExamineSacl.c)
 *     SepCreateClaimAttributes @ 0x140AEFEE8 (SepCreateClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x140AFBF28 (SepDuplicateClaimAttributes.c)
 *     SepDeleteClaimAttributes @ 0x140B215F0 (SepDeleteClaimAttributes.c)
 *     SepTokenDeleteMethod @ 0x140B7CB10 (SepTokenDeleteMethod.c)
 * Callees:
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x1402ACAA0 (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall AuthzBasepFreeSecurityAttributesList(_DWORD *a1)
{
  _DWORD **v2; // r15
  _DWORD *v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // rcx
  void **v6; // rdi
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx
  void **v9; // rax
  _DWORD *v10; // r14
  _QWORD **v11; // rdx
  void **v12; // rax
  int v13; // eax
  __int64 *v14; // r11
  PVOID v15; // r11

  v2 = (_DWORD **)(a1 + 2);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == (_DWORD *)v2 )
      break;
    if ( (v3[14] & 1) != 0 )
    {
      v4 = *(_QWORD *)v3;
      if ( *(_DWORD **)(*(_QWORD *)v3 + 8LL) != v3 || (v5 = (_QWORD *)*((_QWORD *)v3 + 1), (_DWORD *)*v5 != v3) )
LABEL_23:
        __fastfail(3u);
      *v5 = v4;
      *(_QWORD *)(v4 + 8) = v5;
      v3[14] &= ~1u;
      if ( a1 )
        --*a1;
    }
    v6 = (void **)(v3 + 18);
    while ( 1 )
    {
      v7 = *v6;
      if ( *v6 == v6 )
        break;
      if ( (v7[4] & 2) != 0 )
      {
        v11 = (_QWORD **)v7[2];
        if ( v11[1] != v7 + 2 )
          goto LABEL_23;
        v12 = (void **)v7[3];
        if ( *v12 != v7 + 2 )
          goto LABEL_23;
        *v12 = v11;
        v11[1] = v12;
        *((_DWORD *)v7 + 8) &= ~2u;
        --v3[22];
      }
      if ( (v7[4] & 1) != 0 )
      {
        v8 = (_QWORD *)*v7;
        if ( *(_QWORD **)(*v7 + 8LL) != v7 )
          goto LABEL_23;
        v9 = (void **)v7[1];
        if ( *v9 != v7 )
          goto LABEL_23;
        *v9 = v8;
        v8[1] = v9;
        *((_DWORD *)v7 + 8) &= ~1u;
        --v3[15];
        if ( (v7[4] & 4) != 0 )
          --v3[16];
      }
      ExFreePoolWithTag(v7, 0);
    }
    v10 = (_DWORD *)*((_QWORD *)v3 + 12);
    while ( v10 != v3 + 24 )
    {
      v13 = v10[4];
      v14 = (__int64 *)(v10 - 4);
      v10 = *(_DWORD **)v10;
      if ( (v13 & 1) == 0 )
      {
        AuthzBasepRemoveSecurityAttributeValueFromLists(v3, v14, 0);
        ExFreePoolWithTag(v15, 0);
      }
    }
    ExFreePoolWithTag(v3, 0);
  }
}
