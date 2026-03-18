/*
 * XREFs of HMInitializeSecurityDescriptor @ 0x140107F60
 * Callers:
 *     ?UserSetWindowMessageCapability@@YAHPEAUHWND__@@IPEAXH@Z @ 0x140107D30 (-UserSetWindowMessageCapability@@YAHPEAUHWND__@@IPEAXH@Z.c)
 *     HMInitializeObjectSecurity @ 0x140107ECC (HMInitializeObjectSecurity.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     AllocAce @ 0x140108680 (AllocAce.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall HMInitializeSecurityDescriptor(void *a1, struct _GENERIC_MAPPING *a2)
{
  void *v4; // r14
  void *v5; // r15
  unsigned int v6; // edx
  PVOID v7; // rcx
  PSID SeAliasAdminsSid; // rsi
  ULONG v10; // r12d
  int v11; // ecx
  __int64 v12; // rax
  void *v13; // rbx
  char *v14; // rax
  char *v15; // rsi
  struct _ACL *v16; // rdi
  ULONG v17; // eax
  void *v18; // rax
  struct _ACL *v19; // rsi
  ULONG v20; // r14d
  struct _ACL *v21; // rax
  ULONG v22; // r12d
  struct _ACL *v23; // rax
  struct _ACL *v24; // r14
  NTSTATUS v25; // eax
  PVOID v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  char *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  char *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  int v47; // r9d
  char *v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  PSID LabelSid; // [rsp+28h] [rbp-51h]
  PVOID TokenInformation; // [rsp+30h] [rbp-49h] BYREF
  PVOID P; // [rsp+38h] [rbp-41h] BYREF
  DWORD AccessMask; // [rsp+40h] [rbp-39h] BYREF
  PVOID v57; // [rsp+48h] [rbp-31h] BYREF
  _DWORD v58[4]; // [rsp+50h] [rbp-29h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-19h] BYREF
  PGENERIC_MAPPING GenericMapping; // [rsp+80h] [rbp+7h]
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+88h] [rbp+Fh] BYREF

  GenericMapping = a2;
  TokenInformation = 0LL;
  P = 0LL;
  v58[1] = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v57 = 0LL;
  if ( RtlCreateSecurityDescriptor(a1, 1u) < 0 )
    return 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  if ( SeQueryInformationToken(SubjectContext.PrimaryToken, TokenUser, &TokenInformation) < 0 )
  {
    SeReleaseSubjectContext(&SubjectContext);
    return 0LL;
  }
  if ( SeQueryInformationToken(SubjectContext.PrimaryToken, TokenGroups, &P) < 0 )
  {
    SeReleaseSubjectContext(&SubjectContext);
    v7 = TokenInformation;
    goto LABEL_6;
  }
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  if ( !*(_DWORD *)P )
    goto LABEL_5;
  v48 = (char *)P + 8;
  while ( 1 )
  {
    v47 = *((_DWORD *)v48 + 2);
    if ( (v47 & 0xC0000000) == 0xC0000000 )
    {
      v4 = *(void **)v48;
      if ( v5 )
        break;
    }
    if ( (v47 & 0x20) == 0 || (v5 = *(void **)v48, !v4) )
    {
      ++v6;
      v48 += 16;
      if ( v6 < *(_DWORD *)P )
        continue;
    }
    if ( !v5 )
      goto LABEL_5;
    break;
  }
  if ( SeQueryInformationToken(SubjectContext.PrimaryToken, TokenSessionId, (PVOID *)&v58[1]) < 0
    || SeQueryInformationToken(SubjectContext.PrimaryToken, TokenAppContainerSid, &v57) < 0 )
  {
LABEL_5:
    SeReleaseSubjectContext(&SubjectContext);
    ExFreePoolWithTag(TokenInformation, 0);
    v7 = P;
LABEL_6:
    ExFreePoolWithTag(v7, 0);
    return 0LL;
  }
  SeReleaseSubjectContext(&SubjectContext);
  AccessMask = 0x10000000;
  RtlMapGenericMask(&AccessMask, a2);
  v58[2] = AccessMask;
  SeAliasAdminsSid = SeExports->SeAliasAdminsSid;
  v10 = RtlLengthSid(SeAliasAdminsSid);
  v12 = Win32AllocPoolWithQuotaZInitImpl(v11, v10 + 8, 0x65737355u);
  v13 = (void *)v12;
  if ( !v12 )
  {
    ExFreePoolWithTag(TokenInformation, 0);
    ExFreePoolWithTag(P, 0);
    goto LABEL_31;
  }
  *(_WORD *)v12 = 0;
  *(_WORD *)(v12 + 2) = v10 + 8;
  *(_DWORD *)(v12 + 4) = v58[2];
  v58[0] = v10 + 8;
  RtlCopySid(v10, (PSID)(v12 + 8), SeAliasAdminsSid);
  v14 = (char *)AllocAce(v13, SeExports->SeLocalSystemSid, (__int64)v58);
  v15 = v14;
  if ( !v14 )
  {
    ExFreePoolWithTag(TokenInformation, 0);
    ExFreePoolWithTag(P, 0);
    goto LABEL_29;
  }
  v16 = (struct _ACL *)AllocAce(v14, *(PSID *)TokenInformation, (__int64)v58);
  if ( !v16 )
  {
    ExFreePoolWithTag(TokenInformation, 0);
    ExFreePoolWithTag(P, 0);
    v40 = v15;
    goto LABEL_30;
  }
  v17 = RtlLengthRequiredSid(3u);
  v18 = (void *)Win32AllocPoolZInitImpl(256LL, v17, 0x65737355u);
  v13 = v18;
  if ( !v18 )
  {
    ExFreePoolWithTag(TokenInformation, 0);
    ExFreePoolWithTag(P, 0);
    v40 = (char *)v16;
    goto LABEL_30;
  }
  if ( RtlInitializeSid(v18, &IdentifierAuthority, 3u) < 0 )
    goto LABEL_48;
  *((_QWORD *)v13 + 1) = 90LL;
  *((_DWORD *)v13 + 4) = v58[1];
  v19 = (struct _ACL *)AllocAce(v16, v13, (__int64)v58);
  if ( !v19 )
    goto LABEL_48;
  if ( *(_QWORD *)v57 )
  {
    v49 = AllocAce(v19, *(PSID *)v57, (__int64)v58);
    if ( !v49 )
    {
LABEL_33:
      ExFreePoolWithTag(TokenInformation, 0);
      ExFreePoolWithTag(P, 0);
LABEL_52:
      v36 = (char *)v19;
      goto LABEL_28;
    }
    v19 = (struct _ACL *)v49;
  }
  AccessMask = -1073741824;
  RtlMapGenericMask(&AccessMask, GenericMapping);
  v16 = v19;
  if ( v4 )
  {
    v16 = (struct _ACL *)AllocAce(v19, v4, (__int64)v58);
    if ( !v16 )
      goto LABEL_33;
  }
  v20 = v58[0] + 8;
  v21 = (struct _ACL *)Win32AllocPoolZInitImpl(256LL, (unsigned int)(v58[0] + 8), 0x65737355u);
  v19 = v21;
  if ( !v21 )
  {
LABEL_48:
    ExFreePoolWithTag(TokenInformation, 0);
    ExFreePoolWithTag(P, 0);
    v36 = (char *)v16;
    goto LABEL_28;
  }
  if ( RtlCreateAcl(v21, v20, 2u) < 0
    || (RtlAddAce(v19, 2u, 0, v16, v19->AclSize - 8),
        v22 = RtlLengthSid(v5) + 16,
        v23 = (struct _ACL *)Win32AllocPoolZInitImpl(256LL, v22, 0x65737355u),
        (v24 = v23) == 0LL) )
  {
    ExFreePoolWithTag(TokenInformation, 0);
    ExFreePoolWithTag(P, 0);
    GreDeleteFastMutex((char *)v16, v50, v51, v52);
    goto LABEL_52;
  }
  if ( RtlCreateAcl(v23, v22, 2u) < 0
    || (LODWORD(LabelSid) = 7, RtlAddMandatoryAce(v24, 2u, 0, (ULONG)v5, 0x11u, LabelSid) < 0)
    || RtlSetDaclSecurityDescriptor(a1, 1u, v19, 0) < 0 )
  {
    v26 = TokenInformation;
    goto LABEL_27;
  }
  v25 = RtlSetSaclSecurityDescriptor(a1, 1u, v24, 0);
  v26 = TokenInformation;
  if ( v25 < 0 )
  {
LABEL_27:
    ExFreePoolWithTag(v26, 0);
    ExFreePoolWithTag(P, 0);
    GreDeleteFastMutex((char *)v16, v27, v28, v29);
    GreDeleteFastMutex((char *)v19, v30, v31, v32);
    v36 = (char *)v24;
LABEL_28:
    GreDeleteFastMutex(v36, v33, v34, v35);
LABEL_29:
    v40 = (char *)v13;
LABEL_30:
    GreDeleteFastMutex(v40, v37, v38, v39);
LABEL_31:
    v7 = v57;
    goto LABEL_6;
  }
  ExFreePoolWithTag(TokenInformation, 0);
  ExFreePoolWithTag(P, 0);
  GreDeleteFastMutex((char *)v16, v41, v42, v43);
  GreDeleteFastMutex((char *)v13, v44, v45, v46);
  ExFreePoolWithTag(v57, 0);
  return 1LL;
}
