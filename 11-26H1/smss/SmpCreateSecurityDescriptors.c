/*
 * XREFs of SmpCreateSecurityDescriptors @ 0x14000C310
 * Callers:
 *     SmpInit @ 0x140014CEC (SmpInit.c)
 * Callees:
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

__int64 SmpCreateSecurityDescriptors()
{
  NTSTATUS v0; // edi
  ULONG v1; // ebx
  ULONG v2; // esi
  struct _ACL *Heap; // rax
  struct _ACL *v4; // rbx
  NTSTATUS v5; // esi
  ULONG v6; // r15d
  ULONG v7; // r15d
  ULONG v8; // r15d
  ULONG v9; // r15d
  ULONG v10; // r15d
  struct _ACL *v11; // rbx
  SIZE_T v12; // r12
  struct _ACL *v13; // r14
  ULONG v14; // r15d
  ULONG v15; // r15d
  ULONG v16; // r15d
  ULONG v17; // r15d
  ULONG v18; // r15d
  struct _ACL *v19; // r14
  ULONG v20; // ebx
  SIZE_T v21; // r12
  struct _ACL *v22; // rbx
  ULONG v23; // ebx
  ULONG v24; // ebx
  ULONG v25; // r14d
  ULONG v26; // r14d
  struct _ACL *v27; // rax
  struct _ACL *v28; // rbx
  int v29; // eax
  PSECURITY_DESCRIPTOR v30; // rcx
  ULONG v31; // ebx
  ULONG v32; // ebx
  ULONG v33; // r15d
  ULONG v34; // r15d
  struct _ACL *v35; // rbx
  ULONG v36; // r12d
  struct _ACL *v37; // r14
  ULONG SubAuthority2; // [rsp+28h] [rbp-99h]
  ULONG SubAuthority2a; // [rsp+28h] [rbp-99h]
  void *SubAuthority3; // [rsp+30h] [rbp-91h]
  PVOID Ace; // [rsp+68h] [rbp-59h] BYREF
  PSID v43; // [rsp+70h] [rbp-51h] BYREF
  PSID Sid; // [rsp+78h] [rbp-49h] BYREF
  PSID v45; // [rsp+80h] [rbp-41h] BYREF
  PSID BaseAddress; // [rsp+88h] [rbp-39h] BYREF
  PSID v47; // [rsp+90h] [rbp-31h] BYREF
  PSID v48; // [rsp+98h] [rbp-29h] BYREF
  PSID v49; // [rsp+A0h] [rbp-21h] BYREF
  PSID v50; // [rsp+A8h] [rbp-19h] BYREF
  PSID v51; // [rsp+B0h] [rbp-11h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v52; // [rsp+B8h] [rbp-9h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v53; // [rsp+C0h] [rbp-1h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+C8h] [rbp+7h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v55; // [rsp+D0h] [rbp+Fh] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v56; // [rsp+D8h] [rbp+17h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v57; // [rsp+E0h] [rbp+1Fh] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 256;
  Sid = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v43 = 0LL;
  v51 = 0LL;
  v45 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  BaseAddress = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_DWORD *)v53.Value = 0;
  *(_WORD *)&v53.Value[4] = 3840;
  *(_DWORD *)v52.Value = 0;
  *(_WORD *)&v52.Value[4] = 1280;
  *(_DWORD *)v56.Value = 0;
  *(_WORD *)&v56.Value[4] = 4096;
  *(_DWORD *)v55.Value = 0;
  *(_WORD *)&v55.Value[4] = 768;
  *(_DWORD *)v57.Value = 0;
  *(_WORD *)&v57.Value[4] = 4864;
  Ace = 0LL;
  SmpPrimarySecurityDescriptor = &SmpPrimarySDBody;
  RtlCreateSecurityDescriptor(&SmpPrimarySDBody, 1u);
  SmpLiberalSecurityDescriptor = &SmpLiberalSDBody;
  RtlCreateSecurityDescriptor(&SmpLiberalSDBody, 1u);
  SmpKnownDllsDirSecurityDescriptor = &SmpKnownDllsDirSDBody;
  RtlCreateSecurityDescriptor(&SmpKnownDllsDirSDBody, 1u);
  SmpKnownDllSecurityDescriptor = &SmpKnownDllSDBody;
  RtlCreateSecurityDescriptor(&SmpKnownDllSDBody, 1u);
  SmpKnownDllsSymLinkSecurityDescriptor = &SmpKnownDllsSymLinkSDBody;
  RtlCreateSecurityDescriptor(&SmpKnownDllsSymLinkSDBody, 1u);
  SmpApiPortSecurityDescriptor = &SmpApiPortSDBody;
  RtlCreateSecurityDescriptor(&SmpApiPortSDBody, 1u);
  v0 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 1u, 0, 0, 0, 0, 0, 0, 0, 0, &Sid);
  if ( v0 >= 0 )
  {
    v0 = RtlAllocateAndInitializeSid(&v53, 2u, 2u, 1u, 0, 0, 0, 0, 0, 0, &v49);
    if ( v0 >= 0 )
    {
      v0 = RtlAllocateAndInitializeSid(&v53, 2u, 2u, 2u, 0, 0, 0, 0, 0, 0, &v50);
      if ( v0 >= 0 )
      {
        v0 = RtlAllocateAndInitializeSid(&v52, 2u, 0x20u, 0x220u, 0, 0, 0, 0, 0, 0, &v43);
        if ( v0 >= 0 )
        {
          v0 = RtlAllocateAndInitializeSid(&v55, 1u, 0, 0, 0, 0, 0, 0, 0, 0, &v48);
          if ( v0 >= 0 )
          {
            v0 = RtlAllocateAndInitializeSid(&v52, 1u, 0xCu, 0, 0, 0, 0, 0, 0, 0, &v45);
            if ( v0 >= 0 )
            {
              v0 = RtlAllocateAndInitializeSid(&v52, 1u, 0x12u, 0, 0, 0, 0, 0, 0, 0, &v51);
              if ( v0 >= 0 )
              {
                v0 = RtlAllocateAndInitializeSid(&v56, 1u, 0x1000u, 0, 0, 0, 0, 0, 0, 0, &v47);
                if ( v0 >= 0 )
                {
                  v0 = RtlAllocateAndInitializeSid(&v57, 2u, 0x200u, 0x2000u, 0, 0, 0, 0, 0, 0, &BaseAddress);
                  if ( v0 < 0 )
                  {
                    BaseAddress = 0LL;
                    goto LABEL_47;
                  }
                  v1 = RtlLengthSid(v51);
                  v2 = v1 + RtlLengthSid(v43) + 32;
                  Heap = (struct _ACL *)RtlAllocateHeap(
                                          *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                                          SmBaseTag,
                                          v2);
                  v0 = -1073741801;
                  v4 = Heap;
                  if ( Heap )
                  {
                    RtlCreateAcl(Heap, v2, 2u);
                    RtlAddAccessAllowedAce(v4, 2u, 0x10000000u, v43);
                    RtlAddAccessAllowedAce(v4, 2u, 0x10000000u, v51);
                    v5 = RtlSetDaclSecurityDescriptor(SmpApiPortSecurityDescriptor, 1u, v4, 0);
                  }
                  else
                  {
                    v5 = -1073741801;
                  }
                  v6 = RtlLengthSid(v45);
                  v7 = RtlLengthSid(v43) + v6;
                  v8 = RtlLengthSid(v50) + v7;
                  v9 = RtlLengthSid(v49) + v8;
                  v10 = RtlLengthSid(Sid) + 68 + v9;
                  v11 = (struct _ACL *)RtlAllocateHeap(
                                         *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                                         SmBaseTag,
                                         v10);
                  if ( !v11 )
                    v5 = -1073741801;
                  v12 = RtlLengthSid(BaseAddress) + 20;
                  v13 = (struct _ACL *)RtlAllocateHeap(
                                         *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                                         SmBaseTag,
                                         v12);
                  if ( v13 )
                  {
                    if ( v5 >= 0 )
                    {
                      RtlCreateAcl(v11, v10, 2u);
                      RtlAddAccessAllowedAce(v11, 2u, 0x10000000u, v43);
                      RtlAddAccessAllowedAce(v11, 2u, 0xA0000000, Sid);
                      RtlAddAccessAllowedAce(v11, 2u, 0xA0000000, v49);
                      RtlAddAccessAllowedAce(v11, 2u, 0xA0000000, v45);
                      RtlAddAccessAllowedAce(v11, 2u, 0xA0000000, v50);
                      RtlCreateAcl(v13, v12, 2u);
                      LOBYTE(SubAuthority2) = 20;
                      RtlAddProcessTrustLabelAce(v13, 2LL, 0LL, BaseAddress, SubAuthority2, 131075);
                      RtlSetDaclSecurityDescriptor(SmpKnownDllsDirSecurityDescriptor, 1u, v11, 0);
                      RtlSetSaclSecurityDescriptor(SmpKnownDllsDirSecurityDescriptor, 1u, v13, 0);
                      v5 = RtlSetDaclSecurityDescriptor(SmpKnownDllsSymLinkSecurityDescriptor, 1u, v11, 0);
                    }
                  }
                  else
                  {
                    v5 = -1073741801;
                  }
                  v14 = RtlLengthSid(v45);
                  v15 = RtlLengthSid(v43) + v14;
                  v16 = RtlLengthSid(v50) + v15;
                  v17 = RtlLengthSid(v49) + v16;
                  v18 = RtlLengthSid(Sid) + 68 + v17;
                  v19 = (struct _ACL *)RtlAllocateHeap(
                                         *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                                         SmBaseTag,
                                         v18);
                  if ( !v19 )
                    v5 = -1073741801;
                  v20 = RtlLengthSid(BaseAddress);
                  v21 = v20 + RtlLengthSid(v47) + 32;
                  v22 = (struct _ACL *)RtlAllocateHeap(
                                         *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                                         SmBaseTag,
                                         v21);
                  if ( v22 )
                  {
                    if ( v5 >= 0 )
                    {
                      RtlCreateAcl(v19, v18, 2u);
                      RtlAddAccessAllowedAce(v19, 2u, 0xE0000000, Sid);
                      RtlAddAccessAllowedAce(v19, 2u, 0xE0000000, v49);
                      RtlAddAccessAllowedAce(v19, 2u, 0xE0000000, v50);
                      RtlAddAccessAllowedAce(v19, 2u, 0xE0000000, v45);
                      RtlAddAccessAllowedAce(v19, 2u, 0x10000000u, v43);
                      RtlCreateAcl(v22, v21, 2u);
                      LODWORD(SubAuthority3) = 1;
                      RtlAddMandatoryAce(v22, 2u, 0, (ULONG)v47, 0x11u, SubAuthority3);
                      v29 = 131087;
                      if ( !SmpHostSmss )
                        v29 = 196623;
                      LOBYTE(SubAuthority2a) = 20;
                      RtlAddProcessTrustLabelAce(v22, 2LL, 0LL, BaseAddress, SubAuthority2a, v29);
                      RtlSetDaclSecurityDescriptor(SmpKnownDllSecurityDescriptor, 1u, v19, 0);
                      v5 = RtlSetSaclSecurityDescriptor(SmpKnownDllSecurityDescriptor, 1u, v22, 0);
                    }
                  }
                  else
                  {
                    v5 = -1073741801;
                  }
                  v23 = RtlLengthSid(v45);
                  v24 = RtlLengthSid(v43) + v23;
                  v25 = 2 * (v24 + RtlLengthSid(Sid));
                  v26 = RtlLengthSid(v48) + 92 + v25;
                  v27 = (struct _ACL *)RtlAllocateHeap(
                                         *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                                         SmBaseTag,
                                         v26);
                  v28 = v27;
                  if ( v27 )
                  {
                    if ( v5 >= 0 )
                    {
                      RtlCreateAcl(v27, v26, 2u);
                      RtlAddAccessAllowedAce(v28, 2u, 0xA0000000, Sid);
                      RtlAddAccessAllowedAce(v28, 2u, 0xA0000000, v45);
                      RtlAddAccessAllowedAce(v28, 2u, 0x10000000u, v43);
                      RtlAddAccessAllowedAce(v28, 2u, 0xA0000000, Sid);
                      RtlGetAce(v28, 3u, &Ace);
                      *((_BYTE *)Ace + 1) = 11;
                      RtlAddAccessAllowedAce(v28, 2u, 0xA0000000, v45);
                      RtlGetAce(v28, 4u, &Ace);
                      *((_BYTE *)Ace + 1) = 11;
                      RtlAddAccessAllowedAce(v28, 2u, 0x10000000u, v43);
                      RtlGetAce(v28, 5u, &Ace);
                      *((_BYTE *)Ace + 1) = 11;
                      RtlAddAccessAllowedAce(v28, 2u, 0x10000000u, v48);
                      RtlGetAce(v28, 6u, &Ace);
                      v30 = SmpPrimarySecurityDescriptor;
                      *((_BYTE *)Ace + 1) = 11;
                      v5 = RtlSetDaclSecurityDescriptor(v30, 1u, v28, 0);
                    }
                  }
                  else
                  {
                    v5 = -1073741801;
                  }
                  v31 = RtlLengthSid(v45);
                  v32 = RtlLengthSid(v43) + v31;
                  v33 = 2 * (v32 + RtlLengthSid(Sid));
                  v34 = RtlLengthSid(v48) + 92 + v33;
                  v35 = (struct _ACL *)RtlAllocateHeap(
                                         *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                                         SmBaseTag,
                                         v34);
                  if ( !v35 )
                    v5 = -1073741801;
                  v36 = RtlLengthSid(v47) + 20;
                  v37 = (struct _ACL *)RtlAllocateHeap(
                                         *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                                         SmBaseTag,
                                         v36);
                  if ( v37 )
                  {
                    v0 = v5;
                    if ( v5 >= 0 )
                    {
                      RtlCreateAcl(v35, v34, 2u);
                      RtlAddAccessAllowedAce(v35, 2u, 0xE0000000, Sid);
                      RtlAddAccessAllowedAce(v35, 2u, 0xE0000000, v45);
                      RtlAddAccessAllowedAce(v35, 2u, 0x10000000u, v43);
                      RtlAddAccessAllowedAce(v35, 2u, 0xE0000000, Sid);
                      RtlGetAce(v35, 3u, &Ace);
                      *((_BYTE *)Ace + 1) = 11;
                      RtlAddAccessAllowedAce(v35, 2u, 0xE0000000, v45);
                      RtlGetAce(v35, 4u, &Ace);
                      *((_BYTE *)Ace + 1) = 11;
                      RtlAddAccessAllowedAce(v35, 2u, 0x10000000u, v43);
                      RtlGetAce(v35, 5u, &Ace);
                      *((_BYTE *)Ace + 1) = 11;
                      RtlAddAccessAllowedAce(v35, 2u, 0x10000000u, v48);
                      RtlGetAce(v35, 6u, &Ace);
                      *((_BYTE *)Ace + 1) = 11;
                      RtlCreateAcl(v37, v36, 2u);
                      LODWORD(SubAuthority3) = 1;
                      RtlAddMandatoryAce(v37, 2u, 0, (ULONG)v47, 0x11u, SubAuthority3);
                      RtlSetDaclSecurityDescriptor(SmpLiberalSecurityDescriptor, 1u, v35, 0);
                      v0 = RtlSetSaclSecurityDescriptor(SmpLiberalSecurityDescriptor, 1u, v37, 0);
                    }
                  }
                }
                else
                {
                  v47 = 0LL;
                }
              }
              else
              {
                v51 = 0LL;
              }
            }
            else
            {
              v45 = 0LL;
            }
          }
          else
          {
            v48 = 0LL;
          }
        }
        else
        {
          v43 = 0LL;
        }
      }
      else
      {
        v50 = 0LL;
      }
    }
    else
    {
      v49 = 0LL;
    }
  }
  else
  {
    Sid = 0LL;
  }
  if ( BaseAddress )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
LABEL_47:
  if ( v47 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v47);
  if ( v48 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v48);
  if ( v43 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v43);
  if ( v49 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v49);
  if ( v50 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v50);
  if ( Sid )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Sid);
  if ( v51 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v51);
  if ( v45 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v45);
  return (unsigned int)v0;
}
