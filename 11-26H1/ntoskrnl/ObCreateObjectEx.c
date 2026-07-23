/*
 * XREFs of ObCreateObjectEx @ 0x14092D760
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x140782F1C (HalpDmaAllocateChildAdapterV3.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x140786890 (HalpDmaAllocateChildAdapterV2.c)
 *     NtCreateDebugObject @ 0x14078D140 (NtCreateDebugObject.c)
 *     IoCreateController @ 0x140798CB0 (IoCreateController.c)
 *     NtCreateIoRing @ 0x14079B5F0 (NtCreateIoRing.c)
 *     PopEtEnergyTrackerCreate @ 0x1407E01B0 (PopEtEnergyTrackerCreate.c)
 *     TtmiCreateTerminal @ 0x1407F15A8 (TtmiCreateTerminal.c)
 *     TtmiCreateEventQueue @ 0x1407F2878 (TtmiCreateEventQueue.c)
 *     NtCreateProcessStateChange @ 0x1407F7770 (NtCreateProcessStateChange.c)
 *     PsCreateCpuPartition @ 0x1407F81C0 (PsCreateCpuPartition.c)
 *     PspAllocatePartition @ 0x140803608 (PspAllocatePartition.c)
 *     EtwpRegisterPrivateSession @ 0x140833120 (EtwpRegisterPrivateSession.c)
 *     EtwpSetCoverageSamplerInformation @ 0x140837A74 (EtwpSetCoverageSamplerInformation.c)
 *     ExpProfileCreate @ 0x14084B100 (ExpProfileCreate.c)
 *     NtCreateKeyedEvent @ 0x14084BCB0 (NtCreateKeyedEvent.c)
 *     CmpDoAccessCheckOnKCB @ 0x14085FB38 (CmpDoAccessCheckOnKCB.c)
 *     AlpcpCreatePort @ 0x1408EDBA8 (AlpcpCreatePort.c)
 *     AlpcpCreateClientPort @ 0x1408F0020 (AlpcpCreateClientPort.c)
 *     SepDuplicateToken @ 0x1409060B0 (SepDuplicateToken.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14091ABD0 (IoCreateStreamFileObjectEx2.c)
 *     IoCreateDevice @ 0x14091B9C0 (IoCreateDevice.c)
 *     PspSchedulerSharedDataRegionCreate @ 0x140988354 (PspSchedulerSharedDataRegionCreate.c)
 *     MiFinishCreateSection @ 0x14098BADC (MiFinishCreateSection.c)
 *     SepFilterToken @ 0x1409E3714 (SepFilterToken.c)
 *     WmipCreateGuidObject @ 0x140A0F220 (WmipCreateGuidObject.c)
 *     IopLoadDriver @ 0x140A3A064 (IopLoadDriver.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140A4B46C (VrpHandleIoctlInitializeJobForVreg.c)
 *     PsCreateSiloContext @ 0x140A4BC80 (PsCreateSiloContext.c)
 *     PspAllocateThread @ 0x140A7A6A8 (PspAllocateThread.c)
 *     NtCreateJobObject @ 0x140A7F420 (NtCreateJobObject.c)
 *     NtCreateWorkerFactory @ 0x140A95E40 (NtCreateWorkerFactory.c)
 *     NtCreatePrivateNamespace @ 0x140A9A600 (NtCreatePrivateNamespace.c)
 *     NtCreateMutant @ 0x140A9E470 (NtCreateMutant.c)
 *     NtCreateSemaphore @ 0x140A9F7D0 (NtCreateSemaphore.c)
 *     NtCreateWaitCompletionPacket @ 0x140AA5150 (NtCreateWaitCompletionPacket.c)
 *     EtwpRealtimeConnect @ 0x140AB34A8 (EtwpRealtimeConnect.c)
 *     ObCreateSymbolicLink @ 0x140AB6B08 (ObCreateSymbolicLink.c)
 *     NtCreateTimer2 @ 0x140ABF460 (NtCreateTimer2.c)
 *     NtCreateIoCompletion @ 0x140AD1330 (NtCreateIoCompletion.c)
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
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 *     SepPrivilegeCheck @ 0x14041BFB0 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ObpRegisterObject @ 0x14077BE38 (ObpRegisterObject.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14090E660 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     ObpAllocateObject @ 0x140910050 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x14092DF60 (ObpCaptureObjectCreateInformation.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
        _BYTE *a10)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int8 v12; // r13
  _GENERAL_LOOKASIDE *P; // rsi
  _DWORD *v15; // r15
  __int64 v16; // rdi
  int Information; // ebx
  __int64 v18; // r8
  struct _KLOCK_ENTRIES *v19; // r9
  __int64 v20; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // r14
  void *v23; // rdx
  LegacyAutoBoost *v24; // r15
  void *v25; // r15
  _QWORD *v26; // rax
  __int64 v27; // rsi
  _QWORD *v28; // r14
  unsigned int v29; // r15d
  char v30; // r12
  _QWORD *v31; // rcx
  void *v32; // rbx
  _KPROCESS *v33; // rcx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v35; // rtt
  _SLIST_ENTRY *v36; // r8
  struct _KPRCB *v37; // rdx
  _GENERAL_LOOKASIDE *v38; // rcx
  void *v39; // rcx
  struct _KPRCB *v40; // rdx
  _GENERAL_LOOKASIDE *v41; // rcx
  int v43; // eax
  int v44; // ecx
  __int64 v45; // r8
  struct _KLOCK_ENTRIES *v46; // r9
  char *v47; // rdi
  struct _KPRCB *v48; // rdx
  _GENERAL_LOOKASIDE *v49; // r8
  PSE_EXPORTS v50; // r13
  int v51; // r11d
  __int64 *v52; // r9
  __int64 v53; // r10
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *Flink; // rax
  __int64 *v56; // rdx
  __int64 v57; // r9
  _UNKNOWN **v58; // r8
  _DWORD *v59; // rax
  _GENERAL_LOOKASIDE *L; // rsi
  PVOID Object; // [rsp+48h] [rbp-71h] BYREF
  __int64 v63; // [rsp+50h] [rbp-69h]
  PVOID v64; // [rsp+58h] [rbp-61h]
  __int64 v65; // [rsp+60h] [rbp-59h]
  char *v66; // [rsp+68h] [rbp-51h] BYREF
  PSLIST_ENTRY ListEntry[2]; // [rsp+70h] [rbp-49h] BYREF
  struct _KTHREAD *v68; // [rsp+80h] [rbp-39h]
  _DWORD *v69; // [rsp+88h] [rbp-31h]
  _QWORD *v70; // [rsp+90h] [rbp-29h]
  unsigned int v71[2]; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v72; // [rsp+A8h] [rbp-11h] BYREF
  int v73; // [rsp+B0h] [rbp-9h]

  CurrentPrcb = KeGetCurrentPrcb();
  v70 = a9;
  v12 = a4;
  P = CurrentPrcb->PPLookasideList[4].P;
  v66 = 0LL;
  v15 = a2;
  v69 = a2;
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
      v48 = KeGetCurrentPrcb();
      v49 = v48->PPLookasideList[4].P;
      ++v49->TotalFrees;
      if ( LOWORD(v49->ListHead.Alignment) < v49->Depth
        || (++v49->FreeMisses,
            v49 = v48->PPLookasideList[4].L,
            ++v49->TotalFrees,
            LOWORD(v49->ListHead.Alignment) < v49->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v49->ListHead, (PSLIST_ENTRY)v16);
      }
      else
      {
        ++v49->FreeMisses;
        guard_dispatch_icall_no_overrides(v16, (__int64)v48);
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
      v43 = a7;
      if ( !a7 )
        v43 = v15[26];
      v44 = a8;
      if ( !a8 )
        v44 = v15[27];
      *(_DWORD *)(v16 + 20) = v43;
      *(_DWORD *)(v16 + 24) = v44;
      Information = ObpAllocateObject((_DWORD *)v16, v12, (__int64)v15, (__int128 *)ListEntry, a6, &v66, a10);
      if ( Information >= 0 )
      {
        v47 = v66;
        if ( ObpTraceFlags )
        {
          ObpRegisterObject((__int64)v66, 1, v45, v46);
          ObpPushStackInfo((__int64)v47, 1, 0x746C6644u);
        }
        *v70 = v47 + 48;
        return (unsigned int)Information;
      }
      goto LABEL_37;
    }
    v20 = *(_QWORD *)&PspSiloMonitorLock.SystemCallNumber;
    v63 = 0LL;
    CurrentThread = KeGetCurrentThread();
    Process = (__int64)CurrentThread->ApcState.Process;
    v65 = *(_QWORD *)(Process + 464);
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v68 = KeGetCurrentThread();
      --v68->KernelApcDisable;
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
        LODWORD(v63) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
      }
      else
      {
        v25 = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&CurrentThread[1].WaitBlockList);
      KeAbPostRelease((unsigned __int64)&CurrentThread[1].WaitBlockList);
      KeLeaveCriticalRegionThread((__int64)v68);
    }
    else
    {
      v25 = 0LL;
    }
    Object = v25;
    v26 = (_QWORD *)PsReferencePrimaryTokenWithTag(Process, 0x75536553u, v18, v19);
    v27 = (__int64)v26;
    v64 = v26;
    if ( SeTokenLeakTracking )
    {
      if ( v26 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v26[143] + 284LL));
        v27 = (__int64)v64;
        if ( v64 == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
          __debugbreak();
      }
      v28 = Object;
      if ( Object )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)Object + 143) + 284LL));
        v28 = Object;
        if ( Object == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
          __debugbreak();
        v27 = (__int64)v64;
      }
    }
    else
    {
      v28 = Object;
    }
    v72 = v20;
    v29 = 1;
    v71[0] = 1;
    v71[1] = 1;
    v73 = 0;
    if ( !a1 )
    {
      v30 = 1;
LABEL_27:
      if ( SeTokenLeakTracking )
      {
        if ( v27 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v27 + 1144) + 284LL));
          v27 = (__int64)v64;
          if ( v64 == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
            __debugbreak();
          v28 = Object;
        }
        if ( v28 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v28[143] + 284LL));
          if ( Object == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
            __debugbreak();
          v27 = (__int64)v64;
        }
      }
      v33 = KeGetCurrentThread()->ApcState.Process;
      _m_prefetchw(&v33[1].ActiveProcessors);
      ActiveProcessors = (signed __int64)v33[1].ActiveProcessors;
      do
      {
        if ( (v27 ^ (unsigned __int64)ActiveProcessors) >= 0xF )
        {
          ObfDereferenceObjectWithTag((PVOID)v27, 0x75536553u);
          goto LABEL_33;
        }
        v35 = ActiveProcessors;
        ActiveProcessors = _InterlockedCompareExchange64(
                             (volatile signed __int64 *)&v33[1].ActiveProcessors,
                             ActiveProcessors + 1,
                             ActiveProcessors);
      }
      while ( v35 != ActiveProcessors );
      if ( ObpTraceFlags )
        ObpPushStackInfo(v27 - 48, -1, 0x75536553u);
LABEL_33:
      v64 = 0LL;
      if ( Object )
        ObfDereferenceObjectWithTag(Object, 0x75536553u);
      Object = 0LL;
      if ( !v30 )
      {
        Information = -1073741727;
LABEL_37:
        v36 = ListEntry[1];
        if ( ListEntry[1] )
        {
          if ( WORD1(ListEntry[0]) == 248 )
          {
            v37 = KeGetCurrentPrcb();
            v38 = v37->PPLookasideList[5].P;
            ++v38->TotalFrees;
            if ( LOWORD(v38->ListHead.Alignment) < v38->Depth
              || (++v38->FreeMisses,
                  v38 = v37->PPLookasideList[5].L,
                  ++v38->TotalFrees,
                  LOWORD(v38->ListHead.Alignment) < v38->Depth) )
            {
              RtlpInterlockedPushEntrySList(&v38->ListHead, v36);
            }
            else
            {
              ++v38->FreeMisses;
              guard_dispatch_icall_no_overrides((__int64)v36, (__int64)v37);
            }
          }
          else
          {
            ExFreePoolWithTag(ListEntry[1], 0);
          }
        }
        v39 = *(void **)(v16 + 32);
        if ( v39 )
        {
          if ( *(_BYTE *)(v16 + 16) <= 1u )
            ExFreePoolWithTag(v39, 0);
          *(_QWORD *)(v16 + 32) = 0LL;
        }
        v40 = KeGetCurrentPrcb();
        v41 = v40->PPLookasideList[4].P;
        ++v41->TotalFrees;
        if ( LOWORD(v41->ListHead.Alignment) < v41->Depth
          || (++v41->FreeMisses,
              v41 = v40->PPLookasideList[4].L,
              ++v41->TotalFrees,
              LOWORD(v41->ListHead.Alignment) < v41->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v41->ListHead, (PSLIST_ENTRY)v16);
        }
        else
        {
          ++v41->FreeMisses;
          guard_dispatch_icall_no_overrides(v16, (__int64)v40);
        }
        return (unsigned int)Information;
      }
      v15 = v69;
      v12 = a4;
      goto LABEL_49;
    }
    if ( v28 )
    {
      if ( (int)v63 < 2 )
      {
        v30 = 0;
        goto LABEL_24;
      }
    }
    else
    {
      v28 = (_QWORD *)v27;
    }
    v27 = (__int64)v64;
    v30 = SepPrivilegeCheck((__int64)v28, (__int64)&v72, 1u, 1, a1);
    v28 = Object;
    v29 = v71[0];
LABEL_24:
    v31 = (_QWORD *)v27;
    if ( v28 )
      v31 = v28;
    v32 = *(void **)v31[19];
    if ( !RtlEqualSid(*(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4), v32) )
    {
      v50 = SeExports;
      if ( !RtlEqualSid(SeExports->SeNetworkServiceSid, v32) && !RtlEqualSid(v50->SeLocalServiceSid, v32) )
        goto LABEL_61;
      v51 = 0;
      if ( v29 )
      {
        v52 = &v72;
        v53 = v29;
        do
        {
          Blink = ExpPlatformBinaryLock.WaitBlock[1].WaitListEntry.Blink;
          Flink = ExpPlatformBinaryLock.WaitBlock[1].WaitListEntry.Blink->Flink;
          while ( *(_DWORD *)v52 != LODWORD(Flink->Flink) || *((_DWORD *)v52 + 1) != HIDWORD(Blink->Flink->Flink) )
          {
            Flink = Blink->Blink;
            Blink = (struct _LIST_ENTRY *)((char *)Blink + 8);
            if ( !Flink )
              goto LABEL_76;
          }
          ++v51;
LABEL_76:
          v52 = (__int64 *)((char *)v52 + 12);
          --v53;
        }
        while ( v53 );
        v56 = &v72;
        v57 = v29;
        do
        {
          v58 = &SepServicesFilterPrivileges;
          v59 = SepServicesFilterPrivileges;
          while ( *(_DWORD *)v56 != *v59 || *((_DWORD *)v56 + 1) != *((_DWORD *)*v58 + 1) )
          {
            v59 = v58[1];
            ++v58;
            if ( !v59 )
              goto LABEL_81;
          }
          ++v51;
LABEL_81:
          v56 = (__int64 *)((char *)v56 + 12);
          --v57;
        }
        while ( v57 );
        if ( v51 != v29 )
        {
LABEL_61:
          SepAdtPrivilegedServiceAuditAlarm((__int64)&Object, &SeSubsystemName, 0LL, (__int64)v28, v27, v71, v30);
          v27 = (__int64)v64;
          v28 = Object;
        }
      }
    }
    goto LABEL_27;
  }
  return 3221225626LL;
}
