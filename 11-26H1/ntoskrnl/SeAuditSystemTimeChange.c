/*
 * XREFs of SeAuditSystemTimeChange @ 0x140818998
 * Callers:
 *     NtSetSystemTime @ 0x14083C8F0 (NtSetSystemTime.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x140215728 (SepAdtLogAuditRecord.c)
 *     PsGetCurrentThreadProcess @ 0x1404A3C80 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SepAuditFailed @ 0x14090B840 (SepAuditFailed.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14091F7B0 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SeAuditSystemTimeChange(__int64 a1, __int64 a2)
{
  _QWORD *ClientToken; // rsi
  _QWORD *PrimaryToken; // r15
  _QWORD **v6; // rax
  __int64 v7; // r14
  _KPROCESS *CurrentThreadProcess; // r13
  int AllocatedFullProcessImageName; // eax
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  PVOID P; // [rsp+20h] [rbp-E0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+28h] [rbp-D8h] BYREF
  _DWORD Src[12]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+80h] [rbp-80h]
  int v17; // [rsp+88h] [rbp-78h]
  int v18; // [rsp+8Ch] [rbp-74h]
  const int *v19; // [rsp+A0h] [rbp-60h]
  int v20; // [rsp+A8h] [rbp-58h]
  int v21; // [rsp+ACh] [rbp-54h]
  __int64 v22; // [rsp+B0h] [rbp-50h]
  int v23; // [rsp+C8h] [rbp-38h]
  int v24; // [rsp+CCh] [rbp-34h]
  __int64 v25; // [rsp+D0h] [rbp-30h]
  int v26; // [rsp+E8h] [rbp-18h]
  int v27; // [rsp+ECh] [rbp-14h]
  __int64 v28; // [rsp+F0h] [rbp-10h]
  int v29; // [rsp+108h] [rbp+8h]
  int v30; // [rsp+10Ch] [rbp+Ch]
  struct _LIST_ENTRY *Flink; // [rsp+110h] [rbp+10h]
  int v32; // [rsp+128h] [rbp+28h]
  int v33; // [rsp+12Ch] [rbp+2Ch]
  PVOID v34; // [rsp+140h] [rbp+40h]

  P = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  ClientToken = SubjectContext.ClientToken;
  PrimaryToken = SubjectContext.PrimaryToken;
  v6 = (_QWORD **)SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    v6 = (_QWORD **)SubjectContext.ClientToken;
  v7 = *v6[19];
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  memset_0(Src, 0, 0x418uLL);
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(CurrentThreadProcess, &P);
  if ( AllocatedFullProcessImageName < 0 )
  {
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
  }
  else
  {
    v10 = *(unsigned __int8 *)(v7 + 1);
    Src[0] = 1;
    Src[1] = 4616;
    Src[4] = 524388;
    Src[6] = 4;
    Src[7] = 4 * v10 + 8;
    v19 = &SeSubsystemName;
    v16 = v7;
    v17 = 1;
    v18 = 32;
    v20 = 5;
    v21 = 8;
    if ( ClientToken )
      v11 = ClientToken[3];
    else
      v11 = PrimaryToken[3];
    v22 = v11;
    v23 = 12;
    v26 = 12;
    Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
    v12 = *(unsigned __int16 *)P + 16;
    v34 = P;
    v33 = v12;
    v24 = 8;
    v25 = a1;
    v27 = 8;
    v28 = a2;
    v29 = 11;
    v30 = 8;
    v32 = 2;
    Src[2] = 7;
    SepAdtLogAuditRecord(Src);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  SeReleaseSubjectContext(&SubjectContext);
}
