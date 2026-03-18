/*
 * XREFs of UsbhQueryPortState @ 0x140007140
 * Callers:
 *     UsbhBusPnpStop_Action @ 0x140001FCC (UsbhBusPnpStop_Action.c)
 *     UsbhHubRunPortChangeQueue @ 0x140005E40 (UsbhHubRunPortChangeQueue.c)
 *     UsbhFdoReturnPortStatus @ 0x140009E40 (UsbhFdoReturnPortStatus.c)
 *     UsbhHubProcessIsr @ 0x14000AC30 (UsbhHubProcessIsr.c)
 *     UsbhSetupDevice @ 0x14001ADE8 (UsbhSetupDevice.c)
 *     UsbhFdoValidateConnectionPdo @ 0x14001C3D0 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhSshResumeDownstream @ 0x14002A3C4 (UsbhSshResumeDownstream.c)
 *     UsbhFdoColdStartPdo @ 0x14002CA60 (UsbhFdoColdStartPdo.c)
 *     UsbhFdoColdStartCheckPort @ 0x14002CFB0 (UsbhFdoColdStartCheckPort.c)
 *     UsbhSyncSuspendPdoPort @ 0x140034ED4 (UsbhSyncSuspendPdoPort.c)
 *     UsbhFdoSetD0Warm @ 0x140038FD4 (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1400398C0 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhOvercurrentResetWorker @ 0x14003FF90 (UsbhOvercurrentResetWorker.c)
 *     UsbhBusSuspend_Action @ 0x14004178C (UsbhBusSuspend_Action.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x140043B5C (UsbhHubSyncSuspendPortEvent.c)
 *     UsbhQueueSoftConnectChange @ 0x1400448AC (UsbhQueueSoftConnectChange.c)
 *     UsbhFinishStart @ 0x140046F2C (UsbhFinishStart.c)
 *     UsbhPortResumeTimeout @ 0x140047ED8 (UsbhPortResumeTimeout.c)
 * Callees:
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhSyncSendCommand @ 0x140007D40 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Usb_Disconnected @ 0x14000F810 (Usb_Disconnected.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhDispatch_HardResetEvent @ 0x1400329CC (UsbhDispatch_HardResetEvent.c)
 *     UsbhTrapFatal_Dbg @ 0x14003A52C (UsbhTrapFatal_Dbg.c)
 *     UsbhFlushPortChange @ 0x14003BDA4 (UsbhFlushPortChange.c)
 *     WPP_RECORDER_SF_q @ 0x14003EDC0 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall UsbhQueryPortState(__int64 a1, unsigned __int16 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // r15
  __int64 v5; // rdi
  int v9; // ecx
  __int64 Pool2; // rax
  unsigned __int16 *v11; // r14
  __int64 v12; // r13
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  KIRQL v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r15
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rdx
  unsigned __int16 v28; // r12
  __int64 v29; // rdx
  __int64 v30; // rcx
  KIRQL v31; // r15
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 *v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // eax
  __int64 *v39; // rcx
  __int64 **v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned __int16 v53; // r15
  unsigned __int16 v54; // di
  __int64 v55; // rax
  __int64 v56; // rax
  _BYTE v57[8]; // [rsp+58h] [rbp-50h] BYREF
  _BYTE v58[2]; // [rsp+60h] [rbp-48h] BYREF
  __int16 v59; // [rsp+62h] [rbp-46h]
  __int16 v60; // [rsp+64h] [rbp-44h]
  __int16 v61; // [rsp+66h] [rbp-42h]

  v4 = a2;
  v5 = 0LL;
  v9 = *(_DWORD *)(FdoExt(a1) + 2560);
  if ( (v9 & 0x4000) != 0 )
  {
    Log(a1, 4, 1937076805, 0, 0LL);
    if ( a4 )
      *a4 = -1073713152;
    return 3221225486LL;
  }
  else if ( (v9 & 0x10) != 0 )
  {
    Log(a1, 4, 1752319312, 0, 0LL);
    if ( a4 )
      *a4 = -1073704960;
    return 3221225666LL;
  }
  else
  {
    Pool2 = ExAllocatePool2(64LL, 10LL, 1112885333LL);
    v11 = (unsigned __int16 *)Pool2;
    if ( Pool2 )
    {
      *(_WORD *)(Pool2 + 4) = 4;
      *(_DWORD *)a3 = 0;
      *(_WORD *)(Pool2 + 6) = v4;
      *(_DWORD *)Pool2 = 0;
      v58[0] = -93;
      *(_BYTE *)(Pool2 + 8) = 0;
      v58[1] = 0;
      v59 = 0;
      v60 = v4;
      v61 = *(_WORD *)(Pool2 + 4);
      v12 = (int)UsbhSyncSendCommand(a1, (unsigned int)v58, Pool2, (int)Pool2 + 4);
      v13 = 0LL;
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( a1 )
        {
          v14 = *(_QWORD *)(a1 + 64);
          if ( v14 )
          {
            v15 = *(_QWORD *)(v14 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
            *(_DWORD *)v15 = 1329877100;
            *(_QWORD *)(v15 + 8) = 0LL;
            *(_QWORD *)(v15 + 16) = v4;
            *(_QWORD *)(v15 + 24) = 1383420738LL;
          }
        }
      }
      v16 = KeAcquireSpinLockRaiseToDpc(&HubG);
      qword_14006F5A0 = (__int64)&dword_14006F5A8;
      if ( (UsbhLogMask & 8) != 0 )
      {
        if ( a1 )
        {
          v17 = *(_QWORD *)(a1 + 64);
          if ( v17 )
          {
            v18 = *(_QWORD *)(v17 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
            *(_DWORD *)v18 = 1413771367;
            *(_QWORD *)(v18 + 8) = 0LL;
            *(_QWORD *)(v18 + 16) = v4;
            *(_QWORD *)(v18 + 24) = 0LL;
          }
        }
      }
      if ( !(_WORD)v4 )
        goto LABEL_80;
      v19 = FdoExt(a1);
      if ( a2 > *(unsigned __int8 *)(FdoExt(a1) + 2938) )
        goto LABEL_80;
      v20 = *(_QWORD *)(v19 + 3056);
      if ( !v20 )
        goto LABEL_80;
      v21 = v20 + 2928LL * a2 - 2928;
      if ( (UsbhLogMask & 8) != 0 )
      {
        if ( a1 )
        {
          v22 = *(_QWORD *)(a1 + 64);
          if ( v22 )
          {
            v23 = *(_QWORD *)(v22 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22 + 880)) & *(_DWORD *)(v22 + 884));
            *(_DWORD *)v23 = 1044672615;
            *(_QWORD *)(v23 + 8) = 0LL;
            *(_QWORD *)(v23 + 16) = a2;
            *(_QWORD *)(v23 + 24) = v21;
          }
        }
      }
      if ( v21 && (v13 = *(_QWORD *)(v21 + 392)) != 0 )
      {
        v24 = *(_QWORD *)(v13 + 64);
        if ( !v24 )
          UsbhTrapFatal_Dbg(*(_QWORD *)(v21 + 392), 0LL);
        if ( *(_DWORD *)v24 != 1329877064 )
          UsbhTrapFatal_Dbg(*(_QWORD *)(v21 + 392), *(_QWORD *)(v13 + 64));
        v25 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
        if ( v25 )
        {
          *(_DWORD *)v25 = 1668571500;
          *(_QWORD *)(v25 + 32) = v13;
          *(_DWORD *)(v25 + 24) = 1383420738;
          *(_QWORD *)(v25 + 40) = 0LL;
          v26 = (_QWORD *)(v25 + 8);
          v27 = *(_QWORD **)(v24 + 1280);
          if ( *v27 != v24 + 1272 )
            goto LABEL_114;
          *v26 = v24 + 1272;
          v26[1] = v27;
          *v27 = v26;
          *(_QWORD *)(v24 + 1280) = v26;
        }
        else
        {
          ++*(_DWORD *)(v24 + 1288);
        }
        qword_14006F5A0 = 0LL;
        KeReleaseSpinLock(&HubG, v16);
        v5 = *(_QWORD *)(v13 + 64);
        if ( !v5 )
          UsbhTrapFatal_Dbg(v13, 0LL);
        if ( *(_DWORD *)v5 != 1329877064 )
          UsbhTrapFatal_Dbg(v13, *(_QWORD *)(v13 + 64));
      }
      else
      {
LABEL_80:
        qword_14006F5A0 = 0LL;
        KeReleaseSpinLock(&HubG, v16);
      }
      if ( (int)v12 < 0 || !v5 || !*(_BYTE *)(v5 + 2740) )
        goto LABEL_31;
      v53 = *v11;
      v54 = v11[1];
      if ( ((v54 | *v11) & 8) != 0 )
      {
        v55 = FdoExt(a1);
        UsbhDispatch_HardResetEvent(a1, v55 + 2264, 3LL);
      }
      if ( (v53 & 1) == 0 && (v54 & 1) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_q(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            3,
            21,
            (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
            a1);
        v28 = a2;
        byte_14006F6C8 = 1;
        UsbhFlushPortChange(a1, a2, v57);
        v56 = FdoExt(a1);
        UsbhDispatch_HardResetEvent(a1, v56 + 2264, 3LL);
      }
      else
      {
LABEL_31:
        v28 = a2;
      }
      if ( !v13 )
        goto LABEL_58;
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( a1 )
        {
          v29 = *(_QWORD *)(a1 + 64);
          if ( v29 )
          {
            v30 = *(_QWORD *)(v29 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v29 + 880)) & *(_DWORD *)(v29 + 884));
            *(_DWORD *)v30 = 1329877109;
            *(_QWORD *)(v30 + 8) = 0LL;
            *(_QWORD *)(v30 + 16) = v13;
            *(_QWORD *)(v30 + 24) = 1383420738LL;
          }
        }
      }
      v31 = KeAcquireSpinLockRaiseToDpc(&HubG);
      qword_14006F5A0 = (__int64)&dword_14006F5A8;
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( a1 )
        {
          v32 = *(_QWORD *)(a1 + 64);
          if ( v32 )
          {
            v33 = *(_QWORD *)(v32 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 880)) & *(_DWORD *)(v32 + 884));
            *(_DWORD *)v33 = 1348891236;
            *(_QWORD *)(v33 + 8) = 0LL;
            *(_QWORD *)(v33 + 16) = v13;
            *(_QWORD *)(v33 + 24) = 1383420738LL;
          }
        }
      }
      v34 = *(_QWORD *)(v13 + 64);
      if ( !v34 )
        UsbhTrapFatal_Dbg(v13, 0LL);
      if ( *(_DWORD *)v34 != 1329877064 )
        UsbhTrapFatal_Dbg(v13, *(_QWORD *)(v13 + 64));
      v35 = *(__int64 **)(v34 + 1272);
      if ( v35 == (__int64 *)(v34 + 1272) )
      {
LABEL_50:
        v38 = *(_DWORD *)(v34 + 1288);
        if ( v38 )
          *(_DWORD *)(v34 + 1288) = v38 - 1;
        goto LABEL_56;
      }
      while ( 1 )
      {
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          if ( a1 )
          {
            v36 = *(_QWORD *)(a1 + 64);
            if ( v36 )
            {
              v37 = *(_QWORD *)(v36 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v36 + 880)) & *(_DWORD *)(v36 + 884));
              *(_DWORD *)v37 = 1064591724;
              *(_QWORD *)(v37 + 8) = 0LL;
              *(_QWORD *)(v37 + 16) = v34;
              *(_QWORD *)(v37 + 24) = 1383420738LL;
            }
          }
        }
        if ( *((_DWORD *)v35 + 4) == 1383420738 && !v35[4] )
          break;
        v35 = (__int64 *)*v35;
        if ( v35 == (__int64 *)(v34 + 1272) )
          goto LABEL_50;
      }
      v39 = (__int64 *)*v35;
      if ( *(__int64 **)(*v35 + 8) == v35 )
      {
        v40 = (__int64 **)v35[1];
        if ( *v40 == v35 )
        {
          *v40 = v39;
          v39[1] = (__int64)v40;
          ExFreePoolWithTag(v35 - 1, 0);
LABEL_56:
          if ( *(_QWORD *)(v34 + 1272) == v34 + 1272 && !*(_DWORD *)(v34 + 1288) )
            KeSetEvent((PRKEVENT)(v34 + 1296), 0, 0);
          qword_14006F5A0 = 0LL;
          KeReleaseSpinLock(&HubG, v31);
LABEL_58:
          if ( (UsbhLogMask & 4) != 0 )
          {
            if ( a1 )
            {
              v41 = *(_QWORD *)(a1 + 64);
              if ( v41 )
              {
                v42 = *(_QWORD *)(v41 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v41 + 880)) & *(_DWORD *)(v41 + 884));
                *(_DWORD *)v42 = 1953722449;
                *(_QWORD *)(v42 + 8) = 0LL;
                *(_QWORD *)(v42 + 16) = v12;
                *(_QWORD *)(v42 + 24) = 0LL;
              }
            }
          }
          if ( (int)v12 < 0 || (v43 = v11[2], (_DWORD)v43 == 4) )
          {
            if ( (v12 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v12) )
            {
              Log(a1, 4, 1366324018, v11[2], 0LL);
              UsbhException(a1, v28, 8, v11, 0xAu, v12, 0, usbfile_bus_c, 1649, 0);
            }
            if ( (int)v12 >= 0 )
            {
              v47 = v11[1];
              *(_WORD *)(a3 + 2) = v47;
              v48 = *v11;
              *(_WORD *)a3 = v48;
              if ( (UsbhLogMask & 4) != 0 )
              {
                if ( a1 )
                {
                  v49 = *(_QWORD *)(a1 + 64);
                  if ( v49 )
                  {
                    v50 = *(_QWORD *)(v49 + 888)
                        + 32LL
                        * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v49 + 880)) & *(_DWORD *)(v49 + 884));
                    *(_DWORD *)v50 = 1953722448;
                    *(_QWORD *)(v50 + 8) = 0LL;
                    *(_QWORD *)(v50 + 16) = v47;
                    *(_QWORD *)(v50 + 24) = v48;
                  }
                }
              }
            }
            if ( a4 )
              *a4 = 0;
            ExFreePoolWithTag(v11, 0);
            return (unsigned int)v12;
          }
          else
          {
            if ( (UsbhLogMask & 4) != 0 )
            {
              if ( a1 )
              {
                v44 = *(_QWORD *)(a1 + 64);
                if ( v44 )
                {
                  v45 = *(_QWORD *)(v44 + 888)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v44 + 880)) & *(_DWORD *)(v44 + 884));
                  *(_DWORD *)v45 = 829648977;
                  *(_QWORD *)(v45 + 8) = 0LL;
                  *(_QWORD *)(v45 + 16) = v43;
                  *(_QWORD *)(v45 + 24) = 0LL;
                }
              }
            }
            UsbhException(a1, v28, 9, v11, 0xAu, v12, 0, usbfile_bus_c, 1635, 0);
            if ( a4 )
              *a4 = 0;
            ExFreePoolWithTag(v11, 0);
            return 3221225473LL;
          }
        }
      }
LABEL_114:
      __fastfail(3u);
    }
    if ( (UsbhLogMask & 4) != 0 )
    {
      if ( a1 )
      {
        v51 = *(_QWORD *)(a1 + 64);
        if ( v51 )
        {
          v52 = *(_QWORD *)(v51 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v51 + 880)) & *(_DWORD *)(v51 + 884));
          *(_DWORD *)v52 = 1818325073;
          *(_QWORD *)(v52 + 8) = 0LL;
          *(_QWORD *)(v52 + 16) = 0LL;
          *(_QWORD *)(v52 + 24) = 0LL;
        }
      }
    }
    if ( a4 )
      *a4 = -1073737728;
    return 3221225626LL;
  }
}
