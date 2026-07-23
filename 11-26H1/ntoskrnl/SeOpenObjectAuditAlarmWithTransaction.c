/*
 * XREFs of SeOpenObjectAuditAlarmWithTransaction @ 0x14090B0A0
 * Callers:
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x14090BCA0 (ObpGrantAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x14090C4C0 (CmpCheckKeyBodyAccess.c)
 *     SeOpenObjectAuditAlarm @ 0x14090C9E0 (SeOpenObjectAuditAlarm.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14090CA40 (CmpCheckOpenAccessOnKeyBody.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     ObCheckObjectAccess @ 0x1409349E0 (ObCheckObjectAccess.c)
 *     CmpCheckCreateAccess @ 0x14094592C (CmpCheckCreateAccess.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     SeMaximumAuditMask @ 0x14049F4D4 (SeMaximumAuditMask.c)
 *     SepAdtCheckPrivilegeForSensitivity @ 0x1404B60C8 (SepAdtCheckPrivilegeForSensitivity.c)
 *     SepAuditFailed @ 0x14090B840 (SepAuditFailed.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14090B910 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x14090EA50 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091FB0C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409202F8 (SepAdtStagingEvent.c)
 *     SepQueryNameString @ 0x140920B48 (SepQueryNameString.c)
 *     RtlCompareUnicodeStrings @ 0x140943110 (RtlCompareUnicodeStrings.c)
 *     SepFilterPrivilegeAudits @ 0x140A5FFB0 (SepFilterPrivilegeAudits.c)
 *     SeExamineSacl @ 0x140A60F70 (SeExamineSacl.c)
 *     SepQueryTypeString @ 0x140A61E9C (SepQueryTypeString.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140AB75F8 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  char v42; // r13
  char v43; // al
  char v44; // r14
  __int16 v45; // ax
  __int16 v46; // ax
  __int64 v47; // rax
  __int64 v48; // rcx
  const UNICODE_STRING *v49; // rax
  int v50; // eax
  GUID *v51; // rax
  PCUNICODE_STRING v52; // rbx
  int v53; // edx
  ACL *v54; // rcx
  BOOLEAN GenerateAlarm; // [rsp+A8h] [rbp-59h] BYREF
  char v56; // [rsp+A9h] [rbp-58h]
  BOOLEAN GenerateAudit[2]; // [rsp+AAh] [rbp-57h] BYREF
  unsigned __int16 v58; // [rsp+ACh] [rbp-55h] BYREF
  ACCESS_MASK v59; // [rsp+B0h] [rbp-51h]
  PVOID v60; // [rsp+B8h] [rbp-49h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+C0h] [rbp-41h]
  __int64 *v62; // [rsp+C8h] [rbp-39h]
  PVOID P; // [rsp+D0h] [rbp-31h] BYREF
  const UNICODE_STRING *v64; // [rsp+D8h] [rbp-29h]
  const UNICODE_STRING *v67; // [rsp+148h] [rbp+47h]
  char *v68; // [rsp+150h] [rbp+4Fh]

  v68 = (char *)SecurityDescriptor;
  v67 = AbsoluteObjectName;
  P = 0LL;
  v10 = 0;
  v60 = 0LL;
  v11 = 0;
  SourceString = 0LL;
  v64 = 0LL;
  GenerateAudit[0] = 0;
  v58 = 999;
  v56 = 0;
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
                          (__int64)&v58) )
  {
    v28 = AccessState->RemainingDesiredAccess | AccessState->PreviouslyGrantedAccess;
    v59 = v28;
    v29 = *((_WORD *)v68 + 1);
    v30 = (unsigned int *)(v68 + 12);
    if ( (v29 & 0x10) != 0 )
    {
      if ( v29 >= 0 )
      {
        v31 = (ACL *)*((_QWORD *)v68 + 3);
        v32 = (ACL **)(v68 + 24);
      }
      else
      {
        v40 = *v30;
        if ( (_DWORD)v40 )
          v31 = (ACL *)&v68[v40];
        else
          v31 = 0LL;
        v32 = (ACL **)(v68 + 24);
      }
      if ( v29 >= 0 )
      {
        v33 = *v32;
      }
      else
      {
        v41 = *v30;
        if ( (_DWORD)v41 )
          v33 = (ACL *)&v68[v41];
        else
          v33 = 0LL;
      }
    }
    else
    {
      v31 = 0LL;
      v32 = (ACL **)(v68 + 24);
      v33 = 0LL;
    }
    SeExamineSacl(v33, v31, ClientToken, v28, AccessGranted, GenerateAudit, &GenerateAlarm);
    v34 = v68;
    v35 = *((_WORD *)v68 + 1);
    if ( (v35 & 0x10) != 0 )
    {
      if ( v35 >= 0 )
      {
        v36 = *v32;
      }
      else
      {
        v39 = *v30;
        if ( (_DWORD)v39 )
          v36 = (ACL *)&v68[v39];
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
      v56 = GenerateAlarm;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite((PERESOURCE)&RtlpBootStatHandleLock.KernelWaitTime, 1u);
      v38 = SepRmGlobalSaclHead;
      v62 = (__int64 *)SepRmGlobalSaclHead;
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
            v54 = (ACL *)v62[3];
            if ( !v54 )
              break;
            AccessMode = 0;
            GenerateAudit[0] = 0;
            SeExamineSacl(v54, v36, ClientToken, v59, AccessGranted, (PBOOLEAN)&AccessMode, GenerateAudit);
            v10 = AccessMode != 0;
            v56 = GenerateAlarm || GenerateAudit[0];
            goto LABEL_57;
          }
          v38 = *v62;
          v62 = (__int64 *)*v62;
        }
      }
      v56 = GenerateAlarm;
LABEL_57:
      ExReleaseResourceLite((PERESOURCE)&RtlpBootStatHandleLock.KernelWaitTime);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( !v10 )
        goto LABEL_6;
      v34 = v68;
    }
    *GenerateOnClose = 1;
    if ( AccessGranted )
    {
      v46 = *((_WORD *)v34 + 1);
      if ( (v46 & 0x10) != 0 )
      {
        if ( v46 >= 0 )
        {
          v48 = *((_QWORD *)v34 + 3);
        }
        else
        {
          v47 = *((unsigned int *)v34 + 3);
          if ( (_DWORD)v47 )
            v48 = (__int64)&v34[v47];
          else
            v48 = 0LL;
        }
      }
      else
      {
        v48 = 0LL;
      }
      SeMaximumAuditMask(v48, v59, (__int64)ClientToken, (_DWORD *)AuxData + 7);
      SeMaximumAuditMaskFromGlobalSacl(ObjectTypeName, v59, ClientToken, (PACCESS_MASK)AuxData + 7);
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
  v42 = SepAdtAuditThisEventWithContext(131LL, v15, 0LL, p_SubjectSecurityContext);
  v43 = SepAdtAuditThisEventWithContext(132LL, v15, 0LL, &AccessState->SubjectSecurityContext);
  v44 = v43;
  if ( !v42 && !v43 )
    goto LABEL_47;
  if ( !(unsigned __int8)SepFilterPrivilegeAudits(0LL, v27) )
    goto LABEL_47;
  if ( v42 && v44 )
  {
    if ( *v27 )
      goto LABEL_119;
    SepAdtCheckPrivilegeForSensitivity(v27, &AccessMode, &GenerateAlarm);
LABEL_75:
    if ( !AccessMode )
      goto LABEL_76;
LABEL_119:
    v45 = 131;
    goto LABEL_120;
  }
  SepAdtCheckPrivilegeForSensitivity(v27, &AccessMode, &GenerateAlarm);
  if ( v42 )
    goto LABEL_75;
LABEL_76:
  if ( v44 && GenerateAlarm )
  {
    v45 = 132;
LABEL_120:
    v58 = v45;
    AccessState->AuditPrivileges = 1;
    goto LABEL_16;
  }
LABEL_47:
  if ( v56 )
  {
LABEL_16:
    AccessState->GenerateAudit = 1;
    goto LABEL_17;
  }
  AccessState->GenerateAudit = 0;
  if ( !AuxData[216] )
    return;
LABEL_17:
  if ( v67 && v67->Length )
  {
    v19 = Object;
    SourceString = v67;
  }
  else
  {
    v19 = Object;
    if ( Object )
    {
      v11 = SepQueryNameString(Object, &P, AbsoluteObjectName, SecurityDescriptor);
      if ( v11 < 0 )
      {
        v21 = v60;
        goto LABEL_37;
      }
      if ( P )
      {
        v49 = SourceString;
        if ( *((_WORD *)P + 1) != (_WORD)SourceString )
          v49 = (const UNICODE_STRING *)P;
        SourceString = v49;
      }
    }
  }
  if ( ObjectTypeName && ObjectTypeName->Length )
  {
    v20 = ObjectTypeName;
LABEL_23:
    v21 = v60;
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
      v51 = TransactionId;
      if ( !TransactionId )
        v51 = (GUID *)(AuxData + 32);
      v52 = SourceString;
      SepAdtOpenObjectAuditAlarm(
        v58,
        (int)&SeSubsystemName,
        0,
        (int)v20,
        (__int64)SourceString,
        v68,
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
        (__int64)v51,
        (__int64)AccessState);
      SepAdtStagingEvent(
        v58,
        v53,
        0,
        (_DWORD)v20,
        (__int64)v52,
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
    v20 = v64;
    goto LABEL_23;
  }
  v50 = SepQueryTypeString(v19, &v60, AbsoluteObjectName, SecurityDescriptor);
  v21 = v60;
  v11 = v50;
  if ( v50 >= 0 )
  {
    v20 = v64;
    if ( v60 )
      v20 = (const UNICODE_STRING *)v60;
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
