/*
 * XREFs of PopBootStatAccessCheck @ 0x140B50828
 * Callers:
 *     PopBootStatCheckIntegrity @ 0x1407DAC78 (PopBootStatCheckIntegrity.c)
 *     PopBootStatSet @ 0x140ACB570 (PopBootStatSet.c)
 *     PopBootStatRestoreDefaults @ 0x140B516E4 (PopBootStatRestoreDefaults.c)
 *     PopBootStatGet @ 0x140B67DA4 (PopBootStatGet.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     SeAccessCheck @ 0x1402B6340 (SeAccessCheck.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     ObpGetObjectSecurity @ 0x1408EF250 (ObpGetObjectSecurity.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 *     ObReleaseObjectSecurityEx @ 0x14093C920 (ObReleaseObjectSecurityEx.c)
 */

__int64 __fastcall PopBootStatAccessCheck(void *a1, KPROCESSOR_MODE a2, ACCESS_MASK a3)
{
  PSECURITY_DESCRIPTOR v5; // rsi
  BOOLEAN v6; // bl
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-1h]
  NTSTATUS AccessStatus; // [rsp+58h] [rbp+17h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+5Ch] [rbp+1Bh] BYREF
  PVOID Object; // [rsp+60h] [rbp+1Fh] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+68h] [rbp+27h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+70h] [rbp+2Fh] BYREF
  char v14; // [rsp+C0h] [rbp+7Fh] BYREF

  GrantedAccess = 0;
  v14 = 0;
  SecurityDescriptor = 0LL;
  Object = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  AccessStatus = ObReferenceObjectByHandle(a1, 0, 0LL, 0, &Object, 0LL);
  if ( AccessStatus >= 0 )
  {
    AccessStatus = ObpGetObjectSecurity((__int64)Object, &SecurityDescriptor, &v14);
    if ( AccessStatus >= 0 )
    {
      SeCaptureSubjectContext(&SubjectContext);
      AccessMode = a2;
      v5 = SecurityDescriptor;
      v6 = SeAccessCheck(
             SecurityDescriptor,
             &SubjectContext,
             0,
             a3,
             0,
             0LL,
             (PGENERIC_MAPPING)&IopFileMapping,
             AccessMode,
             &GrantedAccess,
             &AccessStatus);
      SeReleaseSubjectContext(&SubjectContext);
      if ( v6 )
        AccessStatus = 0;
      if ( v5 )
        ObReleaseObjectSecurityEx((__int64)v5, v14, (__int64)Object);
    }
    if ( Object )
      ObfDereferenceObject(Object);
  }
  return (unsigned int)AccessStatus;
}
