/*
 * XREFs of SepInitializationPhase1 @ 0x140810284
 * Callers:
 *     SeInitServerSilo @ 0x1408100DC (SeInitServerSilo.c)
 *     SeInitSystem @ 0x140CDD158 (SeInitSystem.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     RtlInitAnsiString @ 0x14046C9A0 (RtlInitAnsiString.c)
 *     SepInitProcessAuditSd @ 0x14063AA70 (SepInitProcessAuditSd.c)
 *     SddlBaseInitialize @ 0x14063BF24 (SddlBaseInitialize.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwCreateEvent @ 0x140723CF0 (ZwCreateEvent.c)
 *     ZwCreateDirectoryObject @ 0x140724970 (ZwCreateDirectoryObject.c)
 *     SepInitializeCodeIntegrity @ 0x14080FD8C (SepInitializeCodeIntegrity.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x14096BA30 (RtlAnsiStringToUnicodeString.c)
 *     RtlpAddKnownAce @ 0x1409D7990 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x1409D8030 (RtlCreateAcl.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A6B0F0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A6C2F0 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     SepInitializeAuthorizationCallbacks @ 0x140CDD238 (SepInitializeAuthorizationCallbacks.c)
 *     SeMakeAnonymousLogonToken @ 0x140CDD2F0 (SeMakeAnonymousLogonToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140CDD570 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SepInitializeSingletonAttributesStructures @ 0x140CDE3D0 (SepInitializeSingletonAttributesStructures.c)
 */

char SepInitializationPhase1()
{
  bool IsCurrentThreadInServerSilo; // di
  ACL *Pool2; // rax
  ACL *v2; // rbx
  HANDLE DirectoryHandle; // [rsp+48h] [rbp-39h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-31h] BYREF
  HANDLE EventHandle; // [rsp+60h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-19h] BYREF
  STRING DestinationString; // [rsp+98h] [rbp+17h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+A8h] [rbp+27h] BYREF

  DestinationString = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DirectoryHandle = 0LL;
  EventHandle = 0LL;
  UnicodeString = 0LL;
  IsCurrentThreadInServerSilo = PsIsCurrentThreadInServerSilo();
  if ( !IsCurrentThreadInServerSilo )
  {
    ObInsertObjectEx(
      (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors & 0xFFFFFFFFFFFFFFF0uLL,
      0LL,
      0LL,
      0LL,
      0,
      0LL,
      0LL);
    PspSiloMonitorLock.Padding[0] = SeMakeAnonymousLogonToken();
    PspSiloMonitorLock.WaitBlock[3].Thread = (struct _KTHREAD *)SeMakeAnonymousLogonTokenNoEveryone();
  }
  RtlInitAnsiString(&DestinationString, "\\Security");
  RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  Pool2 = (ACL *)ExAllocatePool2(0x40uLL);
  v2 = Pool2;
  if ( !Pool2 )
    return 0;
  RtlCreateAcl(Pool2, 0x100u, 2u);
  RtlpAddKnownAce((int)v2, 2, 0, 983055, *(void **)&RtlpBootStatHandleLock.WaitRegister.Flags, 0);
  RtlpAddKnownAce((int)v2, 2, 0, 131075, SeAliasAdminsSid, 0);
  RtlpAddKnownAce((int)v2, 2, 0, 2, RtlpBootStatHandleLock.StateSaveArea, 0);
  RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v2, 0);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &UnicodeString;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
  ObjectAttributes.Length = 48;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ZwCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
  RtlFreeAnsiString(&UnicodeString);
  ExFreePoolWithTag(v2, 0);
  RtlInitAnsiString(&DestinationString, "LSA_AUTHENTICATION_INITIALIZED");
  RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  ObjectAttributes.RootDirectory = DirectoryHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &UnicodeString;
  ObjectAttributes.SecurityDescriptor = *(PVOID *)&PspSiloMonitorLock.WaitBlockFill11[160];
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ZwCreateEvent(&EventHandle, 0x40000000u, &ObjectAttributes, NotificationEvent, 0);
  RtlFreeAnsiString(&UnicodeString);
  ZwClose(DirectoryHandle);
  ZwClose(EventHandle);
  if ( !IsCurrentThreadInServerSilo )
  {
    SepInitProcessAuditSd();
    SepInitializeCodeIntegrity();
    SepInitializeAuthorizationCallbacks();
    if ( (int)SepInitializeSingletonAttributesStructures() < 0 )
      return 0;
  }
  SddlBaseInitialize();
  return 1;
}
