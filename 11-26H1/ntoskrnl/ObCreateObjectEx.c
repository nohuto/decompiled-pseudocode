/*
 * XREFs of ObCreateObjectEx @ 0x1408FD7D0
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x14078041C (HalpDmaAllocateChildAdapterV3.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x140783D5C (HalpDmaAllocateChildAdapterV2.c)
 *     NtCreateDebugObject @ 0x14078A610 (NtCreateDebugObject.c)
 *     IoCreateController @ 0x140796180 (IoCreateController.c)
 *     NtCreateIoRing @ 0x140798AC0 (NtCreateIoRing.c)
 *     PopEtEnergyTrackerCreate @ 0x1407DBF90 (PopEtEnergyTrackerCreate.c)
 *     TtmiCreateTerminal @ 0x1407EBA48 (TtmiCreateTerminal.c)
 *     TtmiCreateEventQueue @ 0x1407ECD18 (TtmiCreateEventQueue.c)
 *     NtCreateProcessStateChange @ 0x1407F1C10 (NtCreateProcessStateChange.c)
 *     PsCreateCpuPartition @ 0x1407F2660 (PsCreateCpuPartition.c)
 *     PspAllocatePartition @ 0x1407FDBD8 (PspAllocatePartition.c)
 *     EtwpRegisterPrivateSession @ 0x14082CEE0 (EtwpRegisterPrivateSession.c)
 *     EtwpSetCoverageSamplerInformation @ 0x140831834 (EtwpSetCoverageSamplerInformation.c)
 *     NtCreateKeyedEvent @ 0x140841C70 (NtCreateKeyedEvent.c)
 *     ExpProfileCreate @ 0x140842064 (ExpProfileCreate.c)
 *     CmpDoAccessCheckOnKCB @ 0x1408597A8 (CmpDoAccessCheckOnKCB.c)
 *     AlpcpCreatePort @ 0x1408E75E8 (AlpcpCreatePort.c)
 *     AlpcpCreateClientPort @ 0x1408E9A60 (AlpcpCreateClientPort.c)
 *     SepDuplicateToken @ 0x14092A5A0 (SepDuplicateToken.c)
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     PspSchedulerSharedDataRegionCreate @ 0x1409B7374 (PspSchedulerSharedDataRegionCreate.c)
 *     MiFinishCreateSection @ 0x1409BAAFC (MiFinishCreateSection.c)
 *     IoCreateDevice @ 0x1409FEBC0 (IoCreateDevice.c)
 *     PspAllocateThread @ 0x140A01BF0 (PspAllocateThread.c)
 *     WmipCreateGuidObject @ 0x140A10030 (WmipCreateGuidObject.c)
 *     IopLoadDriver @ 0x140A26FC4 (IopLoadDriver.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140A3050C (VrpHandleIoctlInitializeJobForVreg.c)
 *     PsCreateSiloContext @ 0x140A30D20 (PsCreateSiloContext.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140A36470 (IoCreateStreamFileObjectEx2.c)
 *     SepFilterToken @ 0x140A45584 (SepFilterToken.c)
 *     NtCreateJobObject @ 0x140A76700 (NtCreateJobObject.c)
 *     NtCreateWorkerFactory @ 0x140A912F0 (NtCreateWorkerFactory.c)
 *     NtCreatePrivateNamespace @ 0x140A96480 (NtCreatePrivateNamespace.c)
 *     NtCreateMutant @ 0x140A9B880 (NtCreateMutant.c)
 *     NtCreateSemaphore @ 0x140A9F4A0 (NtCreateSemaphore.c)
 *     ObCreateSymbolicLink @ 0x140AB5768 (ObCreateSymbolicLink.c)
 *     NtCreateTimer2 @ 0x140ABD000 (NtCreateTimer2.c)
 *     NtCreateIoCompletion @ 0x140ACF000 (NtCreateIoCompletion.c)
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
 * Callees:
 *     RtlEqualSid @ 0x1402604A0 (RtlEqualSid.c)
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
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ObpRegisterObject @ 0x140778F98 (ObpRegisterObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x1408FDFD0 (ObpCaptureObjectCreateInformation.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140932AB0 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     ObpAllocateObject @ 0x1409344A0 (ObpAllocateObject.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObCreateObjectEx(
        unsigned __int8 a1,
        _DWORD *a2,
        __int64 a3,
        unsigned __int8 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        _QWORD *a9,
        __int64 a10)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int8 v12; // r13
  _GENERAL_LOOKASIDE *P; // rsi
  _DWORD *v15; // r15
  __int64 v16; // rdi
  int Information; // ebx
  __int64 v18; // r8
  struct _KLOCK_ENTRIES *v19; // r9
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // r14
  void *v23; // rdx
  LegacyAutoBoost *v24; // r15
  void *v25; // r15
  __int64 v26; // rdx
  __int64 v27; // r8
  _QWORD *v28; // rax
  __int64 v29; // rsi
  _QWORD *v30; // r14
  unsigned int v31; // r15d
  char v32; // r12
  _QWORD *v33; // rcx
  void *v34; // rbx
  _KPROCESS *v35; // rcx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v37; // rtt
  struct _SLIST_ENTRY *v38; // r8
  struct _KPRCB *v39; // rdx
  _GENERAL_LOOKASIDE *v40; // rcx
  void *v41; // rcx
  struct _KPRCB *v42; // rdx
  _GENERAL_LOOKASIDE *v43; // rcx
  int v45; // eax
  int v46; // ecx
  __int64 v47; // r8
  struct _KLOCK_ENTRIES *v48; // r9
  __int64 v49; // rdi
  struct _KPRCB *v50; // rdx
  _GENERAL_LOOKASIDE *v51; // r8
  PSE_EXPORTS v52; // r13
  int v53; // r11d
  _KSCHEDULING_GROUP *volatile *v54; // r9
  __int64 v55; // r10
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *Flink; // rax
  _KSCHEDULING_GROUP *volatile *v58; // rdx
  __int64 v59; // r9
  _UNKNOWN **v60; // r8
  _DWORD *v61; // rax
  _GENERAL_LOOKASIDE *L; // rsi
  PVOID Object; // [rsp+48h] [rbp-71h] BYREF
  __int64 v65; // [rsp+50h] [rbp-69h]
  PVOID v66; // [rsp+58h] [rbp-61h]
  __int64 v67; // [rsp+60h] [rbp-59h]
  __int64 v68; // [rsp+68h] [rbp-51h] BYREF
  PSLIST_ENTRY ListEntry[2]; // [rsp+70h] [rbp-49h] BYREF
  struct _KTHREAD *v70; // [rsp+80h] [rbp-39h]
  _DWORD *v71; // [rsp+88h] [rbp-31h]
  _QWORD *v72; // [rsp+90h] [rbp-29h]
  _DWORD v73[2]; // [rsp+A0h] [rbp-19h] BYREF
  _KSCHEDULING_GROUP *volatile v74; // [rsp+A8h] [rbp-11h] BYREF
  int v75; // [rsp+B0h] [rbp-9h]

  CurrentPrcb = KeGetCurrentPrcb();
  v72 = a9;
  v12 = a4;
  P = CurrentPrcb->PPLookasideList[4].P;
  v68 = 0LL;
  v15 = a2;
  v71 = a2;
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
  if ( v16 )
  {
    Information = ObpCaptureObjectCreateInformation(a1, v12, a3, ListEntry, v16, 0);
    if ( Information < 0 )
    {
      v50 = KeGetCurrentPrcb();
      v51 = v50->PPLookasideList[4].P;
      ++v51->TotalFrees;
      if ( LOWORD(v51->ListHead.Alignment) < v51->Depth
        || (++v51->FreeMisses,
            v51 = v50->PPLookasideList[4].L,
            ++v51->TotalFrees,
            LOWORD(v51->ListHead.Alignment) < v51->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v51->ListHead, (PSLIST_ENTRY)v16);
      }
      else
      {
        ++v51->FreeMisses;
        guard_dispatch_icall_no_overrides(v16, (__int64)v50);
      }
      return (unsigned int)Information;
    }
    if ( (*(_DWORD *)v16 & v15[18]) != 0 )
    {
      Information = -1073741811;
      goto LABEL_37;
    }
    if ( (*(_DWORD *)v16 & 0x10) == 0 )
    {
LABEL_49:
      v45 = a7;
      if ( !a7 )
        v45 = v15[26];
      v46 = a8;
      if ( !a8 )
        v46 = v15[27];
      *(_DWORD *)(v16 + 20) = v45;
      *(_DWORD *)(v16 + 24) = v46;
      Information = ObpAllocateObject(v16, v12, (_DWORD)v15, (unsigned int)ListEntry, a6, (__int64)&v68, a10);
      if ( Information >= 0 )
      {
        v49 = v68;
        if ( ObpTraceFlags )
        {
          ObpRegisterObject(v68, 1, v47, v48);
          ObpPushStackInfo(v49, 1, 0x746C6644u);
        }
        *v72 = v49 + 48;
        return (unsigned int)Information;
      }
      goto LABEL_37;
    }
    SchedulingGroup = PspSiloMonitorLock.SchedulingGroup;
    v65 = 0LL;
    CurrentThread = KeGetCurrentThread();
    Process = (__int64)CurrentThread->ApcState.Process;
    v67 = *(_QWORD *)(Process + 464);
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v70 = KeGetCurrentThread();
      --v70->KernelApcDisable;
      v24 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL, 0LL, v19);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(
          (signed __int64 *)&CurrentThread[1].WaitBlockList,
          0,
          v24,
          (struct _KTHREAD *)((char *)CurrentThread + 1424));
      if ( v24 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v24, v23);
        else
          *((_BYTE *)v24 + 10) = 1;
      }
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v25 = (void *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(v25, 0x75536553u);
        LODWORD(v65) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
      }
      else
      {
        v25 = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&CurrentThread[1].WaitBlockList);
      KeAbPostRelease((unsigned __int64)&CurrentThread[1].WaitBlockList);
      KeLeaveCriticalRegionThread((__int64)v70, v26, v27);
    }
    else
    {
      v25 = 0LL;
    }
    Object = v25;
    v28 = (_QWORD *)PsReferencePrimaryTokenWithTag(Process, 0x75536553u, v18, v19);
    v29 = (__int64)v28;
    v66 = v28;
    if ( SeTokenLeakTracking )
    {
      if ( v28 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v28[143] + 284LL));
        v29 = (__int64)v66;
        if ( v66 == RtlpBootStatHandleLock.TrapFrame )
          __debugbreak();
      }
      v30 = Object;
      if ( Object )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)Object + 143) + 284LL));
        v30 = Object;
        if ( Object == RtlpBootStatHandleLock.TrapFrame )
          __debugbreak();
        v29 = (__int64)v66;
      }
    }
    else
    {
      v30 = Object;
    }
    v74 = SchedulingGroup;
    v31 = 1;
    v73[0] = 1;
    v73[1] = 1;
    v75 = 0;
    if ( !a1 )
    {
      v32 = 1;
LABEL_27:
      if ( SeTokenLeakTracking )
      {
        if ( v29 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v29 + 1144) + 284LL));
          v29 = (__int64)v66;
          if ( v66 == RtlpBootStatHandleLock.TrapFrame )
            __debugbreak();
          v30 = Object;
        }
        if ( v30 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v30[143] + 284LL));
          if ( Object == RtlpBootStatHandleLock.TrapFrame )
            __debugbreak();
          v29 = (__int64)v66;
        }
      }
      v35 = KeGetCurrentThread()->ApcState.Process;
      _m_prefetchw(&v35[1].ActiveProcessors);
      ActiveProcessors = (signed __int64)v35[1].ActiveProcessors;
      do
      {
        if ( (v29 ^ (unsigned __int64)ActiveProcessors) >= 0xF )
        {
          ObfDereferenceObjectWithTag((PVOID)v29, 0x75536553u);
          goto LABEL_33;
        }
        v37 = ActiveProcessors;
        ActiveProcessors = _InterlockedCompareExchange64(
                             (volatile signed __int64 *)&v35[1].ActiveProcessors,
                             ActiveProcessors + 1,
                             ActiveProcessors);
      }
      while ( v37 != ActiveProcessors );
      if ( ObpTraceFlags )
        ObpPushStackInfo(v29 - 48, -1, 0x75536553u);
LABEL_33:
      v66 = 0LL;
      if ( Object )
        ObfDereferenceObjectWithTag(Object, 0x75536553u);
      Object = 0LL;
      if ( !v32 )
      {
        Information = -1073741727;
LABEL_37:
        v38 = ListEntry[1];
        if ( ListEntry[1] )
        {
          if ( WORD1(ListEntry[0]) == 248 )
          {
            v39 = KeGetCurrentPrcb();
            v40 = v39->PPLookasideList[5].P;
            ++v40->TotalFrees;
            if ( LOWORD(v40->ListHead.Alignment) < v40->Depth
              || (++v40->FreeMisses,
                  v40 = v39->PPLookasideList[5].L,
                  ++v40->TotalFrees,
                  LOWORD(v40->ListHead.Alignment) < v40->Depth) )
            {
              RtlpInterlockedPushEntrySList(&v40->ListHead, v38);
            }
            else
            {
              ++v40->FreeMisses;
              guard_dispatch_icall_no_overrides((__int64)v38, (__int64)v39);
            }
          }
          else
          {
            ExFreePoolWithTag(ListEntry[1], 0);
          }
        }
        v41 = *(void **)(v16 + 32);
        if ( v41 )
        {
          if ( *(_BYTE *)(v16 + 16) <= 1u )
            ExFreePoolWithTag(v41, 0);
          *(_QWORD *)(v16 + 32) = 0LL;
        }
        v42 = KeGetCurrentPrcb();
        v43 = v42->PPLookasideList[4].P;
        ++v43->TotalFrees;
        if ( LOWORD(v43->ListHead.Alignment) < v43->Depth
          || (++v43->FreeMisses,
              v43 = v42->PPLookasideList[4].L,
              ++v43->TotalFrees,
              LOWORD(v43->ListHead.Alignment) < v43->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v43->ListHead, (PSLIST_ENTRY)v16);
        }
        else
        {
          ++v43->FreeMisses;
          guard_dispatch_icall_no_overrides(v16, (__int64)v42);
        }
        return (unsigned int)Information;
      }
      v15 = v71;
      v12 = a4;
      goto LABEL_49;
    }
    if ( v30 )
    {
      if ( (int)v65 < 2 )
      {
        v32 = 0;
        goto LABEL_24;
      }
    }
    else
    {
      v30 = (_QWORD *)v29;
    }
    v29 = (__int64)v66;
    v32 = SepPrivilegeCheck((__int64)v30, (__int64)&v74, 1u, 1, a1);
    v30 = Object;
    v31 = v73[0];
LABEL_24:
    v33 = (_QWORD *)v29;
    if ( v30 )
      v33 = v30;
    v34 = *(void **)v33[19];
    if ( !RtlEqualSid(*(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags, v34) )
    {
      v52 = SeExports;
      if ( !RtlEqualSid(SeExports->SeNetworkServiceSid, v34) && !RtlEqualSid(v52->SeLocalServiceSid, v34) )
        goto LABEL_61;
      v53 = 0;
      if ( v31 )
      {
        v54 = &v74;
        v55 = v31;
        do
        {
          Blink = ExpPlatformBinaryLock.WaitBlock[1].WaitListEntry.Blink;
          Flink = ExpPlatformBinaryLock.WaitBlock[1].WaitListEntry.Blink->Flink;
          while ( *(_DWORD *)v54 != LODWORD(Flink->Flink) || *((_DWORD *)v54 + 1) != HIDWORD(Blink->Flink->Flink) )
          {
            Flink = Blink->Blink;
            Blink = (struct _LIST_ENTRY *)((char *)Blink + 8);
            if ( !Flink )
              goto LABEL_76;
          }
          ++v53;
LABEL_76:
          v54 = (_KSCHEDULING_GROUP *volatile *)((char *)v54 + 12);
          --v55;
        }
        while ( v55 );
        v58 = &v74;
        v59 = v31;
        do
        {
          v60 = &SepServicesFilterPrivileges;
          v61 = SepServicesFilterPrivileges;
          while ( *(_DWORD *)v58 != *v61 || *((_DWORD *)v58 + 1) != *((_DWORD *)*v60 + 1) )
          {
            v61 = v60[1];
            ++v60;
            if ( !v61 )
              goto LABEL_81;
          }
          ++v53;
LABEL_81:
          v58 = (_KSCHEDULING_GROUP *volatile *)((char *)v58 + 12);
          --v59;
        }
        while ( v59 );
        if ( v53 != v31 )
        {
LABEL_61:
          SepAdtPrivilegedServiceAuditAlarm(
            (unsigned int)&Object,
            (unsigned int)&SeSubsystemName,
            0,
            (_DWORD)v30,
            v29,
            (__int64)v73,
            v32);
          v29 = (__int64)v66;
          v30 = Object;
        }
      }
    }
    goto LABEL_27;
  }
  return 3221225626LL;
}
