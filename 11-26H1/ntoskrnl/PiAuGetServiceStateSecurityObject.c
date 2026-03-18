/*
 * XREFs of PiAuGetServiceStateSecurityObject @ 0x1407A84C8
 * Callers:
 *     PiCreateServiceKeyUnderPath @ 0x1407A102C (PiCreateServiceKeyUnderPath.c)
 *     PiCreateServiceStateKey @ 0x140A126EC (PiCreateServiceStateKey.c)
 * Callees:
 *     RtlLengthSid @ 0x1404872D0 (RtlLengthSid.c)
 *     RtlLengthSecurityDescriptor @ 0x1409228D0 (RtlLengthSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x140926EB0 (RtlValidSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1409D7990 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x1409D8030 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1409D8260 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x140A61650 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A6B0F0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A6C2F0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140AABBB0 (RtlSetGroupSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiAuGetServiceStateSecurityObject(char a1, _QWORD *a2)
{
  void *v4; // rdi
  ULONG v5; // ebx
  ULONG v6; // ebx
  ULONG v7; // ebx
  ACL *Pool2; // rax
  ACL *v9; // rsi
  NTSTATUS Acl; // ebx
  void *v11; // r14
  void *v12; // rax
  _OWORD SecurityDescriptor[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]
  ULONG BufferLength; // [rsp+A0h] [rbp+40h] BYREF

  v15 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v4 = 0LL;
  v5 = RtlLengthSid(SeExports->SeUserModeDriversSid);
  v6 = RtlLengthSid(SeAliasAdminsSid) + v5;
  v7 = RtlLengthSid(*(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags) + 32 + v6;
  Pool2 = (ACL *)ExAllocatePool2(0x100uLL);
  v9 = Pool2;
  if ( Pool2 )
  {
    Acl = RtlCreateAcl(Pool2, v7, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlpAddKnownAce((int)v9, 2, 2, 983103, *(void **)&RtlpBootStatHandleLock.WaitRegister.Flags, 0);
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce((int)v9, 2, 2, a1 != 0 ? 196639 : 131097, SeAliasAdminsSid, 0);
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce((int)v9, 2, 2, 131097, SeExports->SeUserModeDriversSid, 0);
          if ( Acl >= 0 )
          {
            Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
            if ( Acl >= 0 )
            {
              Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v9, 0);
              if ( Acl >= 0 )
              {
                v11 = *(void **)&RtlpBootStatHandleLock.WaitRegister.Flags;
                Acl = RtlSetOwnerSecurityDescriptor(
                        SecurityDescriptor,
                        *(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags,
                        0);
                if ( Acl >= 0 )
                {
                  Acl = RtlSetGroupSecurityDescriptor(SecurityDescriptor, v11, 0);
                  if ( Acl >= 0 )
                  {
                    if ( RtlValidSecurityDescriptor(SecurityDescriptor)
                      && (BufferLength = RtlLengthSecurityDescriptor(SecurityDescriptor), BufferLength >= 0x28) )
                    {
                      v12 = (void *)ExAllocatePool2(0x100uLL);
                      v4 = v12;
                      if ( v12 )
                      {
                        Acl = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v12, &BufferLength);
                        if ( Acl >= 0 )
                        {
                          *a2 = v4;
                          v4 = 0LL;
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
    ExFreePoolWithTag(v9, 0);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
