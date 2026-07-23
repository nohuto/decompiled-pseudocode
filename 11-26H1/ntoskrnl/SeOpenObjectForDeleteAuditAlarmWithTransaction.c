/*
 * XREFs of SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x140A61470
 * Callers:
 *     SeOpenObjectForDeleteAuditAlarm @ 0x140A61400 (SeOpenObjectForDeleteAuditAlarm.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     SepAdtOpenObjectForDeleteAuditAlarm @ 0x140818E4C (SepAdtOpenObjectForDeleteAuditAlarm.c)
 *     SepAuditFailed @ 0x14090B840 (SepAuditFailed.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14090B910 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x14090E960 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091FB0C (SepAdtOpenObjectAuditAlarm.c)
 *     SepQueryNameString @ 0x140920B48 (SepQueryNameString.c)
 *     SeExamineSacl @ 0x140A60F70 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x140A61298 (SeExamineGlobalSacl.c)
 *     SepQueryTypeString @ 0x140A61E9C (SepQueryTypeString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __stdcall SeOpenObjectForDeleteAuditAlarmWithTransaction(
        PUNICODE_STRING ObjectTypeName,
        PVOID Object,
        PUNICODE_STRING AbsoluteObjectName,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PACCESS_STATE AccessState,
        BOOLEAN ObjectCreated,
        BOOLEAN AccessGranted,
        KPROCESSOR_MODE AccessMode,
        GUID *TransactionId,
        PBOOLEAN GenerateOnClose)
{
  PVOID v11; // r10
  BOOLEAN v12; // r15
  BOOLEAN v13; // r12
  PVOID v14; // r13
  UNICODE_STRING *v15; // rdi
  UNICODE_STRING *v16; // rsi
  SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rdx
  int *v18; // rcx
  int v19; // eax
  __int16 *v20; // rdx
  ACL *v21; // rdx
  BOOLEAN v22; // r12
  unsigned int *v23; // r12
  __int16 v24; // cx
  ACL *v25; // rdx
  ACL **v26; // r15
  ACL *v27; // rcx
  __int16 v28; // ax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int128 *v32; // rax
  GUID *v33; // r15
  wchar_t *Buffer; // rcx
  wchar_t *Pool2; // rax
  wchar_t *v36; // rcx
  wchar_t *v37; // rax
  int v38; // [rsp+40h] [rbp-91h]
  int v39; // [rsp+58h] [rbp-79h]
  BOOLEAN GenerateAudit; // [rsp+A8h] [rbp-29h] BYREF
  BOOLEAN GenerateAlarm[3]; // [rsp+A9h] [rbp-28h] BYREF
  __int16 v42[2]; // [rsp+ACh] [rbp-25h] BYREF
  signed int v43; // [rsp+B0h] [rbp-21h]
  int **AuxData; // [rsp+B8h] [rbp-19h]
  PVOID P; // [rsp+C0h] [rbp-11h] BYREF
  PACCESS_TOKEN Token; // [rsp+C8h] [rbp-9h]
  PVOID v47; // [rsp+D0h] [rbp-1h] BYREF
  UNICODE_STRING *ObjectType; // [rsp+118h] [rbp+47h]
  ACCESS_MASK AccessModea; // [rsp+150h] [rbp+7Fh]

  ObjectType = ObjectTypeName;
  v11 = Object;
  v12 = 0;
  v13 = 0;
  GenerateAudit = 0;
  v14 = 0LL;
  GenerateAlarm[0] = 0;
  v15 = 0LL;
  v47 = 0LL;
  v16 = 0LL;
  P = 0LL;
  v43 = 0;
  v42[0] = 999;
  if ( AccessMode )
  {
    p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
    AuxData = (int **)AccessState->AuxData;
    Token = AccessState->SubjectSecurityContext.ClientToken;
    if ( !Token )
      Token = AccessState->SubjectSecurityContext.PrimaryToken;
    if ( ObjectTypeName && ObjectTypeName->Length )
    {
      v16 = ObjectTypeName;
    }
    else if ( v11 )
    {
      v19 = SepQueryTypeString(v11, &P, AbsoluteObjectName, 0LL);
      v14 = P;
      v43 = v19;
      if ( v19 < 0 )
        goto LABEL_16;
      ObjectTypeName = ObjectType;
      p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
      v11 = Object;
      if ( P )
        v16 = (UNICODE_STRING *)P;
    }
    if ( !SecurityDescriptor
      || !SepAdtAuditObjectAccessWithContext(
            (__int64)v11,
            &ObjectTypeName->Length,
            AccessGranted,
            AccessGranted == 0,
            p_SubjectSecurityContext,
            1,
            v42) )
    {
      goto LABEL_8;
    }
    v23 = (unsigned int *)((char *)SecurityDescriptor + 12);
    v24 = *((_WORD *)SecurityDescriptor + 1);
    AccessModea = AccessState->RemainingDesiredAccess | AccessState->PreviouslyGrantedAccess;
    if ( (v24 & 0x10) != 0 )
    {
      if ( v24 >= 0 )
      {
        v26 = (ACL **)((char *)SecurityDescriptor + 24);
        v25 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      }
      else
      {
        v30 = *v23;
        v25 = 0LL;
        if ( (_DWORD)v30 )
          v25 = (ACL *)((char *)SecurityDescriptor + v30);
        v26 = (ACL **)((char *)SecurityDescriptor + 24);
      }
      if ( v24 >= 0 )
      {
        v27 = *v26;
      }
      else
      {
        v31 = *v23;
        if ( (_DWORD)v31 )
          v27 = (ACL *)((char *)SecurityDescriptor + v31);
        else
          v27 = 0LL;
      }
    }
    else
    {
      v25 = 0LL;
      v26 = (ACL **)((char *)SecurityDescriptor + 24);
      v27 = 0LL;
    }
    SeExamineSacl(
      v27,
      v25,
      Token,
      AccessState->RemainingDesiredAccess | AccessState->PreviouslyGrantedAccess,
      AccessGranted,
      &GenerateAudit,
      GenerateAlarm);
    v28 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v28 & 0x10) == 0 )
      goto LABEL_23;
    if ( v28 >= 0 )
    {
      v21 = *v26;
      goto LABEL_24;
    }
    v29 = *v23;
    if ( (_DWORD)v29 )
      v21 = (ACL *)((char *)SecurityDescriptor + v29);
    else
LABEL_23:
      v21 = 0LL;
LABEL_24:
    v22 = AccessGranted;
    SeExamineGlobalSacl(ObjectType, v21, Token, AccessModea, AccessGranted, &GenerateAudit, GenerateAlarm);
    v12 = GenerateAudit;
    if ( GenerateAudit )
    {
      *GenerateOnClose = 1;
LABEL_50:
      AccessState->GenerateAudit = 1;
      if ( AbsoluteObjectName && AbsoluteObjectName->Length )
      {
        v15 = AbsoluteObjectName;
        goto LABEL_57;
      }
      if ( !Object )
      {
LABEL_57:
        if ( v22 )
        {
          v33 = (GUID *)AuxData;
          SepAdtOpenObjectForDeleteAuditAlarm(
            v42[0],
            (__int64)p_SubjectSecurityContext,
            (__int64)AbsoluteObjectName,
            &v16->Length,
            &v15->Length,
            (__int64)AccessState->SubjectSecurityContext.ClientToken,
            (__int64)AccessState->SubjectSecurityContext.PrimaryToken,
            v38,
            AccessState->PreviouslyGrantedAccess,
            *AuxData,
            v39,
            (__int64)AccessState->SubjectSecurityContext.ProcessAuditId,
            (__int128 *)TransactionId);
          if ( v15 )
          {
            Buffer = AccessState->ObjectName.Buffer;
            if ( Buffer )
            {
              ExFreePoolWithTag(Buffer, 0);
              AccessState->ObjectName.Length = 0;
              AccessState->ObjectName.MaximumLength = 0;
            }
            Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
            AccessState->ObjectName.Buffer = Pool2;
            if ( Pool2 )
            {
              AccessState->ObjectName.MaximumLength = v15->MaximumLength;
              RtlCopyUnicodeString(&AccessState->ObjectName, v15);
            }
            v33 = (GUID *)AuxData;
          }
          if ( v16 )
          {
            v36 = AccessState->ObjectTypeName.Buffer;
            if ( v36 )
            {
              ExFreePoolWithTag(v36, 0);
              AccessState->ObjectTypeName.Length = 0;
              AccessState->ObjectTypeName.MaximumLength = 0;
            }
            v37 = (wchar_t *)ExAllocatePool2(0x100uLL);
            AccessState->ObjectTypeName.Buffer = v37;
            if ( v37 )
            {
              AccessState->ObjectTypeName.MaximumLength = v16->MaximumLength;
              RtlCopyUnicodeString(&AccessState->ObjectTypeName, v16);
            }
          }
          if ( TransactionId )
            v33[2] = *TransactionId;
        }
        else
        {
          v32 = (__int128 *)TransactionId;
          if ( !TransactionId )
            v32 = (__int128 *)(AuxData + 4);
          SepAdtOpenObjectAuditAlarm(
            v42[0],
            &SeSubsystemName,
            0LL,
            &v16->Length,
            &v15->Length,
            (__int16 *)SecurityDescriptor,
            (_QWORD *)AccessState->SubjectSecurityContext.ClientToken,
            (_QWORD *)AccessState->SubjectSecurityContext.PrimaryToken,
            AccessState->OriginalDesiredAccess,
            AccessState->PreviouslyGrantedAccess,
            *AuxData,
            0,
            (__int64)AccessState->SubjectSecurityContext.ProcessAuditId,
            2,
            0LL,
            0,
            0LL,
            v32,
            (__int64)AccessState);
        }
        goto LABEL_16;
      }
      v43 = SepQueryNameString((__int64)Object, &v47);
      if ( v43 >= 0 )
      {
        if ( v47 )
          v15 = (UNICODE_STRING *)v47;
        goto LABEL_57;
      }
LABEL_16:
      if ( v47 )
        ExFreePoolWithTag(v47, 0);
      if ( v14 )
        ExFreePoolWithTag(v14, 0);
LABEL_12:
      if ( v43 < 0 )
        SepAuditFailed(v43);
      return;
    }
    v13 = GenerateAlarm[0];
LABEL_8:
    if ( AccessGranted )
    {
      v18 = *AuxData;
      if ( *AuxData )
      {
        if ( *v18 )
        {
          v20 = v42;
          LOBYTE(v20) = AccessGranted;
          if ( SepAdtAuditPrivilegeUseWithContext(
                 (unsigned int *)v18,
                 (__int64)v20,
                 0LL,
                 (__int64)&AccessState->SubjectSecurityContext,
                 v42) )
          {
            v12 = 1;
            AccessState->AuditPrivileges = 1;
          }
        }
      }
    }
    if ( !v12 && !v13 )
      goto LABEL_12;
    v22 = AccessGranted;
    goto LABEL_50;
  }
}
