/*
 * XREFs of _CmGetRegKeySecurityDescriptor @ 0x140B0B638
 * Callers:
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x140B0B580 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _CmGetDeviceInterfaceRegKeySecurityDescriptor @ 0x140B2621C (_CmGetDeviceInterfaceRegKeySecurityDescriptor.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x1404792E0 (RtlSubAuthoritySid.c)
 *     RtlLengthSid @ 0x140480CA0 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlLengthSecurityDescriptor @ 0x1408FE3E0 (RtlLengthSecurityDescriptor.c)
 *     RtlValidSid @ 0x1408FFE80 (RtlValidSid.c)
 *     RtlValidSecurityDescriptor @ 0x1409029C0 (RtlValidSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1409A8880 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     RtlMakeSelfRelativeSD @ 0x140A6F3AC (RtlMakeSelfRelativeSD.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmGetRegKeySecurityDescriptor(char a1, _QWORD *a2)
{
  _DWORD *v4; // r14
  ULONG v5; // ebx
  ULONG v6; // ebx
  ULONG v7; // ebx
  ACL *Pool2; // rax
  char *v9; // rsi
  int Acl; // ebx
  void *v11; // rax
  void *v12; // rdi
  ULONG BufferLength; // [rsp+38h] [rbp-39h] BYREF
  char SecurityDescriptor; // [rsp+40h] [rbp-31h] BYREF
  int v16; // [rsp+41h] [rbp-30h]
  __int16 v17; // [rsp+45h] [rbp-2Ch]
  char v18; // [rsp+47h] [rbp-2Ah]
  _DWORD *v19; // [rsp+48h] [rbp-29h]
  _DWORD *v20; // [rsp+50h] [rbp-21h]
  __int64 v21; // [rsp+58h] [rbp-19h]
  char *v22; // [rsp+60h] [rbp-11h]
  _DWORD Sid[3]; // [rsp+68h] [rbp-9h] BYREF
  _DWORD Src[3]; // [rsp+74h] [rbp+3h] BYREF
  _DWORD v25[4]; // [rsp+80h] [rbp+Fh] BYREF
  _DWORD v26[4]; // [rsp+90h] [rbp+1Fh] BYREF

  Sid[0] = 257;
  *a2 = 0LL;
  Sid[1] = 83886080;
  v4 = 0LL;
  *RtlSubAuthoritySid(Sid, 0) = 18;
  if ( !RtlValidSid(Sid) )
    return (unsigned int)-1073741762;
  Src[0] = 257;
  Src[1] = 0x1000000;
  *RtlSubAuthoritySid(Src, 0) = 0;
  if ( !RtlValidSid(Src) )
    return (unsigned int)-1073741762;
  v25[0] = 513;
  v25[1] = 83886080;
  *RtlSubAuthoritySid(v25, 0) = 32;
  *RtlSubAuthoritySid(v25, 1u) = 544;
  if ( !RtlValidSid(v25) )
    return (unsigned int)-1073741762;
  if ( a1 )
  {
    v26[0] = 513;
    v26[1] = 251658240;
    v4 = v26;
    *RtlSubAuthoritySid(v26, 0) = 2;
    *RtlSubAuthoritySid(v26, 1u) = 1;
    if ( !RtlValidSid(v26) )
      return (unsigned int)-1073741762;
  }
  v5 = RtlLengthSid(v25);
  v6 = RtlLengthSid(Src) + v5;
  v7 = RtlLengthSid(Sid) + v6 + 32;
  if ( a1 )
    v7 += RtlLengthSid(v4) + 8;
  Pool2 = (ACL *)ExAllocatePool2(0x100uLL);
  v9 = (char *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  Acl = RtlCreateAcl(Pool2, v7, 2u);
  if ( Acl >= 0 )
  {
    Acl = RtlpAddKnownAce(v9, 2u, 2, 983103, (unsigned __int8 *)Sid, 0);
    if ( Acl >= 0 )
    {
      Acl = RtlpAddKnownAce(v9, 2u, 2, 131097, (unsigned __int8 *)Src, 0);
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce(v9, 2u, 2, 983103, (unsigned __int8 *)v25, 0);
        if ( Acl >= 0 )
        {
          if ( !a1 || (Acl = RtlpAddKnownAce(v9, 2u, 2, 131097, (unsigned __int8 *)v4, 0), Acl >= 0) )
          {
            v16 = 1378048;
            v17 = 0;
            v18 = 0;
            v21 = 0LL;
            SecurityDescriptor = 1;
            v22 = v9;
            v19 = v25;
            v20 = v25;
            if ( !RtlValidSecurityDescriptor(&SecurityDescriptor) )
            {
              Acl = -1073741595;
              goto LABEL_18;
            }
            BufferLength = RtlLengthSecurityDescriptor(&SecurityDescriptor);
            if ( BufferLength < 0x28 )
            {
              Acl = -1073741762;
              goto LABEL_18;
            }
            v11 = (void *)ExAllocatePool2(0x100uLL);
            v12 = v11;
            if ( v11 )
            {
              if ( *(__int16 *)((char *)&v16 + 1) < 0 )
              {
                Acl = -1073741593;
              }
              else
              {
                Acl = RtlMakeSelfRelativeSD(&SecurityDescriptor, v11, &BufferLength);
                if ( Acl >= 0 )
                {
                  *a2 = v12;
                  goto LABEL_18;
                }
              }
              ExFreePoolWithTag(v12, 0);
              goto LABEL_18;
            }
            Acl = -1073741801;
          }
        }
      }
    }
  }
LABEL_18:
  ExFreePoolWithTag(v9, 0);
  return (unsigned int)Acl;
}
