/*
 * XREFs of SeTokenDefaultDaclChangedAuditAlarm @ 0x140AE2774
 * Callers:
 *     NtSetInformationToken @ 0x140816660 (NtSetInformationToken.c)
 * Callees:
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSecurityDescriptor @ 0x140901ED0 (SeCaptureSecurityDescriptor.c)
 *     SepAuditFailed @ 0x14090B840 (SepAuditFailed.c)
 *     SepAdtAuditThisEventWithContext @ 0x14090EA50 (SepAdtAuditThisEventWithContext.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14091D6BC (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SeReleaseSecurityDescriptor @ 0x140A60CA0 (SeReleaseSecurityDescriptor.c)
 *     SepQueryTypeString @ 0x140A61E9C (SepQueryTypeString.c)
 *     SepIsAclEqual @ 0x140AE29D8 (SepIsAclEqual.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SeTokenDefaultDaclChangedAuditAlarm(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  PVOID v5; // rdi
  unsigned __int16 *v6; // r14
  void *v7; // rsi
  _QWORD **PrimaryToken; // r13
  __int64 v11; // r15
  signed int v12; // ebx
  int v13; // eax
  int v14; // eax
  __int64 v15; // [rsp+58h] [rbp-61h] BYREF
  __int64 v16; // [rsp+60h] [rbp-59h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp-51h] BYREF
  _OWORD Src[2]; // [rsp+88h] [rbp-31h] BYREF
  __int64 v19; // [rsp+A8h] [rbp-11h]
  _OWORD v20[2]; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v21; // [rsp+D0h] [rbp+17h]
  PVOID v22; // [rsp+118h] [rbp+5Fh] BYREF
  __int64 v23; // [rsp+128h] [rbp+6Fh]

  v23 = a3;
  v22 = 0LL;
  v16 = 0LL;
  v19 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v5 = 0LL;
  v6 = 0LL;
  v21 = 0LL;
  v7 = 0LL;
  memset(Src, 0, sizeof(Src));
  v15 = 0LL;
  memset(v20, 0, sizeof(v20));
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
      v14 = SepQueryTypeString(a2, &v22);
      v5 = v22;
      v12 = v14;
      if ( v14 < 0 )
        goto LABEL_17;
      if ( v22 )
        v6 = (unsigned __int16 *)v22;
    }
    LOBYTE(Src[0]) = 1;
    if ( SWORD1(Src[0]) < 0 )
      goto LABEL_30;
    v19 = 0LL;
    if ( a4 )
      v19 = a4;
    WORD1(Src[0]) = WORD1(Src[0]) & 0xFFF3 | 4;
    v12 = SeCaptureSecurityDescriptor((unsigned __int16 *)Src, 0, 1, 1, (unsigned __int16 **)&v16);
    if ( v12 < 0 )
      goto LABEL_17;
    LOBYTE(v20[0]) = 1;
    if ( SWORD1(v20[0]) < 0 )
    {
LABEL_30:
      v12 = -1073741703;
    }
    else
    {
      v21 = 0LL;
      if ( v11 )
        v21 = v11;
      WORD1(v20[0]) = WORD1(v20[0]) & 0xFFF3 | 4;
      v13 = SeCaptureSecurityDescriptor((unsigned __int16 *)v20, 0, 1, 1, (unsigned __int16 **)&v15);
      v7 = (void *)v15;
      v12 = v13;
      if ( v13 >= 0 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (__int64 *)&SubjectContext,
          (unsigned __int16 *)&SeSubsystemName,
          v6,
          0LL,
          v23,
          *PrimaryToken[19],
          v16,
          4,
          v15);
    }
LABEL_17:
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    if ( v16 )
      SeReleaseSecurityDescriptor((void *)v16, 0, 1);
    if ( v7 )
      SeReleaseSecurityDescriptor(v7, 0, 1);
    if ( v12 < 0 )
      SepAuditFailed(v12);
    goto LABEL_5;
  }
  SepAuditFailed(-1073741700);
}
