/*
 * XREFs of PoBroadcastSystemState @ 0x140C0BF20
 * Callers:
 *     PopDirectedDripsSuspendDevices @ 0x140AC6E74 (PopDirectedDripsSuspendDevices.c)
 *     PopDirectedDripsResumeDevices @ 0x140AC6FD4 (PopDirectedDripsResumeDevices.c)
 *     PnprQuiesceDevices @ 0x140BF80F0 (PnprQuiesceDevices.c)
 *     PnprWakeDevices @ 0x140BF8D2C (PnprWakeDevices.c)
 *     PopSetDevicesSystemState @ 0x140C0BE80 (PopSetDevicesSystemState.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     DbgPrint @ 0x140398CE0 (DbgPrint.c)
 *     PopFxIdleDevicesFromSx @ 0x1404AB55C (PopFxIdleDevicesFromSx.c)
 *     PopWakeDeviceList @ 0x1404B2F38 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x1404B3160 (PopSleepDeviceList.c)
 *     PopDiagTraceEventNoPayload @ 0x1404C0304 (PopDiagTraceEventNoPayload.c)
 *     PopMapInternalActionToIrpAction @ 0x1404CE2A4 (PopMapInternalActionToIrpAction.c)
 *     PopFxActivateDevicesForSx @ 0x1404CE9D4 (PopFxActivateDevicesForSx.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     IoConfigureCrashDump @ 0x1405C8CB0 (IoConfigureCrashDump.c)
 *     PopFxNotifySxTransitionState @ 0x14077370C (PopFxNotifySxTransitionState.c)
 *     PopUpdateSmbiosData @ 0x14077E3F0 (PopUpdateSmbiosData.c)
 *     IoNotifyPowerOperationVetoed @ 0x1407A47A8 (IoNotifyPowerOperationVetoed.c)
 *     ObShutdownSystem @ 0x1407C5600 (ObShutdownSystem.c)
 *     PopDirectedDripsNotifyTransitionFailed @ 0x1407CF28C (PopDirectedDripsNotifyTransitionFailed.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x1407D645C (PopDiagTraceDevicesWakeEnd.c)
 *     WmiAcquireSmbiosLockExclusive @ 0x140828854 (WmiAcquireSmbiosLockExclusive.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x140A73A3C (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x140A73AB4 (ExReleaseTimeRefreshLockExclusive.c)
 *     WmipReleaseSmbiosLockShared @ 0x140B22694 (WmipReleaseSmbiosLockShared.c)
 *     PopDiagTraceDevicesSuspend @ 0x140B382B4 (PopDiagTraceDevicesSuspend.c)
 *     EmPowerPagingEnabled @ 0x140B3D8C8 (EmPowerPagingEnabled.c)
 *     PopBootLoaderSiData @ 0x140BFFC0C (PopBootLoaderSiData.c)
 *     PopVerifierFlushMemoryBeforeSleep @ 0x140C03704 (PopVerifierFlushMemoryBeforeSleep.c)
 *     MmShutdownSystem @ 0x140C06930 (MmShutdownSystem.c)
 *     PopDiagTraceDevicesLevel @ 0x140C0C5B0 (PopDiagTraceDevicesLevel.c)
 *     PopCheckpointSystemSleep @ 0x140C0C680 (PopCheckpointSystemSleep.c)
 *     PopSetupSleepNotifies @ 0x140C0C700 (PopSetupSleepNotifies.c)
 *     BgDisplayFade @ 0x140C58B58 (BgDisplayFade.c)
 */

__int64 __fastcall PoBroadcastSystemState(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char LowPart; // si
  unsigned int *v5; // r13
  char v6; // al
  __int64 v7; // r12
  char *v8; // rbx
  int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // rcx
  bool v13; // zf
  int v14; // r15d
  __int64 v15; // r14
  int v16; // esi
  _DWORD *v17; // r14
  __int64 v18; // r8
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct _KLOCK_ENTRIES *v24; // r9
  int v25; // esi
  _DWORD *i; // r15
  __int64 v27; // r8
  __int64 v28; // r10
  unsigned int v29; // eax
  __int64 v30; // r10
  __int64 v31; // rcx
  _KTHREAD **v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  struct _KLOCK_ENTRIES *v35; // r9
  LARGE_INTEGER *p_Interval; // [rsp+30h] [rbp-10h] BYREF
  __int64 v37; // [rsp+38h] [rbp-8h]
  LARGE_INTEGER Interval; // [rsp+80h] [rbp+40h] BYREF
  __int64 v39; // [rsp+88h] [rbp+48h] BYREF

  v5 = (unsigned int *)(a1 + 16);
  v6 = *(_BYTE *)(a1 + 26);
  v7 = 0LL;
  v8 = (char *)qword_140F103F0;
  LOBYTE(Interval.LowPart) = *(_BYTE *)(a1 + 25);
  LowPart = Interval.LowPart;
  *(_BYTE *)qword_140F103F0 = v6;
  *((_DWORD *)v8 + 1) = *(_DWORD *)(a1 + 4);
  *((_DWORD *)v8 + 112) = 0;
  *((_QWORD *)v8 + 57) = 0LL;
  *(_WORD *)(v8 + 465) = 0;
  v8[467] = 0;
  v8[464] = LowPart;
  DWORD1(PopCurrentBroadcast) = 0;
  v10 = (*(_DWORD *)a1 & 0xF) << 16;
  DWORD1(PopCurrentBroadcast) = v10;
  if ( LowPart )
  {
    v11 = v10 | 0x1100u;
    DWORD1(PopCurrentBroadcast) = v11;
  }
  else
  {
    DWORD1(PopCurrentBroadcast) = v10 | ((*(_DWORD *)(a1 + 8) & 0xF) << 8);
    v11 = DWORD1(PopCurrentBroadcast) | ((*(_DWORD *)(a1 + 4) & 0xFu) << 12);
    DWORD1(PopCurrentBroadcast) |= (*(_DWORD *)(a1 + 4) & 0xF) << 12;
    if ( *v5 == 5 )
      DWORD1(PopCurrentBroadcast) = v11 | (PopKsrPrepared != 0 ? 0x400000 : 0);
  }
  DWORD2(PopCurrentBroadcast) = *v5;
  LOBYTE(PopCurrentBroadcast) = 1;
  if ( (xmmword_140FC0C10 & 0x8000) != 0 )
  {
    v39 = *((unsigned int *)v8 + 1);
    BYTE6(v39) = *(_BYTE *)(a1 + 26);
    BYTE5(v39) = *(_BYTE *)(a1 + 24);
    p_Interval = (LARGE_INTEGER *)&v39;
    BYTE4(v39) = LowPart;
    v37 = 8LL;
    EtwTraceKernelEvent((int)&p_Interval, 1, 0x80008000, 4644, 5249026);
  }
  v12 = 0x4000000LL;
  if ( *(_BYTE *)(a1 + 26) == 2 && (*(_DWORD *)(a1 + 20) & 0x4000000) == 0 )
    v8[466] = 1;
  if ( *(_BYTE *)(a1 + 24) && *(_BYTE *)(a1 + 26) == 3 )
    v8[467] = 1;
  if ( (*(_DWORD *)(a1 + 20) & 0x8000000) != 0 )
    DWORD1(PopCurrentBroadcast) |= 0x200000u;
  v13 = (*(_DWORD *)(a1 + 20) & 0x4000000) == 0;
  v14 = *(_DWORD *)(a1 + 20) & 0x4000000;
  LODWORD(v39) = v14;
  if ( !v13 )
    DWORD1(PopCurrentBroadcast) |= 0x800000u;
  v15 = 4LL;
  if ( LowPart )
  {
LABEL_12:
    v8[464] = LowPart;
    if ( !LowPart )
      goto LABEL_26;
    goto LABEL_13;
  }
  if ( *(_BYTE *)(a1 + 26) == 2 )
    PopFxNotifySxTransitionState(1, v11, a3, a4);
  if ( *((int *)v8 + 112) >= 0 )
  {
    PopSetupSleepNotifies(v8);
    PopDiagTraceDevicesSuspend(
      *(_BYTE *)(a1 + 26) == 3,
      (DWORD1(PopCurrentBroadcast) >> 8) & 0xF,
      WORD2(PopCurrentBroadcast) >> 12);
    v20 = 11LL;
    if ( *(_BYTE *)(a1 + 26) != 3 )
      v20 = 14LL;
    PopCheckpointSystemSleep(v20);
    if ( *v5 == 4 && (PopShutdownPowerOffPolicy || *(_QWORD *)&qword_140F10460) )
    {
      v7 = 4LL;
    }
    else if ( *v5 - 2 <= 1 && *v8 == 2 )
    {
      PopFxActivateDevicesForSx(1u, v21, v23, v24);
    }
    v25 = 4;
    for ( i = v8 + 352; ; i -= 18 )
    {
      if ( v15 < v7 )
      {
        v14 = v39;
        LowPart = Interval.LowPart;
        goto LABEL_64;
      }
      if ( v25 == 1 && *(_BYTE *)(a1 + 26) == 2 && !(_DWORD)v39 )
      {
        if ( dword_140F10454 == 5 )
          WmiAcquireSmbiosLockExclusive();
        EmPowerPagingEnabled(0, v21, v23, v24);
        PopVerifierFlushMemoryBeforeSleep();
        _InterlockedExchange(&PopPagingEnabled, 0);
        if ( *(_BYTE *)(a1 + 24) )
        {
          if ( (DWORD1(PopCurrentBroadcast) & 0x400000) == 0 )
          {
            LOBYTE(v32) = 1;
            IoConfigureCrashDump(0LL, (__int64)v32);
          }
          if ( (PopShutdownCleanly & 0x10) != 0 )
            ObShutdownSystem((void **)1, v32, v34, v35);
          MmShutdownSystem(1);
        }
        else
        {
          ExAcquireTimeRefreshLockExclusive(v33, (__int64)v32, v34, v35);
          v8[468] = 1;
        }
      }
      LOBYTE(v23) = *v8;
      LOBYTE(v24) = 1;
      PopDiagTraceDevicesLevel((unsigned int)v25, 0LL, v23, v24);
      if ( *i )
      {
        if ( *(int *)(a1 + 20) < 0 )
          **((_QWORD **)v8 + 7) = 0LL;
        PopSleepDeviceList((__int64)v8, (__int64)&v8[64 * v25 + 64 + 8 * v25]);
      }
      LOBYTE(v27) = *v8;
      PopDiagTraceDevicesLevel((unsigned int)v25, 0LL, v27, 0LL);
      if ( *((int *)v8 + 112) < 0 )
        break;
      --v25;
      --v15;
    }
    v28 = *((_QWORD *)v8 + 57);
    LowPart = 1;
    LOBYTE(Interval.LowPart) = 1;
    if ( !v28 || *(_DWORD *)(a1 + 12) != 1 )
      goto LABEL_62;
    v29 = PopMapInternalActionToIrpAction(*v5, *((_DWORD *)v8 + 1), 0);
    v22 = v29;
    if ( v29 == 7 )
    {
      v24 = (struct _KLOCK_ENTRIES *)**((_QWORD **)v8 + 7);
    }
    else if ( *(int *)(a1 + 20) < 0 )
    {
LABEL_62:
      v14 = v39;
      if ( (_DWORD)v39 )
        PopDirectedDripsNotifyTransitionFailed(*((_QWORD *)v8 + 57));
LABEL_64:
      if ( *v8 == 2 && v14 )
        PopFxIdleDevicesFromSx(v22, v21, v23, v24);
      PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICESSUSPEND_END);
      if ( *(_BYTE *)(a1 + 26) == 3 )
        PopCheckpointSystemSleep(12LL);
      goto LABEL_67;
    }
    IoNotifyPowerOperationVetoed(v29, (__int64)v24, v30);
    goto LABEL_62;
  }
LABEL_67:
  if ( (PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime & 0x20000) == 0 || *(_BYTE *)(a1 + 26) != 2 )
    goto LABEL_12;
  DbgPrint("po: POP_WAKE_DEVICE_AFTER_SLEEP enabled.\n");
  LOBYTE(Interval.LowPart) = 1;
  *((_DWORD *)v8 + 112) = -1073741823;
  v8[464] = 1;
LABEL_13:
  v8[466] = 1;
  *v8 = 2;
  *((_DWORD *)v8 + 1) = 1;
  if ( *(_BYTE *)(a1 + 26) != 2
    || (PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICESWAKE),
        qword_140F10A18 = KeQueryPerformanceCounter(0LL).QuadPart,
        *v8 == 2) )
  {
    if ( v14 )
      PopFxActivateDevicesForSx(1u, v11, a3, a4);
  }
  v16 = 0;
  v17 = v8 + 64;
  while ( v16 <= 4 )
  {
    if ( PoResumeFromHibernate && !v16 )
    {
      if ( byte_140F10920 )
        qword_140F10BE8 = KeQueryPerformanceCounter(0LL).QuadPart;
      if ( byte_140E65F58 )
      {
        BgDisplayFade(v12);
        byte_140E65F50 = 0;
        byte_140E65F18 = 0;
      }
    }
    LOBYTE(a3) = *v8;
    LOBYTE(a4) = 1;
    PopDiagTraceDevicesLevel((unsigned int)v16, 1LL, a3, a4);
    if ( v17[1] < *v17 )
      PopWakeDeviceList(v8, (__int64)&v8[64 * v16 + 64 + 8 * v16]);
    LOBYTE(v18) = *v8;
    PopDiagTraceDevicesLevel((unsigned int)v16, 1LL, v18, 0LL);
    if ( v16 == 1 && *(_BYTE *)(a1 + 26) == 2 && !v14 )
    {
      if ( v8[468] )
      {
        v8[468] = 0;
        ExReleaseTimeRefreshLockExclusive();
      }
      if ( PoResumeFromHibernate )
      {
        if ( qword_140F10470 )
        {
          v31 = *(_QWORD *)(qword_140F10470 + 232);
          if ( v31 )
            PopBootLoaderSiData(v31);
        }
        PopUpdateSmbiosData(
          *(_BYTE *)(*(_QWORD *)(qword_140F10470 + 216) + 1236LL),
          *(_BYTE *)(*(_QWORD *)(qword_140F10470 + 216) + 1237LL),
          *(_DWORD *)(*(_QWORD *)(qword_140F10470 + 216) + 1232LL),
          *(void **)(*(_QWORD *)(qword_140F10470 + 216) + 1224LL));
      }
      if ( dword_140F10454 == 5 )
        WmipReleaseSmbiosLockShared();
      EmPowerPagingEnabled(1, v11, a3, a4);
      _InterlockedExchange(&PopPagingEnabled, 1);
      v12 = (unsigned int)PopDebugFlags;
      if ( (PopDebugFlags & 4) != 0 )
      {
        Interval.QuadPart = -50000000LL;
        KeDelayExecutionThread(0, 0, &Interval);
        KeBugCheckEx(0xA0u, 0xAuLL, 1uLL, 0LL, 0LL);
      }
    }
    ++v16;
    v17 += 18;
  }
  if ( *(_BYTE *)(a1 + 26) == 2 )
  {
    PopFxIdleDevicesFromSx(v12, v11, a3, a4);
    qword_140F10A20 = KeQueryPerformanceCounter(0LL).QuadPart;
    PopDiagTraceDevicesWakeEnd();
    PopCheckpointSystemSleep(36LL);
    if ( (PopDebugFlags & 8) != 0 )
    {
      Interval.QuadPart = -50000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      KeBugCheckEx(0xA0u, 0xAuLL, 2uLL, 0LL, 0LL);
    }
  }
  LowPart = Interval.LowPart;
  *v8 = *(_BYTE *)(a1 + 26);
  *((_DWORD *)v8 + 1) = *(_DWORD *)(a1 + 4);
LABEL_26:
  if ( (xmmword_140FC0C10 & 0x8000) != 0 )
  {
    Interval.LowPart = *((_DWORD *)v8 + 112);
    v37 = 4LL;
    p_Interval = &Interval;
    EtwTraceKernelEvent((int)&p_Interval, 1, 0x80008000, 4645, 5249026);
  }
  if ( LowPart && *(_BYTE *)(a1 + 26) == 2 )
    PopFxNotifySxTransitionState(0, v11, a3, a4);
  DWORD1(PopCurrentBroadcast) &= ~0x800000u;
  LOBYTE(PopCurrentBroadcast) = 0;
  return *((unsigned int *)v8 + 112);
}
