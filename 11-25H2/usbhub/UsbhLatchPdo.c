/*
 * XREFs of UsbhLatchPdo @ 0x1400082B0
 * Callers:
 *     UsbhSyncResumeDeviceInternal @ 0x1400111E0 (UsbhSyncResumeDeviceInternal.c)
 *     UsbhPortResumeComplete @ 0x1400130F0 (UsbhPortResumeComplete.c)
 *     UsbhIdleIrp_NoIrp @ 0x14001634C (UsbhIdleIrp_NoIrp.c)
 *     UsbhSS_SignalPdoWake @ 0x1400169D0 (UsbhSS_SignalPdoWake.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x14001EF24 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x14001FB50 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhInsertQueuePortChangeObject @ 0x140026F80 (UsbhInsertQueuePortChangeObject.c)
 *     UsbhSshResumePort @ 0x140028064 (UsbhSshResumePort.c)
 *     UsbhFdoSetD0Cold @ 0x14002C4AC (UsbhFdoSetD0Cold.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1400325B8 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhBusIf_SuspendChildHub @ 0x140034DF0 (UsbhBusIf_SuspendChildHub.c)
 *     UsbhBusIf_ResumeChildHub @ 0x140037F80 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhFdoSetD0Warm @ 0x140038FD4 (UsbhFdoSetD0Warm.c)
 *     UsbhFdoResetPdoPort @ 0x140040B3C (UsbhFdoResetPdoPort.c)
 *     UsbhBusSuspend_Action @ 0x14004178C (UsbhBusSuspend_Action.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x140043B5C (UsbhHubSyncSuspendPortEvent.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x140044B94 (Usbh_PCE_BusDisconnect_Action.c)
 *     UsbhCycleDevicePort @ 0x1400469BC (UsbhCycleDevicePort.c)
 *     UsbhPortResumeTimeout @ 0x140047ED8 (UsbhPortResumeTimeout.c)
 *     UsbhCompletePdoWakeIrps @ 0x14004A6F0 (UsbhCompletePdoWakeIrps.c)
 *     UsbhIoctlCyclePort @ 0x14004D390 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x14004DEE8 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhDriverNotFoundTimer @ 0x14004FAD0 (UsbhDriverNotFoundTimer.c)
 *     UsbhGetHubNodeInfo @ 0x140054FF4 (UsbhGetHubNodeInfo.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x14003A52C (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhLatchPdo(__int64 a1, unsigned __int16 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 v7; // rsi
  __int64 v9; // r9
  __int64 v10; // rcx
  KIRQL v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 Pool2; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rdx

  v4 = 0LL;
  v5 = a4;
  v7 = a2;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_DWORD *)v10 = 1329877100;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = a2;
        *(_QWORD *)(v10 + 24) = v5;
      }
    }
  }
  v11 = KeAcquireSpinLockRaiseToDpc(&HubG);
  qword_14006F5A0 = (__int64)&dword_14006F5A8;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
        *(_DWORD *)v13 = 1413771367;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = v7;
        *(_QWORD *)(v13 + 24) = 0LL;
      }
    }
  }
  if ( (_WORD)v7 )
  {
    v14 = FdoExt(a1);
    if ( (unsigned __int16)v7 <= *(unsigned __int8 *)(FdoExt(a1) + 2938) )
    {
      v15 = *(_QWORD *)(v14 + 3056);
      if ( v15 )
      {
        v16 = v15 + 2928 * v7 - 2928;
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
              *(_DWORD *)v18 = 1044672615;
              *(_QWORD *)(v18 + 8) = 0LL;
              *(_QWORD *)(v18 + 16) = v7;
              *(_QWORD *)(v18 + 24) = v16;
            }
          }
        }
        if ( v16 )
        {
          v4 = *(_QWORD *)(v16 + 392);
          if ( v4 )
          {
            v19 = *(_QWORD *)(v4 + 64);
            if ( !v19 )
              UsbhTrapFatal_Dbg(v4, 0LL);
            if ( *(_DWORD *)v19 != 1329877064 )
              UsbhTrapFatal_Dbg(v4, *(_QWORD *)(v4 + 64));
            Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
            if ( Pool2 )
            {
              *(_DWORD *)Pool2 = 1668571500;
              *(_QWORD *)(Pool2 + 32) = v4;
              *(_DWORD *)(Pool2 + 24) = v5;
              *(_QWORD *)(Pool2 + 40) = a3;
              v21 = (_QWORD *)(Pool2 + 8);
              v22 = *(_QWORD **)(v19 + 1280);
              if ( *v22 != v19 + 1272 )
                __fastfail(3u);
              *v21 = v19 + 1272;
              v21[1] = v22;
              *v22 = v21;
              *(_QWORD *)(v19 + 1280) = v21;
            }
            else
            {
              ++*(_DWORD *)(v19 + 1288);
            }
          }
        }
      }
    }
  }
  qword_14006F5A0 = 0LL;
  KeReleaseSpinLock(&HubG, v11);
  return v4;
}
