/*
 * XREFs of Usbh_PCE_wDone_Action @ 0x140022A00
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x14001E990 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhUnlockPcqWithTag @ 0x140001100 (UsbhUnlockPcqWithTag.c)
 *     UsbhFlushPortChangeQueue @ 0x140001CC8 (UsbhFlushPortChangeQueue.c)
 *     UsbhHubQueueProcessChangeWorker @ 0x1400045E8 (UsbhHubQueueProcessChangeWorker.c)
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhLogSignalSuspendEvent @ 0x140023414 (UsbhLogSignalSuspendEvent.c)
 *     UsbhSetPcqEventStatus @ 0x14002EC50 (UsbhSetPcqEventStatus.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x14003E7C4 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall Usbh_PCE_wDone_Action(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rdx
  int v7; // r8d
  __int64 v8; // r9
  KIRQL v9; // al
  __int64 v10; // rdx
  __int64 v11; // r8
  KIRQL v12; // r14
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rcx
  __int64 v54; // rdx
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  __int64 v60; // rax
  int v61; // r9d
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rcx

  FdoExt(a1);
  v8 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        v6 = 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884))
           + *(_QWORD *)(v6 + 888);
        *(_DWORD *)v6 = 812660319;
        *(_QWORD *)(v6 + 8) = 0LL;
        *(_QWORD *)(v6 + 16) = a2;
        *(_QWORD *)(v6 + 24) = v8;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      36,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v11 = *(unsigned __int16 *)(a2 + 4);
  v12 = v9;
  *(_DWORD *)(a2 + 448) = 1;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( v10 )
      {
        v13 = *(_QWORD *)(v10 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
        *(_DWORD *)v13 = 724267376;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = 6LL;
        *(_QWORD *)(v13 + 24) = v11;
      }
    }
  }
  v14 = *(unsigned __int16 *)(a2 + 4);
  v15 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( v10 )
      {
        v16 = *(_QWORD *)(v10 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
        *(_DWORD *)v16 = 724267376;
        *(_QWORD *)(v16 + 8) = 0LL;
        *(_QWORD *)(v16 + 16) = v15;
        *(_QWORD *)(v16 + 24) = v14;
      }
    }
  }
  v17 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v17;
  v18 = 32 * (v17 + 43);
  *(_DWORD *)(v18 + a2) = 6;
  *(_DWORD *)(v18 + a2 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v18 + a2 + 8) = -1;
  *(_QWORD *)(v18 + a2 + 12) = 0LL;
  *(_QWORD *)(v18 + a2 + 20) = 0LL;
  *(_DWORD *)(v18 + a2 + 28) = 0;
  v19 = *(int *)(a2 + 12);
  v20 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( v10 )
      {
        v10 = 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884))
            + *(_QWORD *)(v10 + 888);
        *(_DWORD *)v10 = 829437535;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = v19;
        *(_QWORD *)(v10 + 24) = v20;
      }
    }
  }
  if ( (_DWORD)v19 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        3,
        38,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        *(_WORD *)(a2 + 4),
        a2);
    v25 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      if ( a1 )
      {
        v26 = *(_QWORD *)(a1 + 64);
        if ( v26 )
        {
          v27 = *(_QWORD *)(v26 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 880)) & *(_DWORD *)(v26 + 884));
          *(_DWORD *)v27 = 879769183;
          *(_QWORD *)(v27 + 8) = 0LL;
          *(_QWORD *)(v27 + 16) = 0LL;
          *(_QWORD *)(v27 + 24) = v25;
        }
      }
    }
    v28 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 2;
    *(_DWORD *)(v28 + a2 + 1384) = 2;
    *(_QWORD *)(a2 + 384) = 0LL;
    goto LABEL_36;
  }
  if ( (_DWORD)v19 == 12 )
  {
    v35 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      if ( a1 )
      {
        v36 = *(_QWORD *)(a1 + 64);
        if ( v36 )
        {
          v37 = *(_QWORD *)(v36 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v36 + 880)) & *(_DWORD *)(v36 + 884));
          *(_DWORD *)v37 = 862991967;
          *(_QWORD *)(v37 + 8) = 0LL;
          *(_QWORD *)(v37 + 16) = 0LL;
          *(_QWORD *)(v37 + 24) = v35;
        }
      }
    }
    v38 = *(unsigned __int16 *)(a2 + 4);
    v39 = *(int *)(a2 + 12);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( a1 )
      {
        v40 = *(_QWORD *)(a1 + 64);
        if ( v40 )
        {
          v41 = 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v40 + 880)) & *(_DWORD *)(v40 + 884))
              + *(_QWORD *)(v40 + 888);
          *(_DWORD *)v41 = 1986359664;
          *(_QWORD *)(v41 + 8) = 0LL;
          *(_QWORD *)(v41 + 16) = v39;
          *(_QWORD *)(v41 + 24) = v38;
        }
      }
    }
    *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1400) = 30;
    KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
    v42 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_QWORD *)(a2 + 384) = 0LL;
    *(_DWORD *)(a2 + 12) = 6;
    *(_DWORD *)(v42 + a2 + 1384) = 6;
LABEL_36:
    v29 = *(unsigned __int16 *)(a2 + 4);
    v30 = *(int *)(a2 + 12);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( a1 )
      {
        v31 = *(_QWORD *)(a1 + 64);
        if ( v31 )
        {
          v32 = *(_QWORD *)(v31 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v31 + 880)) & *(_DWORD *)(v31 + 884));
          *(_DWORD *)v32 = 757952880;
          *(_QWORD *)(v32 + 24) = v29;
          *(_QWORD *)(v32 + 16) = v30;
          *(_QWORD *)(v32 + 8) = 0LL;
        }
      }
    }
    v33 = *(_DWORD *)(a2 + 12);
    v34 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v34 + a2 + 1384) = v33;
LABEL_41:
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v12);
    return;
  }
  switch ( 0x140000000uLL )
  {
    case 4uLL:
      v43 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        if ( a1 )
        {
          v44 = *(_QWORD *)(a1 + 64);
          if ( v44 )
          {
            v45 = 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v44 + 880)) & *(_DWORD *)(v44 + 884))
                + *(_QWORD *)(v44 + 888);
            *(_DWORD *)v45 = 913323615;
            *(_QWORD *)(v45 + 8) = 0LL;
            *(_QWORD *)(v45 + 16) = a2;
            *(_QWORD *)(v45 + 24) = v43;
          }
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          40,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          *(_WORD *)(a2 + 4));
      v46 = *(unsigned __int16 *)(a2 + 4);
      v47 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        if ( a1 )
        {
          v48 = *(_QWORD *)(a1 + 64);
          if ( v48 )
          {
            v49 = 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v48 + 880)) & *(_DWORD *)(v48 + 884))
                + *(_QWORD *)(v48 + 888);
            *(_DWORD *)v49 = 1986359664;
            *(_QWORD *)(v49 + 8) = 0LL;
            *(_QWORD *)(v49 + 16) = v47;
            *(_QWORD *)(v49 + 24) = v46;
          }
        }
      }
      *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1400) = 30;
      KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
      v50 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_QWORD *)(a2 + 384) = 0LL;
      *(_DWORD *)(a2 + 12) = 7;
      *(_DWORD *)(v50 + a2 + 1384) = 7;
      if ( (unsigned int)UsbhLogSignalSuspendEvent(a1, a2) )
        UsbhSetPcqEventStatus(a1, a2, 0LL, 30LL);
      v51 = *(unsigned __int16 *)(a2 + 4);
      v52 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 && a1 )
      {
        v53 = *(_QWORD *)(a1 + 64);
        if ( v53 )
        {
          v54 = *(_QWORD *)(v53 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v53 + 880)) & *(_DWORD *)(v53 + 884));
          *(_DWORD *)v54 = 757952880;
          *(_QWORD *)(v54 + 8) = 0LL;
          *(_QWORD *)(v54 + 16) = v52;
          *(_QWORD *)(v54 + 24) = v51;
        }
      }
      v55 = *(_DWORD *)(a2 + 12);
      v56 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v56 + a2 + 1384) = v55;
      goto LABEL_41;
    case 6uLL:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dq(
          WPP_GLOBAL_Control->DeviceExtension,
          v10,
          0x40000000u,
          41,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          *(_WORD *)(a2 + 4),
          a2);
      Log(a1, 512, 1597403191, 0LL, *(unsigned __int16 *)(a2 + 4));
      v63 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 9;
      *(_DWORD *)(v63 + a2 + 1384) = 9;
      goto LABEL_81;
    case 9uLL:
      Log(a1, 512, 1597403186, a2, *(unsigned __int16 *)(a2 + 4));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          37,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          *(_WORD *)(a2 + 4));
      UsbhSetPcqEventStatus(a1, a2, 2LL, 30LL);
      KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
      v59 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 6;
      *(_DWORD *)(v59 + a2 + 1384) = 6;
      goto LABEL_75;
    case 0xAuLL:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dq(
          WPP_GLOBAL_Control->DeviceExtension,
          v10,
          0x40000000u,
          39,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          *(_WORD *)(a2 + 4),
          a2);
      Log(a1, 512, 1597403189, 0LL, *(unsigned __int16 *)(a2 + 4));
      v62 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 4;
      *(_DWORD *)(v62 + a2 + 1384) = 4;
LABEL_81:
      *(_QWORD *)(a2 + 384) = 0LL;
      UsbhUnlockPcqWithTag(a1, a2, v12, v61);
      UsbhHubQueueProcessChangeWorker(v64, a2);
      break;
    case 0xDuLL:
      Log(a1, 512, 1597403186, a2, *(unsigned __int16 *)(a2 + 4));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          42,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          *(_WORD *)(a2 + 4));
      UsbhSetPcqEventStatus(a1, a2, 2LL, 30LL);
      KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
      v60 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 15;
      *(_DWORD *)(v60 + a2 + 1384) = 15;
LABEL_75:
      UsbhFlushPortChangeQueue(a1, a2, v57, v58);
      *(_QWORD *)(a2 + 384) = 0LL;
      UsbhUnlockPcqWithTag(a1, a2, v12, 0);
      break;
    default:
      v21 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        if ( a1 )
        {
          v22 = *(_QWORD *)(a1 + 64);
          if ( v22 )
          {
            v23 = *(_QWORD *)(v22 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22 + 880)) & *(_DWORD *)(v22 + 884));
            *(_DWORD *)v23 = 1483748959;
            *(_QWORD *)(v23 + 8) = 0LL;
            *(_QWORD *)(v23 + 16) = a2;
            *(_QWORD *)(v23 + 24) = v21;
          }
        }
      }
      v24 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 19;
      *(_DWORD *)(v24 + a2 + 1384) = 19;
      goto LABEL_36;
  }
}
