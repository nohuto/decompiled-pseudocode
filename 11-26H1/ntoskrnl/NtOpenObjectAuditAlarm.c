/*
 * XREFs of NtOpenObjectAuditAlarm @ 0x140A60090
 * Callers:
 *     DifNtOpenObjectAuditAlarmWrapper @ 0x140681B80 (DifNtOpenObjectAuditAlarmWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     RtlWriteUCharToUser @ 0x140782210 (RtlWriteUCharToUser.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     SeCaptureSecurityDescriptor @ 0x140901ED0 (SeCaptureSecurityDescriptor.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14090AD10 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAuditFailed @ 0x14090B840 (SepAuditFailed.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14090B910 (SepAdtAuditObjectAccessWithContext.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091FB0C (SepAdtOpenObjectAuditAlarm.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     SepProbeAndCaptureString_U @ 0x140A5FD38 (SepProbeAndCaptureString_U.c)
 *     SeCheckAuditPrivilege @ 0x140A5FE70 (SeCheckAuditPrivilege.c)
 *     SeReleaseSecurityDescriptor @ 0x140A60CA0 (SeReleaseSecurityDescriptor.c)
 *     SeExamineSacl @ 0x140A60F70 (SeExamineSacl.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtOpenObjectAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PVOID HandleId,
        PUNICODE_STRING ObjectTypeName,
        PUNICODE_STRING ObjectName,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        HANDLE ClientToken,
        ACCESS_MASK DesiredAccess,
        ACCESS_MASK GrantedAccess,
        PPRIVILEGE_SET Privileges,
        BOOLEAN ObjectCreation,
        BOOLEAN AccessGranted,
        PBOOLEAN GenerateOnClose)
{
  void *v12; // r15
  void *v13; // r13
  ULONG *v14; // r12
  BOOLEAN PreviousMode; // si
  NTSTATUS v16; // edi
  _QWORD *v17; // r14
  unsigned int *v18; // rsi
  __int64 v19; // rdx
  ULONG PrivilegeCount; // eax
  ULONG *Pool2; // rax
  __int64 v22; // rdx
  char UCharFromUser; // al
  BOOLEAN v25; // al
  BOOLEAN v26; // di
  signed int v27; // ecx
  NTSTATUS v28; // ebx
  __int16 v29; // ax
  __int64 v30; // rdx
  ACL *v31; // rdx
  ACL *v32; // rcx
  __int64 v33; // rax
  _KPROCESS *Process; // rax
  bool v35; // cf
  bool v36; // [rsp+A0h] [rbp-C8h]
  BOOLEAN GenerateAudit; // [rsp+A1h] [rbp-C7h] BYREF
  BOOLEAN v38; // [rsp+A2h] [rbp-C6h]
  BOOLEAN GenerateAlarm[5]; // [rsp+A3h] [rbp-C5h] BYREF
  __int16 v40; // [rsp+A8h] [rbp-C0h] BYREF
  int v41; // [rsp+ACh] [rbp-BCh]
  PVOID v42; // [rsp+B0h] [rbp-B8h] BYREF
  void *v43; // [rsp+B8h] [rbp-B0h] BYREF
  volatile void *Address; // [rsp+C0h] [rbp-A8h]
  ULONG v45; // [rsp+C8h] [rbp-A0h]
  void *v46; // [rsp+D0h] [rbp-98h] BYREF
  PVOID P; // [rsp+D8h] [rbp-90h] BYREF
  PVOID Token; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v49; // [rsp+E8h] [rbp-80h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+F0h] [rbp-78h] BYREF
  ULONG *v51; // [rsp+110h] [rbp-58h]
  __int64 v52; // [rsp+118h] [rbp-50h]
  size_t Size; // [rsp+120h] [rbp-48h]
  __int64 v54; // [rsp+128h] [rbp-40h]

  Address = HandleId;
  v42 = 0LL;
  v12 = 0LL;
  v43 = 0LL;
  v13 = 0LL;
  v46 = 0LL;
  P = 0LL;
  v14 = 0LL;
  v51 = 0LL;
  v36 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  GenerateAudit = 0;
  GenerateAlarm[0] = 0;
  v49 = 0LL;
  v40 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v38 = PreviousMode;
  GenerateAlarm[1] = PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  if ( !SeCheckAuditPrivilege((__int64 *)&SubjectContext, PreviousMode) )
  {
    v28 = -1073741727;
    goto LABEL_54;
  }
  Token = 0LL;
  v16 = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, 0LL);
  if ( v16 < 0 )
  {
    SeReleaseSubjectContext(&SubjectContext);
    if ( v16 == -1073741816 )
      return v16;
    v27 = v16;
    goto LABEL_51;
  }
  v17 = Token;
  if ( *((_DWORD *)Token + 48) == 2 && *((int *)Token + 49) < 1 )
  {
    ObfDereferenceObject(Token);
    v28 = -1073741659;
LABEL_54:
    SeReleaseSubjectContext(&SubjectContext);
    return v28;
  }
  if ( !SecurityDescriptor )
  {
    ObfDereferenceObject(Token);
    v28 = -1073741703;
    goto LABEL_54;
  }
  v16 = SeCaptureSecurityDescriptor((unsigned __int16 *)SecurityDescriptor, PreviousMode, 1, 0, (unsigned __int16 **)&P);
  if ( v16 < 0 || (v18 = (unsigned int *)P) == 0LL )
  {
LABEL_49:
    ObfDereferenceObject(v17);
    SeReleaseSubjectContext(&SubjectContext);
    if ( v16 != -1073741670 )
      return v16;
    v27 = -1073741670;
LABEL_51:
    SepAuditFailed(v27);
    return v16;
  }
  if ( AccessGranted && Privileges )
  {
    v52 = 1LL;
    ProbeForRead(Privileges, 1uLL, 4u);
    PrivilegeCount = Privileges->PrivilegeCount;
    v45 = PrivilegeCount;
    if ( PrivilegeCount > 0x42 )
    {
      v16 = -1073741811;
      v41 = -1073741811;
      goto LABEL_21;
    }
    Size = 12 * PrivilegeCount + 8;
    ProbeForRead(Privileges, Size, 4u);
    Pool2 = (ULONG *)ExAllocatePool2(0x100uLL);
    v14 = Pool2;
    v51 = Pool2;
    if ( !Pool2 )
    {
      LOBYTE(v22) = v38;
      SeReleaseSecurityDescriptor(v18, v22, 0LL);
      ObfDereferenceObject(v17);
      SeReleaseSubjectContext(&SubjectContext);
      v41 = -1073741670;
      SepAuditFailed(-1073741670);
      return -1073741670;
    }
    memmove(Pool2, Privileges, Size);
    *v14 = v45;
  }
  if ( Address )
  {
    v54 = 1LL;
    ProbeForRead(Address, 1uLL, 8u);
    v49 = *(_QWORD *)Address;
  }
  UCharFromUser = RtlReadUCharFromUser(GenerateOnClose);
  RtlWriteUCharToUser(GenerateOnClose, UCharFromUser);
  v16 = SepProbeAndCaptureString_U((unsigned int *)&SubsystemName->Length, (__int64)&v42);
  v41 = v16;
  if ( v16 >= 0 )
  {
    v16 = SepProbeAndCaptureString_U((unsigned int *)&ObjectTypeName->Length, (__int64)&v43);
    v41 = v16;
    if ( v16 >= 0 )
    {
      v16 = SepProbeAndCaptureString_U((unsigned int *)&ObjectName->Length, (__int64)&v46);
      v41 = v16;
      v13 = v46;
    }
    v12 = v43;
  }
LABEL_21:
  if ( v16 < 0 )
  {
    if ( v42 )
      ExFreePoolWithTag(v42, 0);
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    if ( v14 )
      ExFreePoolWithTag(v14, 0);
    LOBYTE(v19) = v38;
    SeReleaseSecurityDescriptor(v18, v19, 0LL);
    goto LABEL_49;
  }
  if ( !SepAdtAuditObjectAccessWithContext(
          0LL,
          (unsigned __int16 *)v12,
          AccessGranted,
          AccessGranted == 0,
          &SubjectContext,
          0,
          &v40) )
    goto LABEL_23;
  v29 = *((_WORD *)v18 + 1);
  if ( (v29 & 0x10) == 0 )
  {
LABEL_69:
    v31 = 0LL;
    goto LABEL_60;
  }
  if ( v29 < 0 )
  {
    v30 = v18[3];
    if ( (_DWORD)v30 )
    {
      v31 = (ACL *)((char *)v18 + v30);
      goto LABEL_60;
    }
    goto LABEL_69;
  }
  v31 = (ACL *)*((_QWORD *)v18 + 3);
LABEL_60:
  if ( (v29 & 0x10) == 0 )
  {
LABEL_61:
    v32 = 0LL;
    goto LABEL_62;
  }
  if ( v29 >= 0 )
  {
    v32 = (ACL *)*((_QWORD *)v18 + 3);
  }
  else
  {
    v33 = v18[3];
    if ( !(_DWORD)v33 )
      goto LABEL_61;
    v32 = (ACL *)((char *)v18 + v33);
  }
LABEL_62:
  SeExamineSacl(v32, v31, v17, GrantedAccess | DesiredAccess, AccessGranted, &GenerateAudit, GenerateAlarm);
  v25 = GenerateAudit;
  if ( !GenerateAudit && !GenerateAlarm[0] )
    goto LABEL_24;
  Process = KeGetCurrentThread()->ApcState.Process;
  v35 = Address != 0LL;
  Address = (volatile void *)-(__int64)Address;
  v36 = SepAdtOpenObjectAuditAlarm(
          v40,
          (const int *)v42,
          (unsigned __int64 *)((unsigned __int64)&v49 & -(__int64)v35),
          (unsigned __int16 *)v12,
          (unsigned __int16 *)v13,
          (__int16 *)v18,
          v17,
          (_QWORD *)SubjectContext.PrimaryToken,
          DesiredAccess,
          GrantedAccess,
          (int *)v14,
          AccessGranted,
          (__int64)Process[1].Header.WaitListHead.Flink,
          2,
          0LL,
          0,
          0LL,
          0LL,
          0LL);
LABEL_23:
  v25 = GenerateAudit;
LABEL_24:
  if ( v25 || !Privileges || GenerateAlarm[0] || !AccessGranted )
  {
    v26 = v36;
  }
  else
  {
    SepAdtPrivilegeObjectAuditAlarm(
      (const int *)v42,
      (unsigned __int16 *)v12,
      (unsigned __int16 *)v13,
      v49,
      (__int64)v17,
      (__int64)SubjectContext.PrimaryToken,
      (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
      DesiredAccess,
      v14,
      AccessGranted);
    v26 = 0;
  }
  if ( v38 == 1 )
    ExFreePoolWithTag(v18, 0);
  if ( v42 )
    ExFreePoolWithTag(v42, 0);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  ObfDereferenceObject(v17);
  SeReleaseSubjectContext(&SubjectContext);
  *GenerateOnClose = v26;
  return 0;
}
