/*
 * XREFs of DpiCreateSecurityDescriptorForGpuVirtualization @ 0x14023F62C
 * Callers:
 *     DpiFdoInitializeGpuVirtualization @ 0x1404279F8 (DpiFdoInitializeGpuVirtualization.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall DpiCreateSecurityDescriptorForGpuVirtualization(_QWORD *a1)
{
  void *v2; // rdi
  ULONG v3; // eax
  void *Pool2; // rax
  void *v5; // r14
  NTSTATUS Acl; // ebx
  ULONG v7; // ebx
  ULONG v8; // ebx
  ULONG v9; // ebx
  struct _ACL *v10; // rax
  struct _ACL *v11; // rsi
  ULONG v12; // eax
  void *v13; // rax
  size_t Size; // [rsp+20h] [rbp-40h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+28h] [rbp-38h] BYREF
  __int64 v17; // [rsp+48h] [rbp-18h]
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+50h] [rbp-10h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v17 = 0LL;
  LODWORD(Size) = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v2 = 0LL;
  v3 = RtlLengthRequiredSid(2u);
  Pool2 = (void *)ExAllocatePool2(256LL, v3, 1953656900LL);
  v5 = Pool2;
  if ( Pool2 )
  {
    Acl = RtlInitializeSid(Pool2, &IdentifierAuthority, 2u);
    if ( Acl >= 0 )
    {
      *RtlSubAuthoritySid(v5, 0) = 83;
      *RtlSubAuthoritySid(v5, 1u) = 0;
      v7 = RtlLengthSid(SeExports->SeLocalSystemSid);
      v8 = RtlLengthSid(SeExports->SeAliasAdminsSid) + v7;
      v9 = RtlLengthSid(v5) + 32 + v8;
      v10 = (struct _ACL *)ExAllocatePool2(256LL, v9, 1953656900LL);
      v11 = v10;
      if ( v10 )
      {
        Acl = RtlCreateAcl(v10, v9, 2u);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v11, 2u, 0x1F01FFu, SeExports->SeLocalSystemSid);
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAce(v11, 2u, 0x1F01FFu, SeExports->SeAliasAdminsSid);
            if ( Acl >= 0 )
            {
              Acl = RtlAddAccessAllowedAce(v11, 2u, 0x1F01FFu, v5);
              if ( Acl >= 0 )
              {
                Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
                if ( Acl >= 0 )
                {
                  Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v11, 0);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, SeExports->SeLocalSystemSid, 0);
                    if ( Acl >= 0 )
                    {
                      Acl = RtlSetGroupSecurityDescriptor(SecurityDescriptor, SeExports->SeLocalSystemSid, 0);
                      if ( Acl >= 0 )
                      {
                        v12 = RtlLengthSecurityDescriptor(SecurityDescriptor);
                        LODWORD(Size) = v12;
                        if ( v12 >= 0x28 )
                        {
                          v13 = (void *)ExAllocatePool2(256LL, v12, 1953656900LL);
                          v2 = v13;
                          if ( v13 )
                          {
                            memset(v13, 0, (unsigned int)Size);
                            Acl = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v2, (PULONG)&Size);
                            if ( Acl >= 0 )
                            {
                              *a1 = v2;
                              v2 = 0LL;
                              Acl = 0;
                            }
                            else
                            {
                              WdLogSingleEntry1(2LL);
                              WdLogGlobalForLineNumber = 335;
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
                          WdLogSingleEntry1(2LL);
                          WdLogGlobalForLineNumber = 316;
                        }
                      }
                      else
                      {
                        WdLogSingleEntry1(2LL);
                        WdLogGlobalForLineNumber = 299;
                      }
                    }
                    else
                    {
                      WdLogSingleEntry1(2LL);
                      WdLogGlobalForLineNumber = 289;
                    }
                  }
                  else
                  {
                    WdLogSingleEntry1(2LL);
                    WdLogGlobalForLineNumber = 279;
                  }
                }
                else
                {
                  WdLogSingleEntry1(2LL);
                  WdLogGlobalForLineNumber = 269;
                }
              }
              else
              {
                WdLogSingleEntry1(2LL);
                WdLogGlobalForLineNumber = 255;
              }
            }
            else
            {
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 245;
            }
          }
          else
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 235;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 225;
        }
        ExFreePoolWithTag(v11, 0);
        if ( v2 )
          ExFreePoolWithTag(v2, 0);
      }
      else
      {
        Acl = -1073741670;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 195;
    }
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
