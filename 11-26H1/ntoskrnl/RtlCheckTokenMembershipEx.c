/*
 * XREFs of RtlCheckTokenMembershipEx @ 0x140493B40
 * Callers:
 *     RtlCheckTokenMembership @ 0x140493B20 (RtlCheckTokenMembership.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x140A2F580 (NtQuerySystemEnvironmentValueEx.c)
 *     RtlCapabilityCheck @ 0x140A96450 (RtlCapabilityCheck.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140A968F8 (RtlpCapabilityCheckSystemCapability.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140B48CF8 (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     SeAccessCheckWithHint @ 0x140301070 (SeAccessCheckWithHint.c)
 *     RtlInitializeSidEx @ 0x140493ED0 (RtlInitializeSidEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwDuplicateToken @ 0x140728800 (ZwDuplicateToken.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1409A9150 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x1409E0730 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A7C820 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A7D920 (RtlCreateSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140AA9160 (RtlSetGroupSecurityDescriptor.c)
 */

NTSTATUS __cdecl RtlCheckTokenMembershipEx(HANDLE TokenHandle, PSID SidToCheck, ULONG Flags, PBOOLEAN IsMember)
{
  char v8; // si
  NTSTATUS v9; // ebx
  PVOID *Object; // [rsp+20h] [rbp-E0h]
  PVOID *Objecta; // [rsp+20h] [rbp-E0h]
  __int64 v13; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v14; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  __int64 v16; // [rsp+78h] [rbp-88h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v20; // [rsp+F0h] [rbp-10h]
  __int64 v21; // [rsp+F8h] [rbp-8h] BYREF
  int v22; // [rsp+100h] [rbp+0h]
  _BYTE Sid[80]; // [rsp+110h] [rbp+10h] BYREF
  ACL Acl; // [rsp+160h] [rbp+60h] BYREF
  char v25; // [rsp+250h] [rbp+150h] BYREF

  v13 = 0LL;
  memset_0(Sid, 0, 0x44uLL);
  memset_0(&Acl, 0, 0xECuLL);
  Handle = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(ObjectAttributes.SecurityQualityOfService) = 0;
  v21 = 0LL;
  v22 = 0;
  v20 = 0LL;
  *IsMember = 0;
  memset(&ObjectAttributes, 0, 32);
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( (Flags & 0xFFFFFFFC) == 0 )
  {
    v8 = 0;
    if ( TokenHandle )
    {
      ObjectAttributes.SecurityQualityOfService = &v21;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      ObjectAttributes.SecurityDescriptor = 0LL;
      v21 = 0x20000000CLL;
      LOWORD(v22) = 1;
      v9 = ZwDuplicateToken(TokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &Handle);
      if ( v9 < 0 )
        return v9;
    }
    else
    {
      SeCaptureSubjectContext(&SubjectContext);
      v8 = 1;
    }
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetOwnerSecurityDescriptor(SecurityDescriptor, SidToCheck, 0);
    RtlSetGroupSecurityDescriptor(SecurityDescriptor, SidToCheck, 0);
    RtlCreateAcl(&Acl, 0xECu, 2u);
    RtlAddAccessAllowedAce(&Acl, 2u, 1u, SidToCheck);
    if ( (Flags & 1) != 0 || (Flags & 2) != 0 )
    {
      LODWORD(Object) = 1;
      RtlInitializeSidEx(Sid, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 2u, 2LL, Object);
      RtlAddAccessAllowedAce(&Acl, 2u, 1u, Sid);
      if ( (Flags & 2) != 0 )
      {
        LODWORD(Objecta) = 2;
        RtlInitializeSidEx(Sid, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 2u, 2LL, Objecta);
        RtlAddAccessAllowedAce(&Acl, 2u, 1u, Sid);
      }
    }
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    v16 = (__int64)&v25;
    if ( !v8 )
    {
      v14 = 0LL;
      SubjectContext.ProcessAuditId = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
      v9 = ObReferenceObjectByHandle(Handle, 8u, (POBJECT_TYPE)SeTokenObjectType, 0, &v14, 0LL);
      SubjectContext.PrimaryToken = v14;
      if ( v9 < 0 )
      {
LABEL_15:
        if ( Handle )
          ZwClose(Handle);
        return v9;
      }
    }
    SeAccessCheckWithHint(
      (__int64)SecurityDescriptor,
      0,
      (int *)&SubjectContext,
      0,
      1u,
      0,
      &v16,
      &RtlpCheckTokenMembershipGenericMapping,
      KeGetCurrentThread()->PreviousMode,
      (unsigned int *)&v13 + 1,
      (int *)&v13);
    if ( !v8 )
      ObfDereferenceObjectWithTag(SubjectContext.PrimaryToken, 0x746C6644u);
    v9 = 0;
    if ( (_DWORD)v13 )
    {
      if ( (_DWORD)v13 == -1073741790 )
        goto LABEL_12;
    }
    else if ( HIDWORD(v13) == 1 )
    {
      *IsMember = 1;
      goto LABEL_12;
    }
    v9 = v13;
LABEL_12:
    if ( v8 )
      SeReleaseSubjectContext(&SubjectContext);
    goto LABEL_15;
  }
  return -1073741811;
}
