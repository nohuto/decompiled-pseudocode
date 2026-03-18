/*
 * XREFs of IopCreateUmdfDirectory @ 0x140CBCE2C
 * Callers:
 *     IopCreateRootDirectories @ 0x140CBCD38 (IopCreateRootDirectories.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlLengthRequiredSid @ 0x1408E9A40 (RtlLengthRequiredSid.c)
 *     RtlCreateAcl @ 0x1409D8030 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x1409F49E0 (RtlAddAccessAllowedAce.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 *     RtlInitializeSid @ 0x140A6AF80 (RtlInitializeSid.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A6B0F0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A6C2F0 (RtlCreateSecurityDescriptor.c)
 *     NtCreateDirectoryObject @ 0x140AF9E30 (NtCreateDirectoryObject.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 IopCreateUmdfDirectory()
{
  unsigned __int8 *SeLocalSystemSid; // r14
  ULONG v1; // eax
  _DWORD *Pool2; // rax
  _DWORD *v3; // rdi
  int Acl; // ebx
  ULONG v5; // ebx
  ACL *v6; // rax
  ACL *v7; // rsi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-29h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+30h] [rbp-19h] BYREF
  __int64 v11; // [rsp+50h] [rbp+7h]
  __int128 v12; // [rsp+58h] [rbp+Fh] BYREF
  __int128 v13; // [rsp+68h] [rbp+1Fh]
  _OWORD *v14; // [rsp+78h] [rbp+2Fh]
  __int64 v15; // [rsp+80h] [rbp+37h]
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+B0h] [rbp+67h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp+6Fh] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v11 = 0LL;
  Handle = 0LL;
  v14 = 0LL;
  LODWORD(v15) = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  DestinationString = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  SeLocalSystemSid = (unsigned __int8 *)SeExports->SeLocalSystemSid;
  v1 = RtlLengthRequiredSid(6u);
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, v1, 0x73536F49u);
  v3 = Pool2;
  if ( Pool2 )
  {
    Acl = RtlInitializeSid(Pool2, &IdentifierAuthority, 6u);
    if ( Acl >= 0 )
    {
      v3[2] = 80;
      v3[3] = -1642288911;
      v3[4] = 582572993;
      v3[5] = 1835434367;
      v3[6] = 1344795993;
      v3[7] = 749280709;
      v5 = 4 * (SeLocalSystemSid[1] + *((unsigned __int8 *)v3 + 1)) + 40;
      v6 = (ACL *)ExAllocatePool2(256LL, v5, 0x63416F49u);
      v7 = v6;
      if ( v6 )
      {
        Acl = RtlCreateAcl(v6, v5, 2u);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v7, 2u, 0x10000000u, SeLocalSystemSid);
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAce(v7, 2u, 0x10000000u, v3);
            if ( Acl >= 0 )
            {
              Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
              if ( Acl >= 0 )
              {
                Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v7, 0);
                if ( Acl >= 0 )
                {
                  RtlInitUnicodeString(&DestinationString, L"\\UMDFCommunicationPorts");
                  LODWORD(v12) = 48;
                  *(_QWORD *)&v13 = &DestinationString;
                  *((_QWORD *)&v12 + 1) = 0LL;
                  v14 = SecurityDescriptor;
                  DWORD2(v13) = 528;
                  v15 = 0LL;
                  Acl = NtCreateDirectoryObject((__int64)&Handle, 983055LL, (__int64)&v12);
                  if ( Acl >= 0 )
                    ObCloseHandle(Handle, 0);
                }
              }
            }
          }
        }
        ExFreePoolWithTag(v7, 0);
      }
      else
      {
        Acl = -1073741670;
      }
    }
    ExFreePoolWithTag(v3, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
