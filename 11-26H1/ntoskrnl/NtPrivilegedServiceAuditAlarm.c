/*
 * XREFs of NtPrivilegedServiceAuditAlarm @ 0x140A5DD30
 * Callers:
 *     DifNtPrivilegedServiceAuditAlarmWrapper @ 0x140684470 (DifNtPrivilegedServiceAuditAlarmWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     SepAuditFailed @ 0x14090B840 (SepAuditFailed.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14090E660 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     SepProbeAndCaptureString_U @ 0x140A5FD38 (SepProbeAndCaptureString_U.c)
 *     SeCheckAuditPrivilege @ 0x140A5FE70 (SeCheckAuditPrivilege.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtPrivilegedServiceAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PUNICODE_STRING ServiceName,
        HANDLE ClientToken,
        PPRIVILEGE_SET Privileges,
        BOOLEAN AccessGranted)
{
  ULONG *v9; // rdi
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v11; // rdx
  int v12; // ebx
  PVOID v13; // rsi
  ULONG PrivilegeCount; // r14d
  ULONG *Pool2; // rax
  PVOID v16; // r14
  signed int v18; // ecx
  PVOID v19; // [rsp+48h] [rbp-60h] BYREF
  PVOID Object; // [rsp+50h] [rbp-58h] BYREF
  PVOID P; // [rsp+58h] [rbp-50h] BYREF
  ULONG *v22; // [rsp+60h] [rbp-48h]
  __int64 v23; // [rsp+68h] [rbp-40h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+70h] [rbp-38h] BYREF

  v9 = 0LL;
  v22 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  P = 0LL;
  v19 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  LOBYTE(v11) = PreviousMode;
  if ( !(unsigned __int8)SeCheckAuditPrivilege(&SubjectContext, v11) )
  {
    v12 = -1073741727;
    goto LABEL_26;
  }
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Object, 0LL);
  if ( v12 < 0 )
  {
    SeReleaseSubjectContext(&SubjectContext);
    if ( v12 == -1073741816 )
      return v12;
    v18 = v12;
LABEL_32:
    SepAuditFailed(v18);
    return v12;
  }
  v13 = Object;
  if ( *((_DWORD *)Object + 48) == 2 && *((int *)Object + 49) < 1 )
  {
    ObfDereferenceObject(Object);
    v12 = -1073741659;
LABEL_26:
    SeReleaseSubjectContext(&SubjectContext);
    return v12;
  }
  if ( !SubsystemName || (v12 = SepProbeAndCaptureString_U(SubsystemName, &P), v12 >= 0) )
  {
    if ( !ServiceName || (v12 = SepProbeAndCaptureString_U(ServiceName, &v19), v12 >= 0) )
    {
      v23 = 1LL;
      ProbeForRead(Privileges, 1uLL, 4u);
      PrivilegeCount = Privileges->PrivilegeCount;
      if ( Privileges->PrivilegeCount && PrivilegeCount > 0x42 )
      {
        v12 = -1073741811;
      }
      else
      {
        ProbeForRead(Privileges, 12 * PrivilegeCount + 8, 4u);
        Pool2 = (ULONG *)ExAllocatePool2(0x100uLL);
        v9 = Pool2;
        v22 = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, Privileges, 12 * PrivilegeCount + 8);
          *v9 = PrivilegeCount;
        }
        else
        {
          v12 = -1073741670;
        }
      }
    }
  }
  v16 = P;
  if ( v12 < 0 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    SeReleaseSubjectContext(&SubjectContext);
    ObfDereferenceObject(v13);
    if ( v12 != -1073741670 )
      return v12;
    v18 = -1073741670;
    goto LABEL_32;
  }
  SepAdtPrivilegedServiceAuditAlarm(
    (__int64)&SubjectContext,
    (const int *)P,
    (unsigned __int16 *)v19,
    (__int64)v13,
    (__int64)SubjectContext.PrimaryToken,
    v9,
    AccessGranted);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  ObfDereferenceObject(v13);
  SeReleaseSubjectContext(&SubjectContext);
  return 0;
}
