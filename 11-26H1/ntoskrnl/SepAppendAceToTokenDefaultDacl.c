/*
 * XREFs of SepAppendAceToTokenDefaultDacl @ 0x14025EEEC
 * Callers:
 *     NtCreateLowBoxToken @ 0x1408140F0 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlFindAceBySid @ 0x14025F2B0 (RtlFindAceBySid.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCreateAcl @ 0x1409D8030 (RtlCreateAcl.c)
 *     RtlAddAce @ 0x1409F4690 (RtlAddAce.c)
 *     RtlAddAccessAllowedAce @ 0x1409F49E0 (RtlAddAccessAllowedAce.c)
 *     RtlQueryInformationAcl @ 0x140A66FE0 (RtlQueryInformationAcl.c)
 *     SepExpandDynamic @ 0x140AE5CA8 (SepExpandDynamic.c)
 *     SepAppendDefaultDacl @ 0x140AF9C0C (SepAppendDefaultDacl.c)
 *     SepFreeDefaultDacl @ 0x140AFB438 (SepFreeDefaultDacl.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepAppendAceToTokenDefaultDacl(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // rsi
  int v5; // ebx
  NTSTATUS Acl; // edi
  ULONG v7; // r12d
  ACL *Pool2; // rax
  ACL *v9; // r14
  ULONG v10; // ebx
  ULONG AclRevision; // [rsp+30h] [rbp-58h] BYREF
  __int64 v13; // [rsp+38h] [rbp-50h] BYREF
  int v14; // [rsp+40h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 184);
  v13 = 0LL;
  v14 = 0;
  AclRevision = 0;
  if ( !v2 || RtlFindAceBySid(v2, a2, 0LL) )
  {
    return 0;
  }
  else
  {
    v5 = *(unsigned __int16 *)(v2 + 2);
    Acl = RtlQueryInformationAcl(v2, &AclRevision, 4LL, 1LL);
    if ( Acl >= 0 )
    {
      Acl = RtlQueryInformationAcl(v2, &v13, 12LL, 2LL);
      if ( Acl >= 0 )
      {
        v7 = (v5 + 4 * a2[1] + 19) & 0xFFFFFFFC;
        Pool2 = (ACL *)ExAllocatePool2(0x100uLL);
        v9 = Pool2;
        if ( Pool2 )
        {
          v10 = AclRevision;
          Acl = RtlCreateAcl(Pool2, v7, AclRevision);
          if ( Acl >= 0 )
          {
            if ( (unsigned __int8)(*(_BYTE *)v2 - 2) <= 2u
              && *(_WORD *)(v2 + 4)
              && v2 + 8 < v2 + (unsigned __int64)*(unsigned __int16 *)(v2 + 2) )
            {
              Acl = RtlAddAce(v9, v10, 0, (PVOID)(v2 + 8), HIDWORD(v13) - 8);
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
