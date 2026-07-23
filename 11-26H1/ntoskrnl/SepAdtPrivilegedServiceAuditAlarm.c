/*
 * XREFs of SepAdtPrivilegedServiceAuditAlarm @ 0x14090E660
 * Callers:
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x14090BCA0 (ObpGrantAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14090CA40 (CmpCheckOpenAccessOnKeyBody.c)
 *     ObpAdjustCreatorAccessState @ 0x14090D710 (ObpAdjustCreatorAccessState.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     SeSinglePrivilegeCheckEx @ 0x14090E300 (SeSinglePrivilegeCheckEx.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14090E4F0 (SePrivilegedServiceAuditAlarm.c)
 *     ObCreateObject @ 0x14090EB60 (ObCreateObject.c)
 *     CmpCreateKeyBody @ 0x14092BC40 (CmpCreateKeyBody.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x140A5DD30 (NtPrivilegedServiceAuditAlarm.c)
 *     SeCheckAuditPrivilege @ 0x140A5FE70 (SeCheckAuditPrivilege.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x140215728 (SepAdtLogAuditRecord.c)
 *     PsGetCurrentThreadProcess @ 0x1404A3C80 (PsGetCurrentThreadProcess.c)
 *     SepAdtCheckPrivilegeForSensitivity @ 0x1404B60C8 (SepAdtCheckPrivilegeForSensitivity.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SepAuditFailed @ 0x14090B840 (SepAuditFailed.c)
 *     SepAdtAuditThisEventWithContext @ 0x14090EA50 (SepAdtAuditThisEventWithContext.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14091F7B0 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SepFilterPrivilegeAudits @ 0x140A5FFB0 (SepFilterPrivilegeAudits.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SepAdtPrivilegedServiceAuditAlarm(
        __int64 a1,
        const int *a2,
        unsigned __int16 *a3,
        __int64 a4,
        __int64 a5,
        unsigned int *a6,
        unsigned __int8 a7)
{
  __int16 v9; // r14
  char v10; // r15
  char v11; // al
  char v12; // bl
  _KPROCESS *CurrentThreadProcess; // rax
  struct _LIST_ENTRY *Flink; // rdi
  signed int AllocatedFullProcessImageName; // ebx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  const int *v19; // rdx
  int v20; // eax
  int v21; // r8d
  unsigned int v22; // eax
  int v23; // eax
  int v24; // eax
  char v25; // [rsp+20h] [rbp-E0h] BYREF
  char v26[7]; // [rsp+21h] [rbp-DFh] BYREF
  PVOID P; // [rsp+28h] [rbp-D8h] BYREF
  const int *v28; // [rsp+30h] [rbp-D0h]
  unsigned __int16 *v29; // [rsp+38h] [rbp-C8h]
  _DWORD Src[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v31; // [rsp+50h] [rbp-B0h]
  __int16 v32; // [rsp+52h] [rbp-AEh]
  int v33; // [rsp+58h] [rbp-A8h]
  int v34; // [rsp+5Ch] [rbp-A4h]
  __int64 v35; // [rsp+70h] [rbp-90h]
  int v36; // [rsp+78h] [rbp-88h]
  int v37; // [rsp+7Ch] [rbp-84h]
  const int *v38; // [rsp+90h] [rbp-70h]
  int v39; // [rsp+98h] [rbp-68h]
  int v40; // [rsp+9Ch] [rbp-64h]
  __int64 v41; // [rsp+A0h] [rbp-60h]
  int v42; // [rsp+B8h] [rbp-48h]
  int v43; // [rsp+BCh] [rbp-44h]
  const int *v44; // [rsp+D0h] [rbp-30h]
  int v45; // [rsp+D8h] [rbp-28h]
  int v46; // [rsp+DCh] [rbp-24h]
  unsigned __int16 *v47; // [rsp+F0h] [rbp-10h]
  int v48; // [rsp+F8h] [rbp-8h]
  int v49; // [rsp+FCh] [rbp-4h]
  unsigned int *v50; // [rsp+110h] [rbp+10h]
  int v51; // [rsp+118h] [rbp+18h]
  int v52; // [rsp+11Ch] [rbp+1Ch]
  struct _LIST_ENTRY *v53; // [rsp+120h] [rbp+20h]
  int v54; // [rsp+138h] [rbp+38h]
  int v55; // [rsp+13Ch] [rbp+3Ch]
  PVOID v56; // [rsp+150h] [rbp+50h]

  v29 = a3;
  v28 = a2;
  memset_0(Src, 0, 0x418uLL);
  v9 = 131;
  P = 0LL;
  v25 = 0;
  v26[0] = 0;
  v10 = SepAdtAuditThisEventWithContext(131LL, a7, a7 == 0, a1);
  v11 = SepAdtAuditThisEventWithContext(132LL, a7, a7 == 0, a1);
  v12 = v11;
  if ( (v10 || v11) && (unsigned __int8)SepFilterPrivilegeAudits(0LL, a6) )
  {
    if ( !v10 || !v12 || !a6 || !*a6 )
    {
      SepAdtCheckPrivilegeForSensitivity(a6, &v25, v26);
      if ( !v10 || !v25 )
      {
        if ( !v12 || !v26[0] )
          return;
        v9 = 132;
      }
    }
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
    AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(CurrentThreadProcess, &P);
    if ( AllocatedFullProcessImageName >= 0 )
    {
      v16 = a4;
      if ( !a4 )
        v16 = a5;
      v17 = **(_QWORD **)(v16 + 152);
      v18 = *(_QWORD *)(a5 + 24);
      v19 = &SeSubsystemName;
      if ( v28 )
        v19 = v28;
      Src[0] = 4;
      v31 = v9;
      Src[1] = 4673;
      if ( a7 )
        v32 = 8;
      else
        v32 = 16;
      v33 = 4;
      v20 = *(unsigned __int8 *)(v17 + 1);
      v35 = v17;
      v21 = *(unsigned __int16 *)v19 + 16;
      v36 = 1;
      v37 = v21;
      v34 = 4 * v20 + 8;
      v38 = v19;
      v39 = 5;
      v40 = 8;
      if ( a4 )
        v41 = *(_QWORD *)(a4 + 24);
      else
        v41 = v18;
      v42 = 1;
      v43 = v21;
      v44 = v19;
      if ( v29 )
      {
        v24 = *v29;
        v45 = 1;
        v46 = v24 + 16;
        v47 = v29;
      }
      if ( a6 )
      {
        v22 = *a6;
        if ( *a6 )
        {
          v48 = 8;
          v50 = a6;
          v49 = 12 * v22 + 8;
        }
      }
      v51 = 11;
      v52 = 8;
      v53 = Flink;
      v54 = 2;
      v23 = *(unsigned __int16 *)P + 16;
      v56 = P;
      v55 = v23;
      Src[2] = 8;
      SepAdtLogAuditRecord(Src);
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( AllocatedFullProcessImageName < 0 )
      SepAuditFailed(AllocatedFullProcessImageName);
  }
}
