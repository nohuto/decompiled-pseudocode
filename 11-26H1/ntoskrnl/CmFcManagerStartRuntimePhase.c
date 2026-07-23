/*
 * XREFs of CmFcManagerStartRuntimePhase @ 0x140CF6E68
 * Callers:
 *     CmFcInitSystem2 @ 0x140CF3EC8 (CmFcInitSystem2.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ExAllocateTimer @ 0x14044E550 (ExAllocateTimer.c)
 *     SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x1404A6470 (SeConvertStringSecurityDescriptorToSecurityDescriptor.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1404C5CC4 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1404D2078 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcWriteHighLowHigh @ 0x1404F717C (RtlpFcWriteHighLowHigh.c)
 *     CmFcpManagerArmFeatureUsageProviderPublishTimer @ 0x140535140 (CmFcpManagerArmFeatureUsageProviderPublishTimer.c)
 *     CmFcpManagerArmFeatureUsageProviderFlushTimer @ 0x140535188 (CmFcpManagerArmFeatureUsageProviderFlushTimer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmFcpSwapSectionState @ 0x140773194 (CmFcpSwapSectionState.c)
 *     RtlpFcInitializeDelayedUsageReportBuffer @ 0x14080FA58 (RtlpFcInitializeDelayedUsageReportBuffer.c)
 *     RtlpFcSectionTypeToBufferType @ 0x14080FBEC (RtlpFcSectionTypeToBufferType.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x140856D90 (CmRegisterMachineHiveLoadedNotification.c)
 *     CmFcpManagerCreateSectionFromBuffer @ 0x140867C04 (CmFcpManagerCreateSectionFromBuffer.c)
 *     CmpVolumeManagerLockContextListExclusive @ 0x140A2E304 (CmpVolumeManagerLockContextListExclusive.c)
 *     CmSiRWLockReleaseExclusive @ 0x140A8992C (CmSiRWLockReleaseExclusive.c)
 *     CmFcpCleanupSectionState @ 0x140AABB08 (CmFcpCleanupSectionState.c)
 *     CmFcpCopySectionState @ 0x140AABB28 (CmFcpCopySectionState.c)
 *     CmFcpUnmapSection @ 0x140AC0FB8 (CmFcpUnmapSection.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x140AC11E0 (RtlpFcBufferManagerUpdateBuffers.c)
 *     CmFcpManagerPublishFeatureUsageData @ 0x140AC18DC (CmFcpManagerPublishFeatureUsageData.c)
 *     CmFcpManagerAddBufferIntoPublishListAndSetPublishState @ 0x140AC1AA0 (CmFcpManagerAddBufferIntoPublishListAndSetPublishState.c)
 *     RtlUpdateSwapReference @ 0x140AC1C5C (RtlUpdateSwapReference.c)
 *     RtlIsStateSeparationEnabled @ 0x140AF6E60 (RtlIsStateSeparationEnabled.c)
 *     RtlGetSwapReferenceIndex @ 0x140B335AC (RtlGetSwapReferenceIndex.c)
 *     CmFcpMapSection @ 0x140B4E818 (CmFcpMapSection.c)
 *     CmFcpInitializeSectionState @ 0x140B6570C (CmFcpInitializeSectionState.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 CmFcManagerStartRuntimePhase()
{
  __int64 v0; // r14
  __int64 *v1; // rcx
  char v2; // r12
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rdx
  int SectionFromBuffer; // ebx
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // r8
  __int64 *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rdi
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  struct _KLOCK_ENTRIES *v19; // r9
  __int64 i; // rsi
  unsigned int v21; // eax
  __int64 v22; // r10
  __int64 v23; // r10
  __int64 v24; // r11
  unsigned int j; // esi
  __int64 v26; // r12
  _OWORD *v27; // rbx
  _OWORD *Pool2; // rax
  void *v29; // r15
  __int64 v30; // rcx
  __int128 v31; // xmm1
  BOOLEAN IsStateSeparationEnabled; // al
  const WCHAR *v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // r8
  struct _KLOCK_ENTRIES *v36; // r9
  __int64 v37; // rbx
  _DWORD *v38; // rax
  _DWORD *v39; // rsi
  struct _KLOCK_ENTRIES *v40; // r9
  __int64 v41; // r15
  _DWORD *v42; // rsi
  void *v43; // rax
  __int64 v44; // rbx
  _QWORD *v45; // rdi
  __int64 v46; // rsi
  __int64 *v47; // rdi
  __int64 Buffer; // [rsp+48h] [rbp-C0h] BYREF
  __int64 DestinationString[3]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v51[3]; // [rsp+68h] [rbp-A0h] BYREF
  char v52[24]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v53[3]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v54[3]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v55[12]; // [rsp+C8h] [rbp-40h] BYREF

  Buffer = 0LL;
  v0 = 4LL;
  v1 = v51;
  *(_OWORD *)&DestinationString[1] = 0LL;
  v2 = 0;
  do
  {
    CmFcpInitializeSectionState((__int64)v1);
    v1 = (__int64 *)(v3 + 24);
  }
  while ( v4 != 1 );
  DestinationString[0] = 0LL;
  memset_0(v55, 0, sizeof(v55));
  CmpFreezeListLock.SchedulerApcFill3[50] = 1;
  SectionFromBuffer = SeConvertStringSecurityDescriptorToSecurityDescriptor(
                        (__int64)L"O:SYG:SYD:(A;;GR;;;SY)(A;;GR;;;BA)(A;;GR;;;IU)(A;;GR;;;AU)(A;;GR;;;AC)(A;;GR;;;S-1-5-32"
                                  "-1045063015-423899465-3012769174-65638258-1865874412-2349348127-763856749-1075684855)("
                                  "A;;GR;;;S-1-15-3-1024-1045063015-423899465-3012769174-65638258-1865874412-2349348127-7"
                                  "63856749-1075684855)(A;;GR;;;S-1-5-80-2970612574-78537857-698502321-558674196-14516445"
                                  "82)(A;;GR;;;S-1-15-3-1024-1502825166-1963708345-2616377461-2562897074-4192028372-39683"
                                  "01570-1997628692-1435953622)(A;;GR;;;S-1-15-3-1024-1065365936-1281604716-3511738428-16"
                                  "54721687-432734479-3232135806-4053264122-3456934681)(A;;GR;;;S-1-15-3-1024-3153509613-"
                                  "960666767-3724611135-2725662640-12138253-543910227-1950414635-4190290187)",
                        1,
                        (__int64)&CmpFreezeListLock.Timer.TimerListEntry,
                        0LL);
  if ( SectionFromBuffer >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    CmpVolumeManagerLockContextListExclusive((unsigned __int64 *)&CmpFreezeListLock.Timer.Dpc, v5, v7, v8);
    RtlpFcBufferManagerReferenceBuffers(
      (__int64)&CmpFreezeListLock.WaitBlock[2].WaitListEntry.Blink,
      (__int64)&Buffer,
      DestinationString);
    v10 = Buffer;
    v11 = v51;
    v12 = 4LL;
    do
    {
      *v11 = v10;
      v11 += 3;
      --v12;
    }
    while ( v12 );
    v13 = (_QWORD *)DestinationString[0];
    v14 = *(void **)(DestinationString[0] + 8);
    if ( v14 )
    {
      SectionFromBuffer = CmFcpManagerCreateSectionFromBuffer(
                            v14,
                            *(_QWORD *)(DestinationString[0] + 16),
                            v10,
                            (__int64)CmpFreezeListLock.Timer.TimerListEntry.Flink,
                            (__int64)v51);
      if ( SectionFromBuffer < 0 )
        goto LABEL_50;
      CmFcpCopySectionState((__int64)v52, (__int64)v51);
      v10 = Buffer;
    }
    v15 = (void *)v13[7];
    if ( v15 )
    {
      SectionFromBuffer = CmFcpManagerCreateSectionFromBuffer(
                            v15,
                            v13[8],
                            v10,
                            (__int64)CmpFreezeListLock.Timer.TimerListEntry.Flink,
                            (__int64)v53);
      if ( SectionFromBuffer < 0 )
        goto LABEL_50;
      v10 = Buffer;
    }
    v16 = (void *)v13[10];
    if ( !v16
      || (SectionFromBuffer = CmFcpManagerCreateSectionFromBuffer(
                                v16,
                                v13[11],
                                v10,
                                (__int64)CmpFreezeListLock.Timer.TimerListEntry.Flink,
                                (__int64)v54),
          SectionFromBuffer >= 0) )
    {
      RtlpFcBufferManagerDereferenceBuffers(
        (unsigned __int64 *)&CmpFreezeListLock.WaitBlock[2].WaitListEntry.Blink,
        (__int64)v13,
        v10);
      v13 = 0LL;
      for ( i = 0LL; (unsigned int)i < 4; i = (unsigned int)(i + 1) )
      {
        v21 = RtlpFcSectionTypeToBufferType(i);
        SectionFromBuffer = CmFcpMapSection(&v51[3 * i], &v55[3 * v21]);
        if ( SectionFromBuffer < 0 )
          goto LABEL_54;
      }
      CmpVolumeManagerLockContextListExclusive(
        (unsigned __int64 *)&CmpFreezeListLock.Timer.TimerListEntry.Blink,
        v17,
        v18,
        v19);
      v22 = 0LL;
      do
      {
        CmFcpSwapSectionState(
          (__int64 *)((char *)&CmpFreezeListLock.WaitBlock[0].WaitListEntry.Blink + v22),
          (_QWORD *)((char *)v51 + v22));
        v22 = v23 + 24;
      }
      while ( v24 != 1 );
      RtlpFcBufferManagerUpdateBuffers(&CmpFreezeListLock.WaitBlock[2].WaitListEntry.Blink, Buffer, (__int64)v55);
      memset_0(v55, 0, sizeof(v55));
      RtlpFcWriteHighLowHigh(MmWriteableSharedUserData + 2704, Buffer);
      CmSiRWLockReleaseExclusive((struct _KTHREAD *)&CmpFreezeListLock.Timer.TimerListEntry.Blink);
      SectionFromBuffer = ZwUpdateWnfStateData(
                            &WNF_CMFC_FEATURE_CONFIGURATION_CHANGED,
                            &Buffer,
                            8u,
                            &CmFcpWnfTypeId,
                            0LL,
                            0,
                            0);
      if ( SectionFromBuffer < 0 )
        goto LABEL_54;
      for ( j = 0; j < 2; ++j )
      {
        v26 = ((unsigned __int8)RtlGetSwapReferenceIndex(&CmpFreezeListLock.SchedulerApc.ApcListEntry.Flink) - 1) & 1;
        v27 = CmpFreezeListLock.SchedulerApc.Reserved[v26 + 3];
        Pool2 = (_OWORD *)ExAllocatePool2(64LL, 0x310uLL, 0x63466D43u);
        v29 = Pool2;
        if ( !Pool2 )
          goto LABEL_30;
        if ( v27 )
        {
          v30 = 6LL;
          do
          {
            *Pool2 = *v27;
            Pool2[1] = v27[1];
            Pool2[2] = v27[2];
            Pool2[3] = v27[3];
            Pool2[4] = v27[4];
            Pool2[5] = v27[5];
            Pool2[6] = v27[6];
            Pool2 += 8;
            v31 = v27[7];
            v27 += 8;
            *(Pool2 - 1) = v31;
            --v30;
          }
          while ( v30 );
          *Pool2 = *v27;
        }
        else
        {
          RtlpFcInitializeDelayedUsageReportBuffer(Pool2);
        }
        CmpFreezeListLock.SchedulerApc.Reserved[v26 + 3] = v29;
        RtlUpdateSwapReference((__int64)&CmpFreezeListLock.SchedulerApc.ApcListEntry, v26);
      }
      *(_QWORD *)&CmpFreezeListLock.PriorityFloorCounts[24] = ExAllocateTimer(
                                                                (__int64)CmFcpManagerRetryUsageNotificationsTimerRoutine,
                                                                (__int64)&CmpFreezeListLock.Timer.TimerListEntry,
                                                                8u);
      if ( !*(_QWORD *)&CmpFreezeListLock.PriorityFloorCounts[24] )
        goto LABEL_30;
      IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
      v33 = L"\\REGISTRY\\MACHINE\\OSDATA";
      if ( !IsStateSeparationEnabled )
        v33 = L"\\REGISTRY\\MACHINE\\SOFTWARE";
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], v33);
      SectionFromBuffer = CmRegisterMachineHiveLoadedNotification(
                            (__int64)CmFcpManagerSoftwareHiveReady,
                            (__int64)&CmpFreezeListLock.Timer.TimerListEntry,
                            (const UNICODE_STRING *)&DestinationString[1],
                            (__int64 *)&CmpFreezeListLock.SchedulerApc.Thread);
      if ( SectionFromBuffer < 0 )
        goto LABEL_54;
      qword_140EFBF28 = ExAllocateTimer(
                          (__int64)CmFcpManagerFlushUsageTimerRoutine,
                          (__int64)&CmpFreezeListLock.Timer.TimerListEntry,
                          8u);
      if ( !qword_140EFBF28
        || (qword_140EFBF30 = ExAllocateTimer(
                                (__int64)CmFcpManagerPublishUsageTimerRoutine,
                                (__int64)&CmpFreezeListLock.Timer.TimerListEntry,
                                8u)) == 0 )
      {
LABEL_30:
        SectionFromBuffer = -1073741670;
        goto LABEL_54;
      }
      CmpVolumeManagerLockContextListExclusive((unsigned __int64 *)&stru_140EFBEA0, v34, v35, v36);
      v2 = 1;
      v37 = ((unsigned __int8)RtlGetSwapReferenceIndex(qword_140EFBC90) - 1) & 1;
      v38 = (_DWORD *)ExAllocatePool2(64LL, 0x1000uLL, 0x63466D43u);
      v39 = v38;
      if ( !v38 )
        goto LABEL_38;
      memset_0(v38, 0, 0x1000uLL);
      v39[7] = 508;
      *((_QWORD *)&CmpFreezeListLock + v37 + 210) = v39;
      RtlUpdateSwapReference((__int64)qword_140EFBC90, v37);
      v41 = ((_BYTE)v37 - 1) & 1;
      v42 = (_DWORD *)*((_QWORD *)&CmpFreezeListLock + v41 + 210);
      if ( v42 )
      {
        if ( byte_140EFC020 && v42[4] )
        {
          v43 = (void *)ExAllocatePool2(64LL, 0x1000uLL, 0x63466D43u);
          v44 = (__int64)v43;
          if ( !v43 )
          {
LABEL_38:
            SectionFromBuffer = -1073741670;
LABEL_53:
            CmSiRWLockReleaseExclusive((struct _KTHREAD *)&stru_140EFBEA0);
LABEL_54:
            CmSiRWLockReleaseExclusive((struct _KTHREAD *)&CmpFreezeListLock.Timer.Dpc);
            KeLeaveCriticalRegion();
            goto LABEL_55;
          }
          memmove(v43, v42, 0x1000uLL);
          CmFcpManagerAddBufferIntoPublishListAndSetPublishState((__int64)&CmpFreezeListLock.Timer.TimerListEntry, v44);
          CmFcpManagerArmFeatureUsageProviderPublishTimer((__int64)&CmpFreezeListLock.Timer.TimerListEntry);
        }
        *((_QWORD *)&CmpFreezeListLock + v41 + 210) = 0LL;
      }
      if ( _InterlockedExchange(&dword_140EFC028, 1) == 2 )
        CmFcpManagerPublishFeatureUsageData((__int64)&CmpFreezeListLock.Timer.TimerListEntry, 1, v10, v40);
      if ( (dword_140EFBFF8 & 2) != 0 )
        CmFcpManagerArmFeatureUsageProviderFlushTimer((__int64)&CmpFreezeListLock.Timer.TimerListEntry);
      SectionFromBuffer = 0;
    }
LABEL_50:
    if ( v13 )
      RtlpFcBufferManagerDereferenceBuffers(
        (unsigned __int64 *)&CmpFreezeListLock.WaitBlock[2].WaitListEntry.Blink,
        (__int64)v13,
        v10);
    if ( !v2 )
      goto LABEL_54;
    goto LABEL_53;
  }
LABEL_55:
  v45 = v55;
  v46 = 4LL;
  do
  {
    CmFcpUnmapSection((__int64)v45);
    v45 += 3;
    --v46;
  }
  while ( v46 );
  v47 = v51;
  do
  {
    CmFcpCleanupSectionState((__int64)v47);
    v47 += 3;
    --v0;
  }
  while ( v0 );
  return (unsigned int)SectionFromBuffer;
}
