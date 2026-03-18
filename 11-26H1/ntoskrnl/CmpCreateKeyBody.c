/*
 * XREFs of CmpCreateKeyBody @ 0x1408FBCB0
 * Callers:
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x140A31298 (CmpStartSiloRegistryNamespace.c)
 * Callees:
 *     RtlEqualSid @ 0x1402604A0 (RtlEqualSid.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x1402659F0 (ObpPushStackInfo.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     SepPrivilegeCheck @ 0x14042F0A0 (SepPrivilegeCheck.c)
 *     PsGetCurrentThreadProcessId @ 0x1404575B0 (PsGetCurrentThreadProcessId.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ObpRegisterObject @ 0x140778F98 (ObpRegisterObject.c)
 *     CmpRecordParseFailure @ 0x1408C64C0 (CmpRecordParseFailure.c)
 *     CmpLockKcbExclusive @ 0x1408CEB50 (CmpLockKcbExclusive.c)
 *     CmpIsKeyStackDeleted @ 0x1408CECF0 (CmpIsKeyStackDeleted.c)
 *     CmpTransReferenceTransaction @ 0x1408EE304 (CmpTransReferenceTransaction.c)
 *     ObpCaptureObjectCreateInformation @ 0x1408FDFD0 (ObpCaptureObjectCreateInformation.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140932AB0 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     ObpAllocateObject @ 0x1409344A0 (ObpAllocateObject.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140C582B0 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpCreateKeyBody(
        volatile signed __int64 *BugCheckParameter2,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        _QWORD *a7,
        __int64 a8)
{
  __int64 v8; // r12
  unsigned __int8 v9; // r13
  volatile signed __int64 *v10; // r14
  char *v11; // rbx
  signed __int64 v12; // rax
  struct _KPRCB *CurrentPrcb; // r14
  POBJECT_TYPE *v14; // r15
  _GENERAL_LOOKASIDE *P; // rdi
  __int64 v16; // rsi
  int Information; // edi
  __int64 v18; // r8
  struct _KLOCK_ENTRIES *v19; // r9
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // r14
  struct _KTHREAD *v23; // r13
  void *v24; // rdx
  LegacyAutoBoost *v25; // r15
  void *v26; // r15
  __int64 v27; // rdx
  __int64 v28; // r8
  _QWORD *v29; // rax
  __int64 v30; // rdi
  _QWORD *v31; // r14
  unsigned int v32; // r15d
  char v33; // r12
  _QWORD *v34; // rcx
  void *v35; // rbx
  _KPROCESS *v36; // rdx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v38; // rtt
  struct _SLIST_ENTRY *v39; // r8
  struct _KPRCB *v40; // rdx
  _GENERAL_LOOKASIDE *v41; // rcx
  void *v42; // rcx
  struct _KPRCB *v43; // rdx
  _GENERAL_LOOKASIDE *v44; // rcx
  int v45; // ecx
  __int64 v46; // r13
  __int64 v47; // r15
  __int64 v48; // r12
  int i; // r9d
  int v50; // ecx
  __int64 v51; // r8
  struct _KLOCK_ENTRIES *v52; // r9
  __int64 v53; // rbx
  struct _KPRCB *v54; // rdx
  _GENERAL_LOOKASIDE *v55; // rcx
  unsigned int v56; // r8d
  _BYTE *v57; // rcx
  char v58; // si
  __int64 *v59; // rdx
  __int64 v60; // rax
  __int64 **v61; // rcx
  PSE_EXPORTS v62; // r13
  int v63; // ebx
  _KSCHEDULING_GROUP *volatile *v64; // r9
  __int64 v65; // r10
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *Flink; // rax
  _KSCHEDULING_GROUP *volatile *v68; // rdx
  __int64 v69; // r9
  _UNKNOWN **v70; // r8
  _DWORD *v71; // rax
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 v73; // rax
  __int64 v74; // rax
  int v75; // eax
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // r8
  struct _KLOCK_ENTRIES *v81; // r9
  __int16 v83; // [rsp+44h] [rbp-A5h] BYREF
  PVOID Object; // [rsp+48h] [rbp-A1h] BYREF
  __int64 v85; // [rsp+50h] [rbp-99h]
  PVOID v86; // [rsp+58h] [rbp-91h]
  __int64 v87; // [rsp+60h] [rbp-89h]
  volatile signed __int64 *v88; // [rsp+68h] [rbp-81h]
  __int64 v89; // [rsp+70h] [rbp-79h]
  __int64 v90; // [rsp+80h] [rbp-69h] BYREF
  __int64 v91; // [rsp+88h] [rbp-61h]
  __int64 v92; // [rsp+90h] [rbp-59h]
  __int64 v93; // [rsp+98h] [rbp-51h]
  PSLIST_ENTRY ListEntry[2]; // [rsp+A0h] [rbp-49h] BYREF
  POBJECT_TYPE *v95; // [rsp+B0h] [rbp-39h]
  __int64 v96; // [rsp+B8h] [rbp-31h]
  _QWORD *v97; // [rsp+C0h] [rbp-29h]
  __int64 v98; // [rsp+C8h] [rbp-21h]
  _DWORD v99[2]; // [rsp+D0h] [rbp-19h] BYREF
  _KSCHEDULING_GROUP *volatile v100; // [rsp+D8h] [rbp-11h] BYREF
  int v101; // [rsp+E0h] [rbp-9h]

  v93 = a6;
  v8 = a3;
  v9 = a2;
  v97 = a7;
  v10 = BugCheckParameter2;
  v11 = 0LL;
  v98 = a8;
  v96 = a4;
  v91 = a3;
  v88 = BugCheckParameter2;
  v89 = 0LL;
  v92 = 0LL;
  v12 = _InterlockedIncrement64(BugCheckParameter2);
  if ( !v12 )
    KeBugCheckEx(0x51u, 0x24uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  if ( v12 == 1 )
    KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
  if ( a4 )
  {
    if ( *(_QWORD *)(a4 + 56) )
    {
      v89 = *(_QWORD *)(a4 + 56);
      v75 = CmpTransReferenceTransaction(v89);
      Information = v75;
      if ( v75 < 0 )
      {
        CmpRecordParseFailure(v8, 131840, v75);
LABEL_83:
        if ( _InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
        goto LABEL_142;
      }
    }
    else
    {
      v92 = a4 + 88;
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v83 = 0;
  v14 = CmKeyObjectType;
  v90 = 0LL;
  P = CurrentPrcb->PPLookasideList[4].P;
  LOBYTE(v83) = 1;
  v95 = CmKeyObjectType;
  *(_OWORD *)ListEntry = 0LL;
  ++P->TotalAllocates;
  v16 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v16
    || (++P->AllocateMisses,
        L = CurrentPrcb->PPLookasideList[4].L,
        ++L->TotalAllocates,
        (v16 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead)) != 0)
    || (++L->AllocateMisses, (v16 = guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size)) != 0) )
  {
    *(_DWORD *)v16 = CurrentPrcb->Number;
  }
  if ( !v16 )
  {
    Information = -1073741670;
    v45 = -1073741670;
    goto LABEL_116;
  }
  Information = ObpCaptureObjectCreateInformation(v9, v9, 0LL, ListEntry, v16, 0);
  if ( Information < 0 )
  {
    v54 = KeGetCurrentPrcb();
    v55 = v54->PPLookasideList[4].P;
    ++v55->TotalFrees;
    if ( LOWORD(v55->ListHead.Alignment) < v55->Depth
      || (++v55->FreeMisses,
          v55 = v54->PPLookasideList[4].L,
          ++v55->TotalFrees,
          LOWORD(v55->ListHead.Alignment) < v55->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v55->ListHead, (PSLIST_ENTRY)v16);
      v45 = Information;
    }
    else
    {
      ++v55->FreeMisses;
      guard_dispatch_icall_no_overrides(v16, (__int64)v54);
      v45 = Information;
    }
LABEL_116:
    v10 = v88;
    v58 = 1;
    if ( v8 )
    {
      v73 = *(unsigned __int8 *)(v8 + 426);
      if ( (unsigned __int8)v73 < 4u )
      {
        *(_DWORD *)(v8 + 8 * v73 + 428) = v45;
        *(_DWORD *)(v8 + 8LL * (unsigned __int8)(*(_BYTE *)(v8 + 426))++ + 432) = 132096;
      }
    }
    goto LABEL_80;
  }
  if ( (*(_DWORD *)v16 & (_DWORD)v14[9]) != 0 )
  {
    Information = -1073741811;
    goto LABEL_42;
  }
  if ( (*(_DWORD *)v16 & 0x10) == 0 )
    goto LABEL_64;
  SchedulingGroup = PspSiloMonitorLock.SchedulingGroup;
  v85 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v87 = *(_QWORD *)(Process + 464);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v23 = KeGetCurrentThread();
    --v23->KernelApcDisable;
    v25 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL, 0LL, v19);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&CurrentThread[1].WaitBlockList,
        0,
        v25,
        (struct _KTHREAD *)((char *)CurrentThread + 1424));
    if ( v25 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v25, v24);
      else
        *((_BYTE *)v25 + 10) = 1;
    }
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v26 = (void *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      ObfReferenceObjectWithTag(v26, 0x75536553u);
      LODWORD(v85) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
    }
    else
    {
      v26 = 0LL;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&CurrentThread[1].WaitBlockList);
    KeAbPostRelease((unsigned __int64)&CurrentThread[1].WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)v23, v27, v28);
    v9 = a2;
  }
  else
  {
    v26 = 0LL;
  }
  Object = v26;
  v29 = (_QWORD *)PsReferencePrimaryTokenWithTag(Process, 0x75536553u, v18, v19);
  v30 = (__int64)v29;
  v86 = v29;
  if ( SeTokenLeakTracking )
  {
    if ( v29 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v29[143] + 284LL));
      v30 = (__int64)v86;
      if ( v86 == RtlpBootStatHandleLock.TrapFrame )
        __debugbreak();
    }
    v31 = Object;
    if ( Object )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)Object + 143) + 284LL));
      v31 = Object;
      if ( Object == RtlpBootStatHandleLock.TrapFrame )
        __debugbreak();
      v30 = (__int64)v86;
    }
  }
  else
  {
    v31 = Object;
  }
  v100 = SchedulingGroup;
  v99[0] = 1;
  v32 = 1;
  v99[1] = 1;
  v101 = 0;
  if ( v9 )
  {
    if ( v31 )
    {
      if ( (int)v85 < 2 )
      {
        v33 = 0;
LABEL_29:
        v34 = (_QWORD *)v30;
        if ( v31 )
          v34 = v31;
        v35 = *(void **)v34[19];
        if ( !RtlEqualSid(*(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags, v35) )
        {
          v62 = SeExports;
          if ( !RtlEqualSid(SeExports->SeNetworkServiceSid, v35) && !RtlEqualSid(v62->SeLocalServiceSid, v35) )
            goto LABEL_90;
          v63 = 0;
          if ( v32 )
          {
            v64 = &v100;
            v65 = v32;
            do
            {
              Blink = ExpPlatformBinaryLock.WaitBlock[1].WaitListEntry.Blink;
              Flink = ExpPlatformBinaryLock.WaitBlock[1].WaitListEntry.Blink->Flink;
              while ( *(_DWORD *)v64 != LODWORD(Flink->Flink) || *((_DWORD *)v64 + 1) != HIDWORD(Blink->Flink->Flink) )
              {
                Flink = Blink->Blink;
                Blink = (struct _LIST_ENTRY *)((char *)Blink + 8);
                if ( !Flink )
                  goto LABEL_103;
              }
              ++v63;
LABEL_103:
              v64 = (_KSCHEDULING_GROUP *volatile *)((char *)v64 + 12);
              --v65;
            }
            while ( v65 );
            v68 = &v100;
            v69 = v32;
            do
            {
              v70 = &SepServicesFilterPrivileges;
              v71 = SepServicesFilterPrivileges;
              while ( *(_DWORD *)v68 != *v71 || *((_DWORD *)v68 + 1) != *((_DWORD *)*v70 + 1) )
              {
                v71 = v70[1];
                ++v70;
                if ( !v71 )
                  goto LABEL_108;
              }
              ++v63;
LABEL_108:
              v68 = (_KSCHEDULING_GROUP *volatile *)((char *)v68 + 12);
              --v69;
            }
            while ( v69 );
            if ( v63 != v32 )
            {
LABEL_90:
              SepAdtPrivilegedServiceAuditAlarm(
                (unsigned int)&Object,
                (unsigned int)&SeSubsystemName,
                0,
                (_DWORD)v31,
                v30,
                (__int64)v99,
                v33);
              v30 = (__int64)v86;
              v31 = Object;
            }
          }
          v9 = a2;
        }
        goto LABEL_32;
      }
    }
    else
    {
      v31 = (_QWORD *)v30;
    }
    v30 = (__int64)v86;
    v33 = SepPrivilegeCheck((__int64)v31, (__int64)&v100, 1u, 1, v9);
    v31 = Object;
    v32 = v99[0];
    goto LABEL_29;
  }
  v33 = 1;
LABEL_32:
  if ( SeTokenLeakTracking )
  {
    if ( v30 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v30 + 1144) + 284LL));
      v30 = (__int64)v86;
      if ( v86 == RtlpBootStatHandleLock.TrapFrame )
        __debugbreak();
      v31 = Object;
    }
    if ( v31 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v31[143] + 284LL));
      if ( Object == RtlpBootStatHandleLock.TrapFrame )
        __debugbreak();
      v30 = (__int64)v86;
    }
  }
  v36 = KeGetCurrentThread()->ApcState.Process;
  _m_prefetchw(&v36[1].ActiveProcessors);
  ActiveProcessors = (signed __int64)v36[1].ActiveProcessors;
  do
  {
    if ( (v30 ^ (unsigned __int64)ActiveProcessors) >= 0xF )
    {
      ObfDereferenceObjectWithTag((PVOID)v30, 0x75536553u);
      goto LABEL_38;
    }
    v38 = ActiveProcessors;
    ActiveProcessors = _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&v36[1].ActiveProcessors,
                         ActiveProcessors + 1,
                         ActiveProcessors);
  }
  while ( v38 != ActiveProcessors );
  if ( ObpTraceFlags )
    ObpPushStackInfo(v30 - 48, -1, 0x75536553u);
LABEL_38:
  v86 = 0LL;
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x75536553u);
  Object = 0LL;
  if ( !v33 )
  {
    Information = -1073741727;
LABEL_42:
    v39 = ListEntry[1];
    if ( ListEntry[1] )
    {
      if ( WORD1(ListEntry[0]) == 248 )
      {
        v40 = KeGetCurrentPrcb();
        v41 = v40->PPLookasideList[5].P;
        ++v41->TotalFrees;
        if ( LOWORD(v41->ListHead.Alignment) < v41->Depth
          || (++v41->FreeMisses,
              v41 = v40->PPLookasideList[5].L,
              ++v41->TotalFrees,
              LOWORD(v41->ListHead.Alignment) < v41->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v41->ListHead, v39);
        }
        else
        {
          ++v41->FreeMisses;
          guard_dispatch_icall_no_overrides((__int64)v39, (__int64)v40);
        }
      }
      else
      {
        ExFreePoolWithTag(ListEntry[1], 0);
      }
    }
    v42 = *(void **)(v16 + 32);
    if ( v42 )
    {
      if ( *(_BYTE *)(v16 + 16) <= 1u )
        ExFreePoolWithTag(v42, 0);
      *(_QWORD *)(v16 + 32) = 0LL;
    }
    v43 = KeGetCurrentPrcb();
    v44 = v43->PPLookasideList[4].P;
    ++v44->TotalFrees;
    if ( LOWORD(v44->ListHead.Alignment) < v44->Depth
      || (++v44->FreeMisses,
          v44 = v43->PPLookasideList[4].L,
          ++v44->TotalFrees,
          LOWORD(v44->ListHead.Alignment) < v44->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v44->ListHead, (PSLIST_ENTRY)v16);
    }
    else
    {
      ++v44->FreeMisses;
      guard_dispatch_icall_no_overrides(v16, (__int64)v43);
    }
    v11 = 0LL;
    v45 = Information;
    v8 = v91;
    goto LABEL_116;
  }
  v14 = v95;
LABEL_64:
  v50 = *((_DWORD *)v14 + 27);
  *(_DWORD *)(v16 + 20) = *((_DWORD *)v14 + 26);
  *(_DWORD *)(v16 + 24) = v50;
  Information = ObpAllocateObject(v16, v9, (_DWORD)v14, (unsigned int)ListEntry, 112, (__int64)&v90, (__int64)&v83);
  if ( Information < 0 )
    goto LABEL_42;
  v53 = v90;
  if ( ObpTraceFlags )
  {
    ObpRegisterObject(v90, 1, v51, v52);
    ObpPushStackInfo(v53, 1, 0x746C6644u);
  }
  v11 = (char *)(v53 + 48);
  v46 = v91;
  v10 = v88;
  *(_OWORD *)v11 = 0LL;
  *((_OWORD *)v11 + 1) = 0LL;
  *((_OWORD *)v11 + 2) = 0LL;
  *((_OWORD *)v11 + 3) = 0LL;
  *((_OWORD *)v11 + 4) = 0LL;
  *((_OWORD *)v11 + 5) = 0LL;
  *((_OWORD *)v11 + 6) = 0LL;
  *((_WORD *)v11 + 25) = *(_WORD *)(v46 + 20);
  *((_QWORD *)v11 + 1) = v10;
  *((_QWORD *)v11 + 3) = PsGetCurrentThreadProcessId();
  *((_WORD *)v11 + 2) = 0;
  *((_DWORD *)v11 + 24) = -1;
  if ( (v10[23] & 0x400000) != 0 )
  {
    v77 = *((int *)v10 + 24);
    *(_DWORD *)v11 = v77;
    *(_QWORD *)(v46 + 56) = v77;
  }
  else
  {
    *(_DWORD *)v11 = 1803104306;
  }
  v47 = v96;
  if ( v96 )
  {
    *((_QWORD *)v11 + 7) = v89;
    *((_QWORD *)v11 + 8) = v92;
    v89 = 0LL;
  }
  *((_QWORD *)v11 + 10) = v11 + 72;
  *((_QWORD *)v11 + 9) = v11 + 72;
  if ( (*(_DWORD *)(v46 + 24) & 0x10) != 0 )
    *((_WORD *)v11 + 24) |= 0x10u;
  if ( (a5 & 2) == 0 || (v10[23] & 0x400000) != 0 )
  {
LABEL_79:
    v57 = (_BYTE *)v98;
    v58 = 0;
    Information = 0;
    *v97 = v11;
    v11 = 0LL;
    *v57 = (v10[23] & 0x400000) != 0;
  }
  else
  {
    v48 = v93;
    if ( (a5 & 1) != 0 )
      goto LABEL_72;
    for ( i = 0; ; i = 2 )
    {
      *((_QWORD *)v11 + 5) = v11 + 32;
      v56 = 0;
      *((_QWORD *)v11 + 4) = v11 + 32;
      while ( v56 < 4 )
      {
        if ( !_InterlockedCompareExchange64(
                (volatile signed __int64 *)(*((_QWORD *)v11 + 1) + 8LL * v56 + 136),
                (signed __int64)v11,
                0LL) )
          goto LABEL_78;
        ++v56;
      }
      if ( i )
      {
        v59 = (__int64 *)(v11 + 32);
        v60 = *((_QWORD *)v11 + 1) + 120LL;
        v61 = *(__int64 ***)(*((_QWORD *)v11 + 1) + 128LL);
        if ( *v61 != (__int64 *)v60 )
          __fastfail(3u);
        *v59 = v60;
        *((_QWORD *)v11 + 5) = v61;
        *v61 = v59;
        *(_QWORD *)(v60 + 8) = v59;
LABEL_78:
        *((_WORD *)v11 + 24) |= 0x40u;
        goto LABEL_79;
      }
      v78 = *((_QWORD *)v11 + 1);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v78 + 48), 1LL, 17LL) == 17 )
      {
        *(_QWORD *)(v78 + 56) = KeGetCurrentThread();
        continue;
      }
      CmpUnlockKcb(*((_QWORD *)v11 + 1));
      CmpLockKcbExclusive(*((_QWORD *)v11 + 1), v79, v80, v81);
      if ( (*(_DWORD *)(*((_QWORD *)v11 + 1) + 8LL) & 0x20000) != 0 || CmpIsKeyStackDeleted(v48, v47) )
        break;
LABEL_72:
      ;
    }
    v74 = *(unsigned __int8 *)(v46 + 426);
    Information = -1073741444;
    v58 = 1;
    if ( (unsigned __int8)v74 < 4u )
    {
      *(_DWORD *)(v46 + 8 * v74 + 428) = -1073741444;
      *(_DWORD *)(v46 + 8LL * (unsigned __int8)(*(_BYTE *)(v46 + 426))++ + 432) = 132352;
    }
  }
LABEL_80:
  if ( v89 )
    ObfDereferenceObject((PVOID)(v89 & 0xFFFFFFFFFFFFFFFEuLL));
  if ( v58 )
    goto LABEL_83;
LABEL_142:
  if ( v11 )
  {
    *((_QWORD *)v11 + 1) = 0LL;
    ObfDereferenceObject(v11);
  }
  return (unsigned int)Information;
}
