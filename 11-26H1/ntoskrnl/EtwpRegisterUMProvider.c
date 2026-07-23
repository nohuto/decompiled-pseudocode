/*
 * XREFs of EtwpRegisterUMProvider @ 0x1409106B0
 * Callers:
 *     NtTraceControl @ 0x1409186E0 (NtTraceControl.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140218430 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140258A10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     SeAccessCheck @ 0x140301000 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ObReferenceObjectByPointer @ 0x140458E50 (ObReferenceObjectByPointer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     ObpRegisterObject @ 0x14077BE38 (ObpRegisterObject.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     ObpFreeObjectNameBuffer @ 0x1408F7DB0 (ObpFreeObjectNameBuffer.c)
 *     EtwpAddGuidEntry @ 0x1408FC380 (EtwpAddGuidEntry.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     ObpAllocateObject @ 0x140910050 (ObpAllocateObject.c)
 *     EtwpReferenceGuidEntry @ 0x1409115F0 (EtwpReferenceGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x1409126C0 (EtwpUnreferenceGuidEntry.c)
 *     EtwpApplyScopeFilters @ 0x140912900 (EtwpApplyScopeFilters.c)
 *     EtwpTrackProviderRegistration @ 0x140912B20 (EtwpTrackProviderRegistration.c)
 *     EtwpCopySchematizedFilters @ 0x140912C88 (EtwpCopySchematizedFilters.c)
 *     EtwpGetSchematizedFilterSize @ 0x140915E60 (EtwpGetSchematizedFilterSize.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x140916200 (EtwpComputeRegEntryEnableInfo.c)
 *     ObpCaptureObjectCreateInformation @ 0x14092DF60 (ObpCaptureObjectCreateInformation.c)
 *     EtwpUpdateEnableMask @ 0x14097A288 (EtwpUpdateEnableMask.c)
 *     EtwpCheckLoggerControlAccess @ 0x14097A438 (EtwpCheckLoggerControlAccess.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpRegisterUMProvider(__int64 a1, __int64 a2, int a3, char a4, _DWORD *a5)
{
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int16 v7; // ax
  char *v9; // r15
  struct _KLOCK_ENTRIES *v10; // r9
  _QWORD *v11; // r13
  unsigned __int8 v12; // cl
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD **v16; // rsi
  signed __int64 *v17; // r14
  void *v18; // rdx
  LegacyAutoBoost *v19; // rbx
  _QWORD *i; // rbx
  __int64 v21; // rax
  void *v22; // rbx
  struct _KLOCK_ENTRIES *v23; // r9
  int inserted; // r12d
  struct _KTHREAD *v25; // rax
  unsigned __int64 *v26; // rbx
  AutoBoost *v27; // rax
  void *v28; // rdx
  AutoBoost *v29; // rsi
  struct _KTHREAD *v30; // rax
  AutoBoost *v31; // rax
  void *v32; // rdx
  AutoBoost *v33; // rsi
  unsigned int v34; // edx
  _DWORD *v35; // r8
  _QWORD *v36; // rcx
  __int64 v37; // rax
  POBJECT_TYPE v38; // r15
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rsi
  __int64 v41; // rdx
  __int64 v42; // rbx
  void *v43; // rcx
  struct _KPRCB *v44; // rdx
  _GENERAL_LOOKASIDE *v45; // rcx
  volatile signed __int16 *v46; // r14
  __int64 v47; // r15
  _KPROCESS *Process; // rbx
  char **v49; // rax
  __int64 v50; // rcx
  unsigned int v51; // r14d
  char v52; // dl
  int v53; // r9d
  __int64 v54; // rcx
  __int16 v55; // cx
  unsigned __int16 v56; // bx
  char *v57; // rax
  _DWORD *v58; // rsi
  int SchematizedFilterSize; // eax
  int v60; // ecx
  signed __int64 v61; // rax
  signed __int64 v62; // rdx
  __int64 v63; // rtt
  __int64 v64; // rax
  __int64 *v65; // rbx
  signed __int64 v66; // rax
  signed __int64 v67; // rdx
  __int64 v68; // rtt
  int v70; // edx
  __int16 v71; // di
  unsigned __int16 *v72; // rbx
  __int16 v73; // di
  __int64 v74; // rdx
  PACCESS_TOKEN ClientToken; // r15
  __int64 v76; // rcx
  __int64 v77; // r8
  unsigned int *v78; // r15
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v79; // rcx
  unsigned int DefaultNonPagedPoolCharge; // ecx
  __int64 v81; // r8
  struct _KLOCK_ENTRIES *v82; // r9
  char *v83; // r14
  char *v84; // r14
  char *v85; // rsi
  struct _KPRCB *v86; // rdx
  _GENERAL_LOOKASIDE *v87; // rcx
  _GENERAL_LOOKASIDE *L; // rsi
  char v89; // dl
  unsigned int v90; // eax
  int v91; // eax
  bool v92; // cf
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  unsigned __int16 v109[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v110; // [rsp+54h] [rbp-ACh] BYREF
  char *v111; // [rsp+58h] [rbp-A8h]
  __int16 v112; // [rsp+60h] [rbp-A0h]
  unsigned int v113; // [rsp+64h] [rbp-9Ch]
  NTSTATUS AccessStatus[2]; // [rsp+68h] [rbp-98h] BYREF
  ACCESS_MASK GrantedAccess[2]; // [rsp+70h] [rbp-90h] BYREF
  char *v116; // [rsp+78h] [rbp-88h] BYREF
  __int64 v117; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v118; // [rsp+88h] [rbp-78h]
  __int64 v119; // [rsp+90h] [rbp-70h]
  _QWORD v120[4]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v121; // [rsp+B8h] [rbp-48h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C8h] [rbp-38h] BYREF

  v5 = *(_DWORD *)(a2 + 16);
  v6 = a2;
  v7 = *(_WORD *)(a2 + 20);
  LODWORD(v116) = a3;
  v119 = a2;
  v118 = a5;
  v117 = 0LL;
  v9 = 0LL;
  v111 = 0LL;
  v112 = 0;
  LOBYTE(v109[0]) = a4;
  v113 = v5;
  LOWORD(v110) = v7;
  if ( memcmp((const void *)a2, &SecurityProviderGuid, 0x10uLL) )
  {
    v11 = 0LL;
    v12 = *(_DWORD *)(v6 + 4) ^ *(_DWORD *)(v6 + 8) ^ *(_DWORD *)(v6 + 12);
    AccessStatus[0] = v5 - 2 > 1;
    CurrentThread = KeGetCurrentThread();
    v14 = 56LL * (((unsigned __int8)*(_DWORD *)v6 ^ v12) & 0x3F);
    --CurrentThread->KernelApcDisable;
    v15 = a1 + v14 + 720;
    v16 = (_QWORD **)(v15 + 16LL * (v5 - 2 > 1));
    v17 = (signed __int64 *)(v15 + 48);
    v19 = (LegacyAutoBoost *)KeAbPreAcquire(v15 + 48, 0LL, 0LL, v10);
    if ( _InterlockedCompareExchange64(v17, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v17, 0, v19, (struct _KTHREAD *)v17);
    if ( v19 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v19, v18);
      else
        *((_BYTE *)v19 + 10) = 1;
    }
    for ( i = *v16; i != v16; i = (_QWORD *)*i )
    {
      v21 = *(_QWORD *)v6 - i[5];
      if ( *(_QWORD *)v6 == i[5] )
        v21 = *(_QWORD *)(v6 + 8) - i[6];
      if ( !v21 && (unsigned __int8)EtwpReferenceGuidEntry((ULONG_PTR)i) )
      {
        v11 = i;
        break;
      }
    }
    if ( _InterlockedCompareExchange64(v17, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v17);
    KeAbPostRelease((unsigned __int64)v17);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( !v11 )
    {
      v11 = EtwpAddGuidEntry(a1, (_DWORD *)v6, AccessStatus[0]);
      if ( !v11 )
        return (unsigned int)-1073741801;
    }
    v22 = (void *)v11[9];
    AccessStatus[0] = 0;
    GrantedAccess[0] = 0;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContext(&SubjectContext);
    SeAccessCheck(
      v22,
      &SubjectContext,
      0,
      0x800u,
      0,
      0LL,
      (PGENERIC_MAPPING)&EtwpGenericMapping,
      1,
      GrantedAccess,
      AccessStatus);
    SeReleaseSubjectContext(&SubjectContext);
    inserted = AccessStatus[0];
    if ( AccessStatus[0] )
    {
LABEL_81:
      EtwpUnreferenceGuidEntry((ULONG_PTR)v11);
      return (unsigned int)inserted;
    }
    if ( v11[82] )
    {
      v25 = KeGetCurrentThread();
      --v25->KernelApcDisable;
      v26 = (unsigned __int64 *)(v11[82] + 664LL);
      v27 = (AutoBoost *)KeAbPreAcquire((__int64)v26, 0LL, 0LL, v23);
      v29 = v27;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v26, 0LL) )
        ExfAcquirePushLockExclusiveEx(v26, v27, (__int64)v26);
      if ( v29 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v29, v28);
        else
          *((_BYTE *)v29 + 10) = 1;
      }
      *(_QWORD *)(v11[82] + 672LL) = KeGetCurrentThread();
    }
    v30 = KeGetCurrentThread();
    --v30->KernelApcDisable;
    v31 = (AutoBoost *)KeAbPreAcquire((__int64)(v11 + 83), 0LL, 0LL, v23);
    v33 = v31;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11 + 166, 0LL) )
      ExfAcquirePushLockExclusiveEx(v11 + 83, v31, (__int64)(v11 + 83));
    if ( v33 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v33, v32);
      else
        *((_BYTE *)v33 + 10) = 1;
    }
    v34 = 0;
    v35 = v118;
    v11[84] = KeGetCurrentThread();
    *v35 = 160;
    v36 = (_QWORD *)v11[80];
    if ( v36 )
    {
      if ( *((_DWORD *)v11 + 32) )
      {
        v93 = v36[11];
        if ( v93 )
          v34 = (*(_DWORD *)(v93 + 16) + 7) & 0xFFFFFFF8;
      }
      if ( *((_DWORD *)v11 + 40) )
      {
        v94 = v36[24];
        if ( v94 )
          v34 += (*(_DWORD *)(v94 + 16) + 7) & 0xFFFFFFF8;
      }
      if ( *((_DWORD *)v11 + 48) )
      {
        v95 = v36[37];
        if ( v95 )
          v34 += (*(_DWORD *)(v95 + 16) + 7) & 0xFFFFFFF8;
      }
      if ( *((_DWORD *)v11 + 56) )
      {
        v96 = v36[50];
        if ( v96 )
          v34 += (*(_DWORD *)(v96 + 16) + 7) & 0xFFFFFFF8;
      }
      if ( *((_DWORD *)v11 + 64) )
      {
        v97 = v36[63];
        if ( v97 )
          v34 += (*(_DWORD *)(v97 + 16) + 7) & 0xFFFFFFF8;
      }
      if ( *((_DWORD *)v11 + 72) )
      {
        v98 = v36[76];
        if ( v98 )
          v34 += (*(_DWORD *)(v98 + 16) + 7) & 0xFFFFFFF8;
      }
      if ( *((_DWORD *)v11 + 80) )
      {
        v99 = v36[89];
        if ( v99 )
          v34 += (*(_DWORD *)(v99 + 16) + 7) & 0xFFFFFFF8;
      }
      if ( *((_DWORD *)v11 + 88) )
      {
        v100 = v36[102];
        if ( v100 )
          v34 += (*(_DWORD *)(v100 + 16) + 7) & 0xFFFFFFF8;
      }
      if ( *((_DWORD *)v11 + 96) )
      {
        v101 = v36[115];
        if ( v101 )
          v34 += (*(_DWORD *)(v101 + 16) + 7) & 0xFFFFFFF8;
      }
      if ( *((_DWORD *)v11 + 104) )
      {
        v102 = v36[128];
        if ( v102 )
          v34 += (*(_DWORD *)(v102 + 16) + 7) & 0xFFFFFFF8;
      }
      if ( *((_DWORD *)v11 + 112) )
      {
        v103 = v36[141];
        if ( v103 )
          v34 += (*(_DWORD *)(v103 + 16) + 7) & 0xFFFFFFF8;
      }
      if ( *((_DWORD *)v11 + 120) )
      {
        v104 = v36[154];
        if ( v104 )
          v34 += (*(_DWORD *)(v104 + 16) + 7) & 0xFFFFFFF8;
      }
      if ( *((_DWORD *)v11 + 128) )
      {
        v105 = v36[167];
        if ( v105 )
          v34 += (*(_DWORD *)(v105 + 16) + 7) & 0xFFFFFFF8;
      }
      if ( *((_DWORD *)v11 + 136) )
      {
        v106 = v36[180];
        if ( v106 )
          v34 += (*(_DWORD *)(v106 + 16) + 7) & 0xFFFFFFF8;
      }
      if ( *((_DWORD *)v11 + 144) )
      {
        v107 = v36[193];
        if ( v107 )
          v34 += (*(_DWORD *)(v107 + 16) + 7) & 0xFFFFFFF8;
      }
      if ( *((_DWORD *)v11 + 152) )
      {
        v108 = v36[206];
        if ( v108 )
          v34 += (*(_DWORD *)(v108 + 16) + 7) & 0xFFFFFFF8;
      }
      if ( v34 )
        *v35 = v34 + 176;
    }
    if ( *v35 > (unsigned int)v116 )
    {
      inserted = -1073741789;
    }
    else
    {
      v37 = *(_QWORD *)(v6 + 32);
      v38 = EtwpRegistrationObjectType;
      v121 = 0LL;
      *(_QWORD *)AccessStatus = 0LL;
      v120[0] = 48LL;
      v120[3] = 64LL;
      v120[1] = 0LL;
      v120[2] = 0LL;
      *(_QWORD *)GrantedAccess = v37;
      *(_OWORD *)&SubjectContext.ClientToken = 0LL;
      v116 = 0LL;
      CurrentPrcb = KeGetCurrentPrcb();
      P = CurrentPrcb->PPLookasideList[4].P;
      ++P->TotalAllocates;
      v42 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
      if ( v42
        || (++P->AllocateMisses,
            L = CurrentPrcb->PPLookasideList[4].L,
            ++L->TotalAllocates,
            (v42 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead)) != 0)
        || (++L->AllocateMisses, (v42 = guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size)) != 0) )
      {
        *(_DWORD *)v42 = CurrentPrcb->Number;
      }
      if ( v42 )
      {
        LOBYTE(v41) = 1;
        inserted = ObpCaptureObjectCreateInformation(0LL, v41, v120, &SubjectContext, v42, 0);
        if ( inserted >= 0 )
        {
          if ( (*(_DWORD *)v42 & v38->TypeInfo.InvalidAttributes) != 0 )
          {
            inserted = -1073741811;
            goto LABEL_41;
          }
          if ( (*(_DWORD *)v42 & 0x10) != 0 && !SeSinglePrivilegeCheck(*(LUID *)&PspSiloMonitorLock.SystemCallNumber, 0) )
          {
            inserted = -1073741727;
LABEL_41:
            if ( *(_QWORD *)&SubjectContext.ImpersonationLevel )
              ObpFreeObjectNameBuffer((__int64)&SubjectContext);
            v43 = *(void **)(v42 + 32);
            if ( v43 )
            {
              if ( *(_BYTE *)(v42 + 16) <= 1u )
                ExFreePoolWithTag(v43, 0);
              *(_QWORD *)(v42 + 32) = 0LL;
            }
            v44 = KeGetCurrentPrcb();
            v45 = v44->PPLookasideList[4].P;
            ++v45->TotalFrees;
            if ( LOWORD(v45->ListHead.Alignment) < v45->Depth
              || (++v45->FreeMisses,
                  v45 = v44->PPLookasideList[4].L,
                  ++v45->TotalFrees,
                  LOWORD(v45->ListHead.Alignment) < v45->Depth) )
            {
              RtlpInterlockedPushEntrySList(&v45->ListHead, (PSLIST_ENTRY)v42);
            }
            else
            {
              ++v45->FreeMisses;
              guard_dispatch_icall_no_overrides(v42, (__int64)v44);
            }
            v9 = 0LL;
            goto LABEL_69;
          }
          DefaultNonPagedPoolCharge = v38->TypeInfo.DefaultNonPagedPoolCharge;
          *(_DWORD *)(v42 + 20) = v38->TypeInfo.DefaultPagedPoolCharge;
          *(_DWORD *)(v42 + 24) = DefaultNonPagedPoolCharge;
          inserted = ObpAllocateObject((_DWORD *)v42, 1, (__int64)v38, (__int128 *)&SubjectContext, 120, &v116, 0LL);
          if ( inserted < 0 )
            goto LABEL_41;
          v83 = v116;
          if ( ObpTraceFlags )
          {
            ObpRegisterObject((__int64)v116, 1, v81, v82);
            ObpPushStackInfo((__int64)v83, 1, 0x746C6644u);
          }
          v84 = v83 + 48;
          v85 = v84;
          EtwpReferenceGuidEntry((ULONG_PTR)v11);
          v46 = (volatile signed __int16 *)(v84 + 98);
          if ( v113 == 2 )
            _InterlockedOr16((volatile signed __int16 *)v85 + 49, 8u);
          v47 = *(_QWORD *)GrantedAccess;
          *((_QWORD *)v85 + 11) = *(_QWORD *)GrantedAccess;
          _InterlockedOr16(v46, 2u);
          Process = KeGetCurrentThread()->ApcState.Process;
          ObfReferenceObjectWithTag(Process, 0x52777445u);
          *((_WORD *)v85 + 48) = v110;
          v49 = (char **)(v11 + 7);
          *((_QWORD *)v85 + 10) = Process;
          *((_QWORD *)v85 + 11) = v47;
          *((_QWORD *)v85 + 4) = v11;
          v50 = v11[7];
          if ( *(_QWORD **)(v50 + 8) != v11 + 7 )
            __fastfail(3u);
          *((_QWORD *)v85 + 1) = v49;
          *(_QWORD *)v85 = v50;
          *(_QWORD *)(v50 + 8) = v85;
          *v49 = v85;
          *((_QWORD *)v85 + 3) = v85 + 16;
          *((_QWORD *)v85 + 2) = v85 + 16;
          _InterlockedOr16(v46, 0x40u);
          ObReferenceObjectByPointer(v85, 0, EtwpRegistrationObjectType, 0);
          v51 = 0;
          inserted = ObInsertObjectEx(v85, 0LL, 2052, 1, 0, (__int64)AccessStatus, &v117);
          v9 = v85;
          if ( inserted < 0 )
            goto LABEL_69;
          ObfDereferenceObject(v85);
          if ( LOBYTE(v109[0]) )
            _InterlockedOr16((volatile signed __int16 *)v85 + 49, 0x80u);
          *(_QWORD *)(v6 + 24) = v117;
          if ( !*((_DWORD *)v11 + 24) )
          {
LABEL_58:
            v52 = v9[98];
            v109[0] = *((_WORD *)v9 + 50);
            EtwpApplyScopeFilters((_DWORD)v9, (v52 & 8) != 0, 0, 0, (__int64)v109);
            v54 = v11[82];
            if ( v54 )
            {
              if ( *(_DWORD *)(v54 + 96) )
              {
                LOBYTE(v53) = 1;
                EtwpUpdateEnableMask(v54, (v9[98] & 8) != 0, 1, v53, (__int64)(v9 + 104));
              }
              LOBYTE(v53) = 1;
              v89 = v9[98];
              LOWORD(v110) = *((_WORD *)v9 + 52);
              EtwpApplyScopeFilters((_DWORD)v9, (v89 & 8) != 0, 0, v53, (__int64)&v110);
              v55 = v110;
            }
            else
            {
              v55 = v112;
            }
            v56 = v109[0];
            if ( (v9[98] & 8) != 0 )
            {
              *((_WORD *)v9 + 52) = v55;
            }
            else
            {
              v56 = *((_WORD *)v9 + 50) & v109[0];
              *((_WORD *)v9 + 52) &= v55;
              v55 = *((_WORD *)v9 + 52);
            }
            *((_WORD *)v9 + 50) = v56;
            if ( v56 || v55 )
            {
              EtwpComputeRegEntryEnableInfo(v9, v6 + 112);
              v70 = *((_BYTE *)v11 + 91) & 1;
              BYTE3(v111) = 0;
              *(_DWORD *)(v6 + 152) = v70;
              LOWORD(v111) = *((_WORD *)v11 + 44);
              BYTE2(v111) = *((_BYTE *)v11 + 90);
              HIDWORD(v111) = *((_DWORD *)v11 + 20);
              v57 = v111;
            }
            else
            {
              v57 = 0LL;
              *(_OWORD *)(v6 + 112) = 0LL;
              *(_OWORD *)(v6 + 128) = 0LL;
              *(_DWORD *)(v6 + 152) = 0;
            }
            v58 = v118;
            *(_QWORD *)(v6 + 144) = v57;
            *v58 = 160;
            SchematizedFilterSize = EtwpGetSchematizedFilterSize(v11, v56);
            if ( SchematizedFilterSize )
            {
              *v58 = SchematizedFilterSize + 176;
              *(_DWORD *)(v6 + 172) = 0x80000000;
              *(_DWORD *)(v6 + 168) = SchematizedFilterSize;
              *(_QWORD *)(v6 + 160) = 136LL;
              EtwpCopySchematizedFilters((void *)(v6 + 176));
              v60 = 1;
            }
            else
            {
              v60 = 0;
            }
            *(_DWORD *)(v6 + 156) = v60;
            *(_DWORD *)(v6 + 44) = *v58;
            EtwpTrackProviderRegistration(v9);
            if ( EtwEventEnabled(
                   (REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink,
                   &ETW_EVENT_PROVIDER_REGISTER) )
            {
              SubjectContext.ClientToken = (PACCESS_TOKEN)v6;
              *(_QWORD *)&SubjectContext.ImpersonationLevel = 16LL;
              EtwWrite(
                (REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink,
                &ETW_EVENT_PROVIDER_REGISTER,
                0LL,
                1u,
                (PEVENT_DATA_DESCRIPTOR)&SubjectContext);
            }
            goto LABEL_69;
          }
          v71 = *((_WORD *)v85 + 49);
          v72 = (unsigned __int16 *)v11 + 67;
          LODWORD(v116) = inserted;
          v73 = v71 & 8;
          while ( 1 )
          {
            if ( !*(_DWORD *)(v72 - 3) )
              goto LABEL_86;
            v74 = *v72;
            v110 = 0;
            v113 = v74;
            if ( v73 )
            {
              if ( (_DWORD)v74 != *((unsigned __int16 *)v11 + 44) )
                goto LABEL_86;
            }
            ClientToken = (PACCESS_TOKEN)v11[81];
            SubjectContext.ClientToken = ClientToken;
            if ( (unsigned int)v74 >= *((_DWORD *)ClientToken + 4) )
              goto LABEL_86;
            if ( (*(_BYTE *)(*((_QWORD *)ClientToken + 89) + 8 * v74) & 1) != 0 )
              goto LABEL_86;
            v76 = *((_QWORD *)ClientToken + 88);
            *(_QWORD *)GrantedAccess = 8 * v74;
            if ( !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(8 * v74 + v76), 1u) )
              goto LABEL_86;
            if ( v113 >= *((_DWORD *)ClientToken + 4) )
              break;
            _mm_lfence();
            v77 = *(_QWORD *)GrantedAccess;
            v78 = *(unsigned int **)(*(_QWORD *)GrantedAccess + *((_QWORD *)ClientToken + 89));
            if ( ((unsigned __int8)v78 & 1) != 0 )
            {
              ClientToken = SubjectContext.ClientToken;
LABEL_98:
              v79 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v77 + *((_QWORD *)ClientToken + 88));
              goto LABEL_96;
            }
            if ( !v78[80] )
            {
              v79 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(*(_QWORD *)(*((_QWORD *)v78 + 170) + 704LL) + 8LL * *v78);
LABEL_96:
              ExReleaseRundownProtectionCacheAwareEx(v79, 1u);
              goto LABEL_86;
            }
            if ( v78 )
            {
              v90 = v78[3];
              if ( v73 )
              {
                v92 = (v90 & 0x1000000) != 0;
                v91 = v110;
                if ( v92 )
                  v91 = -1073741790;
LABEL_132:
                v110 = v91;
              }
              else if ( (v90 & 0x80u) != 0 )
              {
                v91 = EtwpCheckLoggerControlAccess(0x200u);
                goto LABEL_132;
              }
              ExReleaseRundownProtectionCacheAwareEx(
                *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v78 + 170) + 704LL) + 8LL * *v78),
                1u);
              if ( !v110 )
                *((_WORD *)v85 + 50) |= 1 << (v51 & 0xF);
            }
LABEL_86:
            ++v51;
            v72 += 16;
            if ( v51 >= 0x10 )
            {
              v6 = v119;
              v9 = v85;
              inserted = (int)v116;
              goto LABEL_58;
            }
          }
          v77 = *(_QWORD *)GrantedAccess;
          goto LABEL_98;
        }
        v86 = KeGetCurrentPrcb();
        v87 = v86->PPLookasideList[4].P;
        ++v87->TotalFrees;
        if ( LOWORD(v87->ListHead.Alignment) < v87->Depth
          || (++v87->FreeMisses,
              v87 = v86->PPLookasideList[4].L,
              ++v87->TotalFrees,
              LOWORD(v87->ListHead.Alignment) < v87->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v87->ListHead, (PSLIST_ENTRY)v42);
          v9 = 0LL;
        }
        else
        {
          ++v87->FreeMisses;
          guard_dispatch_icall_no_overrides(v42, (__int64)v86);
          v9 = 0LL;
        }
      }
      else
      {
        v9 = v111;
        inserted = -1073741670;
      }
    }
LABEL_69:
    v11[84] = 0LL;
    _m_prefetchw(v11 + 83);
    v61 = v11[83];
    v62 = v61 - 16;
    if ( (v61 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v62 = 0LL;
    if ( (v61 & 2) != 0 || (v63 = v11[83], v63 != _InterlockedCompareExchange64(v11 + 83, v62, v61)) )
      ExfReleasePushLock(v11 + 83);
    KeAbPostRelease((unsigned __int64)(v11 + 83));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v64 = v11[82];
    if ( v64 )
    {
      *(_QWORD *)(v64 + 672) = 0LL;
      v65 = (__int64 *)(v11[82] + 664LL);
      _m_prefetchw(v65);
      v66 = *v65;
      v67 = *v65 - 16;
      if ( (*v65 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v67 = 0LL;
      if ( (v66 & 2) != 0 || (v68 = *v65, v68 != _InterlockedCompareExchange64(v65, v67, v66)) )
        ExfReleasePushLock(v65);
      KeAbPostRelease((unsigned __int64)v65);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    if ( v9 )
      ObfDereferenceObject(v9);
    goto LABEL_81;
  }
  return 3221225506LL;
}
