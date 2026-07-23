/*
 * XREFs of ObInsertObjectEx @ 0x140906FA0
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x140782F1C (HalpDmaAllocateChildAdapterV3.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x140786890 (HalpDmaAllocateChildAdapterV2.c)
 *     NtCreateDebugObject @ 0x14078D140 (NtCreateDebugObject.c)
 *     IoCreateController @ 0x140798CB0 (IoCreateController.c)
 *     NtCreateIoRing @ 0x14079B5F0 (NtCreateIoRing.c)
 *     PopEtEnergyTrackerCreate @ 0x1407E01B0 (PopEtEnergyTrackerCreate.c)
 *     TtmpDispatchCreateEventQueue @ 0x1407ED894 (TtmpDispatchCreateEventQueue.c)
 *     TtmiCreateTerminal @ 0x1407F15A8 (TtmiCreateTerminal.c)
 *     NtCreateProcessStateChange @ 0x1407F7770 (NtCreateProcessStateChange.c)
 *     PsCreateCpuPartition @ 0x1407F81C0 (PsCreateCpuPartition.c)
 *     PspAllocatePartition @ 0x140803608 (PspAllocatePartition.c)
 *     SepInitializationPhase1 @ 0x140815D14 (SepInitializationPhase1.c)
 *     SeFilterToken @ 0x140816470 (SeFilterToken.c)
 *     NtCreateLowBoxToken @ 0x140819F50 (NtCreateLowBoxToken.c)
 *     EtwpRegisterPrivateSession @ 0x140833120 (EtwpRegisterPrivateSession.c)
 *     EtwpSetCoverageSamplerInformation @ 0x140837A74 (EtwpSetCoverageSamplerInformation.c)
 *     ExpProfileCreate @ 0x14084B100 (ExpProfileCreate.c)
 *     NtCreateKeyedEvent @ 0x14084BCB0 (NtCreateKeyedEvent.c)
 *     AlpcpAcceptConnectPort @ 0x1408ECFF0 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x1408F0020 (AlpcpCreateClientPort.c)
 *     NtDuplicateToken @ 0x1408F1E80 (NtDuplicateToken.c)
 *     NtCreateEvent @ 0x1408F5E80 (NtCreateEvent.c)
 *     SeCopyClientToken @ 0x1409025C0 (SeCopyClientToken.c)
 *     PsImpersonateClient @ 0x140904330 (PsImpersonateClient.c)
 *     SepCreateClientSecurityEx @ 0x140905C50 (SepCreateClientSecurityEx.c)
 *     ObInsertObject @ 0x140906AE0 (ObInsertObject.c)
 *     EtwpRegisterUMProvider @ 0x1409106B0 (EtwpRegisterUMProvider.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14091ABD0 (IoCreateStreamFileObjectEx2.c)
 *     IoCreateDevice @ 0x14091B9C0 (IoCreateDevice.c)
 *     PspInsertProcess @ 0x140945AAC (PspInsertProcess.c)
 *     PspSchedulerSharedDataRegionCreate @ 0x140988354 (PspSchedulerSharedDataRegionCreate.c)
 *     MiCreateSectionCommon @ 0x14098AD7C (MiCreateSectionCommon.c)
 *     NtFilterToken @ 0x1409E32D0 (NtFilterToken.c)
 *     WmipCreateGuidObject @ 0x140A0F220 (WmipCreateGuidObject.c)
 *     IopLoadDriver @ 0x140A3A064 (IopLoadDriver.c)
 *     NtOpenThreadTokenEx @ 0x140A50F30 (NtOpenThreadTokenEx.c)
 *     PspInsertThread @ 0x140A7B188 (PspInsertThread.c)
 *     NtCreateJobObject @ 0x140A7F420 (NtCreateJobObject.c)
 *     NtCreateWorkerFactory @ 0x140A95E40 (NtCreateWorkerFactory.c)
 *     NtCreatePrivateNamespace @ 0x140A9A600 (NtCreatePrivateNamespace.c)
 *     NtCreateMutant @ 0x140A9E470 (NtCreateMutant.c)
 *     NtCreateSemaphore @ 0x140A9F7D0 (NtCreateSemaphore.c)
 *     NtCreateWaitCompletionPacket @ 0x140AA5150 (NtCreateWaitCompletionPacket.c)
 *     EtwpRealtimeConnect @ 0x140AB34A8 (EtwpRealtimeConnect.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140AB430C (SepCopyAnonymousTokenAndSetSilo.c)
 *     ObCreateSymbolicLink @ 0x140AB6B08 (ObCreateSymbolicLink.c)
 *     NtCreateTimer2 @ 0x140ABF460 (NtCreateTimer2.c)
 *     NtCreateIoCompletion @ 0x140AD1330 (NtCreateIoCompletion.c)
 *     AlpcpCreateConnectionPort @ 0x140AE55B0 (AlpcpCreateConnectionPort.c)
 *     SeGetLogonSessionToken @ 0x140AED040 (SeGetLogonSessionToken.c)
 *     ObpCreateDirectoryObject @ 0x140AFC300 (ObpCreateDirectoryObject.c)
 *     ExCreateCallback @ 0x140AFD610 (ExCreateCallback.c)
 *     NtCreateRegistryTransaction @ 0x140AFFEB0 (NtCreateRegistryTransaction.c)
 *     NtAllocateReserveObject @ 0x140B0A080 (NtAllocateReserveObject.c)
 *     EtwpCreateUmReplyObject @ 0x140B14804 (EtwpCreateUmReplyObject.c)
 *     PspCreateActivityReference @ 0x140B294C8 (PspCreateActivityReference.c)
 *     NtCreateThreadStateChange @ 0x140B2C140 (NtCreateThreadStateChange.c)
 *     PspSessionObjectCreate @ 0x140B2F734 (PspSessionObjectCreate.c)
 *     NtCreateTimer @ 0x140B5A440 (NtCreateTimer.c)
 *     IoCreateDriver @ 0x140B5A8C0 (IoCreateDriver.c)
 *     NtQueryInformationToken @ 0x140B81F50 (NtQueryInformationToken.c)
 *     SeSubProcessToken @ 0x140B84D74 (SeSubProcessToken.c)
 *     MmCreateSpecialImageSection @ 0x140B880EC (MmCreateSpecialImageSection.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     PspChargeQuota @ 0x1403C7410 (PspChargeQuota.c)
 *     PspReturnQuota @ 0x1403C7860 (PspReturnQuota.c)
 *     SepDeleteAccessState @ 0x14040CC90 (SepDeleteAccessState.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x14043B0F0 (SepCreateAccessStateFromSubjectContext.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x14044DBF0 (SeComputeAutoInheritByObjectTypeEx.c)
 *     SeAssignSecurityEx2 @ 0x14045C290 (SeAssignSecurityEx2.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SeDeleteAccessState @ 0x1408F7CA0 (SeDeleteAccessState.c)
 *     RtlValidSecurityDescriptor @ 0x1409029C0 (RtlValidSecurityDescriptor.c)
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     ObpAdjustCreatorAccessState @ 0x14090D710 (ObpAdjustCreatorAccessState.c)
 *     PsReturnSharedPoolQuota @ 0x1409B8E10 (PsReturnSharedPoolQuota.c)
 *     PsChargeSharedPoolQuota @ 0x1409B9190 (PsChargeSharedPoolQuota.c)
 *     SeObjectCreateSaclAccessBits @ 0x140ABB99C (SeObjectCreateSaclAccessBits.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObInsertObjectEx(
        char *a1,
        struct _ACCESS_STATE *a2,
        int a3,
        int a4,
        char a5,
        __int64 a6,
        _QWORD *a7)
{
  _QWORD *v8; // r12
  struct _KLOCK_ENTRIES *v10; // r9
  char *v11; // rsi
  __int64 v12; // r8
  _SLIST_ENTRY *v13; // rbx
  __int64 v14; // r15
  POBJECT_TYPE v15; // r14
  char *v16; // rax
  bool v17; // zf
  char PreviousMode; // r13
  PVOID v19; // rdi
  int v20; // ecx
  unsigned int Handle; // esi
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *L; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  AutoBoost *v27; // rax
  AutoBoost *v28; // rcx
  __int64 v29; // rdx
  signed __int64 *v30; // rcx
  PVOID v31; // rax
  struct _LIST_ENTRY *v32; // rax
  _SLIST_ENTRY *v33; // rax
  __int64 v34; // rdx
  int v35; // r12d
  PVOID v36; // r13
  _SLIST_ENTRY *v37; // rcx
  int v38; // ecx
  PVOID v39; // rdx
  _SLIST_ENTRY *v40; // rax
  int v41; // r14d
  _SLIST_ENTRY *v42; // rcx
  struct _KPRCB *v43; // rdx
  _GENERAL_LOOKASIDE *v44; // rcx
  signed __int64 v45; // r8
  _KPROCESS *v46; // rdx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v48; // rtt
  PACCESS_TOKEN v49; // rcx
  _QWORD *v50; // r15
  struct _KTHREAD *v51; // rax
  AutoBoost *v52; // rax
  void *v53; // rdx
  AutoBoost *v54; // r13
  char *v55; // r14
  unsigned int v56; // r13d
  _KPROCESS *Process; // r12
  char v58; // al
  __int64 v59; // rax
  unsigned __int64 v60; // rcx
  unsigned int v61; // edx
  unsigned __int64 v62; // rax
  __int64 SchedulingGroup; // r12
  signed __int64 v64; // rax
  signed __int64 v65; // rdx
  __int64 v66; // rtt
  __int16 v67; // r8
  __int64 v68; // r9
  __int64 v69; // r9
  __int64 v70; // r8
  __int64 v71; // r8
  __int64 v72; // rax
  void *v73; // rcx
  __int64 v74; // rax
  _QWORD *PrimaryToken; // rax
  _QWORD *ClientToken; // rax
  int v77; // [rsp+30h] [rbp-D0h]
  __int64 v78; // [rsp+48h] [rbp-B8h]
  __int64 v79; // [rsp+48h] [rbp-B8h]
  int v80; // [rsp+60h] [rbp-A0h] BYREF
  PVOID P; // [rsp+68h] [rbp-98h] BYREF
  char v82; // [rsp+70h] [rbp-90h]
  PVOID Object; // [rsp+78h] [rbp-88h]
  ULONG Index[2]; // [rsp+80h] [rbp-80h] BYREF
  int v85; // [rsp+88h] [rbp-78h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+90h] [rbp-70h]
  _QWORD *v87; // [rsp+98h] [rbp-68h]
  struct _KTHREAD *v88; // [rsp+A0h] [rbp-60h]
  __int64 v89; // [rsp+A8h] [rbp-58h]
  struct _KTHREAD *v90; // [rsp+B0h] [rbp-50h]
  __int128 v91; // [rsp+C0h] [rbp-40h] BYREF
  struct _LIST_ENTRY *v92; // [rsp+D0h] [rbp-30h]
  __int64 v93; // [rsp+D8h] [rbp-28h]
  _QWORD v94[20]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v95[28]; // [rsp+180h] [rbp+80h] BYREF

  v8 = a7;
  v80 = a3;
  Object = a1;
  v89 = a6;
  v87 = a7;
  v85 = a4;
  memset_0(v95, 0, sizeof(v95));
  memset_0(v94, 0, sizeof(v94));
  v11 = a1 - 48;
  v12 = 0LL;
  v13 = (_SLIST_ENTRY *)*((_QWORD *)a1 - 2);
  v14 = 0LL;
  v15 = (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v11[24] ^ (unsigned __int64)BYTE1(v11)];
  if ( (v11[26] & 2) != 0 )
  {
    v16 = (char *)ObpInfoMaskToOffset[v11[26] & 3];
    if ( v11 != v16 )
      v14 = v11 - v16 + 8;
  }
  v17 = (v15->TypeInfo.ObjectTypeFlags & 8) == 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v82 = PreviousMode;
  if ( v17 && !v14 && !v13[2].Next )
  {
    v19 = Object;
    *((_QWORD *)v11 + 4) = 0LL;
    if ( a7 )
    {
      v20 = v85 + 1;
      v78 = v89;
      *a7 = 0LL;
      Handle = ObpCreateHandle(0LL, v19, (unsigned int)v80, 0LL, v20, v13->Next, PreviousMode, 0LL, 0, v78, a7);
    }
    else
    {
      Handle = 0;
    }
    Next = v13[2].Next;
    if ( Next )
    {
      if ( LOBYTE(v13[1].Next) <= 1u )
        ExFreePoolWithTag(Next, 0);
      v13[2].Next = 0LL;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    L = CurrentPrcb->PPLookasideList[4].P;
    ++L->TotalFrees;
    if ( LOWORD(L->ListHead.Alignment) < L->Depth
      || (++L->FreeMisses,
          L = CurrentPrcb->PPLookasideList[4].L,
          ++L->TotalFrees,
          LOWORD(L->ListHead.Alignment) < L->Depth) )
    {
      RtlpInterlockedPushEntrySList(&L->ListHead, v13);
    }
    else
    {
      ++L->FreeMisses;
      guard_dispatch_icall_no_overrides((__int64)v13, (__int64)CurrentPrcb);
    }
    ObfDereferenceObject(v19);
    return Handle;
  }
  if ( !a2 )
  {
    CurrentThread = KeGetCurrentThread();
    a2 = (struct _ACCESS_STATE *)v94;
    v88 = CurrentThread;
    *((_QWORD *)&v91 + 1) = 0LL;
    SecurityDescriptor = CurrentThread->ApcState.Process;
    v93 = *((_QWORD *)SecurityDescriptor + 58);
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v90 = KeGetCurrentThread();
      --v90->KernelApcDisable;
      *(_QWORD *)Index = (char *)CurrentThread + 1424;
      v27 = (AutoBoost *)KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL, 0LL, v10);
      v28 = v27;
      P = v27;
      v29 = 17LL;
      if ( _InterlockedCompareExchange64(*(volatile signed __int64 **)Index, 17LL, 0LL) )
      {
        ExfAcquirePushLockSharedEx(*(signed __int64 **)Index, 0, v27, *(struct _KTHREAD **)Index);
        v28 = (AutoBoost *)P;
      }
      if ( v28 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v28, (void *)v29);
        else
          *((_BYTE *)v28 + 10) = 1;
      }
      if ( (*(_DWORD *)(&v88[1].SwapListEntry + 1) & 8) != 0 )
      {
        P = (PVOID)(*(_QWORD *)((char *)&v88[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(P, 0x75536553u);
        DWORD2(v91) = *((_DWORD *)&v88[1].0 + 1) & 3;
      }
      else
      {
        P = 0LL;
      }
      v30 = *(signed __int64 **)Index;
      if ( _InterlockedCompareExchange64(*(volatile signed __int64 **)Index, 0LL, 17LL) != 17 )
      {
        ExfReleasePushLockShared(*(signed __int64 **)Index);
        v30 = *(signed __int64 **)Index;
      }
      KeAbPostRelease((unsigned __int64)v30);
      KeLeaveCriticalRegionThread((__int64)v90);
      v31 = P;
    }
    else
    {
      v31 = 0LL;
      P = 0LL;
    }
    *(_QWORD *)&v91 = v31;
    v32 = (struct _LIST_ENTRY *)PsReferencePrimaryTokenWithTag((__int64)SecurityDescriptor, 0x75536553u, v12, v10);
    v92 = v32;
    if ( SeTokenLeakTracking )
    {
      if ( v32 )
      {
        _InterlockedIncrement((volatile signed __int32 *)&v32[71].Blink[17].Blink + 1);
        if ( v32 == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
          __debugbreak();
      }
      if ( P )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)P + 143) + 284LL));
        if ( P == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
          __debugbreak();
      }
    }
    LODWORD(P) = SepCreateAccessStateFromSubjectContext(&v91, v94, v95, v80, &v15->TypeInfo.GenericMapping.GenericRead);
    if ( (int)P < 0 )
    {
      ObfDereferenceObject(Object);
      return (unsigned int)P;
    }
  }
  v33 = v13[2].Next;
  SecurityDescriptor = v33;
  a2->SecurityDescriptor = v33;
  if ( v33 )
  {
    if ( !RtlValidSecurityDescriptor(v33) )
    {
      ObfDereferenceObject(Object);
      if ( a2 == (struct _ACCESS_STATE *)v94 )
        SeDeleteAccessState((__int64)a2);
      return 3221225593LL;
    }
    if ( (*((_BYTE *)SecurityDescriptor + 2) & 0x10) != 0 && (a2->PreviouslyGrantedAccess & 0x1000000) == 0 )
      a2->RemainingDesiredAccess |= SeObjectCreateSaclAccessBits(SecurityDescriptor);
  }
  if ( !v14 && ((v15->TypeInfo.ObjectTypeFlags & 8) != 0 || v13[2].Next) )
  {
    v34 = (__int64)a2->SecurityDescriptor;
    Index[1] = 0;
    v80 = 0;
    P = 0LL;
    Index[0] = 8;
    v35 = SeComputeAutoInheritByObjectTypeEx((__int64)v15, v34, 0LL, &v80, Index);
    if ( v35 < 0 )
    {
      v36 = Object;
    }
    else
    {
      v35 = SeAssignSecurityEx2(
              0,
              (int)a2->SecurityDescriptor,
              (int)&P,
              0LL,
              v15 == ObpDirectoryObjectType,
              (16 * (a5 & 1)) | (unsigned int)v80,
              Index,
              (__int64)&a2->SubjectSecurityContext,
              (__int64)&v15->TypeInfo.GenericMapping);
      if ( v35 < 0 )
      {
        v36 = Object;
        goto LABEL_38;
      }
      v36 = Object;
      v77 = 1;
      v35 = guard_dispatch_icall_no_overrides((__int64)Object, 3LL);
      if ( v35 < 0 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
        goto LABEL_38;
      }
    }
    if ( v35 >= 0 )
    {
      v37 = v13[2].Next;
      if ( LOBYTE(v13[1].Next) <= 1u && v37 )
        ExFreePoolWithTag(v37, 0);
      v8 = v87;
      PreviousMode = v82;
      v13[2].Next = 0LL;
      a2->SecurityDescriptor = 0LL;
      goto LABEL_56;
    }
LABEL_38:
    ObfDereferenceObject(v36);
    if ( a2 == (struct _ACCESS_STATE *)v94 )
      SeDeleteAccessState((__int64)a2);
    return (unsigned int)v35;
  }
LABEL_56:
  *((_QWORD *)v11 + 4) = 0LL;
  if ( v8 )
  {
    v38 = v85;
    v79 = v89;
    v39 = Object;
    *v8 = 0LL;
    v40 = v13;
    if ( !v14 )
      v40 = 0LL;
    LOBYTE(v77) = PreviousMode;
    v41 = ObpCreateHandle(0LL, v39, 0LL, a2, v38 + 1, v13->Next, v77, v40, 0, v79, v8);
    ObfDereferenceObject(Object);
    goto LABEL_60;
  }
  v50 = Object;
  if ( a2 == (struct _ACCESS_STATE *)v94 || (v41 = ObpAdjustCreatorAccessState(a2), v41 >= 0) )
  {
    v51 = KeGetCurrentThread();
    --v51->KernelApcDisable;
    v52 = (AutoBoost *)KeAbPreAcquire((__int64)(v11 + 16), 0LL, 0LL, v10);
    v54 = v52;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11 + 4, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v11 + 2, v52, (__int64)(v11 + 16));
    if ( v54 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v54, v53);
      else
        *((_BYTE *)v54 + 10) = 1;
    }
    v55 = 0LL;
    v56 = 0;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( (v11[26] & 8) != 0 )
      v55 = &v11[-ObpInfoMaskToOffset[v11[26] & 0xF]];
    v58 = v11[27];
    if ( (v58 & 1) == 0 )
      goto LABEL_95;
    v11[27] = v58 & 0xFE;
    if ( v55 )
    {
      v59 = *((_QWORD *)v11 + 5);
      v60 = *((unsigned int *)v55 + 1);
      v61 = *(_DWORD *)v55;
      v80 = *(_DWORD *)v55;
      LODWORD(P) = v60;
      if ( v59 )
      {
        v62 = v59 & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v62 )
        {
          if ( *(_BYTE *)v62 != 1 )
          {
            v41 = -1073741736;
            goto LABEL_96;
          }
          v67 = *(_WORD *)(v62 + 2);
          if ( v67 >= 0 )
          {
            v69 = *(_QWORD *)(v62 + 16);
          }
          else
          {
            v68 = *(unsigned int *)(v62 + 8);
            if ( (_DWORD)v68 )
              v69 = v62 + v68;
            else
              v69 = 0LL;
          }
          if ( (v67 & 4) != 0 )
          {
            if ( v67 >= 0 )
            {
              v71 = *(_QWORD *)(v62 + 32);
            }
            else
            {
              v70 = *(unsigned int *)(v62 + 16);
              if ( (_DWORD)v70 )
                v71 = v62 + v70;
              else
                v71 = 0LL;
            }
          }
          else
          {
            v71 = 0LL;
          }
          if ( v69 )
            v56 = (4 * *(unsigned __int8 *)(v69 + 1) + 11) & 0xFFFFFFFC;
          if ( v71 )
            v56 += (*(unsigned __int16 *)(v71 + 2) + 3) & 0xFFFFFFFC;
          if ( v56 )
          {
            v72 = PsChargeSharedPoolQuota(Process, v56);
            *((_QWORD *)v55 + 2) = v72;
            if ( !v72 )
            {
              v41 = -1073741756;
              goto LABEL_96;
            }
            v61 = v80;
            v60 = (unsigned int)P;
          }
          *((_DWORD *)v55 + 2) = v56;
        }
      }
    }
    else
    {
      v74 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v11[24] ^ (unsigned __int64)BYTE1(v11)];
      v61 = *(_DWORD *)(v74 + 104);
      v60 = *(unsigned int *)(v74 + 108);
      v80 = v61;
    }
    v87 = (_QWORD *)v60;
    if ( Process == PsInitialSystemProcess )
    {
      *(v50 - 2) = 1LL;
      goto LABEL_95;
    }
    SchedulingGroup = (__int64)Process[1].SchedulingGroup;
    if ( v61 )
    {
      if ( (int)PspChargeQuota(SchedulingGroup, 0LL, 1, v61) < 0 )
      {
        *(v50 - 2) = 0LL;
        goto LABEL_130;
      }
      v60 = (unsigned __int64)v87;
    }
    if ( v60 && (int)PspChargeQuota(SchedulingGroup, 0LL, 0, v60) < 0 )
    {
      if ( v80 )
        PspReturnQuota((__int64 *)SchedulingGroup, 0LL, 1u, (unsigned int)v80);
      *(v50 - 2) = 0LL;
      goto LABEL_130;
    }
    _InterlockedIncrement((volatile signed __int32 *)(SchedulingGroup + 512));
    *((_QWORD *)v11 + 4) = SchedulingGroup;
    if ( SchedulingGroup )
    {
LABEL_95:
      v41 = 0;
      goto LABEL_96;
    }
LABEL_130:
    if ( v55 )
    {
      v73 = (void *)*((_QWORD *)v55 + 2);
      if ( v73 )
        PsReturnSharedPoolQuota(v73);
    }
    v41 = -1073741756;
LABEL_96:
    _m_prefetchw(v11 + 16);
    v64 = *((_QWORD *)v11 + 2);
    v65 = v64 - 16;
    if ( (v64 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v65 = 0LL;
    if ( (v64 & 2) != 0
      || (v66 = *((_QWORD *)v11 + 2), v66 != _InterlockedCompareExchange64((volatile signed __int64 *)v11 + 2, v65, v64)) )
    {
      ExfReleasePushLock((_QWORD *)v11 + 2);
    }
    KeAbPostRelease((unsigned __int64)(v11 + 16));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v41 >= 0 )
      goto LABEL_60;
  }
  ObfDereferenceObject(v50);
LABEL_60:
  v42 = v13[2].Next;
  if ( v42 )
  {
    if ( LOBYTE(v13[1].Next) <= 1u )
      ExFreePoolWithTag(v42, 0);
    v13[2].Next = 0LL;
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
    RtlpInterlockedPushEntrySList(&v44->ListHead, v13);
  }
  else
  {
    ++v44->FreeMisses;
    guard_dispatch_icall_no_overrides((__int64)v13, (__int64)v43);
  }
  if ( a2 == (struct _ACCESS_STATE *)v94 )
  {
    SepDeleteAccessState((__int64)a2);
    if ( SeTokenLeakTracking )
    {
      PrimaryToken = a2->SubjectSecurityContext.PrimaryToken;
      if ( PrimaryToken )
      {
        _InterlockedDecrement((volatile signed __int32 *)(PrimaryToken[143] + 284LL));
        if ( a2->SubjectSecurityContext.PrimaryToken == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
          __debugbreak();
      }
      ClientToken = a2->SubjectSecurityContext.ClientToken;
      if ( ClientToken )
      {
        _InterlockedDecrement((volatile signed __int32 *)(ClientToken[143] + 284LL));
        if ( a2->SubjectSecurityContext.ClientToken == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
          __debugbreak();
      }
    }
    v45 = (signed __int64)a2->SubjectSecurityContext.PrimaryToken;
    v46 = KeGetCurrentThread()->ApcState.Process;
    _m_prefetchw(&v46[1].ActiveProcessors);
    ActiveProcessors = (signed __int64)v46[1].ActiveProcessors;
    do
    {
      if ( (v45 ^ (unsigned __int64)ActiveProcessors) >= 0xF )
      {
        ObfDereferenceObjectWithTag((PVOID)v45, 0x75536553u);
        goto LABEL_73;
      }
      v48 = ActiveProcessors;
      ActiveProcessors = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&v46[1].ActiveProcessors,
                           ActiveProcessors + 1,
                           ActiveProcessors);
    }
    while ( v48 != ActiveProcessors );
    if ( ObpTraceFlags )
      ObpPushStackInfo(v45 - 48, -1, 0x75536553u);
LABEL_73:
    v49 = a2->SubjectSecurityContext.ClientToken;
    a2->SubjectSecurityContext.PrimaryToken = 0LL;
    if ( v49 )
      ObfDereferenceObjectWithTag(v49, 0x75536553u);
    a2->SubjectSecurityContext.ClientToken = 0LL;
  }
  return (unsigned int)v41;
}
