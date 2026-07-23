/*
 * XREFs of RtlCheckTokenCapability @ 0x1404C97D0
 * Callers:
 *     RtlCapabilityCheck @ 0x140A96450 (RtlCapabilityCheck.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     SeAccessCheckWithHint @ 0x140301070 (SeAccessCheckWithHint.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x1407283E0 (ZwQueryInformationToken.c)
 *     ZwDuplicateToken @ 0x140728800 (ZwDuplicateToken.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1409A9150 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x1409E0730 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A7C820 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A7D920 (RtlCreateSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140AA9160 (RtlSetGroupSecurityDescriptor.c)
 *     RtlIsCapabilitySid @ 0x140ADB034 (RtlIsCapabilitySid.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl RtlCheckTokenCapability(HANDLE TokenHandle, PSID CapabilitySidToCheck, PBOOLEAN HasCapability)
{
  char v6; // si
  NTSTATUS v7; // ebx
  bool v8; // al
  int v9; // ecx
  PACCESS_TOKEN PrimaryToken; // rcx
  __int64 v12; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+68h] [rbp-98h] BYREF
  HANDLE TokenHandlea; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h] BYREF
  PVOID v16; // [rsp+80h] [rbp-80h] BYREF
  __int64 v17; // [rsp+88h] [rbp-78h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+90h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v21; // [rsp+100h] [rbp+0h]
  PSID TokenInformation[12]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v23; // [rsp+170h] [rbp+70h] BYREF
  int v24; // [rsp+178h] [rbp+78h]
  ACL Acl; // [rsp+180h] [rbp+80h] BYREF
  char v26; // [rsp+220h] [rbp+120h] BYREF

  LODWORD(v13) = 0;
  v12 = 0LL;
  memset_0(&Acl, 0, 0xA0uLL);
  TokenHandlea = 0LL;
  v23 = 0LL;
  v24 = 0;
  memset(&ObjectAttributes, 0, 44);
  v21 = 0LL;
  v17 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset_0(TokenInformation, 0, 0x58uLL);
  P = 0LL;
  *(_OWORD *)&SubjectContext.ClientToken = 0LL;
  v6 = 0;
  *HasCapability = 0;
  *(_OWORD *)&SubjectContext.PrimaryToken = 0LL;
  if ( RtlIsCapabilitySid(CapabilitySidToCheck) )
  {
    if ( TokenHandle )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.SecurityQualityOfService = &v23;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      ObjectAttributes.SecurityDescriptor = 0LL;
      v23 = 0x20000000CLL;
      LOWORD(v24) = 1;
      v7 = ZwDuplicateToken(TokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &TokenHandlea);
      if ( v7 < 0 )
        goto LABEL_13;
      HIDWORD(v12) = 88;
      TokenHandle = 0LL;
      ZwQueryInformationToken(TokenHandlea, TokenUser, TokenInformation, 0x58u, (PULONG)&v12 + 1);
    }
    else
    {
      SeCaptureSubjectContext(&SubjectContext);
      PrimaryToken = SubjectContext.PrimaryToken;
      v6 = 1;
      if ( SubjectContext.ClientToken )
        PrimaryToken = SubjectContext.ClientToken;
      SeQueryInformationToken(PrimaryToken, TokenUser, &P);
      *(_OWORD *)TokenInformation = *(_OWORD *)P;
    }
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetOwnerSecurityDescriptor(SecurityDescriptor, TokenInformation[0], 0);
    RtlSetGroupSecurityDescriptor(SecurityDescriptor, TokenInformation[0], 0);
    RtlCreateAcl(&Acl, 0xA0u, 2u);
    RtlAddAccessAllowedAce(&Acl, 2u, 0x10001u, TokenInformation[0]);
    RtlAddAccessAllowedAce(&Acl, 2u, 0x10001u, CapabilitySidToCheck);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    v17 = (__int64)&v26;
    if ( v6
      || (v16 = 0LL,
          SubjectContext.ProcessAuditId = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
          v7 = ObReferenceObjectByHandle(TokenHandlea, 8u, (POBJECT_TYPE)SeTokenObjectType, 0, &v16, 0LL),
          SubjectContext.PrimaryToken = v16,
          v7 >= 0) )
    {
      v8 = SeAccessCheckWithHint(
             (__int64)SecurityDescriptor,
             0,
             (int *)&SubjectContext,
             0,
             0x10001u,
             0,
             &v17,
             &RtlpCheckTokenCapabilityGenericMapping,
             KeGetCurrentThread()->PreviousMode,
             (unsigned int *)&v13,
             (int *)&v12);
      v9 = v12;
      v7 = v12;
      if ( !v8 )
        v7 = -1073741790;
      if ( !v6 )
      {
        ObfDereferenceObjectWithTag(SubjectContext.PrimaryToken, 0x746C6644u);
        v9 = v12;
      }
      if ( v7 >= 0 )
      {
        if ( !v9 && (_DWORD)v13 == 65537 )
          *HasCapability = 1;
        v7 = 0;
      }
      if ( v6 )
        SeReleaseSubjectContext(&SubjectContext);
    }
  }
  else
  {
    v7 = -1073741811;
  }
LABEL_13:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( !TokenHandle && TokenHandlea )
    ZwClose(TokenHandlea);
  return v7;
}
