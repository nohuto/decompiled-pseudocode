/*
 * XREFs of SeOpenObjectAuditAlarmWithTransaction @ 0x14092F570
 * Callers:
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     ObCheckObjectAccess @ 0x140904A50 (ObCheckObjectAccess.c)
 *     ObpCreateHandle @ 0x14092CA60 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x140930170 (ObpGrantAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x140930990 (CmpCheckKeyBodyAccess.c)
 *     SeOpenObjectAuditAlarm @ 0x140930EB0 (SeOpenObjectAuditAlarm.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140930F10 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpCheckCreateAccess @ 0x14098391C (CmpCheckCreateAccess.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     RtlCopyUnicodeString @ 0x140419A90 (RtlCopyUnicodeString.c)
 *     SeMaximumAuditMask @ 0x1404A5E44 (SeMaximumAuditMask.c)
 *     SepAdtCheckPrivilegeForSensitivity @ 0x1404BBEA8 (SepAdtCheckPrivilegeForSensitivity.c)
 *     SepAuditFailed @ 0x14092FD10 (SepAuditFailed.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14092FDE0 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x140932EA0 (SepAdtAuditThisEventWithContext.c)
 *     RtlCompareUnicodeStrings @ 0x140981100 (RtlCompareUnicodeStrings.c)
 *     SepFilterPrivilegeAudits @ 0x1409F7460 (SepFilterPrivilegeAudits.c)
 *     SeExamineSacl @ 0x1409F8430 (SeExamineSacl.c)
 *     SepQueryTypeString @ 0x1409F95CC (SepQueryTypeString.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409FAF0C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409FB6F8 (SepAdtStagingEvent.c)
 *     SepQueryNameString @ 0x1409FBF48 (SepQueryNameString.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140AB6258 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __stdcall SeOpenObjectAuditAlarmWithTransaction(
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
  BOOLEAN v10; // r13
  int v11; // esi
  SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rax
  PACCESS_TOKEN ClientToken; // r14
  char *AuxData; // r15
  BOOLEAN v15; // r12
  __int64 v16; // rdx
  unsigned __int8 i; // al
  char v18; // al
  PVOID v19; // rbx
  const UNICODE_STRING *v20; // r13
  PVOID v21; // r14
  PCUNICODE_STRING v22; // r12
  wchar_t *Buffer; // rcx
  wchar_t *Pool2; // rax
  wchar_t *v25; // rcx
  wchar_t *v26; // rax
  unsigned int *v27; // rbx
  int v28; // r8d
  __int16 v29; // ax
  unsigned int *v30; // rbx
  ACL *v31; // rdx
  ACL **v32; // r13
  ACL *v33; // rcx
  char *v34; // rdx
  __int16 v35; // ax
  ACL *v36; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  char v44; // r13
  char v45; // al
  char v46; // r14
  __int16 v47; // ax
  __int16 v48; // ax
  __int64 v49; // rax
  __int64 v50; // rcx
  const UNICODE_STRING *v51; // rax
  int v52; // eax
  GUID *v53; // rax
  PCUNICODE_STRING v54; // rbx
  int v55; // edx
  ACL *v56; // rcx
  BOOLEAN GenerateAlarm; // [rsp+A8h] [rbp-59h] BYREF
  char v58; // [rsp+A9h] [rbp-58h]
  BOOLEAN GenerateAudit[2]; // [rsp+AAh] [rbp-57h] BYREF
  unsigned __int16 v60; // [rsp+ACh] [rbp-55h] BYREF
  ACCESS_MASK v61; // [rsp+B0h] [rbp-51h]
  PVOID v62; // [rsp+B8h] [rbp-49h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+C0h] [rbp-41h]
  __int64 *v64; // [rsp+C8h] [rbp-39h]
  PVOID P; // [rsp+D0h] [rbp-31h] BYREF
  const UNICODE_STRING *v66; // [rsp+D8h] [rbp-29h]
  const UNICODE_STRING *v69; // [rsp+148h] [rbp+47h]
  char *v70; // [rsp+150h] [rbp+4Fh]

  v70 = (char *)SecurityDescriptor;
  v69 = AbsoluteObjectName;
  P = 0LL;
  v10 = 0;
  v62 = 0LL;
  v11 = 0;
  SourceString = 0LL;
  v66 = 0LL;
  GenerateAudit[0] = 0;
  v60 = 999;
  v58 = 0;
  GenerateAlarm = 0;
  if ( !AccessMode )
    return;
  p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
  ClientToken = AccessState->SubjectSecurityContext.ClientToken;
  AuxData = (char *)AccessState->AuxData;
  if ( !ClientToken )
    ClientToken = AccessState->SubjectSecurityContext.PrimaryToken;
  if ( !SecurityDescriptor )
  {
    v15 = AccessGranted;
    goto LABEL_44;
  }
  v15 = AccessGranted;
  LOBYTE(SecurityDescriptor) = AccessGranted == 0;
  if ( (unsigned __int8)SepAdtAuditObjectAccessWithContext(
                          (int)Object,
                          (int)ObjectTypeName,
                          AccessGranted,
                          (int)SecurityDescriptor,
                          &AccessState->SubjectSecurityContext,
                          1,
                          (__int64)&v60) )
  {
    v28 = AccessState->RemainingDesiredAccess | AccessState->PreviouslyGrantedAccess;
    v61 = v28;
    v29 = *((_WORD *)v70 + 1);
    v30 = (unsigned int *)(v70 + 12);
    if ( (v29 & 0x10) != 0 )
    {
      if ( v29 >= 0 )
      {
        v31 = (ACL *)*((_QWORD *)v70 + 3);
        v32 = (ACL **)(v70 + 24);
      }
      else
      {
        v42 = *v30;
        if ( (_DWORD)v42 )
          v31 = (ACL *)&v70[v42];
        else
          v31 = 0LL;
        v32 = (ACL **)(v70 + 24);
      }
      if ( v29 >= 0 )
      {
        v33 = *v32;
      }
      else
      {
        v43 = *v30;
        if ( (_DWORD)v43 )
          v33 = (ACL *)&v70[v43];
        else
          v33 = 0LL;
      }
    }
    else
    {
      v31 = 0LL;
      v32 = (ACL **)(v70 + 24);
      v33 = 0LL;
    }
    SeExamineSacl(v33, v31, ClientToken, v28, AccessGranted, GenerateAudit, &GenerateAlarm);
    v34 = v70;
    v35 = *((_WORD *)v70 + 1);
    if ( (v35 & 0x10) != 0 )
    {
      if ( v35 >= 0 )
      {
        v36 = *v32;
      }
      else
      {
        v41 = *v30;
        if ( (_DWORD)v41 )
          v36 = (ACL *)&v70[v41];
        else
          v36 = 0LL;
      }
    }
    else
    {
      v36 = 0LL;
    }
    v10 = GenerateAudit[0];
    if ( GenerateAudit[0] )
    {
      v58 = GenerateAlarm;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&SepRmGlobalSaclLock, 1u);
      v38 = SepRmGlobalSaclHead;
      v64 = (__int64 *)SepRmGlobalSaclHead;
      if ( SepRmGlobalSaclHead )
      {
        while ( v38 )
        {
          if ( !RtlCompareUnicodeStrings(
                  ObjectTypeName->Buffer,
                  (unsigned __int64)ObjectTypeName->Length >> 1,
                  *(PCWCH *)(v38 + 16),
                  (unsigned __int64)*(unsigned __int16 *)(v38 + 8) >> 1,
                  0) )
          {
            v56 = (ACL *)v64[3];
            if ( !v56 )
              break;
            AccessMode = 0;
            GenerateAudit[0] = 0;
            SeExamineSacl(v56, v36, ClientToken, v61, AccessGranted, (PBOOLEAN)&AccessMode, GenerateAudit);
            v10 = AccessMode != 0;
            v58 = GenerateAlarm || GenerateAudit[0];
            goto LABEL_57;
          }
          v38 = *v64;
          v64 = (__int64 *)*v64;
        }
      }
      v58 = GenerateAlarm;
LABEL_57:
      ExReleaseResourceLite(&SepRmGlobalSaclLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v39, v40);
      if ( !v10 )
        goto LABEL_6;
      v34 = v70;
    }
    *GenerateOnClose = 1;
    if ( AccessGranted )
    {
      v48 = *((_WORD *)v34 + 1);
      if ( (v48 & 0x10) != 0 )
      {
        if ( v48 >= 0 )
        {
          v50 = *((_QWORD *)v34 + 3);
        }
        else
        {
          v49 = *((unsigned int *)v34 + 3);
          if ( (_DWORD)v49 )
            v50 = (__int64)&v34[v49];
          else
            v50 = 0LL;
        }
      }
      else
      {
        v50 = 0LL;
      }
      SeMaximumAuditMask(v50, v61, (__int64)ClientToken, (_DWORD *)AuxData + 7);
      SeMaximumAuditMaskFromGlobalSacl(ObjectTypeName, v61, ClientToken, (PACCESS_MASK)AuxData + 7);
    }
  }
LABEL_6:
  SecurityDescriptor = AccessState->AuxData;
  AbsoluteObjectName = (PUNICODE_STRING)(AccessGranted == 0);
  if ( (AccessState->OriginalDesiredAccess & 0x2000000) != 0 )
    AbsoluteObjectName = (PUNICODE_STRING)1;
  v16 = 0LL;
  if ( (AccessState->OriginalDesiredAccess & 0x2000000) == 0 )
    v16 = AccessGranted;
  for ( i = 0; ; ++i )
  {
    if ( i >= 0x20u )
    {
      v18 = 0;
      goto LABEL_15;
    }
    if ( *((int *)SecurityDescriptor + i + 22) < 0 )
      break;
  }
  v18 = SepAdtAuditThisEventWithContext(130LL, v16, AbsoluteObjectName, &AccessState->SubjectSecurityContext);
LABEL_15:
  AuxData[216] = v18;
  if ( v10 )
    goto LABEL_16;
  p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
LABEL_44:
  if ( !v15 )
    goto LABEL_47;
  v27 = *(unsigned int **)AuxData;
  if ( !*(_QWORD *)AuxData )
    goto LABEL_47;
  if ( !*v27 )
    goto LABEL_47;
  AccessMode = 0;
  GenerateAlarm = 0;
  v44 = SepAdtAuditThisEventWithContext(131LL, v15, 0LL, p_SubjectSecurityContext);
  v45 = SepAdtAuditThisEventWithContext(132LL, v15, 0LL, &AccessState->SubjectSecurityContext);
  v46 = v45;
  if ( !v44 && !v45 )
    goto LABEL_47;
  if ( !(unsigned __int8)SepFilterPrivilegeAudits(0LL, v27) )
    goto LABEL_47;
  if ( v44 && v46 )
  {
    if ( *v27 )
      goto LABEL_119;
    SepAdtCheckPrivilegeForSensitivity(v27, &AccessMode, &GenerateAlarm);
LABEL_75:
    if ( !AccessMode )
      goto LABEL_76;
LABEL_119:
    v47 = 131;
    goto LABEL_120;
  }
  SepAdtCheckPrivilegeForSensitivity(v27, &AccessMode, &GenerateAlarm);
  if ( v44 )
    goto LABEL_75;
LABEL_76:
  if ( v46 && GenerateAlarm )
  {
    v47 = 132;
LABEL_120:
    v60 = v47;
    AccessState->AuditPrivileges = 1;
    goto LABEL_16;
  }
LABEL_47:
  if ( v58 )
  {
LABEL_16:
    AccessState->GenerateAudit = 1;
    goto LABEL_17;
  }
  AccessState->GenerateAudit = 0;
  if ( !AuxData[216] )
    return;
LABEL_17:
  if ( v69 && v69->Length )
  {
    v19 = Object;
    SourceString = v69;
  }
  else
  {
    v19 = Object;
    if ( Object )
    {
      v11 = SepQueryNameString(Object, &P, AbsoluteObjectName, SecurityDescriptor);
      if ( v11 < 0 )
      {
        v21 = v62;
        goto LABEL_37;
      }
      if ( P )
      {
        v51 = SourceString;
        if ( *((_WORD *)P + 1) != (_WORD)SourceString )
          v51 = (const UNICODE_STRING *)P;
        SourceString = v51;
      }
    }
  }
  if ( ObjectTypeName && ObjectTypeName->Length )
  {
    v20 = ObjectTypeName;
LABEL_23:
    v21 = v62;
LABEL_24:
    if ( v15 )
    {
      v22 = SourceString;
      if ( SourceString )
      {
        Buffer = AccessState->ObjectName.Buffer;
        if ( Buffer )
        {
          ExFreePoolWithTag(Buffer, 0);
          *(_DWORD *)&AccessState->ObjectName.Length = 0;
        }
        Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
        AccessState->ObjectName.Buffer = Pool2;
        if ( Pool2 )
        {
          AccessState->ObjectName.MaximumLength = v22->MaximumLength;
          RtlCopyUnicodeString(&AccessState->ObjectName, v22);
        }
      }
      if ( v20 )
      {
        v25 = AccessState->ObjectTypeName.Buffer;
        if ( v25 )
        {
          ExFreePoolWithTag(v25, 0);
          *(_DWORD *)&AccessState->ObjectTypeName.Length = 0;
        }
        v26 = (wchar_t *)ExAllocatePool2(0x100uLL);
        AccessState->ObjectTypeName.Buffer = v26;
        if ( v26 )
        {
          AccessState->ObjectTypeName.MaximumLength = v20->MaximumLength;
          RtlCopyUnicodeString(&AccessState->ObjectTypeName, v20);
        }
      }
      if ( TransactionId )
        *((GUID *)AuxData + 2) = *TransactionId;
    }
    else
    {
      v53 = TransactionId;
      if ( !TransactionId )
        v53 = (GUID *)(AuxData + 32);
      v54 = SourceString;
      SepAdtOpenObjectAuditAlarm(
        v60,
        (int)&SeSubsystemName,
        0,
        (int)v20,
        (__int64)SourceString,
        v70,
        (__int64)AccessState->SubjectSecurityContext.ClientToken,
        (__int64)AccessState->SubjectSecurityContext.PrimaryToken,
        AccessState->OriginalDesiredAccess,
        AccessState->PreviouslyGrantedAccess,
        *(_QWORD *)AuxData,
        0,
        (__int64)AccessState->SubjectSecurityContext.ProcessAuditId,
        2,
        0LL,
        0,
        0LL,
        (__int64)v53,
        (__int64)AccessState);
      SepAdtStagingEvent(
        v60,
        v55,
        0,
        (_DWORD)v20,
        (__int64)v54,
        (__int64)AccessState->SubjectSecurityContext.ClientToken,
        (__int64)AccessState->SubjectSecurityContext.PrimaryToken,
        AccessState->OriginalDesiredAccess,
        AccessState->PreviouslyGrantedAccess,
        0,
        0LL,
        (__int64)AccessState);
    }
    goto LABEL_37;
  }
  if ( !v19 )
  {
    v20 = v66;
    goto LABEL_23;
  }
  v52 = SepQueryTypeString(v19, &v62, AbsoluteObjectName, SecurityDescriptor);
  v21 = v62;
  v11 = v52;
  if ( v52 >= 0 )
  {
    v20 = v66;
    if ( v62 )
      v20 = (const UNICODE_STRING *)v62;
    goto LABEL_24;
  }
LABEL_37:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v21 )
    ExFreePoolWithTag(v21, 0);
  if ( v11 < 0 )
    SepAuditFailed((unsigned int)v11);
}
