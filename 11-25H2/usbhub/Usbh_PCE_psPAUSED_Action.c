/*
 * XREFs of Usbh_PCE_psPAUSED_Action @ 0x140002204
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x140006930 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhSignalPauseEvent @ 0x140001668 (UsbhSignalPauseEvent.c)
 *     UsbhFlushPortChangeQueue @ 0x140001A1C (UsbhFlushPortChangeQueue.c)
 *     UsbhFreePortChangeQueueObject @ 0x140001AF4 (UsbhFreePortChangeQueueObject.c)
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhCancelResetTimeout @ 0x140012034 (UsbhCancelResetTimeout.c)
 *     UsbhReleaseEnumBusLockEx @ 0x14001B830 (UsbhReleaseEnumBusLockEx.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhBusUnlatchPdo @ 0x14001CCB0 (UsbhBusUnlatchPdo.c)
 *     UsbhUnlockPcqWithTag @ 0x140024D80 (UsbhUnlockPcqWithTag.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x14003ECF4 (WPP_RECORDER_SF_dq.c)
 *     UsbhSignalSyncDeviceReset @ 0x140048768 (UsbhSignalSyncDeviceReset.c)
 */

void __fastcall Usbh_PCE_psPAUSED_Action(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // r10
  __int16 v8; // cx
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  KIRQL v12; // al
  __int64 v13; // r8
  KIRQL v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // eax
  int v24; // esi
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  KIRQL v30; // bp
  _QWORD **v31; // rsi
  _QWORD *v32; // r8
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rbp
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rcx
  KIRQL v43; // r15
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r14
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rbp
  __int64 Pool2; // rax
  _QWORD *v53; // rax
  _QWORD *v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rcx
  _QWORD *v57; // rax
  int v58; // esi
  int v59; // esi
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // r8
  KIRQL v64; // r14
  int v65; // r9d

  v6 = FdoExt(a1);
  v7 = *(unsigned __int16 *)(a2 + 4);
  LOBYTE(v8) = *(_WORD *)(a2 + 4);
  v9 = v6;
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
        *(_DWORD *)v11 = 812661041;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 16) = a2;
        *(_QWORD *)(v11 + 24) = v7;
        v8 = *(_WORD *)(a2 + 4);
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)WPP_GLOBAL_Control,
      (unsigned int)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      45,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v8,
      a3);
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v13 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v14 = v12;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v15 = *(_QWORD *)(a1 + 64);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
        *(_DWORD *)v16 = 724267376;
        *(_QWORD *)(v16 + 8) = 0LL;
        *(_QWORD *)(v16 + 16) = 19LL;
        *(_QWORD *)(v16 + 24) = v13;
      }
    }
  }
  v17 = *(unsigned __int16 *)(a2 + 4);
  v18 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v19 = *(_QWORD *)(a1 + 64);
      if ( v19 )
      {
        v20 = *(_QWORD *)(v19 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
        *(_DWORD *)v20 = 724267376;
        *(_QWORD *)(v20 + 8) = 0LL;
        *(_QWORD *)(v20 + 16) = v18;
        *(_QWORD *)(v20 + 24) = v17;
      }
    }
  }
  v21 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v21;
  v22 = a2 + 32 * (v21 + 43);
  *(_DWORD *)v22 = 19;
  v23 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v22 + 8) = -1;
  *(_DWORD *)(v22 + 4) = v23;
  *(_QWORD *)(v22 + 12) = 0LL;
  *(_QWORD *)(v22 + 20) = 0LL;
  *(_DWORD *)(v22 + 28) = 0;
  v24 = *(_DWORD *)(a2 + 12);
  if ( v24 == 5 || *(_DWORD *)(a2 + 12) == 6 || *(_DWORD *)(a2 + 12) == 12 || *(_DWORD *)(a2 + 12) == 16 )
  {
    v25 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v24;
    *(_DWORD *)(v25 + a2 + 1384) = v24;
    v26 = FdoExt(a1);
    v27 = *(unsigned __int16 *)(a2 + 4);
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
          *(_DWORD *)v29 = 1397778803;
          *(_QWORD *)(v29 + 8) = 0LL;
          *(_QWORD *)(v29 + 16) = 0LL;
          *(_QWORD *)(v29 + 24) = v27;
        }
      }
    }
    v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v26 + 4944));
    if ( *(_QWORD *)(a2 + 792) )
    {
      *(_QWORD *)(a2 + 792) = 0LL;
      KeSetEvent((PRKEVENT)(a2 + 800), 0, 0);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v26 + 4944), v30);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        55,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        *(_WORD *)(a2 + 4));
    FdoExt(a1);
    v31 = (_QWORD **)(a2 + 456);
    while ( 1 )
    {
      v32 = *v31;
      if ( *v31 == v31 )
        break;
      if ( (_QWORD **)v32[1] != v31 )
        goto LABEL_71;
      v57 = (_QWORD *)*v32;
      if ( *(_QWORD **)(*v32 + 8LL) != v32 )
        goto LABEL_71;
      *v31 = v57;
      v57[1] = v31;
      UsbhFreePortChangeQueueObject(a1, a2, (__int64)(v32 - 2), 1);
    }
    v33 = *(unsigned __int16 *)(a2 + 4);
    v34 = *(int *)(a2 + 12);
    *(_DWORD *)(a2 + 2876) = 0;
    *(_BYTE *)(a2 + 2839) = 0;
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( a1 )
      {
        v35 = *(_QWORD *)(a1 + 64);
        if ( v35 )
        {
          v36 = *(_QWORD *)(v35 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v35 + 880)) & *(_DWORD *)(v35 + 884));
          *(_DWORD *)v36 = 757952880;
          *(_QWORD *)(v36 + 8) = 0LL;
          *(_QWORD *)(v36 + 16) = v34;
          *(_QWORD *)(v36 + 24) = v33;
        }
      }
    }
    v37 = *(_DWORD *)(a2 + 12);
    v38 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v38 + a2 + 8) = v37;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v14);
    v39 = *(unsigned __int16 *)(a2 + 4);
    v40 = 0LL;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      if ( a1 )
      {
        v41 = *(_QWORD *)(a1 + 64);
        if ( v41 )
        {
          v42 = *(_QWORD *)(v41 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v41 + 880)) & *(_DWORD *)(v41 + 884));
          *(_DWORD *)v42 = 1329877100;
          *(_QWORD *)(v42 + 8) = 0LL;
          *(_QWORD *)(v42 + 16) = v39;
          *(_QWORD *)(v42 + 24) = 1884308559LL;
        }
      }
    }
    v43 = KeAcquireSpinLockRaiseToDpc(&HubG);
    qword_14006F5A0 = (__int64)&dword_14006F5A8;
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v44 = *(_QWORD *)(a1 + 64);
        if ( v44 )
        {
          v45 = *(_QWORD *)(v44 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v44 + 880)) & *(_DWORD *)(v44 + 884));
          *(_DWORD *)v45 = 1413771367;
          *(_QWORD *)(v45 + 8) = 0LL;
          *(_QWORD *)(v45 + 16) = v39;
          *(_QWORD *)(v45 + 24) = 0LL;
        }
      }
    }
    if ( (_WORD)v39 )
    {
      v46 = FdoExt(a1);
      if ( (unsigned __int16)v39 <= *(unsigned __int8 *)(FdoExt(a1) + 2938) )
      {
        v47 = *(_QWORD *)(v46 + 3056);
        if ( v47 )
        {
          v48 = v47 + 2928 * v39 - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            if ( a1 )
            {
              v49 = *(_QWORD *)(a1 + 64);
              if ( v49 )
              {
                v50 = *(_QWORD *)(v49 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v49 + 880)) & *(_DWORD *)(v49 + 884));
                *(_DWORD *)v50 = 1044672615;
                *(_QWORD *)(v50 + 8) = 0LL;
                *(_QWORD *)(v50 + 16) = v39;
                *(_QWORD *)(v50 + 24) = v48;
              }
            }
          }
          if ( v48 )
          {
            v40 = *(_QWORD *)(v48 + 392);
            if ( v40 )
            {
              v51 = PdoExt(*(_QWORD *)(v48 + 392));
              Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
              if ( Pool2 )
              {
                *(_DWORD *)Pool2 = 1668571500;
                *(_QWORD *)(Pool2 + 32) = v40;
                *(_DWORD *)(Pool2 + 24) = 1884308559;
                *(_QWORD *)(Pool2 + 40) = 0LL;
                v53 = (_QWORD *)(Pool2 + 8);
                v54 = *(_QWORD **)(v51 + 1280);
                if ( *v54 != v51 + 1272 )
LABEL_71:
                  __fastfail(3u);
                *v53 = v51 + 1272;
                v53[1] = v54;
                *v54 = v53;
                *(_QWORD *)(v51 + 1280) = v53;
              }
              else
              {
                ++*(_DWORD *)(v51 + 1288);
              }
            }
          }
        }
      }
    }
    qword_14006F5A0 = 0LL;
    KeReleaseSpinLock(&HubG, v43);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      if ( a1 )
      {
        v55 = *(_QWORD *)(a1 + 64);
        if ( v55 )
        {
          v56 = *(_QWORD *)(v55 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v55 + 880)) & *(_DWORD *)(v55 + 884));
          *(_DWORD *)v56 = 1634744625;
          *(_QWORD *)(v56 + 8) = 0LL;
          *(_QWORD *)(v56 + 16) = a2;
          *(_QWORD *)(v56 + 24) = v40;
        }
      }
    }
    if ( v40 )
    {
      *(_DWORD *)(a2 + 416) = 1;
      v64 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 5168));
      if ( *(_QWORD *)(PdoExt(v40) + 864) )
      {
        Log(a1, 4, 825847906, v40, 0LL);
        KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 5168), v64);
        UsbhCancelResetTimeout(a1, a2, 1LL);
        UsbhReleaseEnumBusLockEx(a1, a3, *(unsigned __int16 *)(a2 + 4));
        UsbhSignalSyncDeviceReset(a1, v40, a2, 3221225473LL);
      }
      else
      {
        KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 5168), v64);
      }
      UsbhBusUnlatchPdo(a1, v40, a2, v65, 0LL);
    }
  }
  else
  {
    UsbhFlushPortChangeQueue(a1, a2);
    v58 = v24 - 10;
    if ( v58 )
    {
      v59 = v58 - 3;
      if ( v59 )
      {
        if ( v59 == 1 )
        {
          v60 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 3;
          *(_DWORD *)(v60 + a2 + 1384) = 3;
        }
      }
      else
      {
        v61 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 12;
        *(_DWORD *)(v61 + a2 + 1384) = 12;
      }
    }
    else
    {
      v62 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 8;
      *(_DWORD *)(v62 + a2 + 1384) = 8;
    }
    UsbhSignalPauseEvent(a1, a2);
    LOBYTE(v63) = v14;
    UsbhUnlockPcqWithTag(a1, a2, v63, 0LL);
  }
}
