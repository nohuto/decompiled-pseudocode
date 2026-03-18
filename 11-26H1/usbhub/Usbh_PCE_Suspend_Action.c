/*
 * XREFs of Usbh_PCE_Suspend_Action @ 0x140004A34
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x14001E990 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhUnlockPcqWithTag @ 0x140001100 (UsbhUnlockPcqWithTag.c)
 *     UsbhFlushPortChangeQueue @ 0x140001CC8 (UsbhFlushPortChangeQueue.c)
 *     UsbhInsertQueuePortChangeObject @ 0x1400040A0 (UsbhInsertQueuePortChangeObject.c)
 *     UsbhHubQueueProcessChangeWorker @ 0x1400045E8 (UsbhHubQueueProcessChangeWorker.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x140005F40 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhSetSuspendPending @ 0x140006794 (UsbhSetSuspendPending.c)
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhWait @ 0x14000C584 (UsbhWait.c)
 *     UsbhPCE_Suspend @ 0x140011294 (UsbhPCE_Suspend.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhSignalSuspendEvent @ 0x140022970 (UsbhSignalSuspendEvent.c)
 *     UsbhiSignalSuspendEvent @ 0x14002394C (UsbhiSignalSuspendEvent.c)
 *     UsbhSetPcqEventStatus @ 0x14002EC50 (UsbhSetPcqEventStatus.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x14003E5C0 (WPP_RECORDER_SF_dd.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x140043680 (UsbhHubSyncSuspendPortEvent.c)
 *     UsbhPCE_ResumeDone @ 0x140043FCC (UsbhPCE_ResumeDone.c)
 */

void __fastcall Usbh_PCE_Suspend_Action(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v5; // r15d
  KIRQL v8; // al
  __int64 v9; // r8
  KIRQL v10; // r14
  __int64 v11; // rcx
  signed __int32 v12; // eax
  unsigned int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  signed __int32 v19; // eax
  unsigned int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // r8
  __int64 v27; // rcx
  signed __int32 v28; // eax
  unsigned int v29; // edx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rcx
  signed __int32 v34; // eax
  unsigned int v35; // edx
  __int64 v36; // rcx
  __int64 v37; // rdx
  unsigned __int16 v38; // dx
  __int64 v39; // r8
  __int64 v40; // rcx
  signed __int32 v41; // eax
  unsigned int v42; // edx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // r9
  __int64 v47; // r10
  __int64 v48; // rdx
  signed __int32 v49; // eax
  unsigned int v50; // r8d
  __int64 v51; // rdx
  __int64 v52; // r8
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rax
  unsigned __int16 v64; // dx
  __int64 v65; // rcx
  int v66; // edx
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // r8
  unsigned __int16 v70; // dx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // [rsp+40h] [rbp-10h] BYREF
  __int64 v74; // [rsp+48h] [rbp-8h]

  v73 = 0LL;
  v5 = 0;
  v74 = FdoExt(a1, a2, a3, a4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4));
  UsbhWaitEventWithTimeoutEx(a1, a2 + 824, 660000LL, 825258049LL, 2, a2);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v9 = *(unsigned __int16 *)(a2 + 4);
  v10 = v8;
  *(_DWORD *)(a2 + 448) = 1;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v12 = _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 880), 0xFFFFFFFF);
        v13 = *(_DWORD *)(v11 + 884);
        v14 = *(_QWORD *)(v11 + 888);
        v15 = 32LL * ((v12 - 1) & v13);
        *(_DWORD *)(v15 + v14) = 724267376;
        *(_QWORD *)(v15 + v14 + 8) = 0LL;
        *(_QWORD *)(v15 + v14 + 16) = 10LL;
        *(_QWORD *)(v15 + v14 + 24) = v9;
      }
    }
  }
  v16 = *(unsigned __int16 *)(a2 + 4);
  v17 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v18 = *(_QWORD *)(a1 + 64);
      if ( v18 )
      {
        v19 = _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 880), 0xFFFFFFFF);
        v20 = *(_DWORD *)(v18 + 884);
        v21 = *(_QWORD *)(v18 + 888);
        v22 = 32LL * ((v19 - 1) & v20);
        *(_DWORD *)(v22 + v21) = 724267376;
        *(_QWORD *)(v22 + v21 + 8) = 0LL;
        *(_QWORD *)(v22 + v21 + 16) = v17;
        *(_QWORD *)(v22 + v21 + 24) = v16;
      }
    }
  }
  v23 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v23;
  v24 = 32 * (v23 + 43);
  *(_DWORD *)(v24 + a2) = 10;
  *(_DWORD *)(v24 + a2 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v24 + a2 + 8) = -1;
  *(_QWORD *)(v24 + a2 + 12) = 0LL;
  *(_QWORD *)(v24 + a2 + 20) = 0LL;
  *(_DWORD *)(v24 + a2 + 28) = 0;
  v25 = *(int *)(a2 + 12);
  if ( *(_BYTE *)(a2 + 2839) || *(_BYTE *)(a2 + 2840) )
  {
    *a4 = -1073741667;
    UsbhiSignalSuspendEvent(a1, a2);
    UsbhUnlockPcqWithTag(a1, a2, v10, 0);
    return;
  }
  v26 = *(unsigned __int16 *)(a2 + 4);
  *(_QWORD *)(a2 + 736) = KeGetCurrentThread();
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v27 = *(_QWORD *)(a1 + 64);
      if ( v27 )
      {
        v28 = _InterlockedExchangeAdd((volatile signed __int32 *)(v27 + 880), 0xFFFFFFFF);
        v29 = *(_DWORD *)(v27 + 884);
        v30 = *(_QWORD *)(v27 + 888);
        v31 = 32LL * ((v28 - 1) & v29);
        *(_DWORD *)(v31 + v30) = 812658737;
        *(_QWORD *)(v31 + v30 + 8) = 0LL;
        *(_QWORD *)(v31 + v30 + 16) = v25;
        *(_QWORD *)(v31 + v30 + 24) = v26;
      }
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)(a3 + 144));
  UsbhSetSuspendPending(a1, a2, v26, v17);
  if ( (int)v25 > 10 )
  {
    if ( (_DWORD)v25 == 11 )
      goto LABEL_44;
    if ( (_DWORD)v25 == 12 || (_DWORD)v25 == 13 )
    {
LABEL_74:
      Log(a1, 512, 825258041, v25, *(unsigned __int16 *)(a2 + 4));
      v72 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_QWORD *)(a2 + 736) = 0LL;
      *(_DWORD *)(a2 + 12) = v25;
      *(_DWORD *)(v72 + a2 + 1384) = v25;
      UsbhUnlockPcqWithTag(a1, a2, v10, 0);
      UsbhWaitEventWithTimeoutEx(a1, a2 + 472, 660000LL, 825258041LL, 4, a2);
      UsbhPCE_Suspend(a1, a3, *(unsigned __int16 *)(a2 + 4));
      _InterlockedDecrement((volatile signed __int32 *)(a3 + 144));
      return;
    }
    if ( (_DWORD)v25 != 14 )
    {
      switch ( (_DWORD)v25 )
      {
        case 0xF:
          Log(a1, 512, 825258081, 15, *(unsigned __int16 *)(a2 + 4));
          *(_QWORD *)(a2 + 736) = 0LL;
          UsbhFlushPortChangeQueue(a1, a2, v61, v62);
          v63 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 15;
          *(_DWORD *)(v63 + a2 + 1384) = 15;
          break;
        case 0x10:
        case 0x11:
          goto LABEL_74;
        case 0x12:
          Log(a1, 512, 825258039, 18, *(unsigned __int16 *)(a2 + 4));
          UsbhSetPcqEventStatus(a1, a2, 1LL, 20LL);
          UsbhUnlockPcqWithTag(a1, v68, v10, 0);
          UsbhWaitEventWithTimeoutEx(a1, a2 + 712, 660000LL, 825258039LL, 3, a2);
          v69 = *(unsigned __int16 *)(a2 + 4);
          *(_QWORD *)(a2 + 736) = 0LL;
          UsbhPCE_ResumeDone(a1, a2 + 24, v69);
          goto LABEL_37;
        case 0x14:
          break;
        default:
          goto LABEL_70;
      }
      UsbhUnlockPcqWithTag(a1, a2, v10, 0);
      goto LABEL_54;
    }
LABEL_72:
    Log(a1, 512, 825258035, v25, *(unsigned __int16 *)(a2 + 4));
    v70 = *(_WORD *)(a2 + 4);
    LODWORD(v73) = 0x40000;
    *(_QWORD *)(a2 + 736) = 0LL;
    v5 = UsbhInsertQueuePortChangeObject(a1, v70, &v73, 0LL, 0LL);
    if ( v5 >= 0 )
    {
      v71 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 10;
      *(_DWORD *)(v71 + a2 + 1384) = 10;
      goto LABEL_46;
    }
    goto LABEL_45;
  }
  switch ( (_DWORD)v25 )
  {
    case 0xA:
LABEL_50:
      Log(a1, 512, 825258040, v25, *(unsigned __int16 *)(a2 + 4));
      v56 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_QWORD *)(a2 + 736) = 0LL;
      *(_DWORD *)(a2 + 12) = v25;
      *(_DWORD *)(v56 + a2 + 1384) = v25;
      goto LABEL_46;
    case 1:
      UsbhiSignalSuspendEvent(a1, a2);
      Log(a1, 512, 825258038, 1, *(unsigned __int16 *)(a2 + 4));
      *(_QWORD *)(a2 + 736) = 0LL;
      goto LABEL_46;
    case 2:
      v32 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        if ( a1 )
        {
          v33 = *(_QWORD *)(a1 + 64);
          if ( v33 )
          {
            v34 = _InterlockedExchangeAdd((volatile signed __int32 *)(v33 + 880), 0xFFFFFFFF);
            v35 = *(_DWORD *)(v33 + 884);
            v36 = *(_QWORD *)(v33 + 888);
            v37 = 32LL * ((v34 - 1) & v35);
            *(_DWORD *)(v37 + v36) = 896544817;
            *(_QWORD *)(v37 + v36 + 8) = 0LL;
            *(_QWORD *)(v37 + v36 + 16) = 2LL;
            *(_QWORD *)(v37 + v36 + 24) = v32;
          }
        }
      }
      v38 = *(_WORD *)(a2 + 4);
      *(_QWORD *)(a2 + 736) = 0LL;
      LODWORD(v73) = 0x40000;
      v5 = UsbhInsertQueuePortChangeObject(a1, v38, &v73, 0LL, 0LL);
      if ( v5 >= 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            17,
            (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
            *(_WORD *)(a2 + 4));
        v39 = *(unsigned __int16 *)(a2 + 4);
        if ( (UsbhLogMask & 8) != 0 )
        {
          if ( a1 )
          {
            v40 = *(_QWORD *)(a1 + 64);
            if ( v40 )
            {
              v41 = _InterlockedExchangeAdd((volatile signed __int32 *)(v40 + 880), 0xFFFFFFFF);
              v42 = *(_DWORD *)(v40 + 884);
              v43 = *(_QWORD *)(v40 + 888);
              v44 = 32LL * ((v41 - 1) & v42);
              *(_DWORD *)(v44 + v43) = 827353457;
              *(_QWORD *)(v44 + v43 + 8) = 0LL;
              *(_QWORD *)(v44 + v43 + 16) = a2;
              *(_QWORD *)(v44 + v43 + 24) = v39;
            }
          }
        }
        v45 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 9;
        *(_DWORD *)(v45 + a2 + 1384) = 9;
        v46 = *(unsigned __int16 *)(a2 + 4);
        v47 = *(int *)(a2 + 12);
        if ( (UsbhLogMask & 0x10) != 0 )
        {
          if ( a1 )
          {
            v48 = *(_QWORD *)(a1 + 64);
            if ( v48 )
            {
              v49 = _InterlockedExchangeAdd((volatile signed __int32 *)(v48 + 880), 0xFFFFFFFF);
              v50 = *(_DWORD *)(v48 + 884);
              v51 = *(_QWORD *)(v48 + 888);
              v52 = 32LL * ((v49 - 1) & v50);
              *(_DWORD *)(v52 + v51) = 757952880;
              *(_QWORD *)(v52 + v51 + 8) = 0LL;
              *(_QWORD *)(v52 + v51 + 16) = v47;
              *(_QWORD *)(v52 + v51 + 24) = v46;
            }
          }
        }
        v53 = *(_DWORD *)(a2 + 12);
        v54 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 448) = 0;
        *(_DWORD *)(v54 + a2 + 1384) = v53;
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v10);
        UsbhHubQueueProcessChangeWorker(v55, a2);
        goto LABEL_37;
      }
      Log(a1, 8, 1902727218, a2, *(unsigned __int16 *)(a2 + 4));
      UsbhiSignalSuspendEvent(a1, a2);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dd(
          WPP_GLOBAL_Control->DeviceExtension,
          v66,
          1,
          18,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          *(_WORD *)(a2 + 4),
          v5);
      goto LABEL_46;
    case 3:
      goto LABEL_72;
    case 4:
      Log(a1, 512, 825258036, 4, *(unsigned __int16 *)(a2 + 4));
      v64 = *(_WORD *)(a2 + 4);
      LODWORD(v73) = 0x40000;
      v5 = UsbhInsertQueuePortChangeObject(a1, v64, &v73, 0LL, 0LL);
      if ( v5 >= 0 )
      {
        v65 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 9;
        *(_DWORD *)(v65 + a2 + 1384) = 9;
        goto LABEL_46;
      }
      goto LABEL_45;
    case 5:
      goto LABEL_74;
    case 6:
      Log(a1, 512, 825258034, 6, *(unsigned __int16 *)(a2 + 4));
      *(_QWORD *)(a2 + 736) = 0LL;
      UsbhFlushPortChangeQueue(a1, a2, v57, v58);
      v59 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 11;
      *(_DWORD *)(v59 + a2 + 1384) = 11;
      UsbhUnlockPcqWithTag(a1, a2, v10, 0);
      *(_DWORD *)(a2 + 400) = UsbhHubSyncSuspendPortEvent(a1, v60, a2);
LABEL_54:
      UsbhSignalSuspendEvent(a1, a2);
      goto LABEL_37;
  }
  if ( (_DWORD)v25 != 7 )
  {
    if ( (unsigned int)(v25 - 8) <= 1 )
      goto LABEL_50;
LABEL_70:
    Log(a1, 512, 825258072, v25, *(unsigned __int16 *)(a2 + 4));
    v67 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_QWORD *)(a2 + 736) = 0LL;
    *(_DWORD *)(a2 + 12) = 19;
    *(_DWORD *)(v67 + a2 + 1384) = 19;
    goto LABEL_46;
  }
LABEL_44:
  Log(a1, 512, 825258033, v25, *(unsigned __int16 *)(a2 + 4));
  *(_QWORD *)(a2 + 736) = 0LL;
LABEL_45:
  UsbhiSignalSuspendEvent(a1, a2);
LABEL_46:
  UsbhUnlockPcqWithTag(a1, a2, v10, 0);
LABEL_37:
  UsbhWaitEventWithTimeoutEx(a1, a2 + 744, 660000LL, 825258104LL, 5, a2);
  if ( (*(_DWORD *)(v74 + 2560) & 1) != 0 && *(_BYTE *)(v74 + 5235) == 32 )
    UsbhWait(a1, 10LL);
  _InterlockedDecrement((volatile signed __int32 *)(a3 + 144));
  *a4 = v5;
}
