/*
 * XREFs of SepAuditAssignPrimaryToken @ 0x140819088
 * Callers:
 *     SeExchangePrimaryToken @ 0x14081AC68 (SeExchangePrimaryToken.c)
 *     SeAssignPrimaryToken @ 0x140A7BF34 (SeAssignPrimaryToken.c)
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

void __fastcall SepAuditAssignPrimaryToken(__int64 a1, __int64 a2)
{
  _KPROCESS *CurrentThreadProcess; // rax
  _KPROCESS *v5; // rbx
  struct _LIST_ENTRY *Flink; // r12
  _QWORD **v7; // rdi
  int AllocatedFullProcessImageName; // ebx
  __int64 v9; // r14
  __int64 v10; // r15
  int v11; // eax
  int v12; // eax
  int v13; // eax
  PVOID P; // [rsp+28h] [rbp-E0h] BYREF
  PVOID SubjectContext[5]; // [rsp+30h] [rbp-D8h] BYREF
  _DWORD Src[12]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+88h] [rbp-80h]
  int v18; // [rsp+90h] [rbp-78h]
  int v19; // [rsp+94h] [rbp-74h]
  const int *v20; // [rsp+A8h] [rbp-60h]
  int v21; // [rsp+B0h] [rbp-58h]
  int v22; // [rsp+B4h] [rbp-54h]
  _QWORD *v23; // [rsp+B8h] [rbp-50h]
  int v24; // [rsp+D0h] [rbp-38h]
  int v25; // [rsp+D4h] [rbp-34h]
  __int64 v26; // [rsp+D8h] [rbp-30h]
  int v27; // [rsp+F0h] [rbp-18h]
  int v28; // [rsp+F4h] [rbp-14h]
  __int64 v29; // [rsp+F8h] [rbp-10h]
  int v30; // [rsp+110h] [rbp+8h]
  int v31; // [rsp+114h] [rbp+Ch]
  PVOID v32; // [rsp+128h] [rbp+20h]
  int v33; // [rsp+130h] [rbp+28h]
  int v34; // [rsp+134h] [rbp+2Ch]
  struct _LIST_ENTRY *v35; // [rsp+138h] [rbp+30h]
  int v36; // [rsp+150h] [rbp+48h]
  int v37; // [rsp+154h] [rbp+4Ch]
  PVOID v38; // [rsp+168h] [rbp+60h]

  memset(SubjectContext, 0, sizeof(SubjectContext));
  P = 0LL;
  memset_0(Src, 0, 0x418uLL);
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  v5 = CurrentThreadProcess;
  if ( CurrentThreadProcess[1].LastRebalanceQpc )
  {
    Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
    SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext[1]);
    v7 = (_QWORD **)SubjectContext[3];
    if ( SubjectContext[1] )
      v7 = (_QWORD **)SubjectContext[1];
    if ( v7 )
    {
      v9 = *v7[19];
      AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(v5, SubjectContext);
      if ( AllocatedFullProcessImageName >= 0 )
      {
        v10 = *(_QWORD *)(a1 + 464);
        AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(a1, &P);
        if ( AllocatedFullProcessImageName >= 0 )
        {
          v11 = *(unsigned __int8 *)(v9 + 1);
          Src[0] = 5;
          v21 = 5;
          Src[4] = 524422;
          Src[1] = 4696;
          Src[7] = 4 * v11 + 8;
          Src[6] = 4;
          v17 = v9;
          v20 = &SeSubsystemName;
          v23 = v7[3];
          v26 = *(_QWORD *)(a2 + 24);
          v12 = *(unsigned __int16 *)P + 16;
          v32 = P;
          v31 = v12;
          v38 = SubjectContext[0];
          v18 = 1;
          v13 = *(unsigned __int16 *)SubjectContext[0] + 16;
          v19 = 32;
          v37 = v13;
          v22 = 8;
          v24 = 35;
          v25 = 8;
          v27 = 11;
          v28 = 8;
          v29 = v10;
          v30 = 2;
          v33 = 11;
          v34 = 8;
          v35 = Flink;
          v36 = 2;
          Src[2] = 8;
          SepAdtLogAuditRecord(Src);
        }
      }
    }
    else
    {
      AllocatedFullProcessImageName = -1073741700;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( SubjectContext[0] )
      ExFreePoolWithTag(SubjectContext[0], 0);
    if ( AllocatedFullProcessImageName < 0 )
      SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext[1]);
  }
}
