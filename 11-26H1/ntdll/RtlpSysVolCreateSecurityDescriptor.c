/*
 * XREFs of RtlpSysVolCreateSecurityDescriptor @ 0x1800C7DAC
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x1800C7AD0 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlpAddKnownAce @ 0x18003CC00 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x18005D4F0 (RtlCreateAcl.c)
 *     RtlpSysVolAllocate @ 0x1800C7D8C (RtlpSysVolAllocate.c)
 *     RtlSetControlSecurityDescriptor @ 0x1800C85B0 (RtlSetControlSecurityDescriptor.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpSysVolCreateSecurityDescriptor(__int64 *a1, char **a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  char *v7; // rsi
  int Acl; // ebx
  __int64 result; // rax
  __int64 v10; // rcx
  __int16 v11; // ax
  __int16 Src; // [rsp+30h] [rbp-48h] BYREF
  int v13; // [rsp+32h] [rbp-46h]
  __int16 v14; // [rsp+36h] [rbp-42h]
  int v15; // [rsp+38h] [rbp-40h]

  v4 = RtlpSysVolAllocate();
  v5 = v4;
  if ( v4 )
  {
    Src = 257;
    v15 = 18;
    *(_OWORD *)v4 = 0LL;
    *(_OWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)(v4 + 32) = 0LL;
    v13 = 0;
    v14 = 1280;
    *(_BYTE *)v4 = 1;
    v6 = RtlpSysVolAllocate();
    v7 = (char *)v6;
    if ( !v6 )
    {
      Acl = -1073741670;
LABEL_4:
      RtlpSysVolFree(v5);
      return (unsigned int)Acl;
    }
    Acl = RtlCreateAcl(v6, 0x1Cu, 2);
    v10 = (__int64)v7;
    if ( Acl >= 0 )
    {
      Acl = RtlpAddKnownAce(v7, 2u, 3, 0x1FFFFF, (unsigned __int8 *)&Src, 0);
      if ( Acl >= 0 )
      {
        if ( *(_BYTE *)v5 == 1 )
        {
          v11 = *(_WORD *)(v5 + 2);
          if ( v11 < 0 )
          {
            Acl = -1073741703;
          }
          else
          {
            *(_QWORD *)(v5 + 32) = v7;
            *(_WORD *)(v5 + 2) = v11 & 0xFFF3 | 4;
            Acl = RtlSetControlSecurityDescriptor(v5, 4096LL, 4096LL);
            if ( Acl >= 0 )
            {
              *a1 = v5;
              result = 0LL;
              *a2 = v7;
              return result;
            }
          }
        }
        else
        {
          Acl = -1073741736;
        }
      }
      v10 = (__int64)v7;
    }
    RtlpSysVolFree(v10);
    goto LABEL_4;
  }
  return 3221225626LL;
}
