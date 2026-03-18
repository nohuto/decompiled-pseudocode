/*
 * XREFs of ApplySecurityAttributesToWinsta @ 0x14017E910
 * Callers:
 *     <none>
 * Callees:
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 */

__int64 __fastcall ApplySecurityAttributesToWinsta(__int64 a1, void *a2)
{
  void *v4; // rcx
  NTSTATUS ObjectSecurity; // ebx
  NTSTATUS v7; // ecx
  PSECURITY_DESCRIPTOR ParentDescriptor; // [rsp+40h] [rbp-30h] BYREF
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+48h] [rbp-28h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-20h] BYREF
  BOOLEAN MemoryAllocated; // [rsp+A0h] [rbp+30h] BYREF
  int v12; // [rsp+A8h] [rbp+38h] BYREF

  ParentDescriptor = 0LL;
  NewDescriptor = 0LL;
  MemoryAllocated = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  SeLockSubjectContext(&SubjectContext);
  v4 = *(void **)ObQueryNameInfo(a1);
  if ( v4 && (ObjectSecurity = ObGetObjectSecurity(v4, &ParentDescriptor, &MemoryAllocated), ObjectSecurity < 0) )
  {
    SeUnlockSubjectContext(&SubjectContext);
    SeReleaseSubjectContext(&SubjectContext);
  }
  else
  {
    ObjectSecurity = SeAssignSecurity(
                       ParentDescriptor,
                       a2,
                       &NewDescriptor,
                       1u,
                       &SubjectContext,
                       (PGENERIC_MAPPING)&WinStaMapping,
                       PagedPool);
    ObReleaseObjectSecurity(ParentDescriptor, MemoryAllocated);
    SeUnlockSubjectContext(&SubjectContext);
    SeReleaseSubjectContext(&SubjectContext);
    if ( ObjectSecurity < 0 )
    {
      v7 = ObjectSecurity;
      if ( ObjectSecurity == -1073741790 )
        v7 = -1073741790;
      SetLastNtError(v7);
    }
    else
    {
      v12 = 15;
      ObjectSecurity = ObSetSecurityDescriptorInfo(a1, &v12, NewDescriptor, a1 - 8, 1, &WinStaMapping);
      SeDeassignSecurity(&NewDescriptor);
    }
  }
  return (unsigned int)ObjectSecurity;
}
