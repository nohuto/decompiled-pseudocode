/*
 * XREFs of IopCreateSecurityCheck @ 0x1404A387C
 * Callers:
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     SeAccessCheck @ 0x1402B6340 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     SeLockSubjectContext @ 0x1408EE720 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1408EE780 (SeUnlockSubjectContext.c)
 *     SeAppendPrivileges @ 0x140903960 (SeAppendPrivileges.c)
 *     SeOpenObjectAuditAlarm @ 0x140930EB0 (SeOpenObjectAuditAlarm.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

BOOLEAN __fastcall IopCreateSecurityCheck(
        __int64 a1,
        void *a2,
        struct _ACCESS_STATE *a3,
        int a4,
        int a5,
        PPRIVILEGE_SET Privileges,
        PACCESS_MASK GrantedAccess,
        PUNICODE_STRING AbsoluteObjectName,
        PUNICODE_STRING ObjectTypeName,
        __int64 a10,
        char a11)
{
  int v11; // ebx
  __int64 v16; // r13
  PACCESS_MASK v17; // rsi
  BOOLEAN v18; // bp
  __int64 v19; // rdx
  __int64 v20; // r8
  int v22; // eax
  NTSTATUS AccessStatus; // [rsp+98h] [rbp+20h] BYREF

  v11 = 0;
  AccessStatus = 0;
  if ( a5 != 1 )
  {
    v22 = *(_DWORD *)(a1 + 52);
    if ( (v22 & 0x40001) != 0 || IopRequireDeviceAccessCheck && (v22 & 0x100000) != 0 )
      v11 = 2;
  }
  v16 = a10;
  --*(_WORD *)(a10 + 484);
  ExAcquireResourceSharedLite((PERESOURCE)&IopSessionNotificationLock.WaitBlockFill11[168], 1u);
  SeLockSubjectContext(&a3->SubjectSecurityContext);
  v17 = GrantedAccess;
  v18 = SeAccessCheck(
          *(PSECURITY_DESCRIPTOR *)(a1 + 272),
          &a3->SubjectSecurityContext,
          1u,
          a4 | v11,
          0,
          &Privileges,
          (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
          1,
          GrantedAccess,
          &AccessStatus);
  if ( Privileges )
  {
    SeAppendPrivileges(a3, Privileges);
    ExFreePoolWithTag(Privileges, 0);
  }
  if ( v11 && (v11 & a4) == 0 )
    *v17 &= ~v11;
  if ( a11 && v18 )
  {
    a3->PreviouslyGrantedAccess |= *v17;
    a3->RemainingDesiredAccess &= ~(*v17 | 0x2000000);
  }
  if ( a2 )
    SeOpenObjectAuditAlarm(
      ObjectTypeName,
      a2,
      AbsoluteObjectName,
      *(PSECURITY_DESCRIPTOR *)(a1 + 272),
      a3,
      0,
      v18,
      1,
      &a3->GenerateOnClose);
  SeUnlockSubjectContext(&a3->SubjectSecurityContext);
  ExReleaseResourceLite((PERESOURCE)&IopSessionNotificationLock.WaitBlockFill11[168]);
  KeLeaveCriticalRegionThread(v16, v19, v20);
  return v18;
}
