/*
 * XREFs of SeReportSecurityEventWithSubCategory @ 0x140215470
 * Callers:
 *     SeReportSecurityEvent @ 0x14063E850 (SeReportSecurityEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140861774 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x140215728 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x14090EA50 (SepAdtAuditThisEventWithContext.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 */

NTSTATUS __stdcall SeReportSecurityEventWithSubCategory(
        ULONG Flags,
        PUNICODE_STRING SourceName,
        PSID UserSid,
        PSE_ADT_PARAMETER_ARRAY AuditParameters,
        ULONG AuditSubcategoryId)
{
  __int64 v6; // r8
  PUNICODE_STRING v8; // rbx
  ULONG v9; // ecx
  USHORT Type; // ax
  unsigned __int8 CurrentIrql; // r12
  char v12; // al
  unsigned __int8 *v13; // rdi
  ULONG AuditId; // edx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  ULONG ParameterCount; // ebx
  int Length; // eax
  __int64 v21; // rcx
  _QWORD *v22; // r9
  _QWORD SubjectContext[5]; // [rsp+20h] [rbp-E8h] BYREF
  _DWORD Src[2]; // [rsp+48h] [rbp-C0h] BYREF
  int v25; // [rsp+50h] [rbp-B8h]
  __int16 v26; // [rsp+58h] [rbp-B0h]
  USHORT v27; // [rsp+5Ah] [rbp-AEh]
  int v28; // [rsp+5Ch] [rbp-ACh]
  _DWORD v29[6]; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int8 *v30; // [rsp+78h] [rbp-90h]
  int v31; // [rsp+80h] [rbp-88h]
  int v32; // [rsp+84h] [rbp-84h]
  const int *v33; // [rsp+98h] [rbp-70h]
  int v34; // [rsp+A0h] [rbp-68h]
  int v35; // [rsp+A4h] [rbp-64h]
  PUNICODE_STRING v36; // [rsp+B8h] [rbp-50h]

  v6 = 0LL;
  v8 = SourceName;
  memset(&SubjectContext[1], 0, 32);
  if ( !Flags )
  {
    if ( SourceName )
    {
      if ( SourceName->Buffer )
      {
        if ( SourceName->Length )
        {
          if ( AuditParameters )
          {
            v9 = AuditSubcategoryId - 100;
            if ( AuditSubcategoryId - 100 <= 0x3B && AuditParameters->ParameterCount <= 0x1C )
            {
              Type = AuditParameters->Type;
              if ( (Type & 0x18) != 0 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql < 2u )
                {
                  if ( UserSid )
                  {
                    v13 = (unsigned __int8 *)UserSid;
                  }
                  else
                  {
                    SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext[1]);
                    v6 = 0LL;
                    v21 = SubjectContext[3];
                    if ( SubjectContext[1] )
                      v21 = SubjectContext[1];
                    v13 = **(unsigned __int8 ***)(v21 + 152);
                    Type = AuditParameters->Type;
                  }
                  v22 = &SubjectContext[1];
                  if ( v13 == UserSid )
                    v22 = 0LL;
                  LOBYTE(v6) = Type == 16;
                  LOBYTE(SourceName) = Type == 8;
                  if ( !(unsigned __int8)SepAdtAuditThisEventWithContext(AuditSubcategoryId, SourceName, v6, v22) )
                  {
LABEL_30:
                    if ( v13 )
                    {
                      if ( v13 != UserSid )
                        SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext[1]);
                    }
                    return 0;
                  }
                }
                else
                {
                  if ( Type == 8 )
                    v12 = *((_BYTE *)&SepRmCapTableLock.SListFaultAddress + 2 * v9);
                  else
                    v12 = *((_BYTE *)&SepRmCapTableLock.SListFaultAddress + 2 * v9 + 1);
                  if ( !v12 )
                    return 0;
                  v13 = *(unsigned __int8 **)((char *)&RtlpBootStatHandleLock.116 + 4);
                  if ( UserSid )
                    v13 = (unsigned __int8 *)UserSid;
                }
                memset_0(Src, 0, 0x418uLL);
                AuditId = AuditParameters->AuditId;
                Src[0] = AuditParameters->CategoryId;
                v27 = AuditParameters->Type;
                v15 = v13[1];
                Src[1] = AuditId;
                v26 = AuditSubcategoryId;
                v29[0] = 4;
                v30 = v13;
                v29[1] = 4 * v15 + 8;
                v33 = &SeSubsystemName;
                v31 = 1;
                v32 = 32;
                v25 = 2;
                if ( AuditSubcategoryId == 123 )
                {
                  v28 |= 6u;
                  Length = v8->Length;
                  v34 = 1;
                  v16 = 3LL;
                  v35 = Length + 16;
                  v36 = v8;
                  v25 = 3;
                }
                else
                {
                  v16 = 2LL;
                  v17 = v28 | 8;
                  v28 |= 8u;
                  if ( AuditId < 0x5FF )
                    v28 = v17 | 2;
                }
                ParameterCount = AuditParameters->ParameterCount;
                memmove(&v29[8 * v16], AuditParameters->Parameters, 32LL * ParameterCount);
                v25 += ParameterCount;
                SepAdtLogAuditRecord(Src);
                if ( CurrentIrql >= 2u )
                  return 0;
                goto LABEL_30;
              }
            }
          }
        }
      }
    }
  }
  return -1073741811;
}
