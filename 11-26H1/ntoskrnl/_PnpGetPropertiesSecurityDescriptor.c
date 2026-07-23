/*
 * XREFs of _PnpGetPropertiesSecurityDescriptor @ 0x140B25B1C
 * Callers:
 *     _PnpOpenPropertiesKey @ 0x140956580 (_PnpOpenPropertiesKey.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x1404792E0 (RtlSubAuthoritySid.c)
 *     RtlLengthSid @ 0x140480CA0 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlLengthSecurityDescriptor @ 0x1408FE3E0 (RtlLengthSecurityDescriptor.c)
 *     RtlValidSid @ 0x1408FFE80 (RtlValidSid.c)
 *     RtlValidSecurityDescriptor @ 0x1409029C0 (RtlValidSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1409A8880 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x140A6E620 (RtlAbsoluteToSelfRelativeSD.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void *PnpGetPropertiesSecurityDescriptor()
{
  void *v0; // rbx
  ULONG v1; // edi
  ACL *Pool2; // rax
  char *v3; // rsi
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
  char *v15; // [rsp+58h] [rbp-28h]
  _DWORD Sid[4]; // [rsp+60h] [rbp-20h] BYREF

  Sid[0] = 257;
  Sid[1] = 83886080;
  v0 = 0LL;
  *RtlSubAuthoritySid(Sid, 0) = 18;
  if ( RtlValidSid(Sid) )
  {
    v1 = RtlLengthSid(Sid) + 16;
    Pool2 = (ACL *)ExAllocatePool2(0x100uLL);
    v3 = (char *)Pool2;
    if ( Pool2 )
    {
      if ( RtlCreateAcl(Pool2, v1, 2u) >= 0 && (int)RtlpAddKnownAce(v3, 2u, 2, 983103, (unsigned __int8 *)Sid, 0) >= 0 )
      {
        v9 = 0;
        v10 = 0;
        v11 = 0;
        v14 = 0LL;
        SecurityDescriptor = 1;
        v15 = v3;
        v12 = Sid;
        *(_WORD *)((char *)&v9 + 1) = 5127;
        v13 = Sid;
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
