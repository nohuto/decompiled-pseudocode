/*
 * XREFs of EtwpRegisterUMProvider @ 0x140934B00
 * Callers:
 *     NtTraceControl @ 0x14093CB40 (NtTraceControl.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140218100 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140257080 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObpPushStackInfo @ 0x1402659F0 (ObpPushStackInfo.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     SeAccessCheck @ 0x1402B6340 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     ObReferenceObjectByPointer @ 0x14045F750 (ObReferenceObjectByPointer.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memcmp @ 0x14073D750 (memcmp.c)
 *     ObpRegisterObject @ 0x140778F98 (ObpRegisterObject.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     ObpFreeObjectNameBuffer @ 0x1408F17F0 (ObpFreeObjectNameBuffer.c)
 *     ObpCaptureObjectCreateInformation @ 0x1408FDFD0 (ObpCaptureObjectCreateInformation.c)
 *     EtwpAddGuidEntry @ 0x140920870 (EtwpAddGuidEntry.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 *     ObpAllocateObject @ 0x1409344A0 (ObpAllocateObject.c)
 *     EtwpReferenceGuidEntry @ 0x140935A40 (EtwpReferenceGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x140936B20 (EtwpUnreferenceGuidEntry.c)
 *     EtwpApplyScopeFilters @ 0x140936D60 (EtwpApplyScopeFilters.c)
 *     EtwpTrackProviderRegistration @ 0x140936F80 (EtwpTrackProviderRegistration.c)
 *     EtwpCopySchematizedFilters @ 0x1409370E8 (EtwpCopySchematizedFilters.c)
 *     EtwpGetSchematizedFilterSize @ 0x14093A2C0 (EtwpGetSchematizedFilterSize.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x14093A660 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpUpdateEnableMask @ 0x140A6F8F4 (EtwpUpdateEnableMask.c)
 *     EtwpCheckLoggerControlAccess @ 0x140A6FAA4 (EtwpCheckLoggerControlAccess.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  __int64 v22; // rdx
  __int64 v23; // r8
  void *v24; // rbx
  struct _KLOCK_ENTRIES *v25; // r9
  int inserted; // r12d
  struct _KTHREAD *v27; // rax
  unsigned __int64 *v28; // rbx
  AutoBoost *v29; // rax
  void *v30; // rdx
  AutoBoost *v31; // rsi
  struct _KTHREAD *v32; // rax
  AutoBoost *v33; // rax
  void *v34; // rdx
  AutoBoost *v35; // rsi
  unsigned int v36; // edx
  _DWORD *v37; // r8
  _QWORD *v38; // rcx
  __int64 v39; // rax
  POBJECT_TYPE v40; // r15
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rsi
  __int64 v43; // rbx
  void *v44; // rcx
  struct _KPRCB *v45; // rdx
  _GENERAL_LOOKASIDE *v46; // rcx
  volatile signed __int16 *v47; // r14
  __int64 v48; // r15
  _KPROCESS *Process; // rbx
  char **v50; // rax
  __int64 v51; // rcx
  unsigned int v52; // r14d
  char v53; // dl
  int v54; // r9d
  __int64 v55; // rcx
  __int16 v56; // cx
  unsigned __int16 v57; // bx
  char *v58; // rax
  _DWORD *v59; // rsi
  int SchematizedFilterSize; // eax
  int v61; // ecx
  signed __int64 v62; // rax
  signed __int64 v63; // rdx
  __int64 v64; // rtt
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // rax
  __int64 *v68; // rbx
  signed __int64 v69; // rax
  signed __int64 v70; // rdx
  __int64 v71; // rtt
  __int64 v72; // rdx
  __int64 v73; // r8
  int v75; // edx
  __int16 v76; // di
  unsigned __int16 *v77; // rbx
  __int16 v78; // di
  __int64 v79; // rdx
  PACCESS_TOKEN ClientToken; // r15
  __int64 v81; // rcx
  __int64 v82; // r8
  unsigned int *v83; // r15
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v84; // rcx
  unsigned int DefaultNonPagedPoolCharge; // ecx
  __int64 v86; // r8
  struct _KLOCK_ENTRIES *v87; // r9
  char *v88; // r14
  char *v89; // r14
  char *v90; // rsi
  struct _KPRCB *v91; // rdx
  _GENERAL_LOOKASIDE *v92; // rcx
  _GENERAL_LOOKASIDE *L; // rsi
  char v94; // dl
  unsigned int v95; // eax
  int v96; // eax
  bool v97; // cf
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
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  unsigned __int16 v114[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v115; // [rsp+54h] [rbp-ACh] BYREF
  char *v116; // [rsp+58h] [rbp-A8h]
  __int16 v117; // [rsp+60h] [rbp-A0h]
  unsigned int v118; // [rsp+64h] [rbp-9Ch]
  NTSTATUS AccessStatus[2]; // [rsp+68h] [rbp-98h] BYREF
  ACCESS_MASK GrantedAccess[2]; // [rsp+70h] [rbp-90h] BYREF
  char *v121; // [rsp+78h] [rbp-88h] BYREF
  __int64 v122; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v123; // [rsp+88h] [rbp-78h]
  __int64 v124; // [rsp+90h] [rbp-70h]
  _QWORD v125[4]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v126; // [rsp+B8h] [rbp-48h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C8h] [rbp-38h] BYREF

  v5 = *(_DWORD *)(a2 + 16);
  v6 = a2;
  v7 = *(_WORD *)(a2 + 20);
  LODWORD(v121) = a3;
  v124 = a2;
  v123 = a5;
  v122 = 0LL;
  v9 = 0LL;
  v116 = 0LL;
  v117 = 0;
  LOBYTE(v114[0]) = a4;
  v118 = v5;
  LOWORD(v115) = v7;
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v22, v23);
    if ( !v11 )
    {
      v11 = EtwpAddGuidEntry(a1, (_DWORD *)v6, AccessStatus[0]);
      if ( !v11 )
        return (unsigned int)-1073741801;
    }
    v24 = (void *)v11[9];
    AccessStatus[0] = 0;
    GrantedAccess[0] = 0;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContext(&SubjectContext);
    SeAccessCheck(
      v24,
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
      v27 = KeGetCurrentThread();
      --v27->KernelApcDisable;
      v28 = (unsigned __int64 *)(v11[82] + 664LL);
      v29 = (AutoBoost *)KeAbPreAcquire((__int64)v28, 0LL, 0LL, v25);
      v31 = v29;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v28, 0LL) )
        ExfAcquirePushLockExclusiveEx(v28, v29, (__int64)v28);
      if ( v31 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v31, v30);
        else
          *((_BYTE *)v31 + 10) = 1;
      }
      *(_QWORD *)(v11[82] + 672LL) = KeGetCurrentThread();
    }
    v32 = KeGetCurrentThread();
    --v32->KernelApcDisable;
    v33 = (AutoBoost *)KeAbPreAcquire((__int64)(v11 + 83), 0LL, 0LL, v25);
    v35 = v33;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11 + 166, 0LL) )
      ExfAcquirePushLockExclusiveEx(v11 + 83, v33, (__int64)(v11 + 83));
    if ( v35 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v35, v34);
      else
        *((_BYTE *)v35 + 10) = 1;
    }
    v36 = 0;
    v37 = v123;
    v11[84] = KeGetCurrentThread();
    *v37 = 160;
    v38 = (_QWORD *)v11[80];
    if ( v38 )
    {
      if ( *((_DWORD *)v11 + 32) )
      {
        v98 = v38[11];
        if ( v98 )
          v36 = (*(_DWORD *)(v98 + 16) + 7) & 0xFFFFFFF8;
      }
      if ( *((_DWORD *)v11 + 40) )
      {
        v99 = v38[24];
        if ( v99 )
          v36 += (*(_DWORD *)(v99 + 16) + 7) & 0xFFFFFFF8;
      }
      if ( *((_DWORD *)v11 + 48) )
      {
        v100 = v38[37];
        if ( v100 )
          v36 += (*(_DWORD *)(v100 + 16) + 7) & 0xFFFFFFF8;
      }
      if ( *((_DWORD *)v11 + 56) )
      {
        v101 = v38[50];
        if ( v101 )
          v36 += (*(_DWORD *)(v101 + 16) + 7) & 0xFFFFFFF8;
      }
      if ( *((_DWORD *)v11 + 64) )
      {
        v102 = v38[63];
        if ( v102 )
          v36 += (*(_DWORD *)(v102 + 16) + 7) & 0xFFFFFFF8;
      }
      if ( *((_DWORD *)v11 + 72) )
      {
        v103 = v38[76];
        if ( v103 )
          v36 += (*(_DWORD *)(v103 + 16) + 7) & 0xFFFFFFF8;
      }
      if ( *((_DWORD *)v11 + 80) )
      {
        v104 = v38[89];
        if ( v104 )
          v36 += (*(_DWORD *)(v104 + 16) + 7) & 0xFFFFFFF8;
      }
      if ( *((_DWORD *)v11 + 88) )
      {
        v105 = v38[102];
        if ( v105 )
          v36 += (*(_DWORD *)(v105 + 16) + 7) & 0xFFFFFFF8;
      }
      if ( *((_DWORD *)v11 + 96) )
      {
        v106 = v38[115];
        if ( v106 )
          v36 += (*(_DWORD *)(v106 + 16) + 7) & 0xFFFFFFF8;
      }
      if ( *((_DWORD *)v11 + 104) )
      {
        v107 = v38[128];
        if ( v107 )
          v36 += (*(_DWORD *)(v107 + 16) + 7) & 0xFFFFFFF8;
      }
      if ( *((_DWORD *)v11 + 112) )
      {
        v108 = v38[141];
        if ( v108 )
          v36 += (*(_DWORD *)(v108 + 16) + 7) & 0xFFFFFFF8;
      }
      if ( *((_DWORD *)v11 + 120) )
      {
        v109 = v38[154];
        if ( v109 )
          v36 += (*(_DWORD *)(v109 + 16) + 7) & 0xFFFFFFF8;
      }
      if ( *((_DWORD *)v11 + 128) )
      {
        v110 = v38[167];
        if ( v110 )
          v36 += (*(_DWORD *)(v110 + 16) + 7) & 0xFFFFFFF8;
      }
      if ( *((_DWORD *)v11 + 136) )
      {
        v111 = v38[180];
        if ( v111 )
          v36 += (*(_DWORD *)(v111 + 16) + 7) & 0xFFFFFFF8;
      }
      if ( *((_DWORD *)v11 + 144) )
      {
        v112 = v38[193];
        if ( v112 )
          v36 += (*(_DWORD *)(v112 + 16) + 7) & 0xFFFFFFF8;
      }
      if ( *((_DWORD *)v11 + 152) )
      {
        v113 = v38[206];
        if ( v113 )
          v36 += (*(_DWORD *)(v113 + 16) + 7) & 0xFFFFFFF8;
      }
      if ( v36 )
        *v37 = v36 + 176;
    }
    if ( *v37 > (unsigned int)v121 )
    {
      inserted = -1073741789;
    }
    else
    {
      v39 = *(_QWORD *)(v6 + 32);
      v40 = EtwpRegistrationObjectType;
      v126 = 0LL;
      *(_QWORD *)AccessStatus = 0LL;
      v125[0] = 48LL;
      v125[3] = 64LL;
      v125[1] = 0LL;
      v125[2] = 0LL;
      *(_QWORD *)GrantedAccess = v39;
      *(_OWORD *)&SubjectContext.ClientToken = 0LL;
      v121 = 0LL;
      CurrentPrcb = KeGetCurrentPrcb();
      P = CurrentPrcb->PPLookasideList[4].P;
      ++P->TotalAllocates;
      v43 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
      if ( v43
        || (++P->AllocateMisses,
            L = CurrentPrcb->PPLookasideList[4].L,
            ++L->TotalAllocates,
            (v43 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead)) != 0)
        || (++L->AllocateMisses, (v43 = guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size)) != 0) )
      {
        *(_DWORD *)v43 = CurrentPrcb->Number;
      }
      if ( v43 )
      {
        inserted = ObpCaptureObjectCreateInformation(0, 1, v125, &SubjectContext, v43, 0);
        if ( inserted >= 0 )
        {
          if ( (*(_DWORD *)v43 & v40->TypeInfo.InvalidAttributes) != 0 )
          {
            inserted = -1073741811;
            goto LABEL_41;
          }
          if ( (*(_DWORD *)v43 & 0x10) != 0 && !SeSinglePrivilegeCheck((LUID)PspSiloMonitorLock.SchedulingGroup, 0) )
          {
            inserted = -1073741727;
LABEL_41:
            if ( *(_QWORD *)&SubjectContext.ImpersonationLevel )
              ObpFreeObjectNameBuffer((__int64)&SubjectContext);
            v44 = *(void **)(v43 + 32);
            if ( v44 )
            {
              if ( *(_BYTE *)(v43 + 16) <= 1u )
                ExFreePoolWithTag(v44, 0);
              *(_QWORD *)(v43 + 32) = 0LL;
            }
            v45 = KeGetCurrentPrcb();
            v46 = v45->PPLookasideList[4].P;
            ++v46->TotalFrees;
            if ( LOWORD(v46->ListHead.Alignment) < v46->Depth
              || (++v46->FreeMisses,
                  v46 = v45->PPLookasideList[4].L,
                  ++v46->TotalFrees,
                  LOWORD(v46->ListHead.Alignment) < v46->Depth) )
            {
              RtlpInterlockedPushEntrySList(&v46->ListHead, (PSLIST_ENTRY)v43);
            }
            else
            {
              ++v46->FreeMisses;
              guard_dispatch_icall_no_overrides(v43, (__int64)v45);
            }
            v9 = 0LL;
            goto LABEL_69;
          }
          DefaultNonPagedPoolCharge = v40->TypeInfo.DefaultNonPagedPoolCharge;
          *(_DWORD *)(v43 + 20) = v40->TypeInfo.DefaultPagedPoolCharge;
          *(_DWORD *)(v43 + 24) = DefaultNonPagedPoolCharge;
          inserted = ObpAllocateObject((_DWORD *)v43, 1, (__int64)v40, (__int128 *)&SubjectContext, 120, &v121, 0LL);
          if ( inserted < 0 )
            goto LABEL_41;
          v88 = v121;
          if ( ObpTraceFlags )
          {
            ObpRegisterObject((__int64)v121, 1, v86, v87);
            ObpPushStackInfo((__int64)v88, 1, 0x746C6644u);
          }
          v89 = v88 + 48;
          v90 = v89;
          EtwpReferenceGuidEntry((ULONG_PTR)v11);
          v47 = (volatile signed __int16 *)(v89 + 98);
          if ( v118 == 2 )
            _InterlockedOr16((volatile signed __int16 *)v90 + 49, 8u);
          v48 = *(_QWORD *)GrantedAccess;
          *((_QWORD *)v90 + 11) = *(_QWORD *)GrantedAccess;
          _InterlockedOr16(v47, 2u);
          Process = KeGetCurrentThread()->ApcState.Process;
          ObfReferenceObjectWithTag(Process, 0x52777445u);
          *((_WORD *)v90 + 48) = v115;
          v50 = (char **)(v11 + 7);
          *((_QWORD *)v90 + 10) = Process;
          *((_QWORD *)v90 + 11) = v48;
          *((_QWORD *)v90 + 4) = v11;
          v51 = v11[7];
          if ( *(_QWORD **)(v51 + 8) != v11 + 7 )
            __fastfail(3u);
          *((_QWORD *)v90 + 1) = v50;
          *(_QWORD *)v90 = v51;
          *(_QWORD *)(v51 + 8) = v90;
          *v50 = v90;
          *((_QWORD *)v90 + 3) = v90 + 16;
          *((_QWORD *)v90 + 2) = v90 + 16;
          _InterlockedOr16(v47, 0x40u);
          ObReferenceObjectByPointer(v90, 0, EtwpRegistrationObjectType, 0);
          v52 = 0;
          inserted = ObInsertObjectEx(v90, 0LL, 0x804u, 1, 0, (__int64)AccessStatus, &v122);
          v9 = v90;
          if ( inserted < 0 )
            goto LABEL_69;
          ObfDereferenceObject(v90);
          if ( LOBYTE(v114[0]) )
            _InterlockedOr16((volatile signed __int16 *)v90 + 49, 0x80u);
          *(_QWORD *)(v6 + 24) = v122;
          if ( !*((_DWORD *)v11 + 24) )
          {
LABEL_58:
            v53 = v9[98];
            v114[0] = *((_WORD *)v9 + 50);
            EtwpApplyScopeFilters((_DWORD)v9, (v53 & 8) != 0, 0, 0, (__int64)v114);
            v55 = v11[82];
            if ( v55 )
            {
              if ( *(_DWORD *)(v55 + 96) )
              {
                LOBYTE(v54) = 1;
                EtwpUpdateEnableMask(v55, (v9[98] & 8) != 0, 1, v54, (__int64)(v9 + 104));
              }
              LOBYTE(v54) = 1;
              v94 = v9[98];
              LOWORD(v115) = *((_WORD *)v9 + 52);
              EtwpApplyScopeFilters((_DWORD)v9, (v94 & 8) != 0, 0, v54, (__int64)&v115);
              v56 = v115;
            }
            else
            {
              v56 = v117;
            }
            v57 = v114[0];
            if ( (v9[98] & 8) != 0 )
            {
              *((_WORD *)v9 + 52) = v56;
            }
            else
            {
              v57 = *((_WORD *)v9 + 50) & v114[0];
              *((_WORD *)v9 + 52) &= v56;
              v56 = *((_WORD *)v9 + 52);
            }
            *((_WORD *)v9 + 50) = v57;
            if ( v57 || v56 )
            {
              EtwpComputeRegEntryEnableInfo(v9, v6 + 112);
              v75 = *((_BYTE *)v11 + 91) & 1;
              BYTE3(v116) = 0;
              *(_DWORD *)(v6 + 152) = v75;
              LOWORD(v116) = *((_WORD *)v11 + 44);
              BYTE2(v116) = *((_BYTE *)v11 + 90);
              HIDWORD(v116) = *((_DWORD *)v11 + 20);
              v58 = v116;
            }
            else
            {
              v58 = 0LL;
              *(_OWORD *)(v6 + 112) = 0LL;
              *(_OWORD *)(v6 + 128) = 0LL;
              *(_DWORD *)(v6 + 152) = 0;
            }
            v59 = v123;
            *(_QWORD *)(v6 + 144) = v58;
            *v59 = 160;
            SchematizedFilterSize = EtwpGetSchematizedFilterSize(v11, v57);
            if ( SchematizedFilterSize )
            {
              *v59 = SchematizedFilterSize + 176;
              *(_DWORD *)(v6 + 172) = 0x80000000;
              *(_DWORD *)(v6 + 168) = SchematizedFilterSize;
              *(_QWORD *)(v6 + 160) = 136LL;
              EtwpCopySchematizedFilters((void *)(v6 + 176));
              v61 = 1;
            }
            else
            {
              v61 = 0;
            }
            *(_DWORD *)(v6 + 156) = v61;
            *(_DWORD *)(v6 + 44) = *v59;
            EtwpTrackProviderRegistration(v9);
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_REGISTER) )
            {
              SubjectContext.ClientToken = (PACCESS_TOKEN)v6;
              *(_QWORD *)&SubjectContext.ImpersonationLevel = 16LL;
              EtwWrite(
                EtwpEventTracingProvRegHandle,
                &ETW_EVENT_PROVIDER_REGISTER,
                0LL,
                1u,
                (PEVENT_DATA_DESCRIPTOR)&SubjectContext);
            }
            goto LABEL_69;
          }
          v76 = *((_WORD *)v90 + 49);
          v77 = (unsigned __int16 *)v11 + 67;
          LODWORD(v121) = inserted;
          v78 = v76 & 8;
          while ( 1 )
          {
            if ( !*(_DWORD *)(v77 - 3) )
              goto LABEL_86;
            v79 = *v77;
            v115 = 0;
            v118 = v79;
            if ( v78 )
            {
              if ( (_DWORD)v79 != *((unsigned __int16 *)v11 + 44) )
                goto LABEL_86;
            }
            ClientToken = (PACCESS_TOKEN)v11[81];
            SubjectContext.ClientToken = ClientToken;
            if ( (unsigned int)v79 >= *((_DWORD *)ClientToken + 4) )
              goto LABEL_86;
            if ( (*(_BYTE *)(*((_QWORD *)ClientToken + 89) + 8 * v79) & 1) != 0 )
              goto LABEL_86;
            v81 = *((_QWORD *)ClientToken + 88);
            *(_QWORD *)GrantedAccess = 8 * v79;
            if ( !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(8 * v79 + v81), 1u) )
              goto LABEL_86;
            if ( v118 >= *((_DWORD *)ClientToken + 4) )
              break;
            _mm_lfence();
            v82 = *(_QWORD *)GrantedAccess;
            v83 = *(unsigned int **)(*(_QWORD *)GrantedAccess + *((_QWORD *)ClientToken + 89));
            if ( ((unsigned __int8)v83 & 1) != 0 )
            {
              ClientToken = SubjectContext.ClientToken;
LABEL_98:
              v84 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v82 + *((_QWORD *)ClientToken + 88));
              goto LABEL_96;
            }
            if ( !v83[80] )
            {
              v84 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(*(_QWORD *)(*((_QWORD *)v83 + 170) + 704LL) + 8LL * *v83);
LABEL_96:
              ExReleaseRundownProtectionCacheAwareEx(v84, 1u);
              goto LABEL_86;
            }
            if ( v83 )
            {
              v95 = v83[3];
              if ( v78 )
              {
                v97 = (v95 & 0x1000000) != 0;
                v96 = v115;
                if ( v97 )
                  v96 = -1073741790;
LABEL_132:
                v115 = v96;
              }
              else if ( (v95 & 0x80u) != 0 )
              {
                v96 = EtwpCheckLoggerControlAccess(0x200u);
                goto LABEL_132;
              }
              ExReleaseRundownProtectionCacheAwareEx(
                *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v83 + 170) + 704LL) + 8LL * *v83),
                1u);
              if ( !v115 )
                *((_WORD *)v90 + 50) |= 1 << (v52 & 0xF);
            }
LABEL_86:
            ++v52;
            v77 += 16;
            if ( v52 >= 0x10 )
            {
              v6 = v124;
              v9 = v90;
              inserted = (int)v121;
              goto LABEL_58;
            }
          }
          v82 = *(_QWORD *)GrantedAccess;
          goto LABEL_98;
        }
        v91 = KeGetCurrentPrcb();
        v92 = v91->PPLookasideList[4].P;
        ++v92->TotalFrees;
        if ( LOWORD(v92->ListHead.Alignment) < v92->Depth
          || (++v92->FreeMisses,
              v92 = v91->PPLookasideList[4].L,
              ++v92->TotalFrees,
              LOWORD(v92->ListHead.Alignment) < v92->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v92->ListHead, (PSLIST_ENTRY)v43);
          v9 = 0LL;
        }
        else
        {
          ++v92->FreeMisses;
          guard_dispatch_icall_no_overrides(v43, (__int64)v91);
          v9 = 0LL;
        }
      }
      else
      {
        v9 = v116;
        inserted = -1073741670;
      }
    }
LABEL_69:
    v11[84] = 0LL;
    _m_prefetchw(v11 + 83);
    v62 = v11[83];
    v63 = v62 - 16;
    if ( (v62 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v63 = 0LL;
    if ( (v62 & 2) != 0 || (v64 = v11[83], v64 != _InterlockedCompareExchange64(v11 + 83, v63, v62)) )
      ExfReleasePushLock(v11 + 83);
    KeAbPostRelease((unsigned __int64)(v11 + 83));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v65, v66);
    v67 = v11[82];
    if ( v67 )
    {
      *(_QWORD *)(v67 + 672) = 0LL;
      v68 = (__int64 *)(v11[82] + 664LL);
      _m_prefetchw(v68);
      v69 = *v68;
      v70 = *v68 - 16;
      if ( (*v68 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v70 = 0LL;
      if ( (v69 & 2) != 0 || (v71 = *v68, v71 != _InterlockedCompareExchange64(v68, v70, v69)) )
        ExfReleasePushLock(v68);
      KeAbPostRelease((unsigned __int64)v68);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v72, v73);
    }
    if ( v9 )
      ObfDereferenceObject(v9);
    goto LABEL_81;
  }
  return 3221225506LL;
}
