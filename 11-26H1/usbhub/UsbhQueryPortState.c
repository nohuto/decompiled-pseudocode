/*
 * XREFs of UsbhQueryPortState @ 0x1400199F0
 * Callers:
 *     UsbhFdoValidateConnectionPdo @ 0x140007C8C (UsbhFdoValidateConnectionPdo.c)
 *     UsbhSshResumeDownstream @ 0x140008C2C (UsbhSshResumeDownstream.c)
 *     UsbhSetupDevice @ 0x14000901C (UsbhSetupDevice.c)
 *     UsbhSyncSuspendPdoPort @ 0x1400113C4 (UsbhSyncSuspendPdoPort.c)
 *     UsbhBusPnpStop_Action @ 0x140011CAC (UsbhBusPnpStop_Action.c)
 *     UsbhFdoReturnPortStatus @ 0x140017DD0 (UsbhFdoReturnPortStatus.c)
 *     UsbhHubProcessIsr @ 0x14001C3D0 (UsbhHubProcessIsr.c)
 *     UsbhHubRunPortChangeQueue @ 0x14001DE80 (UsbhHubRunPortChangeQueue.c)
 *     UsbhFdoColdStartPdo @ 0x140030D10 (UsbhFdoColdStartPdo.c)
 *     UsbhFdoColdStartCheckPort @ 0x140031278 (UsbhFdoColdStartCheckPort.c)
 *     UsbhFdoSetD0Warm @ 0x140037E34 (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x140038F0C (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhOvercurrentResetWorker @ 0x14003FA80 (UsbhOvercurrentResetWorker.c)
 *     UsbhBusSuspend_Action @ 0x1400412BC (UsbhBusSuspend_Action.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x140043680 (UsbhHubSyncSuspendPortEvent.c)
 *     UsbhQueueSoftConnectChange @ 0x1400443D0 (UsbhQueueSoftConnectChange.c)
 *     UsbhFinishStart @ 0x140046A70 (UsbhFinishStart.c)
 *     UsbhPortResumeTimeout @ 0x140047A28 (UsbhPortResumeTimeout.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     UsbhSyncSendCommand @ 0x1400175B0 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhDispatch_HardResetEvent @ 0x140037850 (UsbhDispatch_HardResetEvent.c)
 *     UsbhTrapFatal_Dbg @ 0x140039F64 (UsbhTrapFatal_Dbg.c)
 *     UsbhFlushPortChange @ 0x14003B818 (UsbhFlushPortChange.c)
 *     WPP_RECORDER_SF_q @ 0x14003E898 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall UsbhQueryPortState(__int64 a1, unsigned __int16 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // r15
  __int64 v5; // rsi
  int v9; // ecx
  __int64 Pool2; // rax
  unsigned __int16 *v11; // r14
  __int64 v12; // rbp
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rdx
  KIRQL v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rdx
  _DWORD *v19; // r15
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rdx
  int v28; // edx
  unsigned __int16 v29; // r12
  __int64 v30; // rdx
  __int64 v31; // rcx
  KIRQL v32; // r15
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 *v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // eax
  __int64 *v40; // rcx
  __int64 **v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rcx
  unsigned __int16 v55; // si
  unsigned __int16 v56; // r15
  _DWORD *v57; // rax
  _DWORD *v58; // rax
  __int64 v59; // [rsp+20h] [rbp-78h]
  __int64 v60; // [rsp+50h] [rbp-48h] BYREF
  __int64 v61; // [rsp+58h] [rbp-40h] BYREF

  v4 = a2;
  v5 = 0LL;
  HIDWORD(v60) = 0;
  v9 = FdoExt(a1)[640];
  if ( (v9 & 0x4000) != 0 )
  {
    Log(a1, 4, 1937076805, 0LL, 0LL);
    if ( a4 )
      *a4 = -1073713152;
    return 3221225486LL;
  }
  else if ( (v9 & 0x10) != 0 )
  {
    Log(a1, 4, 1752319312, 0LL, 0LL);
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
      LOBYTE(v61) = -93;
      *(_BYTE *)(Pool2 + 8) = 0;
      BYTE1(v61) = 0;
      WORD1(v61) = 0;
      WORD2(v61) = v4;
      HIWORD(v61) = *(_WORD *)(Pool2 + 4);
      v12 = 0LL;
      v13 = (int)UsbhSyncSendCommand(a1, (__int64)&v61, Pool2, (_WORD *)(Pool2 + 4), v59, (_DWORD *)&v60 + 1);
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( a1 )
        {
          v14 = *(_QWORD *)(a1 + 64);
          if ( v14 )
          {
            LODWORD(v60) = 1329877100;
            v15 = 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884))
                + *(_QWORD *)(v14 + 888);
            *(_DWORD *)v15 = 1329877100;
            *(_QWORD *)(v15 + 8) = 0LL;
            *(_QWORD *)(v15 + 16) = v4;
            *(_QWORD *)(v15 + 24) = 1383420738LL;
          }
        }
      }
      v16 = KeAcquireSpinLockRaiseToDpc(&HubG);
      qword_140070600 = (__int64)&dword_140070608;
      if ( (UsbhLogMask & 8) != 0 )
      {
        if ( a1 )
        {
          v17 = *(_QWORD *)(a1 + 64);
          if ( v17 )
          {
            LODWORD(v60) = 1413771367;
            v18 = 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884))
                + *(_QWORD *)(v17 + 888);
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
      if ( a2 > *((unsigned __int8 *)FdoExt(a1) + 2938) )
        goto LABEL_80;
      v20 = *((_QWORD *)v19 + 382);
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
            LODWORD(v60) = 1044672615;
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
      if ( v21 && (v12 = *(_QWORD *)(v21 + 392)) != 0 )
      {
        v24 = *(_QWORD *)(v12 + 64);
        if ( !v24 )
          UsbhTrapFatal_Dbg(*(_QWORD *)(v21 + 392), 0LL);
        if ( *(_DWORD *)v24 != 1329877064 )
          UsbhTrapFatal_Dbg(*(_QWORD *)(v21 + 392), *(_QWORD *)(v12 + 64));
        v25 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
        if ( v25 )
        {
          *(_DWORD *)v25 = 1668571500;
          *(_QWORD *)(v25 + 32) = v12;
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
        qword_140070600 = 0LL;
        KeReleaseSpinLock(&HubG, v16);
        v5 = *(_QWORD *)(v12 + 64);
        if ( !v5 )
          UsbhTrapFatal_Dbg(v12, 0LL);
        if ( *(_DWORD *)v5 != 1329877064 )
          UsbhTrapFatal_Dbg(v12, *(_QWORD *)(v12 + 64));
      }
      else
      {
LABEL_80:
        qword_140070600 = 0LL;
        KeReleaseSpinLock(&HubG, v16);
      }
      if ( (int)v13 >= 0 && v5 && *(_BYTE *)(v5 + 2740) )
      {
        v55 = *v11;
        v56 = v11[1];
        if ( ((v56 | *v11) & 8) != 0 )
        {
          v57 = FdoExt(a1);
          UsbhDispatch_HardResetEvent(a1, v57 + 566, 3LL);
        }
        if ( (v55 & 1) == 0 && (v56 & 1) != 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_q(
              WPP_GLOBAL_Control->DeviceExtension,
              v28,
              3,
              21,
              (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
              a1);
          }
          v29 = a2;
          byte_140070728 = 1;
          UsbhFlushPortChange(a1, a2, &v60);
          v58 = FdoExt(a1);
          UsbhDispatch_HardResetEvent(a1, v58 + 566, 3LL);
        }
        else
        {
          v29 = a2;
        }
      }
      else
      {
        v29 = a2;
      }
      if ( !v12 )
        goto LABEL_58;
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( a1 )
        {
          v30 = *(_QWORD *)(a1 + 64);
          if ( v30 )
          {
            LODWORD(v60) = 1329877109;
            v31 = *(_QWORD *)(v30 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v30 + 880)) & *(_DWORD *)(v30 + 884));
            *(_DWORD *)v31 = v60;
            *(_QWORD *)(v31 + 8) = 0LL;
            *(_QWORD *)(v31 + 16) = v12;
            *(_QWORD *)(v31 + 24) = 1383420738LL;
          }
        }
      }
      v32 = KeAcquireSpinLockRaiseToDpc(&HubG);
      qword_140070600 = (__int64)&dword_140070608;
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( a1 )
        {
          v33 = *(_QWORD *)(a1 + 64);
          if ( v33 )
          {
            LODWORD(v60) = 1348891236;
            v34 = *(_QWORD *)(v33 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v33 + 880)) & *(_DWORD *)(v33 + 884));
            *(_DWORD *)v34 = v60;
            *(_QWORD *)(v34 + 8) = 0LL;
            *(_QWORD *)(v34 + 16) = v12;
            *(_QWORD *)(v34 + 24) = 1383420738LL;
          }
        }
      }
      v35 = *(_QWORD *)(v12 + 64);
      if ( !v35 )
        UsbhTrapFatal_Dbg(v12, 0LL);
      if ( *(_DWORD *)v35 != 1329877064 )
        UsbhTrapFatal_Dbg(v12, *(_QWORD *)(v12 + 64));
      v36 = *(__int64 **)(v35 + 1272);
      if ( v36 == (__int64 *)(v35 + 1272) )
      {
LABEL_50:
        v39 = *(_DWORD *)(v35 + 1288);
        if ( v39 )
          *(_DWORD *)(v35 + 1288) = v39 - 1;
        goto LABEL_56;
      }
      while ( 1 )
      {
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          if ( a1 )
          {
            v37 = *(_QWORD *)(a1 + 64);
            if ( v37 )
            {
              LODWORD(v60) = 1064591724;
              v38 = *(_QWORD *)(v37 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v37 + 880)) & *(_DWORD *)(v37 + 884));
              *(_DWORD *)v38 = v60;
              *(_QWORD *)(v38 + 8) = 0LL;
              *(_QWORD *)(v38 + 16) = v35;
              *(_QWORD *)(v38 + 24) = 1383420738LL;
            }
          }
        }
        if ( *((_DWORD *)v36 + 4) == 1383420738 && !v36[4] )
          break;
        v36 = (__int64 *)*v36;
        if ( v36 == (__int64 *)(v35 + 1272) )
          goto LABEL_50;
      }
      v40 = (__int64 *)*v36;
      if ( *(__int64 **)(*v36 + 8) == v36 )
      {
        v41 = (__int64 **)v36[1];
        if ( *v41 == v36 )
        {
          *v41 = v40;
          v40[1] = (__int64)v41;
          ExFreePoolWithTag(v36 - 1, 0);
LABEL_56:
          if ( *(_QWORD *)(v35 + 1272) == v35 + 1272 && !*(_DWORD *)(v35 + 1288) )
            KeSetEvent((PRKEVENT)(v35 + 1296), 0, 0);
          qword_140070600 = 0LL;
          KeReleaseSpinLock(&HubG, v32);
LABEL_58:
          v42 = SHIDWORD(v60);
          if ( (UsbhLogMask & 4) != 0 )
          {
            if ( a1 )
            {
              v43 = *(_QWORD *)(a1 + 64);
              if ( v43 )
              {
                LODWORD(v60) = 1953722449;
                v44 = 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v43 + 880)) & *(_DWORD *)(v43 + 884))
                    + *(_QWORD *)(v43 + 888);
                *(_DWORD *)v44 = v60;
                *(_QWORD *)(v44 + 8) = 0LL;
                *(_QWORD *)(v44 + 16) = v13;
                *(_QWORD *)(v44 + 24) = v42;
              }
            }
          }
          if ( (int)v13 < 0 || (v45 = v11[2], (_DWORD)v45 == 4) )
          {
            if ( (v13 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v13) )
            {
              Log(a1, 4, 1366324018, v11[2], v42);
              UsbhException(a1, v29, 8, (_DWORD)v11, 10, v13, v42, (__int64)usbfile_bus_c, 1649, 0);
            }
            if ( (int)v13 >= 0 )
            {
              v49 = v11[1];
              *(_WORD *)(a3 + 2) = v49;
              v50 = *v11;
              *(_WORD *)a3 = v50;
              if ( (UsbhLogMask & 4) != 0 )
              {
                if ( a1 )
                {
                  v51 = *(_QWORD *)(a1 + 64);
                  if ( v51 )
                  {
                    LODWORD(v60) = 1953722448;
                    v52 = 32LL
                        * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v51 + 880)) & *(_DWORD *)(v51 + 884))
                        + *(_QWORD *)(v51 + 888);
                    *(_DWORD *)v52 = v60;
                    *(_QWORD *)(v52 + 8) = 0LL;
                    *(_QWORD *)(v52 + 16) = v49;
                    *(_QWORD *)(v52 + 24) = v50;
                  }
                }
              }
            }
            if ( a4 )
              *a4 = v42;
            ExFreePoolWithTag(v11, 0);
            return (unsigned int)v13;
          }
          else
          {
            if ( (UsbhLogMask & 4) != 0 )
            {
              if ( a1 )
              {
                v46 = *(_QWORD *)(a1 + 64);
                if ( v46 )
                {
                  LODWORD(v60) = 829648977;
                  v47 = 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v46 + 880)) & *(_DWORD *)(v46 + 884))
                      + *(_QWORD *)(v46 + 888);
                  *(_DWORD *)v47 = v60;
                  *(_QWORD *)(v47 + 8) = 0LL;
                  *(_QWORD *)(v47 + 16) = v45;
                  *(_QWORD *)(v47 + 24) = v42;
                }
              }
            }
            UsbhException(a1, v29, 9, (_DWORD)v11, 10, v13, v42, (__int64)usbfile_bus_c, 1635, 0, v60, v61);
            if ( a4 )
              *a4 = v42;
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
        v53 = *(_QWORD *)(a1 + 64);
        if ( v53 )
        {
          LODWORD(v60) = 1818325073;
          v54 = *(_QWORD *)(v53 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v53 + 880)) & *(_DWORD *)(v53 + 884));
          *(_DWORD *)v54 = 1818325073;
          *(_QWORD *)(v54 + 8) = 0LL;
          *(_QWORD *)(v54 + 16) = 0LL;
          *(_QWORD *)(v54 + 24) = 0LL;
        }
      }
    }
    if ( a4 )
      *a4 = -1073737728;
    return 3221225626LL;
  }
}
