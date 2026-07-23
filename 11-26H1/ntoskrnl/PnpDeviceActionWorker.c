/*
 * XREFs of PnpDeviceActionWorker @ 0x14047C410
 * Callers:
 *     PnpRequestDeviceAction @ 0x14047BEF8 (PnpRequestDeviceAction.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PnpLogActionQueueEvent @ 0x14047CAC8 (PnpLogActionQueueEvent.c)
 *     PopDirectedDripsClearDisengageReason @ 0x14047CCB8 (PopDirectedDripsClearDisengageReason.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x14049DEB0 (IoReportTargetDeviceChangeAsynchronous.c)
 *     PpProcessClearProblem @ 0x1404EAC54 (PpProcessClearProblem.c)
 *     PnpCompleteSystemStartProcess @ 0x140527E20 (PnpCompleteSystemStartProcess.c)
 *     PiProcessDeviceResetAction @ 0x1405DBD48 (PiProcessDeviceResetAction.c)
 *     PnpProcessRebalance @ 0x1405DFC7C (PnpProcessRebalance.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     PiConfigureDevice @ 0x1407A7A70 (PiConfigureDevice.c)
 *     PiProcessResourceRequirementsChanged @ 0x1407A7BF4 (PiProcessResourceRequirementsChanged.c)
 *     PiProcessStartSystemDevices @ 0x1407A7D5C (PiProcessStartSystemDevices.c)
 *     PiDmaGuardProcessUpdateConsoleLockStateAction @ 0x1407B3F44 (PiDmaGuardProcessUpdateConsoleLockStateAction.c)
 *     PiProcessClearDeviceProblem @ 0x14096EEE0 (PiProcessClearDeviceProblem.c)
 *     PipProcessDevNodeTree @ 0x1409AE99C (PipProcessDevNodeTree.c)
 *     PiProcessRequeryDeviceState @ 0x1409B09D4 (PiProcessRequeryDeviceState.c)
 *     PpDevNodeLockTree @ 0x140A8F554 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A96CF4 (PpDevNodeUnlockTree.c)
 *     PiProcessReenumeration @ 0x140AC8764 (PiProcessReenumeration.c)
 *     PnpDeleteDeviceActionRequest @ 0x140B05244 (PnpDeleteDeviceActionRequest.c)
 *     PiProcessSetDeviceProblem @ 0x140B336EC (PiProcessSetDeviceProblem.c)
 *     PiQueryPowerRelations @ 0x140B37868 (PiQueryPowerRelations.c)
 *     PiRestartDevice @ 0x140B3D230 (PiRestartDevice.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x140B45AE4 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 */

__int64 __fastcall PnpDeviceActionWorker()
{
  int v0; // r12d
  char v1; // r13
  char v2; // r15
  unsigned int v3; // r14d
  KIRQL v4; // al
  __int64 v5; // rsi
  KIRQL v6; // bl
  __int64 v7; // rax
  struct _KLOCK_ENTRIES *v8; // r9
  int v9; // r13d
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // rbx
  char v14; // r15
  signed __int64 v15; // rax
  signed __int64 v16; // rdx
  __int64 v17; // rtt
  unsigned int v18; // ebx
  KIRQL v19; // al
  KIRQL v20; // al
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rbx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  unsigned int restarted; // eax
  __int64 v30; // rbx
  KIRQL v31; // al
  KIRQL v32; // al
  unsigned int **v33; // rbx
  unsigned int *v34; // rax
  __int64 v35; // r12
  KIRQL v36; // al
  bool v37; // zf
  KIRQL v38; // r15
  KIRQL v39; // r8
  unsigned int *v40; // rax
  struct _KEVENT *v41; // rcx
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  int v46; // ecx
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  int v52; // ecx
  int v53; // ecx
  int v54; // ecx
  __int64 v55; // rax
  __int64 v56; // rcx
  int v57; // eax
  int v58; // ecx
  int v59; // ecx
  int v60; // ecx
  int v61; // ecx
  int v62; // ecx
  char v63; // [rsp+48h] [rbp-29h]
  char v64; // [rsp+49h] [rbp-28h]
  char v65; // [rsp+4Ah] [rbp-27h]
  char v66; // [rsp+4Bh] [rbp-26h]
  int v67; // [rsp+4Ch] [rbp-25h]
  __int64 v68; // [rsp+58h] [rbp-19h] BYREF
  _OWORD NotificationStructure[2]; // [rsp+60h] [rbp-11h] BYREF
  __int64 v70; // [rsp+80h] [rbp+Fh]
  __int128 v71; // [rsp+88h] [rbp+17h] BYREF

  v68 = 0LL;
  memset(NotificationStructure, 0, sizeof(NotificationStructure));
  v70 = 0LL;
  LOBYTE(v0) = 0;
  v67 = v0;
  v63 = 0;
  v71 = 0LL;
  _InterlockedExchange64((volatile __int64 *)&PnpDeviceActionThread, (__int64)KeGetCurrentThread());
  v1 = 0;
  v64 = 0;
  v2 = 0;
  PpDevNodeLockTree(1LL);
  while ( 1 )
  {
    v66 = 0;
    v3 = 0;
    v65 = 1;
    v4 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
    v5 = PnpEnumerationRequestList;
    v6 = v4;
    if ( (__int64 *)PnpEnumerationRequestList != &PnpEnumerationRequestList )
    {
      if ( *(__int64 **)(PnpEnumerationRequestList + 8) != &PnpEnumerationRequestList
        || (v7 = *(_QWORD *)PnpEnumerationRequestList,
            *(_QWORD *)(*(_QWORD *)PnpEnumerationRequestList + 8LL) != PnpEnumerationRequestList) )
      {
LABEL_63:
        __fastfail(3u);
      }
      PnpEnumerationRequestList = *(_QWORD *)PnpEnumerationRequestList;
      *(_QWORD *)(v7 + 8) = &PnpEnumerationRequestList;
      *(_BYTE *)(v5 + 84) = 1;
      goto LABEL_6;
    }
    if ( !(_BYTE)v0 && !v1 && !v2 )
      break;
    v5 = 0LL;
LABEL_6:
    KeReleaseSpinLock(&PnpSpinLock, v6);
    if ( v5 )
    {
      v9 = 1;
      if ( memcmp(&NullGuid, (const void *)(v5 + 64), 0x10uLL) )
      {
        v66 = 1;
        v71 = *(_OWORD *)(v5 + 64);
        KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)&v71;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v11 = (AutoBoost *)KeAbPreAcquire(v5 + 88, 0LL, 0LL, v8);
      v13 = v11;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 88), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v5 + 88), v11, v5 + 88);
      if ( v13 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v13, v12);
        else
          *((_BYTE *)v13 + 10) = 1;
      }
      v14 = *(_BYTE *)(v5 + 96);
      _m_prefetchw((const void *)(v5 + 88));
      v15 = *(_QWORD *)(v5 + 88);
      v16 = v15 - 16;
      if ( (v15 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v16 = 0LL;
      if ( (v15 & 2) != 0
        || (v17 = *(_QWORD *)(v5 + 88),
            v17 != _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 88), v16, v15)) )
      {
        ExfReleasePushLock((_QWORD *)(v5 + 88));
      }
      KeAbPostRelease(v5 + 88);
      KeLeaveCriticalRegion();
      v18 = *(_DWORD *)(v5 + 24);
      v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140F12EA0.WaitBlock[2]);
      KeReleaseSpinLock((PKSPIN_LOCK)&stru_140F12EA0.WaitBlock[2], v19);
      v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopDirectedDripsDiagLock.CycleTime);
      PopDirectedDripsDiagLock.ExpectedRunTime = v18;
      if ( LOBYTE(PopDirectedDripsDiagLock.WaitBlockList) )
        PopDirectedDripsDiagLock.Queue = (_DISPATCHER_HEADER *volatile)MEMORY[0xFFFFF78000000008];
      KeReleaseSpinLock((PKSPIN_LOCK)&PopDirectedDripsDiagLock.CycleTime, v20);
      *(_QWORD *)(v5 + 8) = v5;
      *(_QWORD *)v5 = v5;
      if ( PnpShutdownEvent.Header.SignalState )
      {
        v3 = -1073741431;
      }
      else if ( v14 )
      {
        v3 = -1073741536;
      }
      else
      {
        v21 = *(_QWORD *)(v5 + 16);
        v22 = v21 + 312;
        if ( v21 )
          v23 = *(_QWORD *)(*(_QWORD *)v22 + 40LL);
        else
          v23 = 0LL;
        if ( *(_DWORD *)(v23 + 300) != 790 )
        {
          if ( v21 )
          {
            v24 = *(_QWORD *)(*(_QWORD *)v22 + 40LL);
            if ( v24 )
            {
              ObfReferenceObjectWithTag(*(PVOID *)(v5 + 16), 0x65706E50u);
              PnpLogActionQueueEvent(v24, *(unsigned int *)(v5 + 24), 1LL, 0LL);
            }
          }
          else
          {
            v24 = 0LL;
          }
          v25 = *(_DWORD *)(v5 + 24);
          if ( v25 <= 15 )
          {
            if ( v25 == 15 )
            {
              restarted = PiProcessSetDeviceProblem(v5);
              goto LABEL_35;
            }
            if ( v25 > 8 )
            {
              v26 = v25 - 9;
              if ( !v26 )
                goto LABEL_68;
              v27 = v26 - 1;
              if ( !v27 )
                goto LABEL_68;
              v28 = v27 - 1;
              if ( !v28 )
              {
                restarted = PiProcessRequeryDeviceState(v5);
                goto LABEL_35;
              }
              v43 = v28 - 1;
              if ( !v43 )
              {
LABEL_66:
                restarted = PiRestartDevice(v5);
                goto LABEL_35;
              }
              v49 = v43 - 1;
              if ( v49 )
              {
                if ( v49 != 1 )
                {
LABEL_123:
                  v3 = -1073741823;
                  goto LABEL_36;
                }
LABEL_68:
                restarted = PiProcessReenumeration(v5);
LABEL_69:
                v65 = 0;
LABEL_35:
                v3 = restarted;
                goto LABEL_36;
              }
              v57 = PiProcessResourceRequirementsChanged(v5);
              v0 = (unsigned __int8)v0;
              if ( v57 >= 0 )
                v3 = v57;
              else
                v0 = 1;
              v67 = v0;
LABEL_36:
              if ( v24 )
              {
                PnpLogActionQueueEvent(v24, *(unsigned int *)(v5 + 24), 2LL, v3);
                ObfDereferenceObjectWithTag(*(PVOID *)(v5 + 16), 0x65706E50u);
              }
              goto LABEL_38;
            }
            if ( v25 == 8 )
              goto LABEL_68;
            if ( !v25 )
            {
              LOBYTE(v67) = 1;
              goto LABEL_36;
            }
            v44 = v25 - 1;
            if ( v44 )
            {
              v45 = v44 - 1;
              if ( !v45 )
              {
                restarted = PpProcessClearProblem(v5);
                goto LABEL_35;
              }
              v46 = v45 - 1;
              if ( v46 )
              {
                v47 = v46 - 2;
                if ( !v47 )
                {
                  v55 = *(_QWORD *)(v5 + 16);
                  if ( v55 )
                    v56 = *(_QWORD *)(*(_QWORD *)(v55 + 312) + 40LL);
                  else
                    v56 = 0LL;
                  restarted = PiQueryPowerRelations(v56, 0LL);
                  goto LABEL_35;
                }
                v48 = v47 - 1;
                if ( !v48 )
                {
                  restarted = PnpProcessRebalance(v5);
                  goto LABEL_35;
                }
                if ( v48 != 1 )
                  goto LABEL_123;
                v63 = 1;
                goto LABEL_36;
              }
            }
LABEL_126:
            restarted = PiProcessClearDeviceProblem(v5);
            goto LABEL_35;
          }
          if ( v25 > 22 )
          {
            v58 = v25 - 23;
            if ( v58 )
            {
              v59 = v58 - 1;
              if ( v59 )
              {
                v60 = v59 - 1;
                if ( v60 )
                {
                  v61 = v60 - 1;
                  if ( !v61 )
                  {
                    restarted = PiProcessDeviceResetAction(v5);
                    goto LABEL_35;
                  }
                  v62 = v61 - 1;
                  if ( !v62 )
                  {
                    restarted = PiDmaGuardProcessUpdateConsoleLockStateAction(v5);
                    goto LABEL_35;
                  }
                  if ( v62 != 2 )
                    goto LABEL_123;
                  goto LABEL_36;
                }
                goto LABEL_126;
              }
            }
          }
          else if ( v25 != 22 )
          {
            v50 = v25 - 16;
            if ( !v50 )
              goto LABEL_66;
            v51 = v50 - 1;
            if ( !v51 )
            {
              restarted = PiProcessStartSystemDevices(v5);
              goto LABEL_69;
            }
            v52 = v51 - 1;
            if ( !v52 )
            {
              v64 = 1;
              goto LABEL_36;
            }
            v53 = v52 - 1;
            if ( v53 )
            {
              v54 = v53 - 1;
              if ( v54 )
              {
                if ( v54 != 1 )
                  goto LABEL_123;
                goto LABEL_127;
              }
            }
            else
            {
              DWORD1(NotificationStructure[1]) = 0;
              *(GUID *)((char *)NotificationStructure + 4) = GUID_TARGET_DEVICE_TRANSPORT_RELATIONS_CHANGED;
              LODWORD(NotificationStructure[0]) = 2359297;
              *((_QWORD *)&NotificationStructure[1] + 1) = 0LL;
              v70 = 0xFFFFFFFFLL;
              IoReportTargetDeviceChangeAsynchronous(*(PDEVICE_OBJECT *)(v5 + 16), NotificationStructure, 0LL, 0LL);
            }
            PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent(*(_QWORD *)(v5 + 16));
            goto LABEL_36;
          }
LABEL_127:
          restarted = PiConfigureDevice(v5);
          goto LABEL_35;
        }
        v3 = -1073741823;
      }
LABEL_38:
      v30 = *(unsigned int *)(v5 + 24);
      v31 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140F12EA0.WaitBlock[2]);
      KeReleaseSpinLock((PKSPIN_LOCK)&stru_140F12EA0.WaitBlock[2], v31);
      v32 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopDirectedDripsDiagLock.CycleTime);
      if ( LOBYTE(PopDirectedDripsDiagLock.WaitBlockList) )
      {
        *((_QWORD *)&PopDirectedDripsDiagLock.Teb + v30) += MEMORY[0xFFFFF78000000008]
                                                          - (unsigned __int64)PopDirectedDripsDiagLock.Queue;
        PopDirectedDripsDiagLock.Queue = 0LL;
      }
      PopDirectedDripsDiagLock.ExpectedRunTime = 30;
      KeReleaseSpinLock((PKSPIN_LOCK)&PopDirectedDripsDiagLock.CycleTime, v32);
      do
      {
        v33 = *(unsigned int ***)v5;
        if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 )
          goto LABEL_63;
        v34 = *v33;
        if ( *((unsigned int ***)*v33 + 1) != v33 )
          goto LABEL_63;
        *(_QWORD *)v5 = v34;
        *((_QWORD *)v34 + 1) = v5;
        v35 = *((unsigned int *)v33 + 6);
        v36 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140F12EA0.WaitBlock[2]);
        v37 = (*(_DWORD *)&stru_140F12EA0.WaitBlockFill11[104])-- == 1;
        v38 = v36;
        if ( v37 )
          PopDirectedDripsClearDisengageReason(4LL);
        KeReleaseSpinLock((PKSPIN_LOCK)&stru_140F12EA0.WaitBlock[2], v38);
        v39 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopDirectedDripsDiagLock.CycleTime);
        if ( !--PopDirectedDripsDiagLock.CurrentRunTime && LOBYTE(PopDirectedDripsDiagLock.WaitBlockList) )
        {
          PopDirectedDripsDiagLock.WaitListEntry.Flink = (struct _LIST_ENTRY *)((char *)PopDirectedDripsDiagLock.WaitListEntry.Flink
                                                                              + MEMORY[0xFFFFF78000000008]
                                                                              - (unsigned __int64)PopDirectedDripsDiagLock.WaitListEntry.Blink);
          PopDirectedDripsDiagLock.216 = ($9F5D72EF54BCA79AE5AD03946D2C2FEF)(unsigned __int64)PopDirectedDripsDiagLock.WaitListEntry.Flink;
        }
        --*((_DWORD *)&PopDirectedDripsDiagLock.KernelStack + v35);
        KeReleaseSpinLock((PKSPIN_LOCK)&PopDirectedDripsDiagLock.CycleTime, v39);
        v40 = v33[7];
        if ( v40 )
          *v40 = v3;
        v41 = (struct _KEVENT *)v33[6];
        if ( v41 )
          KeSetEvent(v41, 0, 0);
        if ( v33 == (unsigned int **)v5 )
        {
          v9 = 0;
          if ( v65 )
            ObfDereferenceObjectWithTag(v33[2], 0x746C6644u);
        }
        PnpDeleteDeviceActionRequest(v33);
      }
      while ( v9 );
      v0 = v67;
      v1 = v63;
      v2 = v64;
      if ( v66 )
        KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = 0LL;
    }
    else if ( (_BYTE)v0 || v1 )
    {
      LODWORD(v68) = 3;
      BYTE4(v68) = PnPBootDriversInitialized;
      ObfReferenceObjectWithTag(*((PVOID *)IopRootDeviceNode + 4), 0x746C6644u);
      PipProcessDevNodeTree((_DWORD)IopRootDeviceNode, 0, (unsigned int)&v68, v1 == 0 ? 3 : 0, v0, 0, 0);
      LOBYTE(v0) = 0;
      v63 = 0;
      v67 = v0;
      v1 = 0;
    }
    else
    {
      PnpCompleteSystemStartProcess();
      v2 = 0;
      v64 = 0;
    }
  }
  PnpEnumerationInProgress = 0;
  KeSetEvent(&PnpEnumerationLock, 0, 0);
  KeReleaseSpinLock(&PnpSpinLock, v6);
  _InterlockedExchange64((volatile __int64 *)&PnpDeviceActionThread, 0LL);
  return PpDevNodeUnlockTree(1LL);
}
