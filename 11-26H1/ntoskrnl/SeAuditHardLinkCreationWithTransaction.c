/*
 * XREFs of SeAuditHardLinkCreationWithTransaction @ 0x140B16400
 * Callers:
 *     SeAuditHardLinkCreation @ 0x140B163E0 (SeAuditHardLinkCreation.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x140215728 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 */

void __stdcall SeAuditHardLinkCreationWithTransaction(
        PUNICODE_STRING FileName,
        PUNICODE_STRING LinkName,
        BOOLEAN bSuccess,
        GUID *TransactionId)
{
  GUID *v8; // rsi
  _QWORD *PrimaryToken; // r8
  _QWORD *ClientToken; // rax
  __int64 *v11; // rax
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+28h] [rbp-E0h] BYREF
  _DWORD Src[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v14; // [rsp+58h] [rbp-B0h]
  __int16 v15; // [rsp+5Ah] [rbp-AEh]
  int v16; // [rsp+60h] [rbp-A8h]
  int v17; // [rsp+64h] [rbp-A4h]
  __int64 v18; // [rsp+78h] [rbp-90h]
  int v19; // [rsp+80h] [rbp-88h]
  int v20; // [rsp+84h] [rbp-84h]
  const int *v21; // [rsp+98h] [rbp-70h]
  int v22; // [rsp+A0h] [rbp-68h]
  int v23; // [rsp+A4h] [rbp-64h]
  __int64 v24; // [rsp+A8h] [rbp-60h]
  int v25; // [rsp+C0h] [rbp-48h]
  int v26; // [rsp+C4h] [rbp-44h]
  PUNICODE_STRING v27; // [rsp+D8h] [rbp-30h]
  int v28; // [rsp+E0h] [rbp-28h]
  int v29; // [rsp+E4h] [rbp-24h]
  PUNICODE_STRING v30; // [rsp+F8h] [rbp-10h]
  int v31; // [rsp+100h] [rbp-8h]
  int v32; // [rsp+104h] [rbp-4h]
  GUID *v33; // [rsp+118h] [rbp+10h]
  __int128 v34; // [rsp+468h] [rbp+360h] BYREF

  SubjectContext.ClientToken = 0LL;
  SubjectContext.ImpersonationLevel = 0x80000000;
  memset(&SubjectContext.ImpersonationLevel + 1, 0, 20);
  memset_0(Src, 0, 0x418uLL);
  Src[0] = 3;
  v14 = 117;
  v8 = (GUID *)&v34;
  Src[1] = 4664;
  if ( TransactionId )
    v8 = TransactionId;
  v15 = 8;
  v34 = 0LL;
  if ( !bSuccess )
    v15 = 16;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  ClientToken = SubjectContext.PrimaryToken;
  v16 = 4;
  if ( SubjectContext.ClientToken )
    ClientToken = SubjectContext.ClientToken;
  v19 = 1;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  v20 = 32;
  v22 = 5;
  v25 = 2;
  v11 = (__int64 *)ClientToken[19];
  v28 = 2;
  v23 = 8;
  v27 = FileName;
  v18 = *v11;
  v30 = LinkName;
  v31 = 13;
  LODWORD(v11) = *(unsigned __int8 *)(v18 + 1);
  v32 = 16;
  v33 = v8;
  Src[2] = 6;
  v17 = 4 * (_DWORD)v11 + 8;
  v21 = &SeSubsystemName;
  v24 = PrimaryToken[3];
  v26 = FileName->Length + 16;
  v29 = LinkName->Length + 16;
  SepAdtLogAuditRecord(Src);
  SeReleaseSubjectContext(&SubjectContext);
}
