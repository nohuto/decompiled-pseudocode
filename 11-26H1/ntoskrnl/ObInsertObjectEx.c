/*
 * XREFs of ObInsertObjectEx @ 0x14092B470
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x14078041C (HalpDmaAllocateChildAdapterV3.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x140783D5C (HalpDmaAllocateChildAdapterV2.c)
 *     NtCreateDebugObject @ 0x14078A610 (NtCreateDebugObject.c)
 *     IoCreateController @ 0x140796180 (IoCreateController.c)
 *     NtCreateIoRing @ 0x140798AC0 (NtCreateIoRing.c)
 *     PopEtEnergyTrackerCreate @ 0x1407DBF90 (PopEtEnergyTrackerCreate.c)
 *     TtmpDispatchCreateEventQueue @ 0x1407E7D34 (TtmpDispatchCreateEventQueue.c)
 *     TtmiCreateTerminal @ 0x1407EBA48 (TtmiCreateTerminal.c)
 *     NtCreateProcessStateChange @ 0x1407F1C10 (NtCreateProcessStateChange.c)
 *     PsCreateCpuPartition @ 0x1407F2660 (PsCreateCpuPartition.c)
 *     PspAllocatePartition @ 0x1407FDBD8 (PspAllocatePartition.c)
 *     SepInitializationPhase1 @ 0x140810284 (SepInitializationPhase1.c)
 *     SeFilterToken @ 0x1408109E0 (SeFilterToken.c)
 *     NtCreateLowBoxToken @ 0x1408140F0 (NtCreateLowBoxToken.c)
 *     EtwpRegisterPrivateSession @ 0x14082CEE0 (EtwpRegisterPrivateSession.c)
 *     EtwpSetCoverageSamplerInformation @ 0x140831834 (EtwpSetCoverageSamplerInformation.c)
 *     NtCreateKeyedEvent @ 0x140841C70 (NtCreateKeyedEvent.c)
 *     ExpProfileCreate @ 0x140842064 (ExpProfileCreate.c)
 *     AlpcpAcceptConnectPort @ 0x1408E6A30 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x1408E9A60 (AlpcpCreateClientPort.c)
 *     NtDuplicateToken @ 0x1408EB8C0 (NtDuplicateToken.c)
 *     NtCreateEvent @ 0x1408EF8C0 (NtCreateEvent.c)
 *     SeCopyClientToken @ 0x140926AB0 (SeCopyClientToken.c)
 *     PsImpersonateClient @ 0x140928820 (PsImpersonateClient.c)
 *     SepCreateClientSecurityEx @ 0x14092A140 (SepCreateClientSecurityEx.c)
 *     ObInsertObject @ 0x14092AFB0 (ObInsertObject.c)
 *     EtwpRegisterUMProvider @ 0x140934B00 (EtwpRegisterUMProvider.c)
 *     PspInsertProcess @ 0x140983A9C (PspInsertProcess.c)
 *     PspSchedulerSharedDataRegionCreate @ 0x1409B7374 (PspSchedulerSharedDataRegionCreate.c)
 *     MiCreateSectionCommon @ 0x1409B9D9C (MiCreateSectionCommon.c)
 *     IoCreateDevice @ 0x1409FEBC0 (IoCreateDevice.c)
 *     PspInsertThread @ 0x140A026D0 (PspInsertThread.c)
 *     WmipCreateGuidObject @ 0x140A10030 (WmipCreateGuidObject.c)
 *     IopLoadDriver @ 0x140A26FC4 (IopLoadDriver.c)
 *     SeSubProcessToken @ 0x140A2B26C (SeSubProcessToken.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140A36470 (IoCreateStreamFileObjectEx2.c)
 *     NtFilterToken @ 0x140A45140 (NtFilterToken.c)
 *     NtOpenThreadTokenEx @ 0x140A47C40 (NtOpenThreadTokenEx.c)
 *     NtCreateJobObject @ 0x140A76700 (NtCreateJobObject.c)
 *     NtCreateWorkerFactory @ 0x140A912F0 (NtCreateWorkerFactory.c)
 *     NtCreatePrivateNamespace @ 0x140A96480 (NtCreatePrivateNamespace.c)
 *     NtCreateMutant @ 0x140A9B880 (NtCreateMutant.c)
 *     NtCreateSemaphore @ 0x140A9F4A0 (NtCreateSemaphore.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140AB2F6C (SepCopyAnonymousTokenAndSetSilo.c)
 *     ObCreateSymbolicLink @ 0x140AB5768 (ObCreateSymbolicLink.c)
 *     NtCreateTimer2 @ 0x140ABD000 (NtCreateTimer2.c)
 *     NtCreateIoCompletion @ 0x140ACF000 (NtCreateIoCompletion.c)
 *     AlpcpCreateConnectionPort @ 0x140AE7730 (AlpcpCreateConnectionPort.c)
 *     SeGetLogonSessionToken @ 0x140AEA550 (SeGetLogonSessionToken.c)
 *     ObpCreateDirectoryObject @ 0x140AF9E70 (ObpCreateDirectoryObject.c)
 *     ExCreateCallback @ 0x140AFB990 (ExCreateCallback.c)
 *     NtCreateRegistryTransaction @ 0x140AFDE40 (NtCreateRegistryTransaction.c)
 *     NtAllocateReserveObject @ 0x140B07F50 (NtAllocateReserveObject.c)
 *     EtwpCreateUmReplyObject @ 0x140B12A84 (EtwpCreateUmReplyObject.c)
 *     PspCreateActivityReference @ 0x140B27418 (PspCreateActivityReference.c)
 *     EtwpRealtimeConnect @ 0x140B294B0 (EtwpRealtimeConnect.c)
 *     NtCreateThreadStateChange @ 0x140B2A0C0 (NtCreateThreadStateChange.c)
 *     PspSessionObjectCreate @ 0x140B2D6B4 (PspSessionObjectCreate.c)
 *     NtCreateTimer @ 0x140B574F0 (NtCreateTimer.c)
 *     IoCreateDriver @ 0x140B57970 (IoCreateDriver.c)
 *     NtCreateWaitCompletionPacket @ 0x140B6EB90 (NtCreateWaitCompletionPacket.c)
 *     NtQueryInformationToken @ 0x140B79CE0 (NtQueryInformationToken.c)
 *     MmCreateSpecialImageSection @ 0x140B7F20C (MmCreateSpecialImageSection.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x1402659F0 (ObpPushStackInfo.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     PspChargeQuota @ 0x1403BD5A0 (PspChargeQuota.c)
 *     PspReturnQuota @ 0x1403BD9F0 (PspReturnQuota.c)
 *     SepDeleteAccessState @ 0x140418680 (SepDeleteAccessState.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1404425E0 (SepCreateAccessStateFromSubjectContext.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x140455AC0 (SeComputeAutoInheritByObjectTypeEx.c)
 *     SeAssignSecurityEx2 @ 0x1404632D0 (SeAssignSecurityEx2.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     SeDeleteAccessState @ 0x1408F16E0 (SeDeleteAccessState.c)
 *     RtlValidSecurityDescriptor @ 0x140926EB0 (RtlValidSecurityDescriptor.c)
 *     ObpCreateHandle @ 0x14092CA60 (ObpCreateHandle.c)
 *     ObpAdjustCreatorAccessState @ 0x140931B40 (ObpAdjustCreatorAccessState.c)
 *     PsReturnSharedPoolQuota @ 0x1409E0BA0 (PsReturnSharedPoolQuota.c)
 *     PsChargeSharedPoolQuota @ 0x1409E0F20 (PsChargeSharedPoolQuota.c)
 *     SeObjectCreateSaclAccessBits @ 0x140ABA4D8 (SeObjectCreateSaclAccessBits.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObInsertObjectEx(
        char *a1,
        struct _ACCESS_STATE *a2,
        unsigned int a3,
        int a4,
        char a5,
        __int64 a6,
        _QWORD *a7)
{
  _QWORD *v8; // r12
  struct _KLOCK_ENTRIES *v10; // r9
  char *v11; // rsi
  __int64 v12; // r8
  struct _SLIST_ENTRY *v13; // rbx
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
  struct _KTHREAD *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  PVOID v33; // rax
  _KTRAP_FRAME *v34; // rax
  _SLIST_ENTRY *v35; // rax
  __int64 v36; // rdx
  int v37; // r12d
  PVOID v38; // r13
  _SLIST_ENTRY *v39; // rcx
  int v40; // ecx
  PVOID v41; // rdx
  struct _SLIST_ENTRY *v42; // rax
  int v43; // r14d
  _SLIST_ENTRY *v44; // rcx
  struct _KPRCB *v45; // rdx
  _GENERAL_LOOKASIDE *v46; // rcx
  signed __int64 v47; // r8
  _KPROCESS *v48; // rdx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v50; // rtt
  PACCESS_TOKEN v51; // rcx
  _QWORD *v52; // r15
  struct _KTHREAD *v53; // rax
  AutoBoost *v54; // rax
  void *v55; // rdx
  AutoBoost *v56; // r13
  char *v57; // r14
  unsigned int v58; // r13d
  _KPROCESS *Process; // r12
  char v60; // al
  __int64 v61; // rax
  unsigned __int64 v62; // rcx
  unsigned int v63; // edx
  unsigned __int64 v64; // rax
  __int64 SchedulingGroup; // r12
  signed __int64 v66; // rax
  signed __int64 v67; // rdx
  __int64 v68; // rtt
  __int64 v69; // rdx
  __int64 v70; // r8
  __int16 v71; // r8
  __int64 v72; // r9
  __int64 v73; // r9
  __int64 v74; // r8
  __int64 v75; // r8
  __int64 v76; // rax
  void *v77; // rcx
  __int64 v78; // rax
  _QWORD *PrimaryToken; // rax
  _QWORD *ClientToken; // rax
  int v81; // [rsp+30h] [rbp-D0h]
  __int64 v82; // [rsp+48h] [rbp-B8h]
  __int64 v83; // [rsp+48h] [rbp-B8h]
  unsigned int v84; // [rsp+60h] [rbp-A0h] BYREF
  PVOID P; // [rsp+68h] [rbp-98h] BYREF
  char v86; // [rsp+70h] [rbp-90h]
  PVOID Object; // [rsp+78h] [rbp-88h]
  struct _KTHREAD *v88; // [rsp+80h] [rbp-80h] BYREF
  int v89; // [rsp+88h] [rbp-78h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+90h] [rbp-70h]
  _QWORD *v91; // [rsp+98h] [rbp-68h]
  struct _KTHREAD *v92; // [rsp+A0h] [rbp-60h]
  __int64 v93; // [rsp+A8h] [rbp-58h]
  struct _KTHREAD *v94; // [rsp+B0h] [rbp-50h]
  __int128 v95; // [rsp+C0h] [rbp-40h] BYREF
  _KTRAP_FRAME *v96; // [rsp+D0h] [rbp-30h]
  __int64 v97; // [rsp+D8h] [rbp-28h]
  _QWORD v98[20]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v99[28]; // [rsp+180h] [rbp+80h] BYREF

  v8 = a7;
  v84 = a3;
  Object = a1;
  v93 = a6;
  v91 = a7;
  v89 = a4;
  memset_0(v99, 0, sizeof(v99));
  memset_0(v98, 0, sizeof(v98));
  v11 = a1 - 48;
  v12 = 0LL;
  v13 = (struct _SLIST_ENTRY *)*((_QWORD *)a1 - 2);
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
  v86 = PreviousMode;
  if ( v17 && !v14 && !v13[2].Next )
  {
    v19 = Object;
    *((_QWORD *)v11 + 4) = 0LL;
    if ( a7 )
    {
      v20 = v89 + 1;
      v82 = v93;
      *a7 = 0LL;
      Handle = ObpCreateHandle(0LL, v19, v84, 0LL, v20, v13->Next, PreviousMode, 0LL, 0, v82, a7);
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
    a2 = (struct _ACCESS_STATE *)v98;
    v92 = CurrentThread;
    *((_QWORD *)&v95 + 1) = 0LL;
    SecurityDescriptor = CurrentThread->ApcState.Process;
    v97 = *((_QWORD *)SecurityDescriptor + 58);
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v94 = KeGetCurrentThread();
      --v94->KernelApcDisable;
      v88 = (struct _KTHREAD *)((char *)CurrentThread + 1424);
      v27 = (AutoBoost *)KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL, 0LL, v10);
      v28 = v27;
      P = v27;
      v29 = 17LL;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v88->Header.Lock, 17LL, 0LL) )
      {
        ExfAcquirePushLockSharedEx((signed __int64 *)&v88->Header.Lock, 0, v27, v88);
        v28 = (AutoBoost *)P;
      }
      if ( v28 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v28, (void *)v29);
        else
          *((_BYTE *)v28 + 10) = 1;
      }
      if ( (*(_DWORD *)(&v92[1].SwapListEntry + 1) & 8) != 0 )
      {
        P = (PVOID)(*(_QWORD *)((char *)&v92[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(P, 0x75536553u);
        DWORD2(v95) = *((_DWORD *)&v92[1].0 + 1) & 3;
      }
      else
      {
        P = 0LL;
      }
      v30 = v88;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v88->Header.Lock, 0LL, 17LL) != 17 )
      {
        ExfReleasePushLockShared((signed __int64 *)&v88->Header.Lock);
        v30 = v88;
      }
      KeAbPostRelease((unsigned __int64)v30);
      KeLeaveCriticalRegionThread((__int64)v94, v31, v32);
      v33 = P;
    }
    else
    {
      v33 = 0LL;
      P = 0LL;
    }
    *(_QWORD *)&v95 = v33;
    v34 = (_KTRAP_FRAME *)PsReferencePrimaryTokenWithTag((__int64)SecurityDescriptor, 0x75536553u, v12, v10);
    v96 = v34;
    if ( SeTokenLeakTracking )
    {
      if ( v34 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v34[2].Rbp + 284));
        if ( v34 == RtlpBootStatHandleLock.TrapFrame )
          __debugbreak();
      }
      if ( P )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)P + 143) + 284LL));
        if ( P == RtlpBootStatHandleLock.TrapFrame )
          __debugbreak();
      }
    }
    LODWORD(P) = SepCreateAccessStateFromSubjectContext(&v95, v98, v99, v84, &v15->TypeInfo.GenericMapping.GenericRead);
    if ( (int)P < 0 )
    {
      ObfDereferenceObject(Object);
      return (unsigned int)P;
    }
  }
  v35 = v13[2].Next;
  SecurityDescriptor = v35;
  a2->SecurityDescriptor = v35;
  if ( v35 )
  {
    if ( !RtlValidSecurityDescriptor(v35) )
    {
      ObfDereferenceObject(Object);
      if ( a2 == (struct _ACCESS_STATE *)v98 )
        SeDeleteAccessState((__int64)a2);
      return 3221225593LL;
    }
    if ( (*((_BYTE *)SecurityDescriptor + 2) & 0x10) != 0 && (a2->PreviouslyGrantedAccess & 0x1000000) == 0 )
      a2->RemainingDesiredAccess |= SeObjectCreateSaclAccessBits(SecurityDescriptor);
  }
  if ( !v14 && ((v15->TypeInfo.ObjectTypeFlags & 8) != 0 || v13[2].Next) )
  {
    v36 = (__int64)a2->SecurityDescriptor;
    v84 = 0;
    P = 0LL;
    v88 = (struct _KTHREAD *)8;
    v37 = SeComputeAutoInheritByObjectTypeEx((__int64)v15, v36, 0LL, (int *)&v84, &v88);
    if ( v37 < 0 )
    {
      v38 = Object;
    }
    else
    {
      v37 = SeAssignSecurityEx2(
              0,
              (int)a2->SecurityDescriptor,
              (int)&P,
              0LL,
              v15 == ObpDirectoryObjectType,
              (16 * (a5 & 1)) | v84,
              &v88,
              (__int64)&a2->SubjectSecurityContext,
              (__int64)&v15->TypeInfo.GenericMapping);
      if ( v37 < 0 )
      {
        v38 = Object;
        goto LABEL_38;
      }
      v38 = Object;
      v81 = 1;
      v37 = guard_dispatch_icall_no_overrides((__int64)Object, 3LL);
      if ( v37 < 0 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
        goto LABEL_38;
      }
    }
    if ( v37 >= 0 )
    {
      v39 = v13[2].Next;
      if ( LOBYTE(v13[1].Next) <= 1u && v39 )
        ExFreePoolWithTag(v39, 0);
      v8 = v91;
      PreviousMode = v86;
      v13[2].Next = 0LL;
      a2->SecurityDescriptor = 0LL;
      goto LABEL_56;
    }
LABEL_38:
    ObfDereferenceObject(v38);
    if ( a2 == (struct _ACCESS_STATE *)v98 )
      SeDeleteAccessState((__int64)a2);
    return (unsigned int)v37;
  }
LABEL_56:
  *((_QWORD *)v11 + 4) = 0LL;
  if ( v8 )
  {
    v40 = v89;
    v83 = v93;
    v41 = Object;
    *v8 = 0LL;
    v42 = v13;
    if ( !v14 )
      v42 = 0LL;
    LOBYTE(v81) = PreviousMode;
    v43 = ObpCreateHandle(0LL, v41, 0LL, a2, v40 + 1, v13->Next, v81, v42, 0, v83, v8);
    ObfDereferenceObject(Object);
    goto LABEL_60;
  }
  v52 = Object;
  if ( a2 == (struct _ACCESS_STATE *)v98 || (v43 = ObpAdjustCreatorAccessState(a2), v43 >= 0) )
  {
    v53 = KeGetCurrentThread();
    --v53->KernelApcDisable;
    v54 = (AutoBoost *)KeAbPreAcquire((__int64)(v11 + 16), 0LL, 0LL, v10);
    v56 = v54;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11 + 4, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v11 + 2, v54, (__int64)(v11 + 16));
    if ( v56 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v56, v55);
      else
        *((_BYTE *)v56 + 10) = 1;
    }
    v57 = 0LL;
    v58 = 0;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( (v11[26] & 8) != 0 )
      v57 = &v11[-ObpInfoMaskToOffset[v11[26] & 0xF]];
    v60 = v11[27];
    if ( (v60 & 1) == 0 )
      goto LABEL_95;
    v11[27] = v60 & 0xFE;
    if ( v57 )
    {
      v61 = *((_QWORD *)v11 + 5);
      v62 = *((unsigned int *)v57 + 1);
      v63 = *(_DWORD *)v57;
      v84 = *(_DWORD *)v57;
      LODWORD(P) = v62;
      if ( v61 )
      {
        v64 = v61 & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v64 )
        {
          if ( *(_BYTE *)v64 != 1 )
          {
            v43 = -1073741736;
            goto LABEL_96;
          }
          v71 = *(_WORD *)(v64 + 2);
          if ( v71 >= 0 )
          {
            v73 = *(_QWORD *)(v64 + 16);
          }
          else
          {
            v72 = *(unsigned int *)(v64 + 8);
            if ( (_DWORD)v72 )
              v73 = v64 + v72;
            else
              v73 = 0LL;
          }
          if ( (v71 & 4) != 0 )
          {
            if ( v71 >= 0 )
            {
              v75 = *(_QWORD *)(v64 + 32);
            }
            else
            {
              v74 = *(unsigned int *)(v64 + 16);
              if ( (_DWORD)v74 )
                v75 = v64 + v74;
              else
                v75 = 0LL;
            }
          }
          else
          {
            v75 = 0LL;
          }
          if ( v73 )
            v58 = (4 * *(unsigned __int8 *)(v73 + 1) + 11) & 0xFFFFFFFC;
          if ( v75 )
            v58 += (*(unsigned __int16 *)(v75 + 2) + 3) & 0xFFFFFFFC;
          if ( v58 )
          {
            v76 = PsChargeSharedPoolQuota(Process, v58);
            *((_QWORD *)v57 + 2) = v76;
            if ( !v76 )
            {
              v43 = -1073741756;
              goto LABEL_96;
            }
            v63 = v84;
            v62 = (unsigned int)P;
          }
          *((_DWORD *)v57 + 2) = v58;
        }
      }
    }
    else
    {
      v78 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v11[24] ^ (unsigned __int64)BYTE1(v11)];
      v63 = *(_DWORD *)(v78 + 104);
      v62 = *(unsigned int *)(v78 + 108);
      v84 = v63;
    }
    v91 = (_QWORD *)v62;
    if ( Process == PsInitialSystemProcess )
    {
      *(v52 - 2) = 1LL;
      goto LABEL_95;
    }
    SchedulingGroup = (__int64)Process[1].SchedulingGroup;
    if ( v63 )
    {
      if ( (int)PspChargeQuota(SchedulingGroup, 0LL, 1, v63) < 0 )
      {
        *(v52 - 2) = 0LL;
        goto LABEL_130;
      }
      v62 = (unsigned __int64)v91;
    }
    if ( v62 && (int)PspChargeQuota(SchedulingGroup, 0LL, 0, v62) < 0 )
    {
      if ( v84 )
        PspReturnQuota((__int64 *)SchedulingGroup, 0LL, 1u, v84);
      *(v52 - 2) = 0LL;
      goto LABEL_130;
    }
    _InterlockedIncrement((volatile signed __int32 *)(SchedulingGroup + 512));
    *((_QWORD *)v11 + 4) = SchedulingGroup;
    if ( SchedulingGroup )
    {
LABEL_95:
      v43 = 0;
      goto LABEL_96;
    }
LABEL_130:
    if ( v57 )
    {
      v77 = (void *)*((_QWORD *)v57 + 2);
      if ( v77 )
        PsReturnSharedPoolQuota(v77);
    }
    v43 = -1073741756;
LABEL_96:
    _m_prefetchw(v11 + 16);
    v66 = *((_QWORD *)v11 + 2);
    v67 = v66 - 16;
    if ( (v66 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v67 = 0LL;
    if ( (v66 & 2) != 0
      || (v68 = *((_QWORD *)v11 + 2), v68 != _InterlockedCompareExchange64((volatile signed __int64 *)v11 + 2, v67, v66)) )
    {
      ExfReleasePushLock((_QWORD *)v11 + 2);
    }
    KeAbPostRelease((unsigned __int64)(v11 + 16));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v69, v70);
    if ( v43 >= 0 )
      goto LABEL_60;
  }
  ObfDereferenceObject(v52);
LABEL_60:
  v44 = v13[2].Next;
  if ( v44 )
  {
    if ( LOBYTE(v13[1].Next) <= 1u )
      ExFreePoolWithTag(v44, 0);
    v13[2].Next = 0LL;
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
    RtlpInterlockedPushEntrySList(&v46->ListHead, v13);
  }
  else
  {
    ++v46->FreeMisses;
    guard_dispatch_icall_no_overrides((__int64)v13, (__int64)v45);
  }
  if ( a2 == (struct _ACCESS_STATE *)v98 )
  {
    SepDeleteAccessState((__int64)a2);
    if ( SeTokenLeakTracking )
    {
      PrimaryToken = a2->SubjectSecurityContext.PrimaryToken;
      if ( PrimaryToken )
      {
        _InterlockedDecrement((volatile signed __int32 *)(PrimaryToken[143] + 284LL));
        if ( a2->SubjectSecurityContext.PrimaryToken == RtlpBootStatHandleLock.TrapFrame )
          __debugbreak();
      }
      ClientToken = a2->SubjectSecurityContext.ClientToken;
      if ( ClientToken )
      {
        _InterlockedDecrement((volatile signed __int32 *)(ClientToken[143] + 284LL));
        if ( a2->SubjectSecurityContext.ClientToken == RtlpBootStatHandleLock.TrapFrame )
          __debugbreak();
      }
    }
    v47 = (signed __int64)a2->SubjectSecurityContext.PrimaryToken;
    v48 = KeGetCurrentThread()->ApcState.Process;
    _m_prefetchw(&v48[1].ActiveProcessors);
    ActiveProcessors = (signed __int64)v48[1].ActiveProcessors;
    do
    {
      if ( (v47 ^ (unsigned __int64)ActiveProcessors) >= 0xF )
      {
        ObfDereferenceObjectWithTag((PVOID)v47, 0x75536553u);
        goto LABEL_73;
      }
      v50 = ActiveProcessors;
      ActiveProcessors = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&v48[1].ActiveProcessors,
                           ActiveProcessors + 1,
                           ActiveProcessors);
    }
    while ( v50 != ActiveProcessors );
    if ( ObpTraceFlags )
      ObpPushStackInfo(v47 - 48, -1, 0x75536553u);
LABEL_73:
    v51 = a2->SubjectSecurityContext.ClientToken;
    a2->SubjectSecurityContext.PrimaryToken = 0LL;
    if ( v51 )
      ObfDereferenceObjectWithTag(v51, 0x75536553u);
    a2->SubjectSecurityContext.ClientToken = 0LL;
  }
  return (unsigned int)v43;
}
