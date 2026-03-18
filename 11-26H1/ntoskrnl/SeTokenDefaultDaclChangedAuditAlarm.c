/*
 * XREFs of SeTokenDefaultDaclChangedAuditAlarm @ 0x1409F8EF4
 * Callers:
 *     NtSetInformationToken @ 0x140810BD0 (NtSetInformationToken.c)
 * Callees:
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSecurityDescriptor @ 0x1409263C0 (SeCaptureSecurityDescriptor.c)
 *     SepAuditFailed @ 0x14092FD10 (SepAuditFailed.c)
 *     SepAdtAuditThisEventWithContext @ 0x140932EA0 (SepAdtAuditThisEventWithContext.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 *     SeReleaseSecurityDescriptor @ 0x1409F8160 (SeReleaseSecurityDescriptor.c)
 *     SepIsAclEqual @ 0x1409F9158 (SepIsAclEqual.c)
 *     SepQueryTypeString @ 0x1409F95CC (SepQueryTypeString.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409F9DCC (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall SeTokenDefaultDaclChangedAuditAlarm(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  void *v5; // rdi
  int v6; // r14d
  void *v7; // rsi
  _QWORD **PrimaryToken; // r13
  __int64 v11; // r15
  __int64 v12; // r8
  __int64 v13; // r9
  signed int v14; // ebx
  int v15; // eax
  int v16; // eax
  __int64 v17; // [rsp+58h] [rbp-61h] BYREF
  __int64 v18; // [rsp+60h] [rbp-59h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp-51h] BYREF
  _OWORD Src[2]; // [rsp+88h] [rbp-31h] BYREF
  __int64 v21; // [rsp+A8h] [rbp-11h]
  _OWORD v22[2]; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v23; // [rsp+D0h] [rbp+17h]
  void *v24; // [rsp+118h] [rbp+5Fh] BYREF
  __int64 v25; // [rsp+128h] [rbp+6Fh]

  v25 = a3;
  v24 = 0LL;
  v18 = 0LL;
  v21 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v5 = 0LL;
  v6 = 0;
  v23 = 0LL;
  v7 = 0LL;
  memset(Src, 0, sizeof(Src));
  v17 = 0LL;
  memset(v22, 0, sizeof(v22));
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = (_QWORD **)SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = (_QWORD **)SubjectContext.ClientToken;
  if ( PrimaryToken )
  {
    if ( !SepAdtAuditThisEventWithContext(142LL, 1, 0, &SubjectContext)
      || (v11 = a5, (unsigned __int8)SepIsAclEqual(a4, a5)) )
    {
LABEL_5:
      SeReleaseSubjectContext(&SubjectContext);
      return;
    }
    if ( a2 )
    {
      v16 = SepQueryTypeString(a2, &v24, v12, v13);
      v5 = v24;
      v14 = v16;
      if ( v16 < 0 )
        goto LABEL_17;
      if ( v24 )
        v6 = (int)v24;
    }
    LOBYTE(Src[0]) = 1;
    if ( SWORD1(Src[0]) < 0 )
      goto LABEL_30;
    v21 = 0LL;
    if ( a4 )
      v21 = a4;
    WORD1(Src[0]) = WORD1(Src[0]) & 0xFFF3 | 4;
    v14 = SeCaptureSecurityDescriptor((unsigned __int16 *)Src, 0, 1, 1, (unsigned __int16 **)&v18);
    if ( v14 < 0 )
      goto LABEL_17;
    LOBYTE(v22[0]) = 1;
    if ( SWORD1(v22[0]) < 0 )
    {
LABEL_30:
      v14 = -1073741703;
    }
    else
    {
      v23 = 0LL;
      if ( v11 )
        v23 = v11;
      WORD1(v22[0]) = WORD1(v22[0]) & 0xFFF3 | 4;
      v15 = SeCaptureSecurityDescriptor((unsigned __int16 *)v22, 0, 1, 1, (unsigned __int16 **)&v17);
      v7 = (void *)v17;
      v14 = v15;
      if ( v15 >= 0 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (unsigned int)&SubjectContext,
          (unsigned int)&SeSubsystemName,
          v6,
          0,
          v25,
          *PrimaryToken[19],
          v18,
          4,
          v17);
    }
LABEL_17:
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    if ( v18 )
      SeReleaseSecurityDescriptor((void *)v18, 0, 1);
    if ( v7 )
      SeReleaseSecurityDescriptor(v7, 0, 1);
    if ( v14 < 0 )
      SepAuditFailed(v14);
    goto LABEL_5;
  }
  SepAuditFailed(-1073741700);
}
