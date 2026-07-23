/*
 * XREFs of SepAdtCloseObjectAuditAlarm @ 0x140A9EE24
 * Callers:
 *     SeCloseObjectAuditAlarmForNonObObject @ 0x140819D20 (SeCloseObjectAuditAlarmForNonObObject.c)
 *     ObCloseHandleTableEntry2 @ 0x14092AF00 (ObCloseHandleTableEntry2.c)
 *     NtCloseObjectAuditAlarm @ 0x140A9B2F0 (NtCloseObjectAuditAlarm.c)
 *     SeCloseObjectAuditAlarm @ 0x140A9EDC0 (SeCloseObjectAuditAlarm.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x140215728 (SepAdtLogAuditRecord.c)
 *     PsGetCurrentThreadProcess @ 0x1404A3C80 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SepAuditFailed @ 0x14090B840 (SepAuditFailed.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14090B910 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x14090EA50 (SepAdtAuditThisEventWithContext.c)
 *     ObNormalizeHandleValue @ 0x14091F114 (ObNormalizeHandleValue.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14091F7B0 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SepAdtCloseObjectAuditAlarm(
        unsigned __int16 *a1,
        unsigned __int64 a2,
        struct _SECURITY_SUBJECT_CONTEXT *SubjectContext,
        __int64 a4,
        char a5)
{
  _KPROCESS *CurrentThreadProcess; // rax
  struct _LIST_ENTRY *Flink; // rsi
  signed int AllocatedFullProcessImageName; // eax
  const int *v11; // r8
  _QWORD **ClientToken; // rdx
  _QWORD **PrimaryToken; // rax
  _QWORD *v14; // rax
  __int64 *v15; // rax
  int v16; // ecx
  _QWORD *v17; // rax
  int v18; // r9d
  int v19; // eax
  int v20; // r10d
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD Src[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v24; // [rsp+60h] [rbp-A0h]
  __int16 v25; // [rsp+62h] [rbp-9Eh]
  int v26; // [rsp+68h] [rbp-98h]
  int v27; // [rsp+6Ch] [rbp-94h]
  __int64 v28; // [rsp+80h] [rbp-80h]
  int v29; // [rsp+88h] [rbp-78h]
  int v30; // [rsp+8Ch] [rbp-74h]
  const int *v31; // [rsp+A0h] [rbp-60h]
  int v32; // [rsp+A8h] [rbp-58h]
  int v33; // [rsp+ACh] [rbp-54h]
  _QWORD *v34; // [rsp+B0h] [rbp-50h]
  int v35; // [rsp+C8h] [rbp-38h]
  int v36; // [rsp+CCh] [rbp-34h]
  const int *v37; // [rsp+E0h] [rbp-20h]
  int v38; // [rsp+E8h] [rbp-18h]
  int v39; // [rsp+ECh] [rbp-14h]
  unsigned __int64 v40; // [rsp+F0h] [rbp-10h]
  int v41; // [rsp+108h] [rbp+8h]
  int v42; // [rsp+10Ch] [rbp+Ch]
  struct _LIST_ENTRY *v43; // [rsp+110h] [rbp+10h]
  int v44; // [rsp+128h] [rbp+28h]
  int v45; // [rsp+12Ch] [rbp+2Ch]
  PVOID v46; // [rsp+140h] [rbp+40h]

  P = 0LL;
  LOWORD(v21) = 0;
  if ( SepAdtAuditObjectAccessWithContext(a4, a1, 1u, 0, SubjectContext, a5, (__int16 *)&v21)
    && SepAdtAuditThisEventWithContext(124LL, 1, 0, SubjectContext) )
  {
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
    AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64 *)&P);
    if ( AllocatedFullProcessImageName < 0 )
    {
      SepAuditFailed(AllocatedFullProcessImageName);
    }
    else
    {
      memset_0(Src, 0, 0x418uLL);
      v11 = &SeSubsystemName;
      ClientToken = (_QWORD **)SubjectContext->ClientToken;
      v24 = v21;
      if ( a1 )
        v11 = (const int *)a1;
      Src[0] = 3;
      Src[1] = 4658;
      PrimaryToken = ClientToken;
      v25 = 8;
      v26 = 4;
      if ( !ClientToken )
        PrimaryToken = (_QWORD **)SubjectContext->PrimaryToken;
      v27 = 4 * *(unsigned __int8 *)(*PrimaryToken[19] + 1LL) + 8;
      v14 = ClientToken;
      if ( !ClientToken )
        v14 = SubjectContext->PrimaryToken;
      v15 = (__int64 *)v14[19];
      v29 = 1;
      v31 = v11;
      v32 = 5;
      v28 = *v15;
      v16 = *(unsigned __int16 *)v11 + 16;
      v33 = 8;
      v30 = v16;
      if ( !ClientToken )
        ClientToken = (_QWORD **)SubjectContext->PrimaryToken;
      v17 = ClientToken[3];
      v36 = v16;
      v34 = v17;
      v38 = 11;
      v35 = 1;
      v37 = v11;
      v39 = 8;
      v40 = ObNormalizeHandleValue(a2);
      v46 = P;
      v41 = v18;
      v19 = *(unsigned __int16 *)P + 16;
      v42 = v20;
      v45 = v19;
      v43 = Flink;
      v44 = 2;
      Src[2] = 7;
      SepAdtLogAuditRecord(Src);
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
}
