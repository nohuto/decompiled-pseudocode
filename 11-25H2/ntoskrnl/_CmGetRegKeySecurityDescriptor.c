/*
 * XREFs of _CmGetRegKeySecurityDescriptor @ 0x140A6AB54
 * Callers:
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x140A6AAA0 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _CmGetDeviceInterfaceRegKeySecurityDescriptor @ 0x140A82858 (_CmGetDeviceInterfaceRegKeySecurityDescriptor.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14044F1F0 (RtlSubAuthoritySid.c)
 *     RtlLengthSid @ 0x140458B00 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlValidSid @ 0x140918DF0 (RtlValidSid.c)
 *     RtlValidSecurityDescriptor @ 0x140919740 (RtlValidSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x14091B2A0 (RtlLengthSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x14092B1E0 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x140968260 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1409682F0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1409E93F0 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409EC1D0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409EC7E0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140A19640 (RtlSetGroupSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmGetRegKeySecurityDescriptor(char a1, _QWORD *a2)
{
  __int16 *v4; // r14
  ULONG v5; // ebx
  ULONG v6; // ebx
  ULONG v7; // ebx
  ACL *Pool2; // rax
  ACL *v9; // rsi
  int Acl; // ebx
  void *v12; // rax
  void *v13; // rdi
  ULONG BufferLength; // [rsp+30h] [rbp-49h] BYREF
  __int16 v15; // [rsp+34h] [rbp-45h]
  int v16; // [rsp+38h] [rbp-41h]
  __int16 v17; // [rsp+3Ch] [rbp-3Dh]
  int v18; // [rsp+40h] [rbp-39h]
  __int16 v19; // [rsp+44h] [rbp-35h]
  _OWORD SecurityDescriptor[2]; // [rsp+48h] [rbp-31h] BYREF
  __int64 v21; // [rsp+68h] [rbp-11h]
  _DWORD Sid[3]; // [rsp+70h] [rbp-9h] BYREF
  __int16 Owner; // [rsp+7Ch] [rbp+3h] BYREF
  int v24; // [rsp+7Eh] [rbp+5h]
  __int16 v25; // [rsp+82h] [rbp+9h]
  __int16 Src; // [rsp+8Ch] [rbp+13h] BYREF
  int v27; // [rsp+8Eh] [rbp+15h]
  __int16 v28; // [rsp+92h] [rbp+19h]
  __int16 v29; // [rsp+98h] [rbp+1Fh] BYREF
  int v30; // [rsp+9Ah] [rbp+21h]
  __int16 v31; // [rsp+9Eh] [rbp+25h]

  v17 = 1280;
  *a2 = 0LL;
  v16 = 0;
  BufferLength = 0;
  v15 = 256;
  v18 = 0;
  v19 = 3840;
  v4 = 0LL;
  v21 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  Sid[0] = 257;
  Sid[1] = 83886080;
  *RtlSubAuthoritySid(Sid, 0) = 18;
  if ( !RtlValidSid(Sid) )
    return (unsigned int)-1073741762;
  Src = 257;
  v27 = 0;
  v28 = v15;
  *RtlSubAuthoritySid(&Src, 0) = 0;
  if ( !RtlValidSid(&Src) )
    return (unsigned int)-1073741762;
  Owner = 513;
  v24 = 0;
  v25 = v17;
  *RtlSubAuthoritySid(&Owner, 0) = 32;
  *RtlSubAuthoritySid(&Owner, 1u) = 544;
  if ( !RtlValidSid(&Owner) )
    return (unsigned int)-1073741762;
  if ( !a1
    || (v30 = v18,
        v4 = &v29,
        v31 = v19,
        v29 = 513,
        *RtlSubAuthoritySid(&v29, 0) = 2,
        *RtlSubAuthoritySid(&v29, 1u) = 1,
        RtlValidSid(&v29)) )
  {
    v5 = RtlLengthSid(&Owner);
    v6 = RtlLengthSid(&Src) + v5;
    v7 = RtlLengthSid(Sid) + v6 + 32;
    if ( a1 )
      v7 += RtlLengthSid(v4) + 8;
    Pool2 = (ACL *)ExAllocatePool2(0x100uLL);
    v9 = Pool2;
    if ( Pool2 )
    {
      Acl = RtlCreateAcl(Pool2, v7, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce(v9, 2u, 2, 983103, (unsigned __int8 *)Sid, 0);
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce(v9, 2u, 2, 131097, (unsigned __int8 *)&Src, 0);
          if ( Acl >= 0 )
          {
            Acl = RtlpAddKnownAce(v9, 2u, 2, 983103, (unsigned __int8 *)&Owner, 0);
            if ( Acl >= 0 )
            {
              if ( !a1 || (Acl = RtlpAddKnownAce(v9, 2u, 2, 131097, (unsigned __int8 *)v4, 0), Acl >= 0) )
              {
                Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
                if ( Acl >= 0 )
                {
                  Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v9, 0);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, &Owner, 1u);
                    if ( Acl >= 0 )
                    {
                      Acl = RtlSetGroupSecurityDescriptor(SecurityDescriptor, &Owner, 1u);
                      if ( Acl >= 0 )
                      {
                        WORD1(SecurityDescriptor[0]) |= 0x1500u;
                        if ( RtlValidSecurityDescriptor(SecurityDescriptor) )
                        {
                          BufferLength = RtlLengthSecurityDescriptor(SecurityDescriptor);
                          if ( BufferLength >= 0x28 )
                          {
                            v12 = (void *)ExAllocatePool2(0x100uLL);
                            v13 = v12;
                            if ( v12 )
                            {
                              Acl = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v12, &BufferLength);
                              if ( Acl < 0 )
                                ExFreePoolWithTag(v13, 0);
                              else
                                *a2 = v13;
                            }
                            else
                            {
                              Acl = -1073741801;
                            }
                          }
                          else
                          {
                            Acl = -1073741762;
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
      }
      ExFreePoolWithTag(v9, 0);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741762;
  }
  return (unsigned int)Acl;
}
