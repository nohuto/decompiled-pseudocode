/*
 * XREFs of _PnpGetEnumSecurityDescriptor @ 0x1408A3318
 * Callers:
 *     _PnpCtxGetCachedNodeBaseKey @ 0x140958180 (_PnpCtxGetCachedNodeBaseKey.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x1404792E0 (RtlSubAuthoritySid.c)
 *     RtlLengthSid @ 0x140480CA0 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
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

void *PnpGetEnumSecurityDescriptor()
{
  void *v0; // rdi
  ULONG v1; // ebx
  ULONG v2; // ebx
  ULONG v3; // ebx
  ACL *Pool2; // rax
  ACL *v5; // rsi
  void *v6; // rax
  void *v7; // rbx
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+38h] [rbp-29h] BYREF
  _SID_IDENTIFIER_AUTHORITY v10; // [rsp+40h] [rbp-21h] BYREF
  _SID_IDENTIFIER_AUTHORITY v11; // [rsp+48h] [rbp-19h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+50h] [rbp-11h] BYREF
  __int64 v13; // [rsp+70h] [rbp+Fh]
  _BYTE Sid[12]; // [rsp+78h] [rbp+17h] BYREF
  _BYTE Src[12]; // [rsp+84h] [rbp+23h] BYREF
  _BYTE v16[12]; // [rsp+90h] [rbp+2Fh] BYREF
  _BYTE Owner[20]; // [rsp+9Ch] [rbp+3Bh] BYREF

  v0 = 0LL;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_DWORD *)v10.Value = 0;
  *(_DWORD *)v11.Value = 0;
  v13 = 0LL;
  *(_WORD *)&v10.Value[4] = 768;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  *(_WORD *)&v11.Value[4] = 256;
  if ( RtlInitializeSid(Sid, &IdentifierAuthority, 1u) >= 0 )
  {
    *RtlSubAuthoritySid(Sid, 0) = 18;
    if ( RtlValidSid(Sid) )
    {
      if ( RtlInitializeSid(Src, &v10, 1u) >= 0 )
      {
        *RtlSubAuthoritySid(Src, 0) = 4;
        if ( RtlValidSid(Src) )
        {
          if ( RtlInitializeSid(v16, &v11, 1u) >= 0 )
          {
            *RtlSubAuthoritySid(v16, 0) = 0;
            if ( RtlValidSid(v16) )
            {
              if ( RtlInitializeSid(Owner, &IdentifierAuthority, 2u) >= 0 )
              {
                *RtlSubAuthoritySid(Owner, 0) = 32;
                *RtlSubAuthoritySid(Owner, 1u) = 544;
                if ( RtlValidSid(Owner) )
                {
                  v1 = RtlLengthSid(v16);
                  v2 = RtlLengthSid(Src) + v1;
                  v3 = RtlLengthSid(Sid) + 32 + v2;
                  Pool2 = (ACL *)ExAllocatePool2(0x100uLL);
                  v5 = Pool2;
                  if ( Pool2 )
                  {
                    if ( RtlCreateAcl(Pool2, v3, 2u) >= 0
                      && (int)RtlpAddKnownAce((int)v5, 2, 2, 983103, Sid, 0) >= 0
                      && (int)RtlpAddKnownAce((int)v5, 2, 2, 0x20000, Src, 0) >= 0
                      && (int)RtlpAddKnownAce((int)v5, 2, 2, 131097, v16, 0) >= 0
                      && RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) >= 0
                      && RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v5, 0) >= 0
                      && RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Owner, 1u) >= 0
                      && RtlSetGroupSecurityDescriptor(SecurityDescriptor, Owner, 1u) >= 0 )
                    {
                      WORD1(SecurityDescriptor[0]) |= 0x1400u;
                      if ( RtlValidSecurityDescriptor(SecurityDescriptor) )
                      {
                        *(_DWORD *)IdentifierAuthority.Value = RtlLengthSecurityDescriptor(SecurityDescriptor);
                        if ( *(_DWORD *)IdentifierAuthority.Value >= 0x28u )
                        {
                          v6 = (void *)ExAllocatePool2(0x100uLL);
                          v7 = v6;
                          if ( v6 )
                          {
                            if ( RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v6, (PULONG)IdentifierAuthority.Value) < 0 )
                              ExFreePoolWithTag(v7, 0);
                            else
                              v0 = v7;
                          }
                        }
                      }
                    }
                    ExFreePoolWithTag(v5, 0);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v0;
}
