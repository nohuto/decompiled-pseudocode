/*
 * XREFs of Usbh_PCE_Disable_Action @ 0x140005470
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x14001E990 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhUnlockPcqWithTag @ 0x140001100 (UsbhUnlockPcqWithTag.c)
 *     UsbhFlushPortChangeQueue @ 0x140001CC8 (UsbhFlushPortChangeQueue.c)
 *     UsbhFreePortChangeQueueObject @ 0x140001DA0 (UsbhFreePortChangeQueueObject.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x140005F40 (UsbhWaitEventWithTimeoutEx.c)
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhiSignalSuspendEvent @ 0x14002394C (UsbhiSignalSuspendEvent.c)
 *     UsbhSetPcqEventStatus @ 0x14002EC50 (UsbhSetPcqEventStatus.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x14003E7C4 (WPP_RECORDER_SF_dq.c)
 *     UsbhRemoveQueuedSuspend @ 0x1400445B0 (UsbhRemoveQueuedSuspend.c)
 */

__int64 __fastcall Usbh_PCE_Disable_Action(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KIRQL v6; // al
  __int64 v7; // rdx
  __int64 v8; // r8
  KIRQL v9; // r12
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 result; // rax
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // r9
  _QWORD **v46; // r14
  _QWORD *v47; // r8
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rcx
  _QWORD *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax

  FdoExt(a1, a2, a3, a4);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v8 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v9 = v6;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      if ( v7 )
      {
        v10 = *(_QWORD *)(v7 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
        *(_DWORD *)v10 = 724267376;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = 2LL;
        *(_QWORD *)(v10 + 24) = v8;
      }
    }
  }
  v11 = *(unsigned __int16 *)(a2 + 4);
  v12 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      if ( v7 )
      {
        v13 = *(_QWORD *)(v7 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
        *(_DWORD *)v13 = 724267376;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = v12;
        *(_QWORD *)(v13 + 24) = v11;
      }
    }
  }
  v14 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v14;
  v15 = 32 * (v14 + 43);
  *(_DWORD *)(v15 + a2) = 2;
  *(_DWORD *)(v15 + a2 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v15 + a2 + 8) = -1;
  *(_QWORD *)(v15 + a2 + 12) = 0LL;
  *(_QWORD *)(v15 + a2 + 20) = 0LL;
  *(_DWORD *)(v15 + a2 + 28) = 0;
  v16 = *(int *)(a2 + 12);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      v11,
      11,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4),
      a2);
  v17 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      if ( v7 )
      {
        v7 = 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884))
           + *(_QWORD *)(v7 + 888);
        *(_DWORD *)v7 = 812659295;
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_QWORD *)(v7 + 16) = v16;
        *(_QWORD *)(v7 + 24) = v17;
      }
    }
  }
  if ( (_DWORD)v16 == 4 )
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
          *(_QWORD *)(v20 + 16) = 4LL;
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
          v25 = 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 880)) & *(_DWORD *)(v24 + 884))
              + *(_QWORD *)(v24 + 888);
          *(_DWORD *)v25 = 1986359664;
          *(_QWORD *)(v25 + 8) = 0LL;
          *(_QWORD *)(v25 + 16) = v23;
          *(_QWORD *)(v25 + 24) = v22;
        }
      }
    }
    *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1400) = 20;
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
    v31 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v31 + a2 + 1384) = v30;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v9);
  }
  else if ( (_DWORD)v16 == 7 )
  {
    v39 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      if ( a1 )
      {
        v7 = *(_QWORD *)(a1 + 64);
        if ( v7 )
        {
          v40 = *(_QWORD *)(v7 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
          *(_DWORD *)v40 = 829436511;
          *(_QWORD *)(v40 + 8) = 0LL;
          *(_QWORD *)(v40 + 16) = 7LL;
          *(_QWORD *)(v40 + 24) = v39;
        }
      }
    }
    v41 = *(unsigned __int16 *)(a2 + 4);
    v42 = *(int *)(a2 + 12);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( a1 )
      {
        v7 = *(_QWORD *)(a1 + 64);
        if ( v7 )
        {
          v43 = *(_QWORD *)(v7 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
          *(_DWORD *)v43 = 1986359664;
          *(_QWORD *)(v43 + 8) = 0LL;
          *(_QWORD *)(v43 + 16) = v42;
          *(_QWORD *)(v43 + 24) = v41;
        }
      }
    }
    *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1400) = 30;
    v44 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 11;
    *(_DWORD *)(v44 + a2 + 1384) = 11;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        55,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        *(_WORD *)(a2 + 4));
    FdoExt(a1, v7, v41, v42);
    v46 = (_QWORD **)(a2 + 456);
    while ( 1 )
    {
      v47 = *v46;
      if ( *v46 == v46 )
        break;
      if ( (_QWORD **)v47[1] != v46 || (v54 = (_QWORD *)*v47, *(_QWORD **)(*v47 + 8LL) != v47) )
        __fastfail(3u);
      *v46 = v54;
      LOBYTE(v45) = 1;
      v54[1] = v46;
      UsbhFreePortChangeQueueObject(a1, a2, (__int64)(v47 - 2), v45);
    }
    *(_DWORD *)(a2 + 2876) = 0;
    *(_BYTE *)(a2 + 2839) = 0;
    KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
    v48 = *(unsigned __int16 *)(a2 + 4);
    v49 = *(int *)(a2 + 12);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( a1 )
      {
        v50 = *(_QWORD *)(a1 + 64);
        if ( v50 )
        {
          v51 = *(_QWORD *)(v50 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v50 + 880)) & *(_DWORD *)(v50 + 884));
          *(_DWORD *)v51 = 757952880;
          *(_QWORD *)(v51 + 8) = 0LL;
          *(_QWORD *)(v51 + 16) = v49;
          *(_QWORD *)(v51 + 24) = v48;
        }
      }
    }
    v52 = *(_DWORD *)(a2 + 12);
    v53 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v53 + a2 + 1384) = v52;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v9);
  }
  else
  {
    switch ( (int)v16 )
    {
      case 1:
      case 2:
      case 18:
        Log(a1, 512, 1597141042, v16, *(unsigned __int16 *)(a2 + 4));
        v57 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 6;
        *(_DWORD *)(v57 + a2 + 1384) = 6;
        UsbhSetPcqEventStatus(a1, a2, 2LL, 30LL);
        UsbhFlushPortChangeQueue(a1, v58, v59, v60);
        goto LABEL_68;
      case 3:
      case 12:
        Log(a1, 512, 1597141044, v16, *(unsigned __int16 *)(a2 + 4));
        UsbhSetPcqEventStatus(a1, a2, 2LL, 20LL);
        v64 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 12;
        *(_DWORD *)(v64 + a2 + 1384) = 12;
        UsbhUnlockPcqWithTag(a1, v65, v9, 0);
        break;
      case 5:
      case 16:
      case 17:
        Log(a1, 512, 1597141048, v16, *(unsigned __int16 *)(a2 + 4));
        UsbhSetPcqEventStatus(a1, a2, 2LL, 20LL);
        v68 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = v16;
        *(_DWORD *)(v68 + a2 + 1384) = v16;
        goto LABEL_70;
      case 6:
      case 11:
      case 15:
        Log(a1, 512, 1597141045, v16, *(unsigned __int16 *)(a2 + 4));
        UsbhFlushPortChangeQueue(a1, a2, v61, v62);
        UsbhSetPcqEventStatus(a1, a2, 2LL, 30LL);
LABEL_68:
        KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
        v55 = a2;
        goto LABEL_70;
      case 8:
        UsbhRemoveQueuedSuspend(a1, a2);
        UsbhiSignalSuspendEvent(a1, a2);
        Log(a1, 512, 1597141047, v16, *(unsigned __int16 *)(a2 + 4));
        UsbhSetPcqEventStatus(a1, a2, 2LL, 20LL);
        v66 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 12;
        *(_DWORD *)(v66 + a2 + 1384) = 12;
        goto LABEL_70;
      case 9:
        UsbhRemoveQueuedSuspend(a1, a2);
        Log(a1, 512, 1597141046, v16, *(unsigned __int16 *)(a2 + 4));
        UsbhSetPcqEventStatus(a1, a2, 2LL, 20LL);
        v56 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 5;
        *(_DWORD *)(v56 + a2 + 1384) = 5;
        goto LABEL_70;
      case 10:
        UsbhRemoveQueuedSuspend(a1, a2);
        UsbhiSignalSuspendEvent(a1, a2);
        Log(a1, 512, 1597141047, v16, *(unsigned __int16 *)(a2 + 4));
        UsbhSetPcqEventStatus(a1, a2, 2LL, 20LL);
        v67 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 13;
        *(_DWORD *)(v67 + a2 + 1384) = 13;
        goto LABEL_70;
      case 13:
      case 14:
        Log(a1, 512, 1597141049, v16, *(unsigned __int16 *)(a2 + 4));
        UsbhSetPcqEventStatus(a1, a2, 2LL, 20LL);
        v69 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 13;
        *(_DWORD *)(v69 + a2 + 1384) = 13;
        goto LABEL_70;
      default:
        v63 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v63 + a2 + 1384) = 19;
        UsbhSetPcqEventStatus(a1, a2, 2LL, 20LL);
LABEL_70:
        UsbhUnlockPcqWithTag(a1, v55, v9, 0);
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
