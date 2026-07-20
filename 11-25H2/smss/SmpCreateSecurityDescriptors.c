/*
 * XREFs of SmpCreateSecurityDescriptors @ 0x14000B8C0
 * Callers:
 *     SmpConfigureProtectionMode @ 0x140014120 (SmpConfigureProtectionMode.c)
 *     SmpInit @ 0x1400150FC (SmpInit.c)
 * Callees:
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpCreateSecurityDescriptors(char a1)
{
  NTSTATUS v3; // esi
  ULONG v4; // ebx
  ULONG v5; // edi
  struct _ACL *Heap; // rax
  struct _ACL *v7; // rbx
  ULONG v8; // r15d
  ULONG v9; // r15d
  ULONG v10; // r15d
  ULONG v11; // r15d
  ULONG v12; // r15d
  struct _ACL *v13; // rbx
  SIZE_T v14; // rdi
  struct _ACL *v15; // r14
  ULONG v16; // r14d
  ULONG v17; // r14d
  ULONG v18; // r14d
  ULONG v19; // r14d
  ULONG v20; // r14d
  struct _ACL *v21; // rdi
  ULONG v22; // ebx
  ULONG v23; // r15d
  struct _ACL *v24; // rbx
  ULONG v25; // ebx
  ULONG v26; // ebx
  ULONG v27; // edi
  ULONG v28; // edi
  struct _ACL *v29; // rax
  struct _ACL *v30; // rbx
  int v31; // eax
  PSECURITY_DESCRIPTOR v32; // rcx
  ULONG v33; // ebx
  ULONG v34; // ebx
  ULONG v35; // r15d
  ULONG v36; // r15d
  struct _ACL *v37; // rdi
  ULONG v38; // ebx
  struct _ACL *v39; // r14
  ULONG SubAuthority2; // [rsp+28h] [rbp-99h]
  ULONG SubAuthority2a; // [rsp+28h] [rbp-99h]
  void *SubAuthority3; // [rsp+30h] [rbp-91h]
  PVOID Ace; // [rsp+68h] [rbp-59h] BYREF
  PSID v44; // [rsp+70h] [rbp-51h] BYREF
  PSID Sid; // [rsp+78h] [rbp-49h] BYREF
  PSID v46; // [rsp+80h] [rbp-41h] BYREF
  PSID BaseAddress; // [rsp+88h] [rbp-39h] BYREF
  PSID v48; // [rsp+90h] [rbp-31h] BYREF
  PSID v49; // [rsp+98h] [rbp-29h] BYREF
  PSID v50; // [rsp+A0h] [rbp-21h] BYREF
  PSID v51; // [rsp+A8h] [rbp-19h] BYREF
  PSID v52; // [rsp+B0h] [rbp-11h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v53; // [rsp+B8h] [rbp-9h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v54; // [rsp+C0h] [rbp-1h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+C8h] [rbp+7h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v56; // [rsp+D0h] [rbp+Fh] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v57; // [rsp+D8h] [rbp+17h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v58; // [rsp+E0h] [rbp+1Fh] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 256;
  Sid = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v44 = 0LL;
  v52 = 0LL;
  v46 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  BaseAddress = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_DWORD *)v54.Value = 0;
  *(_WORD *)&v54.Value[4] = 3840;
  *(_DWORD *)v53.Value = 0;
  *(_WORD *)&v53.Value[4] = 1280;
  *(_DWORD *)v57.Value = 0;
  *(_WORD *)&v57.Value[4] = 4096;
  *(_DWORD *)v56.Value = 0;
  *(_WORD *)&v56.Value[4] = 768;
  *(_DWORD *)v58.Value = 0;
  *(_WORD *)&v58.Value[4] = 4864;
  Ace = 0LL;
  if ( a1 )
  {
    SmpPrimarySecurityDescriptor = &SmpPrimarySDBody;
    RtlCreateSecurityDescriptor(&SmpPrimarySDBody, 1u);
    RtlSetDaclSecurityDescriptor(SmpPrimarySecurityDescriptor, 1u, 0LL, 0);
    SmpLiberalSecurityDescriptor = &SmpLiberalSDBody;
    RtlCreateSecurityDescriptor(&SmpLiberalSDBody, 1u);
    RtlSetDaclSecurityDescriptor(SmpLiberalSecurityDescriptor, 1u, 0LL, 0);
    SmpKnownDllsDirSecurityDescriptor = &SmpKnownDllsDirSDBody;
    RtlCreateSecurityDescriptor(&SmpKnownDllsDirSDBody, 1u);
    RtlSetDaclSecurityDescriptor(SmpKnownDllsDirSecurityDescriptor, 1u, 0LL, 0);
    SmpKnownDllSecurityDescriptor = &SmpKnownDllSDBody;
    RtlCreateSecurityDescriptor(&SmpKnownDllSDBody, 1u);
    RtlSetDaclSecurityDescriptor(SmpKnownDllSecurityDescriptor, 1u, 0LL, 0);
    SmpKnownDllsSymLinkSecurityDescriptor = &SmpKnownDllsSymLinkSDBody;
    RtlCreateSecurityDescriptor(&SmpKnownDllsSymLinkSDBody, 1u);
    RtlSetDaclSecurityDescriptor(SmpKnownDllsSymLinkSecurityDescriptor, 1u, 0LL, 0);
    SmpApiPortSecurityDescriptor = &SmpApiPortSDBody;
    RtlCreateSecurityDescriptor(&SmpApiPortSDBody, 1u);
    RtlSetDaclSecurityDescriptor(SmpApiPortSecurityDescriptor, 1u, 0LL, 0);
  }
  else if ( (SmpProtectionMode & 1) == 0 )
  {
    return 0LL;
  }
  v3 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 1u, 0, 0, 0, 0, 0, 0, 0, 0, &Sid);
  if ( v3 < 0 )
  {
    Sid = 0LL;
    goto LABEL_52;
  }
  v3 = RtlAllocateAndInitializeSid(&v54, 2u, 2u, 1u, 0, 0, 0, 0, 0, 0, &v50);
  if ( v3 < 0 )
  {
    v50 = 0LL;
    goto LABEL_52;
  }
  v3 = RtlAllocateAndInitializeSid(&v54, 2u, 2u, 2u, 0, 0, 0, 0, 0, 0, &v51);
  if ( v3 < 0 )
  {
    v51 = 0LL;
    goto LABEL_52;
  }
  v3 = RtlAllocateAndInitializeSid(&v53, 2u, 0x20u, 0x220u, 0, 0, 0, 0, 0, 0, &v44);
  if ( v3 < 0 )
  {
    v44 = 0LL;
    goto LABEL_52;
  }
  v3 = RtlAllocateAndInitializeSid(&v56, 1u, 0, 0, 0, 0, 0, 0, 0, 0, &v49);
  if ( v3 < 0 )
  {
    v49 = 0LL;
    goto LABEL_52;
  }
  v3 = RtlAllocateAndInitializeSid(&v53, 1u, 0xCu, 0, 0, 0, 0, 0, 0, 0, &v46);
  if ( v3 < 0 )
  {
    v46 = 0LL;
    goto LABEL_52;
  }
  v3 = RtlAllocateAndInitializeSid(&v53, 1u, 0x12u, 0, 0, 0, 0, 0, 0, 0, &v52);
  if ( v3 < 0 )
  {
    v52 = 0LL;
    goto LABEL_52;
  }
  v3 = RtlAllocateAndInitializeSid(&v57, 1u, 0x1000u, 0, 0, 0, 0, 0, 0, 0, &v48);
  if ( v3 < 0 )
  {
    v48 = 0LL;
LABEL_52:
    if ( BaseAddress )
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
    goto LABEL_54;
  }
  v3 = RtlAllocateAndInitializeSid(&v58, 2u, 0x200u, 0x2000u, 0, 0, 0, 0, 0, 0, &BaseAddress);
  if ( v3 >= 0 )
  {
    if ( a1 )
    {
      v4 = RtlLengthSid(v52);
      v5 = v4 + RtlLengthSid(v44) + 32;
      Heap = (struct _ACL *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v5);
      v7 = Heap;
      if ( Heap )
      {
        RtlCreateAcl(Heap, v5, 2u);
        RtlAddAccessAllowedAce(v7, 2u, 0x10000000u, v44);
        RtlAddAccessAllowedAce(v7, 2u, 0x10000000u, v52);
        v3 = RtlSetDaclSecurityDescriptor(SmpApiPortSecurityDescriptor, 1u, v7, 0);
      }
      else
      {
        v3 = -1073741801;
      }
      v8 = RtlLengthSid(v46);
      v9 = RtlLengthSid(v44) + v8;
      v10 = RtlLengthSid(v51) + v9;
      v11 = RtlLengthSid(v50) + v10;
      v12 = RtlLengthSid(Sid) + 68 + v11;
      v13 = (struct _ACL *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v12);
      if ( !v13 )
        v3 = -1073741801;
      v14 = RtlLengthSid(BaseAddress) + 20;
      v15 = (struct _ACL *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v14);
      if ( v15 )
      {
        if ( v3 >= 0 )
        {
          RtlCreateAcl(v13, v12, 2u);
          RtlAddAccessAllowedAce(v13, 2u, 0x10000000u, v44);
          RtlAddAccessAllowedAce(v13, 2u, 0xA0000000, Sid);
          RtlAddAccessAllowedAce(v13, 2u, 0xA0000000, v50);
          RtlAddAccessAllowedAce(v13, 2u, 0xA0000000, v46);
          RtlAddAccessAllowedAce(v13, 2u, 0xA0000000, v51);
          RtlCreateAcl(v15, v14, 2u);
          LOBYTE(SubAuthority2) = 20;
          RtlAddProcessTrustLabelAce(v15, 2LL, 0LL, BaseAddress, SubAuthority2, 131075);
          RtlSetDaclSecurityDescriptor(SmpKnownDllsDirSecurityDescriptor, 1u, v13, 0);
          RtlSetSaclSecurityDescriptor(SmpKnownDllsDirSecurityDescriptor, 1u, v15, 0);
          v3 = RtlSetDaclSecurityDescriptor(SmpKnownDllsSymLinkSecurityDescriptor, 1u, v13, 0);
        }
      }
      else
      {
        v3 = -1073741801;
      }
      v16 = RtlLengthSid(v46);
      v17 = RtlLengthSid(v44) + v16;
      v18 = RtlLengthSid(v51) + v17;
      v19 = RtlLengthSid(v50) + v18;
      v20 = RtlLengthSid(Sid) + 68 + v19;
      v21 = (struct _ACL *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v20);
      if ( !v21 )
        v3 = -1073741801;
      v22 = RtlLengthSid(BaseAddress);
      v23 = v22 + RtlLengthSid(v48) + 32;
      v24 = (struct _ACL *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v23);
      if ( v24 )
      {
        if ( v3 >= 0 )
        {
          RtlCreateAcl(v21, v20, 2u);
          RtlAddAccessAllowedAce(v21, 2u, 0xE0000000, Sid);
          RtlAddAccessAllowedAce(v21, 2u, 0xE0000000, v50);
          RtlAddAccessAllowedAce(v21, 2u, 0xE0000000, v51);
          RtlAddAccessAllowedAce(v21, 2u, 0xE0000000, v46);
          RtlAddAccessAllowedAce(v21, 2u, 0x10000000u, v44);
          RtlCreateAcl(v24, v23, 2u);
          LODWORD(SubAuthority3) = 1;
          RtlAddMandatoryAce(v24, 2u, 0, (ULONG)v48, 0x11u, SubAuthority3);
          v31 = 131087;
          if ( !SmpHostSmss )
            v31 = 196623;
          LOBYTE(SubAuthority2a) = 20;
          RtlAddProcessTrustLabelAce(v24, 2LL, 0LL, BaseAddress, SubAuthority2a, v31);
          RtlSetDaclSecurityDescriptor(SmpKnownDllSecurityDescriptor, 1u, v21, 0);
          v3 = RtlSetSaclSecurityDescriptor(SmpKnownDllSecurityDescriptor, 1u, v24, 0);
        }
      }
      else
      {
        v3 = -1073741801;
      }
    }
    if ( (SmpProtectionMode & 1) != 0 )
    {
      v25 = RtlLengthSid(v46);
      v26 = RtlLengthSid(v44) + v25;
      v27 = 2 * (RtlLengthSid(Sid) + v26);
      v28 = RtlLengthSid(v49) + 92 + v27;
      v29 = (struct _ACL *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v28);
      v30 = v29;
      if ( v29 )
      {
        if ( v3 >= 0 )
        {
          RtlCreateAcl(v29, v28, 2u);
          RtlAddAccessAllowedAce(v30, 2u, 0xA0000000, Sid);
          RtlAddAccessAllowedAce(v30, 2u, 0xA0000000, v46);
          RtlAddAccessAllowedAce(v30, 2u, 0x10000000u, v44);
          RtlAddAccessAllowedAce(v30, 2u, 0xA0000000, Sid);
          RtlGetAce(v30, 3u, &Ace);
          *((_BYTE *)Ace + 1) = 11;
          RtlAddAccessAllowedAce(v30, 2u, 0xA0000000, v46);
          RtlGetAce(v30, 4u, &Ace);
          *((_BYTE *)Ace + 1) = 11;
          RtlAddAccessAllowedAce(v30, 2u, 0x10000000u, v44);
          RtlGetAce(v30, 5u, &Ace);
          *((_BYTE *)Ace + 1) = 11;
          RtlAddAccessAllowedAce(v30, 2u, 0x10000000u, v49);
          RtlGetAce(v30, 6u, &Ace);
          v32 = SmpPrimarySecurityDescriptor;
          *((_BYTE *)Ace + 1) = 11;
          v3 = RtlSetDaclSecurityDescriptor(v32, 1u, v30, 0);
        }
      }
      else
      {
        v3 = -1073741801;
      }
      v33 = RtlLengthSid(v46);
      v34 = RtlLengthSid(v44) + v33;
      v35 = 2 * (RtlLengthSid(Sid) + v34);
      v36 = RtlLengthSid(v49) + 92 + v35;
      v37 = (struct _ACL *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v36);
      if ( !v37 )
        v3 = -1073741801;
      v38 = RtlLengthSid(v48) + 20;
      v39 = (struct _ACL *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v38);
      if ( v39 )
      {
        if ( v3 >= 0 )
        {
          RtlCreateAcl(v37, v36, 2u);
          RtlAddAccessAllowedAce(v37, 2u, 0xE0000000, Sid);
          RtlAddAccessAllowedAce(v37, 2u, 0xE0000000, v46);
          RtlAddAccessAllowedAce(v37, 2u, 0x10000000u, v44);
          RtlAddAccessAllowedAce(v37, 2u, 0xE0000000, Sid);
          RtlGetAce(v37, 3u, &Ace);
          *((_BYTE *)Ace + 1) = 11;
          RtlAddAccessAllowedAce(v37, 2u, 0xE0000000, v46);
          RtlGetAce(v37, 4u, &Ace);
          *((_BYTE *)Ace + 1) = 11;
          RtlAddAccessAllowedAce(v37, 2u, 0x10000000u, v44);
          RtlGetAce(v37, 5u, &Ace);
          *((_BYTE *)Ace + 1) = 11;
          RtlAddAccessAllowedAce(v37, 2u, 0x10000000u, v49);
          RtlGetAce(v37, 6u, &Ace);
          *((_BYTE *)Ace + 1) = 11;
          RtlCreateAcl(v39, v38, 2u);
          LODWORD(SubAuthority3) = 1;
          RtlAddMandatoryAce(v39, 2u, 0, (ULONG)v48, 0x11u, SubAuthority3);
          RtlSetDaclSecurityDescriptor(SmpLiberalSecurityDescriptor, 1u, v37, 0);
          v3 = RtlSetSaclSecurityDescriptor(SmpLiberalSecurityDescriptor, 1u, v39, 0);
        }
      }
      else
      {
        v3 = -1073741801;
      }
    }
    goto LABEL_52;
  }
  BaseAddress = 0LL;
LABEL_54:
  if ( v48 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v48);
  if ( v49 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v49);
  if ( v44 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v44);
  if ( v50 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v50);
  if ( v51 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v51);
  if ( Sid )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Sid);
  if ( v52 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v52);
  if ( v46 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v46);
  return (unsigned int)v3;
}
