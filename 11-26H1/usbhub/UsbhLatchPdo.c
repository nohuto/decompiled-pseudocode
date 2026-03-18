/*
 * XREFs of UsbhLatchPdo @ 0x140017B30
 * Callers:
 *     UsbhInsertQueuePortChangeObject @ 0x1400040A0 (UsbhInsertQueuePortChangeObject.c)
 *     UsbhSshResumePort @ 0x1400046E8 (UsbhSshResumePort.c)
 *     UsbhPortResumeComplete @ 0x14000B520 (UsbhPortResumeComplete.c)
 *     UsbhIdleIrp_NoIrp @ 0x14000F28C (UsbhIdleIrp_NoIrp.c)
 *     UsbhSS_SignalPdoWake @ 0x14000FA88 (UsbhSS_SignalPdoWake.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1400120E4 (UsbhSyncResumeDeviceInternal.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x140024AB8 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x140025250 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhFdoSetD0Cold @ 0x140030750 (UsbhFdoSetD0Cold.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1400362D0 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhBusIf_SuspendChildHub @ 0x1400370A0 (UsbhBusIf_SuspendChildHub.c)
 *     UsbhFdoSetPowerDx_Action @ 0x14003743C (UsbhFdoSetPowerDx_Action.c)
 *     UsbhFdoSetD0Warm @ 0x140037E34 (UsbhFdoSetD0Warm.c)
 *     UsbhFdoResetPdoPort @ 0x14004063C (UsbhFdoResetPdoPort.c)
 *     UsbhBusSuspend_Action @ 0x1400412BC (UsbhBusSuspend_Action.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x140043680 (UsbhHubSyncSuspendPortEvent.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1400446B8 (Usbh_PCE_BusDisconnect_Action.c)
 *     UsbhCycleDevicePort @ 0x1400464FC (UsbhCycleDevicePort.c)
 *     UsbhPortResumeTimeout @ 0x140047A28 (UsbhPortResumeTimeout.c)
 *     UsbhCompletePdoWakeIrps @ 0x14004A2A4 (UsbhCompletePdoWakeIrps.c)
 *     UsbhIoctlCyclePort @ 0x14004CF64 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x14004DAC4 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhDriverNotFoundTimer @ 0x14004FFA0 (UsbhDriverNotFoundTimer.c)
 *     UsbhGetHubNodeInfo @ 0x140055574 (UsbhGetHubNodeInfo.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x140039F64 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhLatchPdo(__int64 a1, unsigned __int16 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 v7; // rsi
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  KIRQL v14; // r15
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 Pool2; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rdx

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
        *(_QWORD *)(v10 + 16) = v7;
        *(_QWORD *)(v10 + 24) = v5;
      }
    }
  }
  v14 = KeAcquireSpinLockRaiseToDpc(&HubG);
  qword_140070600 = (__int64)&dword_140070608;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v11 = 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884))
            + *(_QWORD *)(v11 + 888);
        *(_DWORD *)v11 = 1413771367;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 16) = v7;
        *(_QWORD *)(v11 + 24) = 0LL;
      }
    }
  }
  if ( (_WORD)v7 )
  {
    v15 = FdoExt(a1, v11, v12, v13);
    if ( (unsigned __int16)v7 <= *(unsigned __int8 *)(FdoExt(a1, v16, v17, v18) + 2938) )
    {
      v19 = *(_QWORD *)(v15 + 3056);
      if ( v19 )
      {
        v20 = v19 + 2928 * v7 - 2928;
        if ( (UsbhLogMask & 8) != 0 )
        {
          if ( a1 )
          {
            v21 = *(_QWORD *)(a1 + 64);
            if ( v21 )
            {
              v22 = *(_QWORD *)(v21 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
              *(_DWORD *)v22 = 1044672615;
              *(_QWORD *)(v22 + 8) = 0LL;
              *(_QWORD *)(v22 + 16) = v7;
              *(_QWORD *)(v22 + 24) = v20;
            }
          }
        }
        if ( v20 )
        {
          v4 = *(_QWORD *)(v20 + 392);
          if ( v4 )
          {
            v23 = *(_QWORD *)(v4 + 64);
            if ( !v23 )
              UsbhTrapFatal_Dbg(v4, 0LL);
            if ( *(_DWORD *)v23 != 1329877064 )
              UsbhTrapFatal_Dbg(v4, *(_QWORD *)(v4 + 64));
            Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
            if ( Pool2 )
            {
              *(_DWORD *)Pool2 = 1668571500;
              *(_QWORD *)(Pool2 + 32) = v4;
              *(_DWORD *)(Pool2 + 24) = v5;
              *(_QWORD *)(Pool2 + 40) = a3;
              v25 = (_QWORD *)(Pool2 + 8);
              v26 = *(_QWORD **)(v23 + 1280);
              if ( *v26 != v23 + 1272 )
                __fastfail(3u);
              *v25 = v23 + 1272;
              v25[1] = v26;
              *v26 = v25;
              *(_QWORD *)(v23 + 1280) = v25;
            }
            else
            {
              ++*(_DWORD *)(v23 + 1288);
            }
          }
        }
      }
    }
  }
  qword_140070600 = 0LL;
  KeReleaseSpinLock(&HubG, v14);
  return v4;
}
