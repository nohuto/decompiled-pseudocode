/*
 * XREFs of SepAdtAuditObjectAccessWithContext @ 0x14090B910
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14090B0A0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14091ED80 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x140A60090 (NtOpenObjectAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x140A61470 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x140A9EE24 (SepAdtCloseObjectAuditAlarm.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     SepAuditingEnabledForSubcategory @ 0x140469B30 (SepAuditingEnabledForSubcategory.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SepAuditFailed @ 0x14090B840 (SepAuditFailed.c)
 *     SepAdtAuditThisEventWithContext @ 0x14090EA50 (SepAdtAuditThisEventWithContext.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     SepIsRemovableStorageDevice @ 0x140AFA9F0 (SepIsRemovableStorageDevice.c)
 */

char __fastcall SepAdtAuditObjectAccessWithContext(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        char a6,
        __int16 *a7)
{
  int v10; // ebx
  char v12; // di
  POBJECT_TYPE *v14; // rax
  unsigned int v15; // r10d
  __int16 v16; // ax
  struct _SECURITY_SUBJECT_CONTEXT *v17; // r12
  _BYTE *ClientToken; // rdx
  __int16 v19; // r9
  __int16 v20; // r10
  unsigned int i; // r8d
  int v22; // r11d
  unsigned __int16 *v23; // r12
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rbx
  SIZE_T v26; // rax
  int v27; // ecx
  unsigned __int16 *v28; // r12
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rbx
  SIZE_T v31; // rax
  int v32; // ecx
  struct _SECURITY_SUBJECT_CONTEXT v33; // [rsp+20h] [rbp-48h] BYREF

  *a7 = 119;
  v10 = (a3 != 0 ? 3 : 0) | 0x30;
  *(_OWORD *)&v33.ClientToken = 0LL;
  if ( !a4 )
    v10 = a3 != 0 ? 3 : 0;
  *(_OWORD *)&v33.PrimaryToken = 0LL;
  if ( !*(_DWORD *)&SepRmCapTableLock.ApcStateFill[8] )
    return 0;
  if ( (v10 & *(_DWORD *)&SepRmCapTableLock.ApcStateFill[8]) == 0 )
  {
    v12 = 0;
    if ( !*((_DWORD *)&SepRmCapTableLock.SwapListEntry + 2) )
      return 0;
    if ( SubjectContext )
    {
      v17 = SubjectContext;
    }
    else
    {
      v17 = &v33;
      SeCaptureSubjectContext(&v33);
    }
    ClientToken = v17->ClientToken;
    if ( v17->ClientToken || (ClientToken = v17->PrimaryToken) != 0LL )
    {
      if ( ClientToken[119] == 2 )
      {
        v19 = 0;
        v20 = 0;
        _mm_lfence();
        for ( i = 17; i < 0x1F; ++i )
        {
          v22 = (unsigned __int8)ClientToken[((unsigned __int64)i >> 1) + 88] >> (4 * (i & 1));
          if ( (v22 & 1) != 0 )
          {
            if ( (v10 & 2) != 0 )
              goto LABEL_43;
            ++v19;
          }
          if ( (v22 & 4) != 0 )
          {
            if ( (v10 & 0x20) != 0 )
              goto LABEL_43;
            ++v20;
          }
        }
        if ( (v10 & 1) != 0 && v19 == 14 || (v10 & 0x10) != 0 && v20 == 14 )
LABEL_43:
          v12 = 1;
      }
    }
    else
    {
      SepAuditFailed(-1073741700);
    }
    if ( !SubjectContext )
      SeReleaseSubjectContext(v17);
    if ( !v12 )
      return 0;
  }
  if ( !a1 )
  {
    if ( !a6 )
    {
      if ( !a2 || (PsGetCurrentServerSiloGlobals(), *a2 < 8u) || *(_QWORD *)L"SAM_" != **((_QWORD **)a2 + 1) )
      {
        v15 = 121;
        v16 = 121;
        goto LABEL_11;
      }
      v15 = 120;
      goto LABEL_10;
    }
    if ( a2 )
    {
      v23 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
      v24 = (unsigned __int64)*a2 >> 1;
      PsGetCurrentServerSiloGlobals();
      v25 = 4LL;
      if ( v24 <= 4 )
        v25 = v24;
      v26 = RtlCompareMemory(v23, L"File", 2 * v25) >> 1;
      if ( v26 >= v25 )
        v27 = v24 - 4;
      else
        v27 = v23[v26] - aFile_1[v26];
      if ( !v27 )
        goto LABEL_16;
      v28 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
      v29 = (unsigned __int64)*a2 >> 1;
      PsGetCurrentServerSiloGlobals();
      v30 = 3LL;
      if ( v29 <= 3 )
        v30 = v29;
      v31 = RtlCompareMemory(v28, L"Key", 2 * v30) >> 1;
      if ( v31 >= v30 )
        v32 = v29 - 3;
      else
        v32 = v28[v31] - aKey_0[v31];
      if ( !v32 )
      {
        v15 = 118;
        v16 = 118;
        goto LABEL_11;
      }
    }
LABEL_14:
    v15 = 119;
    goto LABEL_10;
  }
  v14 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  if ( v14 != CmKeyObjectType )
  {
    if ( v14 != IoFileObjectType )
    {
      if ( v14 == (POBJECT_TYPE *)IoDeviceObjectType
        && SepAuditingEnabledForSubcategory(129, a3, a4)
        && (unsigned __int8)SepIsRemovableStorageDevice(a1) == 1 )
      {
        goto LABEL_10;
      }
      goto LABEL_14;
    }
    if ( SepAuditingEnabledForSubcategory(129, a3, a4)
      && (unsigned __int8)SepIsRemovableStorageDevice(*(_QWORD *)(a1 + 8)) == 1 )
    {
      goto LABEL_10;
    }
LABEL_16:
    v15 = 117;
    goto LABEL_10;
  }
  v15 = 118;
LABEL_10:
  v16 = v15;
LABEL_11:
  *a7 = v16;
  return SepAdtAuditThisEventWithContext(v15, a3, a4, SubjectContext);
}
