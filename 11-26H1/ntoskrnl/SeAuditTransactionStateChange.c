/*
 * XREFs of SeAuditTransactionStateChange @ 0x140B33F70
 * Callers:
 *     <none>
 * Callees:
 *     SepAdtLogAuditRecord @ 0x140215728 (SepAdtLogAuditRecord.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     PsGetCurrentThreadProcess @ 0x1404A3C80 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14091F7B0 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __stdcall SeAuditTransactionStateChange(GUID *TransactionId, GUID *ResourceManagerId, ULONG NewTransactionState)
{
  __int64 v3; // r15
  GUID *v6; // rsi
  _QWORD *PrimaryToken; // rbx
  _QWORD **ClientToken; // rax
  __int64 v9; // rbx
  __int64 v10; // r14
  _KPROCESS *CurrentThreadProcess; // rax
  __int64 *v12; // rdi
  int v13; // eax
  _KPROCESS *v14; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 P[3]; // [rsp+28h] [rbp-E0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+40h] [rbp-C8h] BYREF
  _DWORD Src[4]; // [rsp+68h] [rbp-A0h] BYREF
  __int16 v19; // [rsp+78h] [rbp-90h]
  __int16 v20; // [rsp+7Ah] [rbp-8Eh]
  int v21; // [rsp+80h] [rbp-88h]
  int v22; // [rsp+84h] [rbp-84h]
  __int64 v23; // [rsp+98h] [rbp-70h]
  int v24; // [rsp+A0h] [rbp-68h]
  int v25; // [rsp+A4h] [rbp-64h]
  const int *v26; // [rsp+B8h] [rbp-50h]
  int v27; // [rsp+C0h] [rbp-48h]
  int v28; // [rsp+C4h] [rbp-44h]
  __int64 v29; // [rsp+C8h] [rbp-40h]
  int v30; // [rsp+E0h] [rbp-28h]
  int v31; // [rsp+E4h] [rbp-24h]
  GUID *v32; // [rsp+F8h] [rbp-10h]
  int v33; // [rsp+100h] [rbp-8h]
  int v34; // [rsp+104h] [rbp-4h]
  __int64 v35; // [rsp+108h] [rbp+0h]
  int v36; // [rsp+120h] [rbp+18h]
  int v37; // [rsp+124h] [rbp+1Ch]
  GUID *v38; // [rsp+138h] [rbp+30h]
  int v39; // [rsp+140h] [rbp+38h]
  int v40; // [rsp+144h] [rbp+3Ch]
  struct _LIST_ENTRY *v41; // [rsp+148h] [rbp+40h]
  int v42; // [rsp+160h] [rbp+58h]
  int v43; // [rsp+164h] [rbp+5Ch]
  __int64 *v44; // [rsp+178h] [rbp+70h]
  __int128 v45; // [rsp+488h] [rbp+380h] BYREF

  v3 = NewTransactionState;
  SubjectContext.ClientToken = 0LL;
  SubjectContext.ImpersonationLevel = 0x80000000;
  memset(&SubjectContext.ImpersonationLevel + 1, 0, 20);
  memset_0(Src, 0, 0x418uLL);
  P[0] = 0LL;
  v19 = 117;
  Src[0] = 3;
  v6 = (GUID *)&v45;
  Src[1] = 4985;
  if ( ResourceManagerId )
    v6 = ResourceManagerId;
  v20 = 8;
  v45 = 0LL;
  *(_OWORD *)&P[1] = 0LL;
  if ( (_DWORD)v3 == 6 )
    v20 = 16;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  ClientToken = (_QWORD **)SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
  {
    ClientToken = (_QWORD **)SubjectContext.ClientToken;
    PrimaryToken = SubjectContext.ClientToken;
  }
  v9 = PrimaryToken[3];
  v10 = *ClientToken[19];
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  if ( (int)PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, P) < 0 || (v12 = (__int64 *)P[0]) == 0LL )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&P[1], L"?");
    v12 = &P[1];
    P[0] = (__int64)&P[1];
  }
  v13 = *(unsigned __int8 *)(v10 + 1);
  v29 = v9;
  v21 = 4;
  v23 = v10;
  v24 = 1;
  v22 = 4 * v13 + 8;
  v25 = 32;
  v27 = 5;
  v26 = &SeSubsystemName;
  v28 = 8;
  v30 = 13;
  v31 = 16;
  v32 = TransactionId;
  v33 = 3;
  v34 = 4;
  v35 = v3;
  v36 = 13;
  v37 = 16;
  v38 = v6;
  v39 = 11;
  v40 = 8;
  v14 = PsGetCurrentThreadProcess();
  v42 = 2;
  v44 = v12;
  Src[2] = 8;
  Flink = v14[1].Header.WaitListHead.Flink;
  LODWORD(v14) = *(unsigned __int16 *)v12 + 16;
  v41 = Flink;
  v43 = (int)v14;
  SepAdtLogAuditRecord(Src);
  SeReleaseSubjectContext(&SubjectContext);
  if ( P[0] )
  {
    if ( (__int64 *)P[0] != &P[1] )
      ExFreePoolWithTag((PVOID)P[0], 0);
  }
}
