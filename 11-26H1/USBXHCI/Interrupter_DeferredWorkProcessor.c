/*
 * XREFs of Interrupter_DeferredWorkProcessor @ 0x14002A518
 * Callers:
 *     Interrupter_WdfEvtInterruptWorkItem @ 0x14002A450 (Interrupter_WdfEvtInterruptWorkItem.c)
 *     Interrupter_WdfEvtInterruptDpc @ 0x14002A500 (Interrupter_WdfEvtInterruptDpc.c)
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x140001BD4 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_qd @ 0x1400071EC (WPP_RECORDER_SF_qd.c)
 *     Interrupter_UpdateERDP @ 0x1400077D0 (Interrupter_UpdateERDP.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1400089F4 (RootHub_HandlePortStatusChangeEvent.c)
 *     WPP_RECORDER_SF_D @ 0x140008EA0 (WPP_RECORDER_SF_D.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000EF10 (McTemplateK0q_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qDD @ 0x14001B210 (WPP_RECORDER_SF_qDD.c)
 *     XilDeviceSlot_GetUsbDeviceHandleArray @ 0x14001C340 (XilDeviceSlot_GetUsbDeviceHandleArray.c)
 *     Controller_ReportFatalError @ 0x140020E40 (Controller_ReportFatalError.c)
 *     UsbDevice_TransferEventHandler @ 0x140024920 (UsbDevice_TransferEventHandler.c)
 *     WPP_RECORDER_SF_ddddidLL @ 0x140026F70 (WPP_RECORDER_SF_ddddidLL.c)
 *     Interrupter_ReleaseEventRingLock @ 0x1400285B0 (Interrupter_ReleaseEventRingLock.c)
 *     Interrupter_AcquireEventRingLock @ 0x140028690 (Interrupter_AcquireEventRingLock.c)
 *     Interrupter_DeferToDpcOrWorkItem @ 0x140028B00 (Interrupter_DeferToDpcOrWorkItem.c)
 *     TR_TransferEventHandler @ 0x140029430 (TR_TransferEventHandler.c)
 *     Command_HandleCommandCompletionEvent @ 0x14002B298 (Command_HandleCommandCompletionEvent.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14002D650 (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qLL @ 0x140030C90 (WPP_RECORDER_SF_qLL.c)
 *     WPP_RECORDER_SF_qq @ 0x140038B04 (WPP_RECORDER_SF_qq.c)
 *     McTemplateK0pqqt_EtwWriteTransfer @ 0x14003C940 (McTemplateK0pqqt_EtwWriteTransfer.c)
 *     UsbDevice_DeviceNotificationEventHandler @ 0x14003D9F8 (UsbDevice_DeviceNotificationEventHandler.c)
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x1400578F0 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

void __fastcall Interrupter_DeferredWorkProcessor(__int64 a1, char a2, char a3)
{
  __int64 v5; // r13
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // r8
  int v9; // r15d
  char v10; // r14
  __int64 v11; // r9
  __int64 v12; // rax
  void *v13; // rdx
  char v14; // bl
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  ULONG v19; // esi
  __int64 v20; // rbx
  ULONG v21; // r14d
  NTSTATUS v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // edx
  __int64 v27; // r9
  int v28; // r8d
  __int64 v29; // rax
  __int64 v30; // r8
  int v31; // edx
  __int64 v32; // rcx
  int v33; // edx
  int v34; // r10d
  unsigned int v35; // r8d
  __int64 UsbDeviceHandleArray; // rax
  __int64 v37; // r8
  int v38; // r9d
  void *v39; // r10
  unsigned int v40; // edx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  int v44; // r9d
  __int64 v45; // rax
  unsigned int v46; // edx
  __int64 v47; // rcx
  char v48; // al
  char v49; // bl
  char v50; // bl
  char v51; // al
  char v52; // si
  struct _IO_WORKITEM *v53; // rcx
  char v54; // al
  int v55; // [rsp+20h] [rbp-69h]
  char v56; // [rsp+28h] [rbp-61h]
  __int64 v57; // [rsp+30h] [rbp-59h]
  __int128 v59; // [rsp+78h] [rbp-11h] BYREF
  __int64 v60; // [rsp+88h] [rbp-1h]
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+90h] [rbp+7h] BYREF

  v59 = 0LL;
  v5 = 0LL;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B178);
  v9 = 0;
  v10 = 0;
  v11 = *(_QWORD *)(v7 + 8);
  v12 = *(_QWORD *)(v11 + 136);
  ++*(_DWORD *)(v7 + 44);
  v60 = v12;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    McTemplateK0pq_EtwWriteTransfer(
      v6,
      &USBXHCI_ETW_EVENT_DEFERRED_WORK_START_V2,
      v8,
      *(_QWORD *)(v11 + 8),
      *(_DWORD *)(v7 + 32));
  v13 = &WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v13) = 5;
    WPP_RECORDER_SF_qq(
      *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL),
      (_DWORD)v13,
      9,
      42,
      (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids,
      a1,
      a2);
  }
  if ( !*(_DWORD *)(v7 + 32) )
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
           WdfDriverGlobals,
           a1,
           off_14006AFC0);
  v14 = Interrupter_AcquireEventRingLock(v7);
  if ( a3 )
    KeClearEvent((PRKEVENT)(v7 + 192));
  v15 = *(_DWORD *)(v7 + 112);
  if ( (v15 & 8) != 0 )
  {
    Interrupter_ReleaseEventRingLock(v7, v14);
    ++*(_DWORD *)(v7 + 68);
    goto LABEL_109;
  }
  if ( (v15 & 0x10) != 0 )
  {
    Interrupter_ReleaseEventRingLock(v7, v14);
    ++*(_DWORD *)(v7 + 72);
    goto LABEL_109;
  }
  *(_DWORD *)(v7 + 112) = v15 | 8;
  Interrupter_ReleaseEventRingLock(v7, v14);
  v19 = 0;
  v20 = *(_QWORD *)(v7 + 152) + 16LL * *(unsigned int *)(v7 + 140);
  v21 = 0;
  while ( (*(_DWORD *)(v20 + 12) & 1) == *(_DWORD *)(v7 + 136) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v57) = *(_DWORD *)(v7 + 140);
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL),
        5u,
        9u,
        0x2Bu,
        (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids,
        v20,
        v57);
    }
    if ( (v9 & 0x3F) == 0 )
    {
      memset(&WatchdogInformation, 0, sizeof(WatchdogInformation));
      if ( KeGetCurrentIrql() >= 2u )
      {
        v22 = KeQueryDpcWatchdogInformation(&WatchdogInformation);
        v25 = 0LL;
        if ( v22 >= 0 )
        {
          if ( !v19 )
          {
            v24 = 95 * WatchdogInformation.DpcTimeLimit;
            LODWORD(v23) = (1374389535 * (unsigned __int64)(unsigned int)v24) >> 32;
            v19 = (unsigned int)v24 / 0x64;
          }
          if ( !v21 )
          {
            v24 = 25 * WatchdogInformation.DpcWatchdogLimit;
            LODWORD(v23) = (1374389535 * (unsigned __int64)(unsigned int)v24) >> 32;
            v21 = (unsigned int)v24 / 0x64;
          }
          if ( WatchdogInformation.DpcTimeCount < v19 )
          {
            ++*(_DWORD *)(v7 + 80);
LABEL_102:
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(v23) = 5;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL),
                v23,
                9,
                44,
                (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids,
                v9);
            }
            if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
              McTemplateK0q_EtwWriteTransfer(v24, v23, v25, *(_DWORD *)(v7 + 32));
            Interrupter_UpdateERDP(v7, 0);
            v10 = 1;
            goto LABEL_109;
          }
          if ( WatchdogInformation.DpcWatchdogCount < v21 )
          {
            ++*(_DWORD *)(v7 + 84);
            goto LABEL_102;
          }
        }
      }
    }
    v59 = *(_OWORD *)v20;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddddidLL(
        *(_QWORD *)(v7 + 16),
        (HIDWORD(v59) >> 2) & 1,
        WORD6(v59) >> 10,
        DWORD2(v59) & 0xFFFFFF,
        v55);
    v26 = *(_DWORD *)(v7 + 140);
    ++*(_DWORD *)(v7 + 48);
    *(_DWORD *)(v7 + 140) = ++v26;
    if ( v26 == *(_DWORD *)(v7 + 132) )
    {
      v27 = 0LL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_ddd(
          *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL),
          5u,
          9u,
          0x2Eu,
          (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids);
        v27 = 0LL;
      }
      v28 = *(_DWORD *)(v7 + 144) + 1;
      *(_DWORD *)(v7 + 140) = 0;
      *(_DWORD *)(v7 + 144) = v28;
      if ( v28 == *(_DWORD *)(v7 + 124) )
      {
        *(_DWORD *)(v7 + 136) = *(_DWORD *)(v7 + 136) != 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_DD(
            *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL),
            5u,
            9u,
            0x2Fu,
            (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids);
          v27 = 0LL;
        }
        v29 = *(_QWORD *)(v7 + 176);
        *(_DWORD *)(v7 + 144) = 0;
      }
      else
      {
        v29 = **(_QWORD **)(v7 + 160);
      }
      *(_QWORD *)(v7 + 160) = v29;
      *(_QWORD *)(v7 + 152) = *(_QWORD *)(v29 + 16);
    }
    else
    {
      v27 = 0LL;
    }
    v30 = DWORD2(v59);
    v31 = 199;
    if ( HIBYTE(DWORD2(v59)) == 199 && (v32 = *(_QWORD *)(v7 + 8), (*(_QWORD *)(v32 + 736) & 0x2000LL) != 0) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v31) = 3;
        WPP_RECORDER_SF_qLL(
          *(_QWORD *)(v32 + 72),
          v31,
          9,
          48,
          (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids,
          v20,
          199,
          WORD6(v59) >> 10);
      }
    }
    else
    {
      v33 = HIDWORD(v59);
      v34 = WORD6(v59) >> 10;
      if ( v34 == 32 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_DD(
            *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL),
            5u,
            9u,
            0x31u,
            (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids);
          v33 = HIDWORD(v59);
          LODWORD(v30) = DWORD2(v59);
        }
        if ( (v33 & 4) != 0 )
        {
          if ( _bittest64((const signed __int64 *)(*(_QWORD *)(v7 + 8) + 736LL), 0x35u) )
          {
            v35 = BYTE3(v30);
            if ( v35 == 15 || v35 == 14 )
            {
              v33 &= ~4u;
              HIDWORD(v59) = v33;
            }
          }
        }
        if ( (v33 & 4) == 0
          || (v59 & 3) == 1
          || _bittest64((const signed __int64 *)(*(_QWORD *)(v7 + 8) + 736LL), 0x25u) )
        {
          UsbDeviceHandleArray = XilDeviceSlot_GetUsbDeviceHandleArray(v60);
          v41 = *(_QWORD *)(UsbDeviceHandleArray + 8 * ((unsigned __int64)v40 >> 24));
          if ( v41 )
          {
            UsbDevice_TransferEventHandler(v41, (__int64)&v59, v37, v38);
          }
          else if ( (v37 & 3) != 1 && WPP_RECORDER_INITIALIZED != v39 )
          {
            WPP_RECORDER_SF_qDD(
              *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL),
              3u,
              9u,
              0x32u,
              (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids);
          }
        }
        else
        {
          TR_TransferEventHandler(&v59, 0LL);
        }
      }
      else if ( v34 == 37 && HIBYTE(DWORD2(v59)) == 21 )
      {
        ++*(_DWORD *)(v7 + 76);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v33) = 3;
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL),
            v33,
            9,
            51,
            (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids);
        }
        MicrosoftTelemetryAssertTriggeredArgsMsgKM(
          "usbxhci.sys",
          (*(_QWORD *)(*(_QWORD *)(v7 + 8) + 744LL) >> 27) & 1LL,
          *(unsigned int *)(v7 + 120),
          "Event Ring Full Condition Hit");
        v42 = *(_QWORD *)(v7 + 8);
        if ( (*(_QWORD *)(v42 + 736) & 0x10000000LL) != 0 )
          Controller_ReportFatalError(v42, 2, 4113, 0, 0LL, 0LL, 0LL);
      }
      else if ( *(_DWORD *)(v7 + 32) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v43 = *(_QWORD *)(v7 + 8);
          v56 = WORD6(v59) >> 10;
          v44 = 52;
LABEL_83:
          LOBYTE(v33) = 3;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(v43 + 72),
            v33,
            9,
            v44,
            (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids,
            v56);
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_DD(
            *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL),
            5u,
            9u,
            0x35u,
            (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids);
          v33 = HIDWORD(v59);
          v30 = DWORD2(v59);
        }
        switch ( (unsigned __int16)v33 >> 10 )
        {
          case '!':
LABEL_89:
            Command_HandleCommandCompletionEvent(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 144LL), &v59, v30, v27);
            break;
          case '"':
            RootHub_HandlePortStatusChangeEvent(*(_QWORD **)(*(_QWORD *)(v7 + 8) + 152LL), (__int64)&v59);
            break;
          case '%':
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_DD(
                *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
                3u,
                9u,
                0x36u,
                (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids);
            break;
          case '&':
            v45 = XilDeviceSlot_GetUsbDeviceHandleArray(v60);
            v47 = *(_QWORD *)(v45 + 8 * ((unsigned __int64)v46 >> 24));
            if ( v47 )
              UsbDevice_DeviceNotificationEventHandler(v47, &v59);
            break;
          default:
            if ( (unsigned __int16)v33 >> 10 != 39 )
            {
              if ( (unsigned __int16)v33 >> 10 == 48 )
                goto LABEL_89;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v43 = *(_QWORD *)(v5 + 8);
                v44 = 55;
                v56 = (unsigned __int16)v33 >> 10;
                goto LABEL_83;
              }
            }
            break;
        }
      }
    }
    v20 = *(_QWORD *)(v7 + 152) + 16LL * *(unsigned int *)(v7 + 140);
    if ( v9 && (v9 & 0x7F) == 0 && (*(_DWORD *)(v20 + 12) & 1) == *(_DWORD *)(v7 + 136) )
      Interrupter_UpdateERDP(v7, 0);
    ++v9;
  }
  v48 = Interrupter_AcquireEventRingLock(v7);
  *(_DWORD *)(v7 + 112) &= ~8u;
  v49 = v48;
  Interrupter_UpdateERDP(v7, 1);
  Interrupter_ReleaseEventRingLock(v7, v49);
  if ( !v9 )
    ++*(_DWORD *)(v7 + 96);
  v10 = 0;
  v17 = *(_DWORD *)(*(_QWORD *)(v7 + 152) + 16LL * *(unsigned int *)(v7 + 140) + 12) & 1;
  if ( v17 == *(_DWORD *)(v7 + 136) )
  {
    ++*(_DWORD *)(v7 + 100);
    v50 = 0;
    goto LABEL_110;
  }
  ++*(_DWORD *)(v7 + 104);
LABEL_109:
  v50 = 1;
LABEL_110:
  if ( a3 )
    KeSetEvent((PRKEVENT)(v7 + 192), 0, 0);
  if ( v10 )
  {
    ++*(_DWORD *)(v7 + 56);
    v51 = Interrupter_AcquireEventRingLock(v7);
    v52 = v51;
    if ( (*(_DWORD *)(v7 + 112) & 0x12) != 0 )
    {
      Interrupter_ReleaseEventRingLock(v7, v51);
    }
    else
    {
      KeClearEvent((PRKEVENT)(v7 + 192));
      Interrupter_ReleaseEventRingLock(v7, v52);
      v53 = *(struct _IO_WORKITEM **)(v7 + 216);
      if ( *(_BYTE *)(*(_QWORD *)(v7 + 8) + 784LL) )
      {
        if ( !v53
          || !((unsigned __int8 (__fastcall *)(struct _IO_WORKITEM *, IO_WORKITEM_ROUTINE_EX *, _QWORD, __int64))WPP_MAIN_CB.Queue.Wcb.DeviceObject)(
                v53,
                Interrupter_IoWorkItemRequeueDpc,
                0LL,
                v7) )
        {
          v54 = Interrupter_AcquireEventRingLock(v7);
          *(_DWORD *)(v7 + 112) &= ~8u;
          Interrupter_ReleaseEventRingLock(v7, v54);
          KeSetEvent((PRKEVENT)(v7 + 192), 0, 0);
          ++*(_DWORD *)(v7 + 64);
          Interrupter_DeferToDpcOrWorkItem(a1);
          goto LABEL_121;
        }
      }
      else
      {
        IoQueueWorkItemEx(v53, Interrupter_IoWorkItemRequeueDpc, CriticalWorkQueue, (PVOID)v7);
      }
      ++*(_DWORD *)(v7 + 60);
    }
  }
LABEL_121:
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    McTemplateK0pqqt_EtwWriteTransfer(
      v17,
      v16,
      v18,
      *(_QWORD *)(*(_QWORD *)(v7 + 8) + 8LL),
      *(_DWORD *)(v7 + 32),
      v9,
      v50);
}
