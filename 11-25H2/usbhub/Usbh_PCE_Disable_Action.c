/*
 * XREFs of Usbh_PCE_Disable_Action @ 0x1400283A0
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x140006930 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhFlushPortChangeQueue @ 0x140001A1C (UsbhFlushPortChangeQueue.c)
 *     UsbhFreePortChangeQueueObject @ 0x140001AF4 (UsbhFreePortChangeQueueObject.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhiSignalSuspendEvent @ 0x14001EB0C (UsbhiSignalSuspendEvent.c)
 *     UsbhUnlockPcqWithTag @ 0x140024D80 (UsbhUnlockPcqWithTag.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x140028E50 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhSetPcqEventStatus @ 0x140033F60 (UsbhSetPcqEventStatus.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x14003ECF4 (WPP_RECORDER_SF_dq.c)
 *     UsbhRemoveQueuedSuspend @ 0x140044A8C (UsbhRemoveQueuedSuspend.c)
 */

__int64 __fastcall Usbh_PCE_Disable_Action(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  __int64 v5; // rdx
  __int64 v6; // r8
  KIRQL v7; // r12
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 result; // rax
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  _QWORD **v47; // r14
  _QWORD *v48; // r8
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rcx
  __int64 v52; // rdx
  int v53; // eax
  __int64 v54; // rdx
  _QWORD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax

  FdoExt(a1);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v6 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v7 = v4;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v5 = *(_QWORD *)(a1 + 64);
      if ( v5 )
      {
        v8 = *(_QWORD *)(v5 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v5 + 880)) & *(_DWORD *)(v5 + 884));
        *(_DWORD *)v8 = 724267376;
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_QWORD *)(v8 + 16) = 2LL;
        *(_QWORD *)(v8 + 24) = v6;
      }
    }
  }
  v9 = *(unsigned __int16 *)(a2 + 4);
  v10 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v5 = *(_QWORD *)(a1 + 64);
      if ( v5 )
      {
        v11 = *(_QWORD *)(v5 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v5 + 880)) & *(_DWORD *)(v5 + 884));
        *(_DWORD *)v11 = 724267376;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 16) = v10;
        *(_QWORD *)(v11 + 24) = v9;
      }
    }
  }
  v12 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v12;
  v13 = a2 + 32 * (v12 + 43);
  *(_DWORD *)v13 = 2;
  *(_DWORD *)(v13 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v13 + 8) = -1;
  *(_QWORD *)(v13 + 12) = 0LL;
  *(_QWORD *)(v13 + 20) = 0LL;
  *(_DWORD *)(v13 + 28) = 0;
  v14 = *(int *)(a2 + 12);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      v9,
      11,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4),
      a2);
  v15 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v16 = *(_QWORD *)(a1 + 64);
      if ( v16 )
      {
        v17 = *(_QWORD *)(v16 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
        *(_DWORD *)v17 = 812659295;
        *(_QWORD *)(v17 + 8) = 0LL;
        *(_QWORD *)(v17 + 16) = v14;
        *(_QWORD *)(v17 + 24) = v15;
      }
    }
  }
  if ( (_DWORD)v14 == 4 )
  {
    v18 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      if ( a1 )
      {
        v19 = *(_QWORD *)(a1 + 64);
        if ( v19 )
        {
          v20 = *(_QWORD *)(v19 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
          *(_DWORD *)v20 = 862990943;
          *(_QWORD *)(v20 + 8) = 0LL;
          *(_QWORD *)(v20 + 16) = v14;
          *(_QWORD *)(v20 + 24) = v18;
        }
      }
    }
    v21 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 5;
    *(_DWORD *)(v21 + a2 + 1384) = 5;
    v22 = *(unsigned __int16 *)(a2 + 4);
    v23 = *(int *)(a2 + 12);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( a1 )
      {
        v24 = *(_QWORD *)(a1 + 64);
        if ( v24 )
        {
          v25 = *(_QWORD *)(v24 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 880)) & *(_DWORD *)(v24 + 884));
          *(_DWORD *)v25 = 1986359664;
          *(_QWORD *)(v25 + 8) = 0LL;
          *(_QWORD *)(v25 + 16) = v23;
          *(_QWORD *)(v25 + 24) = v22;
        }
      }
    }
    *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 24) = 20;
    v26 = *(unsigned __int16 *)(a2 + 4);
    v27 = *(int *)(a2 + 12);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( a1 )
      {
        v28 = *(_QWORD *)(a1 + 64);
        if ( v28 )
        {
          v29 = *(_QWORD *)(v28 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v28 + 880)) & *(_DWORD *)(v28 + 884));
          *(_DWORD *)v29 = 757952880;
          *(_QWORD *)(v29 + 8) = 0LL;
          *(_QWORD *)(v29 + 16) = v27;
          *(_QWORD *)(v29 + 24) = v26;
        }
      }
    }
    v30 = *(_DWORD *)(a2 + 12);
    v31 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v31 + a2 + 8) = v30;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v7);
  }
  else if ( (_DWORD)v14 == 7 )
  {
    v39 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      if ( a1 )
      {
        v40 = *(_QWORD *)(a1 + 64);
        if ( v40 )
        {
          v41 = *(_QWORD *)(v40 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v40 + 880)) & *(_DWORD *)(v40 + 884));
          *(_DWORD *)v41 = 829436511;
          *(_QWORD *)(v41 + 8) = 0LL;
          *(_QWORD *)(v41 + 16) = v14;
          *(_QWORD *)(v41 + 24) = v39;
        }
      }
    }
    v42 = *(unsigned __int16 *)(a2 + 4);
    v43 = *(int *)(a2 + 12);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( a1 )
      {
        v44 = *(_QWORD *)(a1 + 64);
        if ( v44 )
        {
          v45 = *(_QWORD *)(v44 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v44 + 880)) & *(_DWORD *)(v44 + 884));
          *(_DWORD *)v45 = 1986359664;
          *(_QWORD *)(v45 + 8) = 0LL;
          *(_QWORD *)(v45 + 16) = v43;
          *(_QWORD *)(v45 + 24) = v42;
        }
      }
    }
    *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 24) = 30;
    v46 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 11;
    *(_DWORD *)(v46 + a2 + 1384) = 11;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        55,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        *(_WORD *)(a2 + 4));
    FdoExt(a1);
    v47 = (_QWORD **)(a2 + 456);
    while ( 1 )
    {
      v48 = *v47;
      if ( *v47 == v47 )
        break;
      if ( (_QWORD **)v48[1] != v47 || (v55 = (_QWORD *)*v48, *(_QWORD **)(*v48 + 8LL) != v48) )
        __fastfail(3u);
      *v47 = v55;
      v55[1] = v47;
      UsbhFreePortChangeQueueObject(a1, a2, (__int64)(v48 - 2), 1);
    }
    *(_DWORD *)(a2 + 2876) = 0;
    *(_BYTE *)(a2 + 2839) = 0;
    KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
    v49 = *(unsigned __int16 *)(a2 + 4);
    v50 = *(int *)(a2 + 12);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( a1 )
      {
        v51 = *(_QWORD *)(a1 + 64);
        if ( v51 )
        {
          v52 = *(_QWORD *)(v51 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v51 + 880)) & *(_DWORD *)(v51 + 884));
          *(_DWORD *)v52 = 757952880;
          *(_QWORD *)(v52 + 8) = 0LL;
          *(_QWORD *)(v52 + 16) = v50;
          *(_QWORD *)(v52 + 24) = v49;
        }
      }
    }
    v53 = *(_DWORD *)(a2 + 12);
    v54 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v54 + a2 + 8) = v53;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v7);
  }
  else
  {
    switch ( (int)v14 )
    {
      case 1:
      case 2:
      case 18:
        Log(a1, 512, 1597141042, v14, *(unsigned __int16 *)(a2 + 4));
        v58 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 6;
        *(_DWORD *)(v58 + a2 + 1384) = 6;
        UsbhSetPcqEventStatus(a1, a2, 2LL);
        UsbhFlushPortChangeQueue(a1, v59);
        goto LABEL_68;
      case 3:
      case 12:
        Log(a1, 512, 1597141044, v14, *(unsigned __int16 *)(a2 + 4));
        UsbhSetPcqEventStatus(a1, a2, 2LL);
        v61 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 12;
        *(_DWORD *)(v61 + a2 + 1384) = 12;
        UsbhUnlockPcqWithTag(a1, v62, v7, 0);
        break;
      case 5:
      case 16:
      case 17:
        Log(a1, 512, 1597141048, v14, *(unsigned __int16 *)(a2 + 4));
        UsbhSetPcqEventStatus(a1, a2, 2LL);
        v65 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = v14;
        *(_DWORD *)(v65 + a2 + 1384) = v14;
        goto LABEL_70;
      case 6:
      case 11:
      case 15:
        Log(a1, 512, 1597141045, v14, *(unsigned __int16 *)(a2 + 4));
        UsbhFlushPortChangeQueue(a1, a2);
        UsbhSetPcqEventStatus(a1, a2, 2LL);
LABEL_68:
        KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
        v56 = a2;
        goto LABEL_70;
      case 8:
        UsbhRemoveQueuedSuspend(a1, a2, v15, v10);
        UsbhiSignalSuspendEvent(a1, a2);
        Log(a1, 512, 1597141047, v14, *(unsigned __int16 *)(a2 + 4));
        UsbhSetPcqEventStatus(a1, a2, 2LL);
        v63 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 12;
        *(_DWORD *)(v63 + a2 + 1384) = 12;
        goto LABEL_70;
      case 9:
        UsbhRemoveQueuedSuspend(a1, a2, v15, v10);
        Log(a1, 512, 1597141046, v14, *(unsigned __int16 *)(a2 + 4));
        UsbhSetPcqEventStatus(a1, a2, 2LL);
        v57 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 5;
        *(_DWORD *)(v57 + a2 + 1384) = 5;
        goto LABEL_70;
      case 10:
        UsbhRemoveQueuedSuspend(a1, a2, v15, v10);
        UsbhiSignalSuspendEvent(a1, a2);
        Log(a1, 512, 1597141047, v14, *(unsigned __int16 *)(a2 + 4));
        UsbhSetPcqEventStatus(a1, a2, 2LL);
        v64 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 13;
        *(_DWORD *)(v64 + a2 + 1384) = 13;
        goto LABEL_70;
      case 13:
      case 14:
        Log(a1, 512, 1597141049, v14, *(unsigned __int16 *)(a2 + 4));
        UsbhSetPcqEventStatus(a1, a2, 2LL);
        v66 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 13;
        *(_DWORD *)(v66 + a2 + 1384) = 13;
        goto LABEL_70;
      default:
        v60 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v60 + a2 + 1384) = 19;
        UsbhSetPcqEventStatus(a1, a2, 2LL);
LABEL_70:
        UsbhUnlockPcqWithTag(a1, v56, v7, 0);
        break;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4));
  v32 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v33 = *(_QWORD *)(a1 + 64);
      if ( v33 )
      {
        v34 = *(_QWORD *)(v33 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v33 + 880)) & *(_DWORD *)(v33 + 884));
        *(_DWORD *)v34 = 1129346859;
        *(_QWORD *)(v34 + 8) = 0LL;
        *(_QWORD *)(v34 + 16) = 0LL;
        *(_QWORD *)(v34 + 24) = v32;
      }
    }
  }
  result = UsbhWaitEventWithTimeoutEx(a1, a2 + 472, 660000LL, 729239619LL, 6, a2);
  v36 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 && a1 )
  {
    v37 = *(_QWORD *)(a1 + 64);
    if ( v37 )
    {
      result = 1129346861LL;
      v38 = *(_QWORD *)(v37 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v37 + 880)) & *(_DWORD *)(v37 + 884));
      *(_DWORD *)v38 = 1129346861;
      *(_QWORD *)(v38 + 8) = 0LL;
      *(_QWORD *)(v38 + 16) = 0LL;
      *(_QWORD *)(v38 + 24) = v36;
    }
  }
  return result;
}
