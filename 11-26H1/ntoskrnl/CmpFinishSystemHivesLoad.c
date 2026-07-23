/*
 * XREFs of CmpFinishSystemHivesLoad @ 0x140B500D0
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     CmpRecheckHiveVolumePolicy @ 0x140468310 (CmpRecheckHiveVolumePolicy.c)
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     CmpNotifyMachineHiveLoaded @ 0x14052619C (CmpNotifyMachineHiveLoaded.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     TmEnableCallbacks @ 0x1405369B0 (TmEnableCallbacks.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PsBootPhaseComplete @ 0x1407F3820 (PsBootPhaseComplete.c)
 *     ExpRefreshSystemTime @ 0x14083C564 (ExpRefreshSystemTime.c)
 *     CmpCreatePerfKeys @ 0x140851200 (CmpCreatePerfKeys.c)
 *     CmpInterlockedFunction @ 0x1408515A0 (CmpInterlockedFunction.c)
 *     CmpLinkKeyToHive @ 0x140851758 (CmpLinkKeyToHive.c)
 *     CmpMountPreloadedHives @ 0x1408525A8 (CmpMountPreloadedHives.c)
 *     CmpLoadSystemVersionData @ 0x14085C2E4 (CmpLoadSystemVersionData.c)
 *     CmpSetVersionData @ 0x14085CA84 (CmpSetVersionData.c)
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 *     CmpLockRegistryExclusive @ 0x1408C8718 (CmpLockRegistryExclusive.c)
 *     CmpLockHiveListExclusive @ 0x1408CEA7C (CmpLockHiveListExclusive.c)
 *     CmpUnlockHiveList @ 0x1408CEBE8 (CmpUnlockHiveList.c)
 *     CmpLinkHiveToMaster @ 0x14093E12C (CmpLinkHiveToMaster.c)
 *     CmpInitCmRM @ 0x140A7E4A0 (CmpInitCmRM.c)
 *     CmpAddToHiveFileList @ 0x140B06E90 (CmpAddToHiveFileList.c)
 *     CmRmFinalizeRecovery @ 0x140B3CA88 (CmRmFinalizeRecovery.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140B50A7C (CmpHiveRootSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpIsHiveLoadUnloadRundownActive @ 0x140C5EFB8 (CmpIsHiveLoadUnloadRundownActive.c)
 */

_KAFFINITY_EX *__fastcall CmpFinishSystemHivesLoad(PRKEVENT Event)
{
  unsigned int v2; // esi
  __int64 v3; // rcx
  __int16 v4; // di
  __int64 v5; // rdx
  WCHAR v6; // ax
  __int16 v7; // di
  char Length; // r15
  struct _KWAIT_BLOCK *WaitBlockArray; // rbx
  PVOID *v10; // r14
  char *v11; // rdx
  PPRIVILEGE_SET v12; // rcx
  __int64 v13; // r8
  char v14; // r13
  unsigned __int64 v15; // rbx
  const WCHAR *v16; // rdx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  struct _KLOCK_ENTRIES *v21; // r9
  struct _KTHREAD *Thread; // rcx
  struct _KTHREAD *v23; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  struct _KLOCK_ENTRIES *v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  const WCHAR *v32; // rdx
  const WCHAR *v33; // rcx
  AutoBoost *v34; // rax
  void *v35; // rdx
  AutoBoost *v36; // r14
  __int64 v37; // rdx
  __int64 v38; // r8
  struct _KLOCK_ENTRIES *v39; // r9
  __int64 *v40; // rbx
  signed __int64 v41; // rax
  signed __int64 v42; // rdx
  __int64 v43; // rtt
  __int64 Flink_low; // rcx
  ULONG_PTR v45; // rcx
  struct _KLOCK_ENTRIES *v46; // r9
  unsigned int v47; // esi
  unsigned __int64 *v48; // rbx
  AutoBoost *v49; // rax
  void *v50; // rdx
  AutoBoost *v51; // rdi
  __int64 v52; // rdx
  __int64 v53; // r8
  struct _KLOCK_ENTRIES *v54; // r9
  signed __int64 v55; // rax
  signed __int64 v56; // rdx
  unsigned __int64 v57; // rtt
  __int64 v58; // rcx
  char v59; // al
  __int64 v60; // rcx
  struct _KLOCK_ENTRIES *v61; // r9
  unsigned __int64 *v62; // rbx
  AutoBoost *v63; // rax
  void *v64; // rdx
  AutoBoost *v65; // rdi
  __int64 v66; // rdx
  __int64 v67; // r8
  struct _KLOCK_ENTRIES *v68; // r9
  signed __int64 v69; // rax
  signed __int64 v70; // rdx
  unsigned __int64 v71; // rtt
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  UNICODE_STRING Destination; // [rsp+68h] [rbp-A0h] BYREF
  _WORD *v77; // [rsp+78h] [rbp-90h]
  HANDLE KeyHandle; // [rsp+80h] [rbp-88h] BYREF
  PVOID P; // [rsp+88h] [rbp-80h]
  PPRIVILEGE_SET Privileges; // [rsp+90h] [rbp-78h]
  PPRIVILEGE_SET Pool; // [rsp+98h] [rbp-70h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-68h] BYREF
  _KAFFINITY_EX v83; // [rsp+D0h] [rbp-38h] BYREF
  _WORD v84[64]; // [rsp+2C8h] [rbp+1C0h] BYREF

  v2 = 0;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  memset(&v83, 0, 72);
  CmpInitializeThreadInfo(&v83);
  LOBYTE(Destination.Length) = 0;
  memset_0(&v83.StaticBitmap[8], 0, 0x1B0uLL);
  BYTE1(NlsMbOemCodePageTag) = 0;
  Destination.Buffer = (wchar_t *)0x800000;
  WheapPfaLock.StackBase = KeGetCurrentThread();
  v77 = v84;
  v3 = 0x7FFFLL;
  v4 = 0;
  v5 = 0LL;
  do
  {
    if ( !v3 )
      break;
    v6 = aRegistry_1[v5];
    if ( !v6 )
      break;
    --v3;
    v84[v5++] = v6;
    ++v4;
  }
  while ( v3 != 32703 );
  v7 = 2 * v4;
  Length = 0;
  LOWORD(Destination.Buffer) = v7;
  Privileges = (PPRIVILEGE_SET)CmpAllocatePool(0x40uLL);
  WaitBlockArray = (struct _KWAIT_BLOCK *)Privileges;
  if ( !Privileges )
    KeBugCheckEx(0x74u, 2uLL, 4uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  Pool = (PPRIVILEGE_SET)CmpAllocatePool(0x40uLL);
  v10 = (PVOID *)Pool;
  if ( !Pool )
    KeBugCheckEx(0x74u, 2uLL, 6uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  P = (PVOID)CmpHiveRootSecurityDescriptor();
  v11 = (char *)&unk_140E09888;
  v12 = Pool;
  v13 = 7LL;
  do
  {
    *(_QWORD *)&v12->PrivilegeCount = v11;
    v11 += 184;
    v12 = (PPRIVILEGE_SET)((char *)v12 + 8);
    --v13;
  }
  while ( v13 );
  if ( !Event )
  {
    KeWaitForSingleObject(&stru_140E098B8.LastXStateSaveDebugInfo, Executive, 0, 0, 0LL);
    KeSetEvent((PRKEVENT)&stru_140E098B8.LastXStateSaveDebugInfo, 0, 0);
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)&v83.StaticBitmap[2]);
    CmpInitCmRM(0LL, WheapPfaLock.CurrentRunTime);
    KiUnstackDetachProcess((__int64)&v83.StaticBitmap[2], 0);
    if ( *(_QWORD *)&WheapPfaLock.WaitBlockFill11[16] )
    {
      TmEnableCallbacks(
        *(PKRESOURCEMANAGER *)(*(_QWORD *)&WheapPfaLock.WaitBlockFill11[16] + 56LL),
        (PTM_RM_NOTIFICATION)CmKtmNotification,
        *(PVOID *)&WheapPfaLock.WaitBlockFill11[16]);
      CmRmFinalizeRecovery(*(__int64 *)&WheapPfaLock.WaitBlockFill11[16]);
    }
  }
  while ( 2 )
  {
    KeWaitForMultipleObjects(7u, v10, WaitAny, Executive, 0, 0, 0LL, WaitBlockArray);
    v14 = 0;
    while ( v2 < 7 )
    {
      v15 = 184LL * v2;
      if ( byte_140E09868[v15] )
        goto LABEL_66;
      if ( !byte_140E09868[v15 + 1] )
      {
        v14 = 1;
        goto LABEL_66;
      }
      v16 = (&off_140E09838)[v15 / 8];
      LOWORD(Destination.Buffer) = v7;
      RtlAppendUnicodeToString((PUNICODE_STRING)&Destination.Buffer, v16);
      RtlAppendUnicodeToString((PUNICODE_STRING)&Destination.Buffer, *(PCWSTR *)((char *)&unk_140E09840 + v15));
      CmpLockRegistryExclusive();
      if ( !qword_140E09848[v15 / 8] )
      {
        v17 = *(_QWORD *)((char *)&unk_140E09860 + v15);
        if ( v17 )
        {
          v18 = CmpLinkHiveToMaster(
                  (unsigned __int16 *)&Destination.Buffer,
                  0LL,
                  v17,
                  byte_140E09868[v15 + 3],
                  *(int *)((char *)&dword_140E09858 + v15),
                  0,
                  0LL,
                  (__int64)P,
                  0LL,
                  0LL,
                  1,
                  &v83.StaticBitmap[8]);
          if ( v18 < 0 )
          {
            if ( !(unsigned __int8)CmpIsHiveLoadUnloadRundownActive(v18, v19) )
              KeBugCheckEx(0x73u, 1uLL, v45, v2, (ULONG_PTR)&Destination.Buffer);
            LOBYTE(WheapPfaLock.StackLimit) = 0;
            WheapPfaLock.StackBase = 0LL;
            CmpUnlockRegistry(v45);
            v47 = 0;
            v48 = (unsigned __int64 *)&stru_140E098B8;
            do
            {
              if ( *((_DWORD *)v48 - 17) && !*((_BYTE *)v48 - 80) )
              {
                if ( !*((_BYTE *)v48 - 79) )
                  KeWaitForSingleObject(v48 - 6, Executive, 0, 0, 0LL);
                v49 = (AutoBoost *)KeAbPreAcquire((__int64)v48, 0LL, 0LL, v46);
                v51 = v49;
                if ( _interlockedbittestandset64((volatile signed __int32 *)v48, 0LL) )
                  ExfAcquirePushLockExclusiveEx(v48, v49, (__int64)v48);
                if ( v51 )
                {
                  if ( (KiAbpGlobalState & 1) != 0 )
                    AutoBoost::KiAbpPostAcquire(v51, v50);
                  else
                    *((_BYTE *)v51 + 10) = 1;
                }
                KeSetEvent((PRKEVENT)v48 - 1, 0, 0);
                CmpNotifyMachineHiveLoaded(v47, v52, v53, v54);
                _m_prefetchw(v48);
                v55 = *v48;
                v56 = *v48 - 16;
                if ( (*v48 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                  v56 = 0LL;
                if ( (v55 & 2) != 0
                  || (v57 = *v48, v57 != _InterlockedCompareExchange64((volatile signed __int64 *)v48, v56, v55)) )
                {
                  ExfReleasePushLock(v48);
                }
                KeAbPostRelease((unsigned __int64)v48);
              }
              ++v47;
              v48 += 23;
            }
            while ( v47 < 7 );
            goto LABEL_115;
          }
          CmpLockHiveListExclusive(v18, v19, v20, v21);
          Thread = PspSiloMonitorLock.WaitBlock[2].Thread;
          v23 = (struct _KTHREAD *)(*(_QWORD *)((char *)&unk_140E09860 + v15) + 1608LL);
          if ( *(struct _KTHREAD **)PspSiloMonitorLock.WaitBlock[2].Thread != (struct _KTHREAD *)&PspSiloMonitorLock.WaitBlockFill11[112] )
            __fastfail(3u);
          *(_QWORD *)&v23->Header.Lock = &PspSiloMonitorLock.WaitBlockFill11[112];
          v23->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)Thread;
          *(_QWORD *)&Thread->Header.Lock = v23;
          PspSiloMonitorLock.WaitBlock[2].Thread = v23;
          CmpUnlockHiveList();
          CmpRecheckHiveVolumePolicy(*(_QWORD *)((char *)&unk_140E09860 + v15));
          if ( byte_140E09868[v15 + 3] )
          {
            *(_DWORD *)(*(_QWORD *)((char *)&unk_140E09860 + v15) + 160LL) |= 0x20u;
            CurrentThread = KeGetCurrentThread();
            *(_QWORD *)(*(_QWORD *)((char *)&unk_140E09860 + v15) + 4176LL) = CurrentThread;
            CmpUnlockRegistry(CurrentThread);
            CmpFlushHive(*(_QWORD *)((char *)&unk_140E09860 + v15), 4u);
            CmpLockRegistryExclusive();
            *(_DWORD *)(*(_QWORD *)((char *)&unk_140E09860 + v15) + 160LL) &= ~0x20u;
            *(_QWORD *)(*(_QWORD *)((char *)&unk_140E09860 + v15) + 4176LL) = 0LL;
          }
          v25 = *(_QWORD *)&WheapPfaLock.WaitBlockFill11[16];
          if ( *(_QWORD *)&WheapPfaLock.WaitBlockFill11[16] )
          {
            v26 = *(_QWORD *)((char *)&unk_140E09860 + v15);
            if ( (*(_DWORD *)(v26 + 160) & 2) == 0 && !*(_QWORD *)(v26 + 4160) )
            {
              ++*(_DWORD *)(*(_QWORD *)&WheapPfaLock.WaitBlockFill11[16] + 64LL);
              *(_QWORD *)(*(_QWORD *)((char *)&unk_140E09860 + v15) + 4160LL) = v25;
            }
          }
        }
      }
      v27 = *(_QWORD *)((char *)&unk_140E09860 + v15);
      if ( v27 )
        CmpAddToHiveFileList(v27);
      byte_140E09868[v15] = 1;
      switch ( v2 )
      {
        case 3u:
          if ( !Event )
          {
            CmpUnlockRegistry(v27);
            CmpMountPreloadedHives();
            CmpLockRegistryExclusive();
            CmpInterlockedFunction();
            CmpUnlockRegistry(v28);
LABEL_43:
            v34 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E098B8 + v15, 0LL, 0LL, v29);
            v36 = v34;
            if ( _interlockedbittestandset64(
                   (volatile signed __int32 *)((char *)&stru_140E098B8.Header.Lock + v15),
                   0LL) )
            {
              ExfAcquirePushLockExclusiveEx(
                (unsigned __int64 *)((char *)&stru_140E098B8 + v15),
                v34,
                (__int64)&stru_140E098B8 + v15);
            }
            if ( v36 )
            {
              if ( (KiAbpGlobalState & 1) != 0 )
                AutoBoost::KiAbpPostAcquire(v36, v35);
              else
                *((_BYTE *)v36 + 10) = 1;
            }
            KeSetEvent((PRKEVENT)((char *)&unk_140E098A0 + v15), 0, 0);
            CmpNotifyMachineHiveLoaded(v2, v37, v38, v39);
            v40 = (__int64 *)(0x140000000LL + v15 + 14719160);
            _m_prefetchw(v40);
            v41 = *v40;
            v42 = *v40 - 16;
            if ( (*v40 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v42 = 0LL;
            if ( (v41 & 2) != 0 || (v43 = *v40, v43 != _InterlockedCompareExchange64(v40, v42, v41)) )
              ExfReleasePushLock(v40);
            KeAbPostRelease((unsigned __int64)v40);
            Length = Destination.Length;
            goto LABEL_55;
          }
          break;
        case 2u:
          CmpUnlockRegistry(v27);
          CmpCreatePerfKeys();
          goto LABEL_42;
        case 1u:
          v32 = L"\\Registry\\Machine\\SAM\\SAM";
          v33 = L"\\Registry\\Machine\\Security\\SAM";
LABEL_40:
          CmpLinkKeyToHive(v33, v32);
          break;
        case 4u:
          v32 = L"\\Registry\\User\\.Default";
          v33 = L"\\Registry\\User\\S-1-5-18";
          goto LABEL_40;
      }
      CmpUnlockRegistry(v27);
LABEL_42:
      if ( !Event )
        goto LABEL_43;
LABEL_55:
      if ( v2 - 2 <= 1 && !Event )
      {
        Flink_low = stru_140E098B8.WaitBlockFill7[152];
        if ( v2 == 3 )
          Flink_low = LOBYTE(stru_140E098B8.Timer.TimerListEntry.Flink);
        if ( (_BYTE)Flink_low )
        {
          if ( CmFastBoot )
            ExpRefreshSystemTime();
          if ( !Length )
          {
            CmpLoadSystemVersionData();
            CmpSetVersionData();
            Length = 1;
            LOBYTE(Destination.Length) = 1;
          }
          if ( CmFastBoot )
            PsBootPhaseComplete(Flink_low, v30, v31);
        }
      }
LABEL_66:
      ++v2;
    }
    v2 = 0;
    if ( v14 )
    {
      v10 = (PVOID *)Pool;
      WaitBlockArray = (struct _KWAIT_BLOCK *)Privileges;
      continue;
    }
    break;
  }
  CmpLockRegistryExclusive();
  CmpSpecialBootCondition = 0;
  if ( BYTE4(NlsMbOemCodePageTag) || (v59 = 1, CmVEEnabled != 1) )
    v59 = 0;
  CmpVEEnabled = v59;
  CmpUnlockRegistry(v58);
  if ( Event )
  {
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)&v83.StaticBitmap[2]);
    CmpInitCmRM(0LL, WheapPfaLock.CurrentRunTime);
    KiUnstackDetachProcess((__int64)&v83.StaticBitmap[2], 0);
    if ( *(_QWORD *)&WheapPfaLock.WaitBlockFill11[16] )
    {
      TmEnableCallbacks(
        *(PKRESOURCEMANAGER *)(*(_QWORD *)&WheapPfaLock.WaitBlockFill11[16] + 56LL),
        (PTM_RM_NOTIFICATION)CmKtmNotification,
        *(PVOID *)&WheapPfaLock.WaitBlockFill11[16]);
      CmRmFinalizeRecovery(*(__int64 *)&WheapPfaLock.WaitBlockFill11[16]);
    }
    CmpMountPreloadedHives();
    CmpLockRegistryExclusive();
    CmpInterlockedFunction();
    CmpUnlockRegistry(v60);
    v62 = (unsigned __int64 *)&stru_140E098B8;
    do
    {
      v63 = (AutoBoost *)KeAbPreAcquire((__int64)v62, 0LL, 0LL, v61);
      v65 = v63;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v62, 0LL) )
        ExfAcquirePushLockExclusiveEx(v62, v63, (__int64)v62);
      if ( v65 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v65, v64);
        else
          *((_BYTE *)v65 + 10) = 1;
      }
      KeSetEvent((PRKEVENT)v62 - 1, 0, 0);
      CmpNotifyMachineHiveLoaded(v2, v66, v67, v68);
      _m_prefetchw(v62);
      v69 = *v62;
      v70 = *v62 - 16;
      if ( (*v62 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v70 = 0LL;
      if ( (v69 & 2) != 0
        || (v71 = *v62, v71 != _InterlockedCompareExchange64((volatile signed __int64 *)v62, v70, v69)) )
      {
        ExfReleasePushLock(v62);
      }
      KeAbPostRelease((unsigned __int64)v62);
      ++v2;
      v62 += 23;
    }
    while ( v2 < 7 );
    if ( CmFastBoot )
    {
      ExpRefreshSystemTime();
      PsBootPhaseComplete(v73, v72, v74);
    }
    CmpLoadSystemVersionData();
    CmpSetVersionData();
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpConfigurationManagerKeyName;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreateKey(&KeyHandle, 2u, &ObjectAttributes, 0, 0LL, 0, 0LL) >= 0 )
    ZwClose(KeyHandle);
LABEL_115:
  CmpSpecialBootCondition = 0;
  LOBYTE(WheapPfaLock.StackLimit) = 0;
  WheapPfaLock.StackBase = 0LL;
  if ( Event )
    KeSetEvent(Event, 0, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  CmSiFreeMemory(Privileges);
  CmSiFreeMemory(Pool);
  return CmCleanupThreadInfo((_KAFFINITY_EX **)&v83);
}
