/*
 * XREFs of PiAuGetDriverDataDirectorySecurityObject @ 0x140CCC254
 * Callers:
 *     PiCreateDriverDataDirectoryRoot @ 0x140CC9C90 (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     RtlLengthSecurityDescriptor @ 0x1408FE3E0 (RtlLengthSecurityDescriptor.c)
 *     RtlAddAccessAllowedAceEx @ 0x140901890 (RtlAddAccessAllowedAceEx.c)
 *     RtlValidSecurityDescriptor @ 0x1409029C0 (RtlValidSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1409A9150 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x140A6E620 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A7C820 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A7D920 (RtlCreateSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140AA9160 (RtlSetGroupSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiAuGetDriverDataDirectorySecurityObject(_QWORD *a1)
{
  void *v2; // rdi
  ULONG v3; // ebx
  ACL *Pool2; // rax
  ACL *v5; // rsi
  NTSTATUS Acl; // ebx
  void *v7; // r14
  ULONG v8; // eax
  void *v9; // rax
  _OWORD SecurityDescriptor[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v12; // [rsp+50h] [rbp-10h]
  ULONG BufferLength; // [rsp+88h] [rbp+28h] BYREF

  v12 = 0LL;
  v2 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v3 = 4
     * (*(unsigned __int8 *)(*(_QWORD *)((char *)&RtlpBootStatHandleLock.116 + 4) + 1LL)
      + *((unsigned __int8 *)SeAliasAdminsSid + 1)
      + *((unsigned __int8 *)SeExports->SeUserModeDriversSid + 1))
     + 56;
  Pool2 = (ACL *)ExAllocatePool2(256LL, v3, 0x20207050u);
  v5 = Pool2;
  if ( Pool2 )
  {
    Acl = RtlCreateAcl(Pool2, v3, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAceEx(v5, 2u, 3u, 0x10000000u, *(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4));
      if ( Acl >= 0 )
      {
        Acl = RtlAddAccessAllowedAceEx(v5, 2u, 3u, 0x10000000u, SeAliasAdminsSid);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAceEx(v5, 2u, 3u, 0x10000000u, SeExports->SeUserModeDriversSid);
          if ( Acl >= 0 )
          {
            Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
            if ( Acl >= 0 )
            {
              Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v5, 0);
              if ( Acl >= 0 )
              {
                v7 = *(void **)((char *)&RtlpBootStatHandleLock.116 + 4);
                Acl = RtlSetOwnerSecurityDescriptor(
                        SecurityDescriptor,
                        *(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4),
                        0);
                if ( Acl >= 0 )
                {
                  Acl = RtlSetGroupSecurityDescriptor(SecurityDescriptor, v7, 0);
                  if ( Acl >= 0 )
                  {
                    if ( RtlValidSecurityDescriptor(SecurityDescriptor)
                      && (v8 = RtlLengthSecurityDescriptor(SecurityDescriptor), BufferLength = v8, v8 >= 0x28) )
                    {
                      v9 = (void *)ExAllocatePool2(256LL, v8, 0x20207050u);
                      v2 = v9;
                      if ( v9 )
                      {
                        Acl = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v9, &BufferLength);
                        if ( Acl >= 0 )
                        {
                          *a1 = v2;
                          v2 = 0LL;
                        }
                      }
                      else
                      {
                        Acl = -1073741670;
                      }
                    }
                    else
                    {
                      Acl = -1073741595;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    ExFreePoolWithTag(v5, 0);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
