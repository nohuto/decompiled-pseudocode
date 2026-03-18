/*
 * XREFs of SepSetProcessTrustLabelAceForToken @ 0x140260160
 * Callers:
 *     SeCopyClientToken @ 0x140926AB0 (SeCopyClientToken.c)
 *     SepFinalizeTokenAcls @ 0x140926FDC (SepFinalizeTokenAcls.c)
 *     PsImpersonateClient @ 0x140928820 (PsImpersonateClient.c)
 * Callees:
 *     RtlEqualSid @ 0x1402604A0 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ObSetSecurityObjectByPointer @ 0x1408EC3B0 (ObSetSecurityObjectByPointer.c)
 *     ObGetObjectSecurity @ 0x140905190 (ObGetObjectSecurity.c)
 *     RtlAddProcessTrustLabelAce @ 0x140926090 (RtlAddProcessTrustLabelAce.c)
 *     RtlCreateAcl @ 0x1409D8030 (RtlCreateAcl.c)
 *     RtlAddAce @ 0x1409F4690 (RtlAddAce.c)
 *     ObReleaseObjectSecurity @ 0x140A5AB20 (ObReleaseObjectSecurity.c)
 *     RtlQueryInformationAcl @ 0x140A66FE0 (RtlQueryInformationAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140A6C2F0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140A8F1C0 (RtlSetSaclSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall SepSetProcessTrustLabelAceForToken(_QWORD *Object)
{
  char *v2; // rbp
  int v3; // r13d
  unsigned __int8 *v4; // r15
  ULONG v5; // r12d
  NTSTATUS result; // eax
  _WORD *v7; // rdi
  NTSTATUS InformationAcl; // ebx
  __int16 v9; // ax
  __int64 v10; // rax
  char *v11; // r14
  char *v12; // rbx
  unsigned int i; // ecx
  ULONG v14; // ebx
  ACL *Pool2; // rax
  ACL *v16; // r14
  __int64 v17; // rdx
  ULONG AceListLength; // [rsp+20h] [rbp-88h]
  __int64 v19; // [rsp+30h] [rbp-78h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+38h] [rbp-70h] BYREF
  _OWORD v21[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v22; // [rsp+60h] [rbp-48h]
  __int64 v23; // [rsp+68h] [rbp-40h] BYREF
  int v24; // [rsp+70h] [rbp-38h]

  v23 = 0LL;
  SecurityDescriptor = 0LL;
  LOBYTE(v19) = 0;
  v2 = 0LL;
  v24 = 0;
  HIDWORD(v19) = 0;
  memset(v21, 0, sizeof(v21));
  v22 = 0LL;
  if ( !Object )
    return -1073741811;
  v3 = 8;
  v4 = (unsigned __int8 *)Object[138];
  v5 = 2;
  result = ObGetObjectSecurity(Object, &SecurityDescriptor, (PBOOLEAN)&v19);
  v7 = SecurityDescriptor;
  InformationAcl = result;
  if ( result < 0 )
    goto LABEL_3;
  if ( !SecurityDescriptor )
    return result;
  v9 = *((_WORD *)SecurityDescriptor + 1);
  if ( (v9 & 0x10) == 0 )
    goto LABEL_30;
  if ( v9 >= 0 )
  {
    v11 = (char *)*((_QWORD *)SecurityDescriptor + 3);
  }
  else
  {
    v10 = *((unsigned int *)SecurityDescriptor + 3);
    if ( !(_DWORD)v10 )
    {
LABEL_30:
      InformationAcl = 0;
      goto LABEL_31;
    }
    v11 = (char *)SecurityDescriptor + v10;
  }
  if ( !v11 )
    goto LABEL_30;
  v2 = v11 + 8;
  v12 = v11 + 8;
  for ( i = 0; i < *((unsigned __int16 *)v11 + 2); ++i )
  {
    if ( *v12 == 20 )
      goto LABEL_16;
    v12 += *((unsigned __int16 *)v12 + 1);
  }
  v12 = 0LL;
LABEL_16:
  if ( !v4 )
  {
    if ( v12 )
      goto LABEL_19;
LABEL_28:
    InformationAcl = 0;
    goto LABEL_3;
  }
  if ( v12 && RtlEqualSid(v12 + 8, v4) )
  {
    *((_DWORD *)v12 + 1) &= 0x2001Eu;
    goto LABEL_28;
  }
LABEL_19:
  InformationAcl = RtlQueryInformationAcl(v11, &v23, 12LL, 2LL);
  if ( InformationAcl >= 0 )
  {
    v3 = HIDWORD(v23);
    InformationAcl = RtlQueryInformationAcl(v11, (char *)&v19 + 4, 4LL, 1LL);
    if ( InformationAcl >= 0 )
    {
      v5 = HIDWORD(v19);
      if ( (unsigned __int8)(*v11 - 2) > 2u )
        goto LABEL_24;
      InformationAcl = 0;
      if ( !*((_WORD *)v11 + 2) )
      {
        InformationAcl = -1073741811;
        goto LABEL_3;
      }
      if ( v2 >= &v11[*((unsigned __int16 *)v11 + 1)] )
      {
LABEL_24:
        InformationAcl = -1073741811;
        goto LABEL_3;
      }
LABEL_31:
      if ( v4 )
      {
        v14 = v3 + 4 * v4[1] + 16;
        Pool2 = (ACL *)ExAllocatePool2(0x100uLL);
        v16 = Pool2;
        if ( Pool2 )
        {
          InformationAcl = RtlCreateAcl(Pool2, v14, v5);
          if ( InformationAcl >= 0 )
          {
            if ( !v2 || (InformationAcl = RtlAddAce(v16, v5, 0, v2, HIDWORD(v23) - 8), InformationAcl >= 0) )
            {
              LOBYTE(AceListLength) = 20;
              InformationAcl = RtlAddProcessTrustLabelAce(v16, 2LL, 0LL, v4, AceListLength, 131102, v19);
              if ( InformationAcl >= 0 )
              {
                InformationAcl = RtlCreateSecurityDescriptor(v21, 1u);
                if ( InformationAcl >= 0 )
                {
                  LOBYTE(v17) = 1;
                  InformationAcl = RtlSetSaclSecurityDescriptor(v21, v17, v16, 0LL);
                  if ( InformationAcl >= 0 )
                  {
                    WORD1(v21[0]) |= v7[1] & 0x2830;
                    InformationAcl = ObSetSecurityObjectByPointer(Object, 504LL, v21);
                  }
                }
              }
            }
          }
          ExFreePoolWithTag(v16, 0);
        }
        else
        {
          InformationAcl = -1073741670;
        }
      }
    }
  }
LABEL_3:
  if ( v7 )
    ObReleaseObjectSecurity(v7, v19);
  return InformationAcl;
}
