/*
 * XREFs of NtPrivilegeObjectAuditAlarm @ 0x140A60CD0
 * Callers:
 *     DifNtPrivilegeObjectAuditAlarmWrapper @ 0x1406842C0 (DifNtPrivilegeObjectAuditAlarmWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14090AD10 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAuditFailed @ 0x14090B840 (SepAuditFailed.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     SepProbeAndCaptureString_U @ 0x140A5FD38 (SepProbeAndCaptureString_U.c)
 *     SeCheckAuditPrivilege @ 0x140A5FE70 (SeCheckAuditPrivilege.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtPrivilegeObjectAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PVOID HandleId,
        HANDLE ClientToken,
        ACCESS_MASK DesiredAccess,
        PPRIVILEGE_SET Privileges,
        BOOLEAN AccessGranted)
{
  ULONG *v9; // rdi
  char PreviousMode; // bl
  NTSTATUS v11; // ebx
  PVOID v12; // rsi
  ULONG PrivilegeCount; // r14d
  ULONG *Pool2; // rax
  PVOID v15; // rbx
  signed int v17; // ecx
  PVOID Object; // [rsp+58h] [rbp-70h] BYREF
  PVOID P; // [rsp+60h] [rbp-68h] BYREF
  ULONG *v20; // [rsp+68h] [rbp-60h]
  __int64 v21; // [rsp+70h] [rbp-58h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+78h] [rbp-50h] BYREF

  P = 0LL;
  v9 = 0LL;
  v20 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  if ( !SeCheckAuditPrivilege((__int64 *)&SubjectContext, PreviousMode) )
  {
    v11 = -1073741727;
    goto LABEL_20;
  }
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Object, 0LL);
  if ( v11 < 0 )
  {
    SeReleaseSubjectContext(&SubjectContext);
    if ( v11 == -1073741816 )
      return v11;
    v17 = v11;
LABEL_26:
    SepAuditFailed(v17);
    return v11;
  }
  v12 = Object;
  if ( *((_DWORD *)Object + 48) == 2 && *((int *)Object + 49) < 1 )
  {
    ObfDereferenceObject(Object);
    v11 = -1073741659;
LABEL_20:
    SeReleaseSubjectContext(&SubjectContext);
    return v11;
  }
  v11 = SepProbeAndCaptureString_U((unsigned int *)&SubsystemName->Length, (__int64)&P);
  if ( v11 >= 0 )
  {
    v21 = 1LL;
    ProbeForRead(Privileges, 1uLL, 4u);
    PrivilegeCount = Privileges->PrivilegeCount;
    if ( Privileges->PrivilegeCount && PrivilegeCount > 0x42 )
    {
      v11 = -1073741811;
    }
    else
    {
      ProbeForRead(Privileges, 12 * PrivilegeCount + 8, 4u);
      Pool2 = (ULONG *)ExAllocatePool2(0x100uLL);
      v9 = Pool2;
      v20 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, Privileges, 12 * PrivilegeCount + 8);
        *v9 = PrivilegeCount;
      }
      else
      {
        v11 = -1073741670;
      }
    }
  }
  if ( v11 < 0 )
  {
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    if ( P )
      ExFreePoolWithTag(P, 0);
    SeReleaseSubjectContext(&SubjectContext);
    ObfDereferenceObject(v12);
    if ( v11 != -1073741670 )
      return v11;
    v17 = -1073741670;
    goto LABEL_26;
  }
  v15 = P;
  SepAdtPrivilegeObjectAuditAlarm(
    (const int *)P,
    0LL,
    0LL,
    (__int64)HandleId,
    (__int64)v12,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)SubjectContext.ProcessAuditId,
    DesiredAccess,
    v9,
    AccessGranted);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  SeReleaseSubjectContext(&SubjectContext);
  ObfDereferenceObject(v12);
  return 0;
}
