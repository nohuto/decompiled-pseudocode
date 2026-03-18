/*
 * XREFs of RtlCheckTokenMembershipEx @ 0x140499FF0
 * Callers:
 *     RtlCheckTokenMembership @ 0x140499FD0 (RtlCheckTokenMembership.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x140907320 (NtQuerySystemEnvironmentValueEx.c)
 *     RtlCapabilityCheck @ 0x140A91900 (RtlCapabilityCheck.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140A91DA8 (RtlpCapabilityCheckSystemCapability.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140B46CC8 (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     SeAccessCheckWithHint @ 0x1402B63B0 (SeAccessCheckWithHint.c)
 *     RtlInitializeSidEx @ 0x14049A380 (RtlInitializeSidEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwDuplicateToken @ 0x140723C30 (ZwDuplicateToken.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 *     RtlCreateAcl @ 0x1409D8030 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1409D8260 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x1409F49E0 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A6B0F0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A6C2F0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140AABBB0 (RtlSetGroupSecurityDescriptor.c)
 */

__int64 __fastcall RtlCheckTokenMembershipEx(HANDLE ExistingTokenHandle, PSID Group, int a3, _BYTE *a4)
{
  char v8; // si
  int v9; // ebx
  __int64 v11; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  __int64 v14; // [rsp+78h] [rbp-88h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v18; // [rsp+F0h] [rbp-10h]
  __int64 v19; // [rsp+F8h] [rbp-8h] BYREF
  int v20; // [rsp+100h] [rbp+0h]
  _BYTE Sid[80]; // [rsp+110h] [rbp+10h] BYREF
  ACL Acl; // [rsp+160h] [rbp+60h] BYREF
  char v23; // [rsp+250h] [rbp+150h] BYREF

  v11 = 0LL;
  memset_0(Sid, 0, 0x44uLL);
  memset_0(&Acl, 0, 0xECuLL);
  Handle = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(ObjectAttributes.SecurityQualityOfService) = 0;
  v19 = 0LL;
  v20 = 0;
  v18 = 0LL;
  *a4 = 0;
  memset(&ObjectAttributes, 0, 32);
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( (a3 & 0xFFFFFFFC) == 0 )
  {
    v8 = 0;
    if ( ExistingTokenHandle )
    {
      ObjectAttributes.SecurityQualityOfService = &v19;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      ObjectAttributes.SecurityDescriptor = 0LL;
      v19 = 0x20000000CLL;
      LOWORD(v20) = 1;
      v9 = ZwDuplicateToken(ExistingTokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &Handle);
      if ( v9 < 0 )
        return (unsigned int)v9;
    }
    else
    {
      SeCaptureSubjectContext(&SubjectContext);
      v8 = 1;
    }
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Group, 0);
    RtlSetGroupSecurityDescriptor(SecurityDescriptor, Group, 0);
    RtlCreateAcl(&Acl, 0xECu, 2u);
    RtlAddAccessAllowedAce(&Acl, 2u, 1u, Group);
    if ( (a3 & 1) != 0 || (a3 & 2) != 0 )
    {
      RtlInitializeSidEx(Sid, &RtlpAppPackageAuthority, 2LL, 2LL, 1);
      RtlAddAccessAllowedAce(&Acl, 2u, 1u, Sid);
      if ( (a3 & 2) != 0 )
      {
        RtlInitializeSidEx(Sid, &RtlpAppPackageAuthority, 2LL, 2LL, 2);
        RtlAddAccessAllowedAce(&Acl, 2u, 1u, Sid);
      }
    }
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    v14 = (__int64)&v23;
    if ( !v8 )
    {
      Object = 0LL;
      SubjectContext.ProcessAuditId = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
      v9 = ObReferenceObjectByHandle(Handle, 8u, (POBJECT_TYPE)SeTokenObjectType, 0, &Object, 0LL);
      SubjectContext.PrimaryToken = Object;
      if ( v9 < 0 )
      {
LABEL_15:
        if ( Handle )
          ZwClose(Handle);
        return (unsigned int)v9;
      }
    }
    SeAccessCheckWithHint(
      (__int64)SecurityDescriptor,
      0,
      (__int64)&SubjectContext,
      0,
      1u,
      0,
      &v14,
      &RtlpCheckTokenMembershipGenericMapping,
      KeGetCurrentThread()->PreviousMode,
      (unsigned int *)&v11 + 1,
      (int *)&v11);
    if ( !v8 )
      ObfDereferenceObjectWithTag(SubjectContext.PrimaryToken, 0x746C6644u);
    v9 = 0;
    if ( (_DWORD)v11 )
    {
      if ( (_DWORD)v11 == -1073741790 )
        goto LABEL_12;
    }
    else if ( HIDWORD(v11) == 1 )
    {
      *a4 = 1;
      goto LABEL_12;
    }
    v9 = v11;
LABEL_12:
    if ( v8 )
      SeReleaseSubjectContext(&SubjectContext);
    goto LABEL_15;
  }
  return 3221225485LL;
}
