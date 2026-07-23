/*
 * XREFs of _PnpGetPropertiesSecurityDescriptor @ 0x140A77500
 * Callers:
 *     _PnpOpenPropertiesKey @ 0x140953450 (_PnpOpenPropertiesKey.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14044F1F0 (RtlSubAuthoritySid.c)
 *     RtlLengthSid @ 0x140458B00 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlValidSid @ 0x140918DF0 (RtlValidSid.c)
 *     RtlValidSecurityDescriptor @ 0x140919740 (RtlValidSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x14091B2A0 (RtlLengthSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x14092B1E0 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x140968260 (RtlCreateAcl.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1409E93F0 (RtlAbsoluteToSelfRelativeSD.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void *PnpGetPropertiesSecurityDescriptor()
{
  void *v0; // rbx
  ULONG v1; // edi
  ACL *Pool2; // rax
  ACL *v3; // rsi
  void *v5; // rax
  void *v6; // rdi
  ULONG BufferLength; // [rsp+30h] [rbp-50h] BYREF
  char SecurityDescriptor; // [rsp+38h] [rbp-48h] BYREF
  int v9; // [rsp+39h] [rbp-47h]
  __int16 v10; // [rsp+3Dh] [rbp-43h]
  char v11; // [rsp+3Fh] [rbp-41h]
  _DWORD *v12; // [rsp+40h] [rbp-40h]
  _DWORD *v13; // [rsp+48h] [rbp-38h]
  __int64 v14; // [rsp+50h] [rbp-30h]
  ACL *v15; // [rsp+58h] [rbp-28h]
  _DWORD Sid[4]; // [rsp+60h] [rbp-20h] BYREF

  Sid[0] = 257;
  Sid[1] = 83886080;
  v0 = 0LL;
  *RtlSubAuthoritySid(Sid, 0) = 18;
  if ( RtlValidSid(Sid) )
  {
    v1 = RtlLengthSid(Sid) + 16;
    Pool2 = (ACL *)ExAllocatePool2(0x100uLL);
    v3 = Pool2;
    if ( Pool2 )
    {
      if ( RtlCreateAcl(Pool2, v1, 2u) >= 0 && (int)RtlpAddKnownAce(v3, 2u, 2, 983103, (unsigned __int8 *)Sid, 0) >= 0 )
      {
        v9 = 1024;
        v10 = 0;
        v11 = 0;
        v14 = 0LL;
        SecurityDescriptor = 1;
        v15 = v3;
        v12 = Sid;
        *(_WORD *)((char *)&v9 + 1) = 5;
        v13 = Sid;
        *(_WORD *)((char *)&v9 + 1) = 5127;
        if ( RtlValidSecurityDescriptor(&SecurityDescriptor) )
        {
          BufferLength = RtlLengthSecurityDescriptor(&SecurityDescriptor);
          if ( BufferLength >= 0x28 )
          {
            v5 = (void *)ExAllocatePool2(0x100uLL);
            v6 = v5;
            if ( v5 )
            {
              if ( RtlAbsoluteToSelfRelativeSD(&SecurityDescriptor, v5, &BufferLength) < 0 )
                ExFreePoolWithTag(v6, 0);
              else
                v0 = v6;
            }
          }
        }
      }
      ExFreePoolWithTag(v3, 0);
    }
  }
  return v0;
}
