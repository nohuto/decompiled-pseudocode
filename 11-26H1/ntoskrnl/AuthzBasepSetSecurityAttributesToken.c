/*
 * XREFs of AuthzBasepSetSecurityAttributesToken @ 0x1403CB2B8
 * Callers:
 *     SepInternalSetSecurityAttributesToken @ 0x1403CB048 (SepInternalSetSecurityAttributesToken.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1403D0998 (SepVerifyDesktopAppxPackageName.c)
 *     SepDesktopAppxSubProcessToken @ 0x14045FEB8 (SepDesktopAppxSubProcessToken.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14048B6E4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepDesktopAppModifyTokenBreakaway @ 0x14063B594 (SepDesktopAppModifyTokenBreakaway.c)
 *     SeSetSecurityAttributesTokenEx @ 0x14063B970 (SeSetSecurityAttributesTokenEx.c)
 *     SepSetSingletonEntry @ 0x14063BB00 (SepSetSingletonEntry.c)
 *     NtSetInformationToken @ 0x140810BD0 (NtSetInformationToken.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x14088FB44 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepSetProcessUniqueAttribute @ 0x140A2B8AC (SepSetProcessUniqueAttribute.c)
 *     SepSetTokenAllApplicationPackagesPolicy @ 0x140A2CF28 (SepSetTokenAllApplicationPackagesPolicy.c)
 *     SepAddTokenOriginClaim @ 0x140A2D094 (SepAddTokenOriginClaim.c)
 *     SepCreateClaimAttributes @ 0x140AEFEE8 (SepCreateClaimAttributes.c)
 * Callees:
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x1403CB3C0 (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepValidateSecurityAttributes @ 0x1403CB67C (AuthzBasepValidateSecurityAttributes.c)
 *     AuthzBasepReplaceSecurityAttribute @ 0x1403CB934 (AuthzBasepReplaceSecurityAttribute.c)
 *     AuthzBasepAddSecurityAttribute @ 0x1403CBA8C (AuthzBasepAddSecurityAttribute.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x1403CBBE8 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1403CF030 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepDeleteAllSecurityAttributes @ 0x140714FEC (AuthzBasepDeleteAllSecurityAttributes.c)
 */

__int64 __fastcall AuthzBasepSetSecurityAttributesToken(__int64 a1, int *a2, __int64 a3)
{
  int v3; // r14d
  int v7; // ebx
  __int64 v8; // rsi
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // eax

  v3 = *a2;
  if ( a3 )
  {
    v7 = AuthzBasepValidateSecurityAttributes(a3);
    if ( v7 >= 0 )
    {
      if ( v3 == 1 )
        AuthzBasepDeleteAllSecurityAttributes(a1);
      v8 = 0LL;
      if ( *(_DWORD *)(a3 + 4) )
      {
        while ( 1 )
        {
          v9 = *(_QWORD *)(a3 + 8) + 40 * v8;
          if ( v3 == 1 )
            goto LABEL_11;
          v10 = a2[v8];
          if ( v10 )
            break;
          v7 = 0;
LABEL_13:
          v8 = (unsigned int)(v8 + 1);
          if ( (unsigned int)v8 >= *(_DWORD *)(a3 + 4) )
            goto LABEL_14;
        }
        v11 = v10 - 2;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            if ( v12 != 1 )
              goto LABEL_16;
LABEL_11:
            v13 = AuthzBasepReplaceSecurityAttribute(a1, v9);
          }
          else
          {
            v13 = AuthzBasepDeleteSecurityAttribute(a1, v9);
          }
        }
        else
        {
          v13 = AuthzBasepAddSecurityAttribute(a1, v9);
        }
        v7 = v13;
        if ( v13 < 0 )
          goto LABEL_14;
        goto LABEL_13;
      }
    }
  }
  else if ( v3 == 1 )
  {
    AuthzBasepFreeSecurityAttributesList();
    v7 = 0;
  }
  else
  {
LABEL_16:
    v7 = -1073741811;
  }
LABEL_14:
  AuthzBasepFinaliseSecurityAttributesList(a1, v7 >= 0);
  return (unsigned int)v7;
}
