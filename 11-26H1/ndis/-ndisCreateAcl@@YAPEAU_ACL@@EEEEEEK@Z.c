/*
 * XREFs of ?ndisCreateAcl@@YAPEAU_ACL@@EEEEEEK@Z @ 0x1401901C8
 * Callers:
 *     DriverEntry @ 0x14018E240 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

struct _ACL *__fastcall ndisCreateAcl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        char a6,
        ACCESS_MASK AccessMask)
{
  ACL *v7; // rdi
  ULONG v8; // ebx
  ULONG v9; // ebx
  ULONG v10; // ebx
  ULONG v11; // ebp
  ULONG v12; // eax
  _DWORD *Pool2; // rax
  _DWORD *v14; // rsi
  ULONG v15; // ebp
  ACL *v16; // rax
  ACL *v17; // rbx
  NTSTATUS Acl; // eax
  NTSTATUS v19; // eax
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+20h] [rbp-18h] BYREF

  v7 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v8 = RtlLengthSid(SeExports->SeAliasAdminsSid);
  v9 = RtlLengthSid(SeExports->SeLocalSystemSid) + v8;
  v10 = RtlLengthSid(SeExports->SeLocalServiceSid) + v9;
  v11 = RtlLengthSid(SeExports->SeNetworkServiceSid) + 80;
  v12 = RtlLengthRequiredSid(2u);
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, v12, 1935885390LL);
  v14 = Pool2;
  if ( Pool2 )
  {
    if ( RtlInitializeSid(Pool2, &IdentifierAuthority, 2u) )
      goto LABEL_18;
    v14[2] = 32;
    v14[3] = 556;
    v15 = RtlLengthSid(v14) + v10 + v11;
    if ( a6 )
      v15 += RtlLengthSid(SeExports->SeAliasUsersSid) + 16;
    v16 = (ACL *)ExAllocatePool2(256LL, v15, 1702052942LL);
    v17 = v16;
    if ( !v16 )
      goto LABEL_18;
    Acl = RtlCreateAcl(v16, v15, 2u);
    if ( Acl >= 0 )
    {
      v19 = RtlAddAccessAllowedAce(v17, 2u, 0x1FFFFFu, SeExports->SeAliasAdminsSid);
      if ( v19 >= 0 )
      {
        v19 = RtlAddAccessAllowedAce(v17, 2u, 0x1FFFFFu, SeExports->SeLocalSystemSid);
        if ( v19 >= 0 )
        {
          v19 = RtlAddAccessAllowedAce(v17, 2u, 0x1FFFFFu, SeExports->SeLocalServiceSid);
          if ( v19 >= 0 )
          {
            v19 = RtlAddAccessAllowedAce(v17, 2u, 0x1FFFFFu, SeExports->SeNetworkServiceSid);
            if ( v19 >= 0 )
            {
              v19 = RtlAddAccessAllowedAce(v17, 2u, 0x1FFFFFu, v14);
              if ( v19 >= 0 )
              {
                if ( !a6 || (v19 = RtlAddAccessAllowedAce(v17, 2u, AccessMask, SeExports->SeAliasUsersSid), v19 >= 0) )
                {
                  v7 = v17;
                  goto LABEL_18;
                }
              }
            }
          }
        }
      }
      DbgPrint("RtlAddAccessAllowedAce failed, Status %lx.\n", (unsigned int)v19);
    }
    else
    {
      DbgPrint("RtlCreateAcl failed, Status %lx.\n", (unsigned int)Acl);
    }
    ExFreePoolWithTag(v17, 0);
LABEL_18:
    ExFreePoolWithTag(v14, 0);
  }
  return v7;
}
