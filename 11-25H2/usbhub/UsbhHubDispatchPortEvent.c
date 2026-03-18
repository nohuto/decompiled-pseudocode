/*
 * XREFs of UsbhHubDispatchPortEvent @ 0x140004D00
 * Callers:
 *     UsbhHubRunPortChangeQueue @ 0x140005E40 (UsbhHubRunPortChangeQueue.c)
 *     UsbhHubProcessTimeoutObj @ 0x140039CB0 (UsbhHubProcessTimeoutObj.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhWaitConnect @ 0x140004380 (UsbhWaitConnect.c)
 *     Usbh_UsbdReadFrameCounter @ 0x140005DFC (Usbh_UsbdReadFrameCounter.c)
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhDropDevice @ 0x140011F44 (UsbhDropDevice.c)
 *     UsbhAcquireEnumBusLock @ 0x140012E54 (UsbhAcquireEnumBusLock.c)
 *     UsbhSignalResumeEvent @ 0x1400138D4 (UsbhSignalResumeEvent.c)
 *     UsbhReleaseEnumBusLockEx @ 0x14001B830 (UsbhReleaseEnumBusLockEx.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhSignalSuspendEvent @ 0x14001DCD4 (UsbhSignalSuspendEvent.c)
 *     UsbhHandleSuspend @ 0x140034A58 (UsbhHandleSuspend.c)
 *     UsbhEnumerate1 @ 0x140036138 (UsbhEnumerate1.c)
 *     UsbhEnumerate2 @ 0x140036794 (UsbhEnumerate2.c)
 *     UsbhTrapFatal_Dbg @ 0x14003A52C (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x14003EA34 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dq @ 0x14003ECF4 (WPP_RECORDER_SF_dq.c)
 *     UsbhSignalSyncDeviceReset @ 0x140048768 (UsbhSignalSyncDeviceReset.c)
 *     UsbhHandleOvercurrent @ 0x140057ABC (UsbhHandleOvercurrent.c)
 */

__int64 __fastcall UsbhHubDispatchPortEvent(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 *a4)
{
  __int64 v7; // rax
  int v8; // r8d
  __int64 v9; // r10
  __int16 v10; // r11
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  KIRQL v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 Pool2; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rdx
  __int64 v34; // r9
  unsigned __int8 v35; // cl
  unsigned __int8 v36; // r8
  unsigned __int8 v37; // cl
  unsigned __int8 v38; // r8
  unsigned __int8 v39; // cl
  unsigned __int8 v40; // r12
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rcx
  int v50; // ecx
  int v51; // esi
  __int64 v52; // rdi
  __int64 v53; // rdx
  int v54; // eax
  __int64 v55; // rdi
  int v56; // r8d
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  KIRQL v64; // si
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rdi
  __int64 *v70; // r9
  __int64 v71; // rdx
  __int64 v72; // rcx
  int v73; // eax
  __int64 *v74; // rcx
  __int64 **v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  _DWORD *v79; // rax
  _DWORD *v80; // rdi
  int v81; // eax
  __int64 v82; // r8
  __int64 v83; // rdx
  struct _KEVENT *v84; // rcx
  __int64 v85; // r9
  __int64 v86; // [rsp+50h] [rbp-48h]

  v7 = FdoExt(a1);
  v9 = *(unsigned __int16 *)(a2 + 4);
  LOBYTE(v10) = *(_WORD *)(a2 + 4);
  v86 = v7;
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v12 = 729179504;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = a2;
        *(_QWORD *)(v12 + 24) = v9;
        v10 = *(_WORD *)(a2 + 4);
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v8,
      88,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v10,
      0);
  v13 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v14 = *(_QWORD *)(a1 + 64);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
        *(_DWORD *)v15 = 1313891184;
        *(_QWORD *)(v15 + 8) = 0LL;
        *(_QWORD *)(v15 + 16) = v13;
        *(_QWORD *)(v15 + 24) = 0LL;
      }
    }
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
          *(_DWORD *)v17 = 1145332592;
          *(_QWORD *)(v17 + 8) = 0LL;
          *(_QWORD *)(v17 + 16) = a2;
          *(_QWORD *)(v17 + 24) = a3;
        }
      }
    }
  }
  v18 = 0LL;
  v19 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v20 = *(_QWORD *)(a1 + 64);
      if ( v20 )
      {
        v21 = *(_QWORD *)(v20 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
        *(_DWORD *)v21 = 1329877100;
        *(_QWORD *)(v21 + 8) = 0LL;
        *(_QWORD *)(v21 + 16) = v19;
        *(_QWORD *)(v21 + 24) = 1884308559LL;
      }
    }
  }
  v22 = KeAcquireSpinLockRaiseToDpc(&HubG);
  qword_14006F5A0 = (__int64)&dword_14006F5A8;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v23 = *(_QWORD *)(a1 + 64);
      if ( v23 )
      {
        v24 = *(_QWORD *)(v23 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
        *(_DWORD *)v24 = 1413771367;
        *(_QWORD *)(v24 + 8) = 0LL;
        *(_QWORD *)(v24 + 16) = v19;
        *(_QWORD *)(v24 + 24) = 0LL;
      }
    }
  }
  if ( !(_WORD)v19 )
    goto LABEL_140;
  v25 = FdoExt(a1);
  if ( (unsigned __int16)v19 > *(unsigned __int8 *)(FdoExt(a1) + 2938) )
    goto LABEL_140;
  v26 = *(_QWORD *)(v25 + 3056);
  if ( !v26 )
    goto LABEL_140;
  v27 = v26 + 2928 * v19 - 2928;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v28 = *(_QWORD *)(a1 + 64);
      if ( v28 )
      {
        v29 = *(_QWORD *)(v28 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v28 + 880)) & *(_DWORD *)(v28 + 884));
        *(_DWORD *)v29 = 1044672615;
        *(_QWORD *)(v29 + 8) = 0LL;
        *(_QWORD *)(v29 + 16) = v19;
        *(_QWORD *)(v29 + 24) = v27;
      }
    }
  }
  if ( v27 && (v18 = *(_QWORD *)(v27 + 392)) != 0 )
  {
    v30 = *(_QWORD *)(v18 + 64);
    if ( !v30 )
      UsbhTrapFatal_Dbg(*(_QWORD *)(v27 + 392), 0LL);
    if ( *(_DWORD *)v30 != 1329877064 )
      UsbhTrapFatal_Dbg(*(_QWORD *)(v27 + 392), *(_QWORD *)(v18 + 64));
    Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = 1668571500;
      *(_QWORD *)(Pool2 + 32) = v18;
      *(_DWORD *)(Pool2 + 24) = 1884308559;
      *(_QWORD *)(Pool2 + 40) = 0LL;
      v32 = (_QWORD *)(Pool2 + 8);
      v33 = *(_QWORD **)(v30 + 1280);
      if ( *v33 != v30 + 1272 )
        goto LABEL_183;
      *v32 = v30 + 1272;
      v32[1] = v33;
      *v33 = v32;
      *(_QWORD *)(v30 + 1280) = v32;
    }
    else
    {
      ++*(_DWORD *)(v30 + 1288);
    }
    qword_14006F5A0 = 0LL;
    KeReleaseSpinLock(&HubG, v22);
    *(_DWORD *)(a2 + 416) = 1;
  }
  else
  {
LABEL_140:
    qword_14006F5A0 = 0LL;
    KeReleaseSpinLock(&HubG, v22);
  }
  v34 = *a4;
  v35 = (v18 != 0) | 0x10;
  if ( (v34 & 1) == 0 )
    v35 = v18 != 0;
  *(_WORD *)(a2 + 420) = v34;
  v36 = v35;
  v37 = v35 | 2;
  if ( (v34 & 4) == 0 )
    v37 = v36;
  v38 = v37;
  v39 = v37 | 4;
  if ( (v34 & 8) == 0 )
    v39 = v38;
  v40 = v39 | 8;
  if ( (v34 & 2) == 0 )
    v40 = v39;
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v41 = *(_QWORD *)(a1 + 64);
      if ( v41 )
      {
        v42 = *(_QWORD *)(v41 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v41 + 880)) & *(_DWORD *)(v41 + 884));
        *(_DWORD *)v42 = 1414087210;
        *(_QWORD *)(v42 + 24) = v40;
        *(_QWORD *)(v42 + 8) = 0LL;
        *(_QWORD *)(v42 + 16) = v34;
      }
    }
  }
  v43 = *(unsigned __int16 *)(a2 + 4);
  v44 = *(unsigned int *)(a2 + 400);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v45 = *(_QWORD *)(a1 + 64);
      if ( v45 )
      {
        v46 = *(_QWORD *)(v45 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v45 + 880)) & *(_DWORD *)(v45 + 884));
        *(_DWORD *)v46 = 844382762;
        *(_QWORD *)(v46 + 8) = 0LL;
        *(_QWORD *)(v46 + 16) = v44;
        *(_QWORD *)(v46 + 24) = v43;
      }
    }
  }
  v47 = *(unsigned int *)(a3 + 8);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v48 = *(_QWORD *)(a1 + 64);
      if ( v48 )
      {
        v49 = *(_QWORD *)(v48 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v48 + 880)) & *(_DWORD *)(v48 + 884));
        *(_DWORD *)v49 = 861159978;
        *(_QWORD *)(v49 + 24) = v40;
        *(_QWORD *)(v49 + 8) = 0LL;
        *(_QWORD *)(v49 + 16) = v47;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dD(
        WPP_GLOBAL_Control->DeviceExtension,
        *(unsigned __int16 *)(a2 + 4),
        v47,
        89,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        *(_WORD *)(a2 + 4),
        *(_WORD *)(a2 + 420));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dD(
          WPP_GLOBAL_Control->DeviceExtension,
          *(unsigned __int16 *)(a2 + 4),
          v47,
          90,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          *(_WORD *)(a2 + 4),
          *(_DWORD *)(a2 + 400));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_dD(
            WPP_GLOBAL_Control->DeviceExtension,
            *(unsigned __int16 *)(a2 + 4),
            v47,
            91,
            (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
            *(_WORD *)(a2 + 4),
            *(_DWORD *)(a3 + 8));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_dD(
            WPP_GLOBAL_Control->DeviceExtension,
            *(unsigned __int16 *)(a2 + 4),
            v47,
            92,
            (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
            *(_WORD *)(a2 + 4),
            v40);
      }
    }
  }
  if ( (*(_WORD *)(a2 + 420) & 0x108) == 0 && (*(_DWORD *)(a3 + 8) & 0x80008) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        93,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        *(_WORD *)(a2 + 4));
    Log(a1, 512, 1886353240, v40, *(unsigned int *)(a3 + 8));
    v40 &= ~8u;
    UsbhSignalResumeEvent(a1, a2);
    UsbhSignalSuspendEvent(a1, a2);
    UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 60, a3, 56, 0, 0, (__int64)usbfile_pchange_c, 5582, 0);
  }
  v50 = *(_DWORD *)(a3 + 8);
  v51 = *(_DWORD *)(a3 + 32);
  v52 = ((unsigned __int8)*(_DWORD *)(a2 + 856) + 1) & 0xF;
  v53 = *(unsigned __int16 *)(a2 + 420);
  v54 = *(_DWORD *)(a2 + 400);
  *(_DWORD *)(a2 + 856) = v52;
  v55 = a2 + 32 * (v52 + 27);
  *(_DWORD *)(v55 + 4) = v50;
  *(_DWORD *)v55 = v54;
  *(_BYTE *)(v55 + 18) = v40;
  *(_WORD *)(v55 + 16) = v53;
  *(_QWORD *)(v55 + 8) = v18;
  *(_BYTE *)(v55 + 19) = 0;
  *(_DWORD *)(v55 + 20) = v51;
  *(_DWORD *)(v55 + 28) = 1;
  *(_DWORD *)(v55 + 24) = Usbh_UsbdReadFrameCounter(a1, v53, v47, v44) - v51;
  if ( !v18 )
  {
LABEL_62:
    if ( (*(_DWORD *)(a3 + 8) & 0x20000) == 0 || (v85 = *(_QWORD *)(a3 + 40), v85 == v18) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          94,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          *(_WORD *)(a2 + 4));
      v57 = *(_DWORD *)(a2 + 400);
      if ( v57 )
      {
        v58 = v57 - 1;
        if ( v58 )
        {
          v59 = v58 - 1;
          if ( v59 )
          {
            v60 = v59 - 1;
            if ( v60 )
            {
              v61 = v60 - 1;
              if ( v61 )
              {
                if ( v61 == 1 )
                  *(_DWORD *)(a2 + 400) = UsbhHandleSuspend(a1, *(_QWORD *)(a3 + 8), v40, a2, v18);
              }
              else
              {
                if ( (*(_DWORD *)(a3 + 8) & 8) != 0 )
                {
                  *(_DWORD *)(a2 + 400) = UsbhHandleOvercurrent(a1, 4, v56, a2, v18);
                }
                else
                {
                  *(_DWORD *)(a2 + 400) = 4;
                  if ( (*(_DWORD *)(a3 + 8) & 0x20000) != 0 )
                    UsbhSignalSyncDeviceReset(a1, v18, a2, 3221225473LL);
                  if ( (*(_DWORD *)(a3 + 8) & 0x10000) != 0 )
                    UsbhSignalSyncDeviceReset(a1, v18, a2, 3221225473LL);
                  if ( (*(_DWORD *)(a3 + 8) & 0x40000) != 0 )
                    UsbhSignalSuspendEvent(a1, a2);
                  if ( (*(_DWORD *)(a3 + 8) & 0x100000) != 0 )
                  {
                    UsbhSignalResumeEvent(a1, a2);
                    if ( v40 == 1 )
                    {
                      UsbhAcquireEnumBusLock(a1, *(_QWORD *)(a2 + 376), *(unsigned __int16 *)(a2 + 4));
                      UsbhDropDevice(a1, a2, v18);
                    }
                  }
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                  && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  WPP_RECORDER_SF_(
                    WPP_GLOBAL_Control->DeviceExtension,
                    0,
                    1,
                    96,
                    (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids);
                }
                Log(a1, 512, 1885435206, *(unsigned __int16 *)(a2 + 420), v40);
              }
            }
            else
            {
              if ( (*(_DWORD *)(a3 + 8) & 8) != 0 )
                UsbhHandleOvercurrent(a1, 3, v56, a2, v18);
              *(_DWORD *)(a2 + 400) = 3;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                WPP_RECORDER_SF_(
                  WPP_GLOBAL_Control->DeviceExtension,
                  0,
                  1,
                  95,
                  (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids);
              }
              Log(a1, 512, 1701999174, *(unsigned __int16 *)(a2 + 420), v40);
            }
          }
          else
          {
            *(_DWORD *)(a2 + 400) = UsbhEnumerate2(a1, *(_QWORD *)(a3 + 8), v40, a2, v18);
          }
        }
        else
        {
          *(_DWORD *)(a2 + 400) = UsbhEnumerate1(a1, *(_QWORD *)(a3 + 8), v40, a2, v18);
        }
      }
      else
      {
        *(_DWORD *)(a2 + 400) = UsbhWaitConnect(a1, *(_QWORD *)(a3 + 8), v40, a2, v18);
      }
    }
    else
    {
      Log(a1, 512, 1685222994, v85, *(unsigned int *)(a3 + 8));
      UsbhSignalSyncDeviceReset(a1, *(_QWORD *)(a3 + 40), a2, 3221225486LL);
    }
    goto LABEL_72;
  }
  v79 = PdoExt(v18);
  v80 = v79;
  if ( !*((_BYTE *)v79 + 2740) || (*(_BYTE *)(a2 + 420) & 1) != 0 )
  {
    if ( (v79[355] & 0x400000) != 0 )
    {
      KeWaitForSingleObject(v79 + 736, Executive, 0, 0, 0LL);
      if ( (v80[355] & 0x4000000) != 0 && (*(_DWORD *)(a3 + 8) & 1) != 0 )
      {
        Log(a1, 512, 1144213585, HIBYTE(v80[355]) & 1, *(unsigned __int16 *)(a2 + 420));
        v80[355] |= 0x3000000u;
        v84 = (struct _KEVENT *)(v80 + 730);
        if ( (*(_BYTE *)(a2 + 420) & 1) != 0 )
          KeSetEvent(v84, 0, 0);
        else
          KeResetEvent(v84);
        KeSetEvent((PRKEVENT)(v80 + 736), 0, 0);
        goto LABEL_72;
      }
      KeSetEvent((PRKEVENT)(v80 + 736), 0, 0);
    }
    goto LABEL_62;
  }
  v81 = *(_DWORD *)(a3 + 8);
  if ( (v81 & 0x30008) != 0 )
  {
    if ( (v81 & 0x30000) != 0 )
    {
      Log(a1, 512, 1650742098, *(_QWORD *)(a3 + 40), *(unsigned int *)(a3 + 8));
      UsbhSignalSyncDeviceReset(a1, v18, a2, 3221225473LL);
    }
    Log(a1, 512, 1650741836, 0, *(unsigned int *)(a3 + 8));
    v82 = *(unsigned __int16 *)(a2 + 4);
    if ( *(_DWORD *)(v86 + 3072) == (_DWORD)v82 )
    {
      v83 = *(_QWORD *)(a2 + 376);
      if ( *(_QWORD *)(v86 + 3080) == v83 )
        UsbhReleaseEnumBusLockEx(a1, v83, v82);
    }
    UsbhException(a1, 0, 62, 0, 0, -1073741823, -1073704960, (__int64)usbfile_pchange_c, 5639, 1);
  }
LABEL_72:
  if ( !*(_DWORD *)(a2 + 416) )
    goto LABEL_103;
  if ( (UsbhLogMask & 0x400) != 0 )
  {
    if ( a1 )
    {
      v62 = *(_QWORD *)(a1 + 64);
      if ( v62 )
      {
        v63 = *(_QWORD *)(v62 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v62 + 880)) & *(_DWORD *)(v62 + 884));
        *(_DWORD *)v63 = 827354229;
        *(_QWORD *)(v63 + 8) = 0LL;
        *(_QWORD *)(v63 + 16) = v18;
        *(_QWORD *)(v63 + 24) = a2;
      }
    }
  }
  v64 = KeAcquireSpinLockRaiseToDpc(&HubG);
  qword_14006F5A0 = (__int64)&dword_14006F5A8;
  *(_DWORD *)(a2 + 416) = 0;
  if ( (UsbhLogMask & 0x400) != 0 )
  {
    if ( a1 )
    {
      v65 = *(_QWORD *)(a1 + 64);
      if ( v65 )
      {
        v66 = *(_QWORD *)(v65 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v65 + 880)) & *(_DWORD *)(v65 + 884));
        *(_DWORD *)v66 = 844131445;
        *(_QWORD *)(v66 + 8) = 0LL;
        *(_QWORD *)(v66 + 16) = v18;
        *(_QWORD *)(v66 + 24) = a2;
      }
    }
  }
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v67 = *(_QWORD *)(a1 + 64);
      if ( v67 )
      {
        v68 = *(_QWORD *)(v67 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v67 + 880)) & *(_DWORD *)(v67 + 884));
        *(_DWORD *)v68 = 1348891236;
        *(_QWORD *)(v68 + 8) = 0LL;
        *(_QWORD *)(v68 + 16) = v18;
        *(_QWORD *)(v68 + 24) = 1884308559LL;
      }
    }
  }
  if ( !v18 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v69 = *(_QWORD *)(v18 + 64);
  if ( !v69 )
    UsbhTrapFatal_Dbg(v18, 0LL);
  if ( *(_DWORD *)v69 != 1329877064 )
    UsbhTrapFatal_Dbg(v18, *(_QWORD *)(v18 + 64));
  v70 = *(__int64 **)(v69 + 1272);
  if ( v70 == (__int64 *)(v69 + 1272) )
  {
LABEL_95:
    v73 = *(_DWORD *)(v69 + 1288);
    if ( v73 )
      *(_DWORD *)(v69 + 1288) = v73 - 1;
    goto LABEL_101;
  }
  while ( 1 )
  {
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      if ( a1 )
      {
        v71 = *(_QWORD *)(a1 + 64);
        if ( v71 )
        {
          v72 = *(_QWORD *)(v71 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v71 + 880)) & *(_DWORD *)(v71 + 884));
          *(_DWORD *)v72 = 1064591724;
          *(_QWORD *)(v72 + 8) = 0LL;
          *(_QWORD *)(v72 + 16) = v69;
          *(_QWORD *)(v72 + 24) = 1884308559LL;
        }
      }
    }
    if ( *((_DWORD *)v70 + 4) == 1884308559 && !v70[4] )
      break;
    v70 = (__int64 *)*v70;
    if ( v70 == (__int64 *)(v69 + 1272) )
      goto LABEL_95;
  }
  v74 = (__int64 *)*v70;
  if ( *(__int64 **)(*v70 + 8) != v70 || (v75 = (__int64 **)v70[1], *v75 != v70) )
LABEL_183:
    __fastfail(3u);
  *v75 = v74;
  v74[1] = (__int64)v75;
  ExFreePoolWithTag(v70 - 1, 0);
LABEL_101:
  if ( *(_QWORD *)(v69 + 1272) == v69 + 1272 && !*(_DWORD *)(v69 + 1288) )
    KeSetEvent((PRKEVENT)(v69 + 1296), 0, 0);
  qword_14006F5A0 = 0LL;
  KeReleaseSpinLock(&HubG, v64);
LABEL_103:
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v76 = *(_QWORD *)(a1 + 64);
      if ( v76 )
      {
        v77 = *(_QWORD *)(v76 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v76 + 880)) & *(_DWORD *)(v76 + 884));
        *(_DWORD *)v77 = 762733936;
        *(_QWORD *)(v77 + 8) = 0LL;
        *(_QWORD *)(v77 + 16) = a2;
        *(_QWORD *)(v77 + 24) = 0LL;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      97,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4));
  return *(unsigned int *)(a2 + 400);
}
