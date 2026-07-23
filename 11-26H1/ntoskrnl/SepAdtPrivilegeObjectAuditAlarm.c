/*
 * XREFs of SepAdtPrivilegeObjectAuditAlarm @ 0x14090AD10
 * Callers:
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     SeAuditHandleCreation @ 0x14091F860 (SeAuditHandleCreation.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x140A60090 (NtOpenObjectAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140A60CD0 (NtPrivilegeObjectAuditAlarm.c)
 *     PspCreateObjectHandle @ 0x140A7BDE4 (PspCreateObjectHandle.c)
 *     SePrivilegeObjectAuditAlarm @ 0x140A82960 (SePrivilegeObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x140B0BB70 (SeOpenObjectAuditAlarmForNonObObject.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x140215728 (SepAdtLogAuditRecord.c)
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 *     PsGetCurrentThreadProcess @ 0x1404A3C80 (PsGetCurrentThreadProcess.c)
 *     SepAdtCheckPrivilegeForSensitivity @ 0x1404B60C8 (SepAdtCheckPrivilegeForSensitivity.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SepAuditFailed @ 0x14090B840 (SepAuditFailed.c)
 *     SepAdtAuditThisEventWithContext @ 0x14090EA50 (SepAdtAuditThisEventWithContext.c)
 *     ObNormalizeHandleValue @ 0x14091F114 (ObNormalizeHandleValue.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14091F7B0 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SepFilterPrivilegeAudits @ 0x140A5FFB0 (SepFilterPrivilegeAudits.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall SepAdtPrivilegeObjectAuditAlarm(
        const int *a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8,
        unsigned int *a9,
        unsigned __int8 a10)
{
  __int16 v12; // si
  char v13; // r14
  char v14; // al
  char v15; // bl
  __int64 v17; // rax
  _KPROCESS *CurrentThreadProcess; // rax
  int AllocatedFullProcessImageName; // eax
  const int *v20; // rcx
  __int64 v21; // rbx
  int v22; // eax
  int v23; // edx
  int v24; // eax
  int v25; // eax
  int v26; // r9d
  unsigned int v27; // eax
  int v28; // eax
  char v29; // [rsp+20h] [rbp-E0h] BYREF
  char v30[7]; // [rsp+21h] [rbp-DFh] BYREF
  PVOID P; // [rsp+28h] [rbp-D8h] BYREF
  const int *v32; // [rsp+30h] [rbp-D0h]
  unsigned __int8 *v33; // [rsp+38h] [rbp-C8h]
  __int64 v34; // [rsp+40h] [rbp-C0h]
  _DWORD Src[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v36; // [rsp+60h] [rbp-A0h]
  __int16 v37; // [rsp+62h] [rbp-9Eh]
  int v38; // [rsp+68h] [rbp-98h]
  int v39; // [rsp+6Ch] [rbp-94h]
  unsigned __int8 *v40; // [rsp+80h] [rbp-80h]
  int v41; // [rsp+88h] [rbp-78h]
  int v42; // [rsp+8Ch] [rbp-74h]
  const int *v43; // [rsp+A0h] [rbp-60h]
  int v44; // [rsp+A8h] [rbp-58h]
  int v45; // [rsp+ACh] [rbp-54h]
  __int64 v46; // [rsp+B0h] [rbp-50h]
  int v47; // [rsp+C8h] [rbp-38h]
  int v48; // [rsp+CCh] [rbp-34h]
  const int *v49; // [rsp+E0h] [rbp-20h]
  int v50; // [rsp+E8h] [rbp-18h]
  int v51; // [rsp+ECh] [rbp-14h]
  unsigned __int16 *v52; // [rsp+100h] [rbp+0h]
  int v53; // [rsp+108h] [rbp+8h]
  int v54; // [rsp+10Ch] [rbp+Ch]
  unsigned __int16 *v55; // [rsp+120h] [rbp+20h]
  int v56; // [rsp+128h] [rbp+28h]
  int v57; // [rsp+12Ch] [rbp+2Ch]
  __int64 v58; // [rsp+130h] [rbp+30h]
  int v59; // [rsp+148h] [rbp+48h]
  int v60; // [rsp+14Ch] [rbp+4Ch]
  __int64 v61; // [rsp+150h] [rbp+50h]
  __int64 v62; // [rsp+158h] [rbp+58h]
  int v63; // [rsp+168h] [rbp+68h]
  int v64; // [rsp+16Ch] [rbp+6Ch]
  unsigned int *v65; // [rsp+180h] [rbp+80h]
  int v66; // [rsp+188h] [rbp+88h]
  int v67; // [rsp+18Ch] [rbp+8Ch]
  __int64 v68; // [rsp+190h] [rbp+90h]
  int v69; // [rsp+1A8h] [rbp+A8h]
  int v70; // [rsp+1ACh] [rbp+ACh]
  PVOID v71; // [rsp+1C0h] [rbp+C0h]

  v34 = a4;
  v32 = a1;
  v12 = 131;
  P = 0LL;
  v29 = 0;
  v30[0] = 0;
  v13 = SepAdtAuditThisEventWithContext(131LL, a10, a10 == 0, 0LL);
  v14 = SepAdtAuditThisEventWithContext(132LL, a10, a10 == 0, 0LL);
  v15 = v14;
  if ( !v13 && !v14 || !(unsigned __int8)SepFilterPrivilegeAudits(0LL, a9) )
    return 0;
  if ( !v13 || !v15 || !a9 || !*a9 )
  {
    SepAdtCheckPrivilegeForSensitivity(a9, &v29, v30);
    if ( !v13 || !v29 )
    {
      if ( !v15 || !v30[0] )
        return 0;
      v12 = 132;
    }
  }
  v17 = a5;
  if ( !a5 )
    v17 = a6;
  v33 = **(unsigned __int8 ***)(v17 + 152);
  if ( RtlEqualSid(*(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4), v33) )
    return 0;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(CurrentThreadProcess, &P);
  if ( AllocatedFullProcessImageName < 0 )
  {
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
    return 0;
  }
  v20 = &SeSubsystemName;
  v21 = *(_QWORD *)(a6 + 24);
  if ( v32 )
    v20 = v32;
  v32 = v20;
  memset_0(Src, 0, 0x418uLL);
  Src[0] = 4;
  v36 = v12;
  Src[1] = 4674;
  if ( a10 )
    v37 = 8;
  else
    v37 = 16;
  v38 = 4;
  v22 = v33[1];
  v40 = v33;
  v41 = 1;
  v43 = v32;
  v39 = 4 * v22 + 8;
  v23 = *(unsigned __int16 *)v32 + 16;
  v44 = 5;
  v42 = v23;
  v45 = 8;
  if ( a5 )
    v46 = *(_QWORD *)(a5 + 24);
  else
    v46 = v21;
  v47 = 1;
  v48 = v23;
  v49 = v32;
  if ( a2 )
  {
    v24 = *a2 + 16;
    v50 = 1;
    v51 = v24;
    v52 = a2;
  }
  if ( a3 )
  {
    v25 = *a3 + 16;
    v53 = 2;
    v54 = v25;
    v55 = a3;
  }
  v56 = 11;
  v57 = 8;
  v58 = ObNormalizeHandleValue(v34);
  v61 = a8;
  v60 = 4;
  if ( a2 )
  {
    v59 = 7;
    v62 = 4LL;
  }
  else
  {
    v59 = 3;
  }
  if ( a9 )
  {
    v27 = *a9;
    if ( *a9 )
    {
      v63 = v26;
      v65 = a9;
      v64 = 12 * v27 + 8;
    }
  }
  v68 = a7;
  v66 = 11;
  v67 = v26;
  v69 = 2;
  v28 = *(unsigned __int16 *)P + 16;
  v71 = P;
  v70 = v28;
  Src[2] = 11;
  SepAdtLogAuditRecord(Src);
  ExFreePoolWithTag(P, 0);
  return 1;
}
