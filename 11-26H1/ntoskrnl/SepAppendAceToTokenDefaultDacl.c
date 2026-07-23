/*
 * XREFs of SepAppendAceToTokenDefaultDacl @ 0x1404050D0
 * Callers:
 *     SepCreateAppContainerToken @ 0x14063EAD8 (SepCreateAppContainerToken.c)
 *     NtCreateLowBoxToken @ 0x140819F50 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlFindAceBySid @ 0x140405490 (RtlFindAceBySid.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     RtlAddAce @ 0x1409E03E0 (RtlAddAce.c)
 *     RtlAddAccessAllowedAce @ 0x1409E0730 (RtlAddAccessAllowedAce.c)
 *     RtlQueryInformationAcl @ 0x140A73FB0 (RtlQueryInformationAcl.c)
 *     SepExpandDynamic @ 0x140AE3A68 (SepExpandDynamic.c)
 *     SepAppendDefaultDacl @ 0x140AFC098 (SepAppendDefaultDacl.c)
 *     SepFreeDefaultDacl @ 0x140AFD348 (SepFreeDefaultDacl.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepAppendAceToTokenDefaultDacl(__int64 a1, unsigned __int8 *a2)
{
  ACL *v2; // rsi
  int AclSize; // ebx
  NTSTATUS Acl; // edi
  ULONG v7; // r12d
  ACL *Pool2; // rax
  ACL *v9; // r14
  ULONG v10; // ebx
  ULONG AclInformation; // [rsp+30h] [rbp-58h] BYREF
  __int64 v13; // [rsp+38h] [rbp-50h] BYREF
  int v14; // [rsp+40h] [rbp-48h]

  v2 = *(ACL **)(a1 + 184);
  v13 = 0LL;
  v14 = 0;
  AclInformation = 0;
  if ( !v2 || RtlFindAceBySid(v2, a2, 0LL) )
  {
    return 0;
  }
  else
  {
    AclSize = v2->AclSize;
    Acl = RtlQueryInformationAcl(v2, &AclInformation, 4u, AclRevisionInformation);
    if ( Acl >= 0 )
    {
      Acl = RtlQueryInformationAcl(v2, &v13, 0xCu, AclSizeInformation);
      if ( Acl >= 0 )
      {
        v7 = (AclSize + 4 * a2[1] + 19) & 0xFFFFFFFC;
        Pool2 = (ACL *)ExAllocatePool2(0x100uLL);
        v9 = Pool2;
        if ( Pool2 )
        {
          v10 = AclInformation;
          Acl = RtlCreateAcl(Pool2, v7, AclInformation);
          if ( Acl >= 0 )
          {
            if ( (unsigned __int8)(v2->AclRevision - 2) <= 2u
              && v2->AceCount
              && &v2[1] < (ACL *)((char *)v2 + v2->AclSize) )
            {
              Acl = RtlAddAce(v9, v10, 0, &v2[1], HIDWORD(v13) - 8);
              if ( Acl >= 0 )
              {
                Acl = RtlAddAccessAllowedAce(v9, v10, 0x10000000u, a2);
                if ( Acl >= 0 )
                {
                  Acl = SepExpandDynamic(
                          a1,
                          (v7 + 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 11) & 0xFFFFFFFC);
                  if ( Acl >= 0 )
                  {
                    SepFreeDefaultDacl(a1);
                    SepAppendDefaultDacl(a1, v9);
                  }
                }
              }
            }
            else
            {
              Acl = -1073741811;
            }
          }
          ExFreePoolWithTag(v9, 0);
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
  }
  return (unsigned int)Acl;
}
