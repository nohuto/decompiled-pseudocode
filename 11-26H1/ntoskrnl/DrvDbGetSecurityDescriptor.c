/*
 * XREFs of DrvDbGetSecurityDescriptor @ 0x1408A5F2C
 * Callers:
 *     DrvDbLoadDatabaseNode @ 0x1409788FC (DrvDbLoadDatabaseNode.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x1404792E0 (RtlSubAuthoritySid.c)
 *     RtlLengthSid @ 0x140480CA0 (RtlLengthSid.c)
 *     RtlLengthRequiredSid @ 0x1408F0000 (RtlLengthRequiredSid.c)
 *     RtlLengthSecurityDescriptor @ 0x1408FE3E0 (RtlLengthSecurityDescriptor.c)
 *     RtlValidSid @ 0x1408FFE80 (RtlValidSid.c)
 *     RtlValidSecurityDescriptor @ 0x1409029C0 (RtlValidSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1409A8880 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1409A9150 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x140A6E620 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlInitializeSid @ 0x140A77920 (RtlInitializeSid.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A7C820 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A7D920 (RtlCreateSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140AA9160 (RtlSetGroupSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void *DrvDbGetSecurityDescriptor()
{
  void *v0; // rdi
  void *Pool2; // rax
  void *Src; // r13
  void *v3; // rax
  void *v4; // r15
  void *v5; // rax
  void *v6; // r14
  void *v7; // rax
  void *v8; // rsi
  ULONG v9; // ebx
  ULONG v10; // ebx
  ULONG v11; // ebx
  ACL *v12; // rax
  ACL *v13; // r12
  void *v14; // rax
  void *v15; // rbx
  _OWORD SecurityDescriptor[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+A0h] [rbp+40h] BYREF
  _SID_IDENTIFIER_AUTHORITY v20; // [rsp+A8h] [rbp+48h] BYREF
  _SID_IDENTIFIER_AUTHORITY v21; // [rsp+B0h] [rbp+50h] BYREF

  v0 = 0LL;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_DWORD *)v20.Value = 0;
  *(_WORD *)&v20.Value[4] = 768;
  *(_DWORD *)v21.Value = 0;
  *(_WORD *)&v21.Value[4] = 256;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v18 = 0LL;
  RtlLengthRequiredSid(1u);
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  Src = Pool2;
  if ( Pool2 )
  {
    if ( RtlInitializeSid(Pool2, &IdentifierAuthority, 1u) >= 0 )
    {
      *RtlSubAuthoritySid(Src, 0) = 18;
      if ( RtlValidSid(Src) )
      {
        v3 = (void *)ExAllocatePool2(0x100uLL);
        v4 = v3;
        if ( v3 )
        {
          if ( RtlInitializeSid(v3, &v20, 1u) >= 0 )
          {
            *RtlSubAuthoritySid(v4, 0) = 4;
            if ( RtlValidSid(v4) )
            {
              v5 = (void *)ExAllocatePool2(0x100uLL);
              v6 = v5;
              if ( v5 )
              {
                if ( RtlInitializeSid(v5, &v21, 1u) >= 0 )
                {
                  *RtlSubAuthoritySid(v6, 0) = 0;
                  if ( RtlValidSid(v6) )
                  {
                    RtlLengthRequiredSid(2u);
                    v7 = (void *)ExAllocatePool2(0x100uLL);
                    v8 = v7;
                    if ( v7 )
                    {
                      if ( RtlInitializeSid(v7, &IdentifierAuthority, 2u) >= 0 )
                      {
                        *RtlSubAuthoritySid(v8, 0) = 32;
                        *RtlSubAuthoritySid(v8, 1u) = 544;
                        if ( RtlValidSid(v8) )
                        {
                          v9 = RtlLengthSid(v6);
                          v10 = RtlLengthSid(v4) + v9;
                          v11 = RtlLengthSid(Src) + 32 + v10;
                          v12 = (ACL *)ExAllocatePool2(0x100uLL);
                          v13 = v12;
                          if ( v12 )
                          {
                            if ( RtlCreateAcl(v12, v11, 2u) >= 0
                              && (int)RtlpAddKnownAce((int)v13, 2, 2, 983103, Src, 0) >= 0
                              && (int)RtlpAddKnownAce((int)v13, 2, 2, 0x20000, v4, 0) >= 0
                              && (int)RtlpAddKnownAce((int)v13, 2, 2, 131097, v6, 0) >= 0
                              && RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) >= 0
                              && RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v13, 0) >= 0
                              && RtlSetOwnerSecurityDescriptor(SecurityDescriptor, v8, 1u) >= 0
                              && RtlSetGroupSecurityDescriptor(SecurityDescriptor, v8, 1u) >= 0 )
                            {
                              WORD1(SecurityDescriptor[0]) |= 0x1400u;
                              if ( RtlValidSecurityDescriptor(SecurityDescriptor) )
                              {
                                *(_DWORD *)IdentifierAuthority.Value = RtlLengthSecurityDescriptor(SecurityDescriptor);
                                if ( *(_DWORD *)IdentifierAuthority.Value >= 0x28u )
                                {
                                  v14 = (void *)ExAllocatePool2(0x100uLL);
                                  v15 = v14;
                                  if ( v14 )
                                  {
                                    if ( RtlAbsoluteToSelfRelativeSD(
                                           SecurityDescriptor,
                                           v14,
                                           (PULONG)IdentifierAuthority.Value) < 0 )
                                      ExFreePoolWithTag(v15, 0);
                                    else
                                      v0 = v15;
                                  }
                                }
                              }
                            }
                            ExFreePoolWithTag(v13, 0);
                          }
                        }
                      }
                      ExFreePoolWithTag(v8, 0);
                    }
                  }
                }
                ExFreePoolWithTag(v6, 0);
              }
            }
          }
          ExFreePoolWithTag(v4, 0);
        }
      }
    }
    ExFreePoolWithTag(Src, 0);
  }
  return v0;
}
