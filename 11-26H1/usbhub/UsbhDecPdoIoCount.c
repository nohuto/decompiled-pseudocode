/*
 * XREFs of UsbhDecPdoIoCount @ 0x140007EA0
 * Callers:
 *     UsbhDeletePdo @ 0x140007770 (UsbhDeletePdo.c)
 *     UsbhFdoValidateConnectionPdo @ 0x140007C8C (UsbhFdoValidateConnectionPdo.c)
 *     UsbhPdoPower_WaitWake @ 0x14000F7A0 (UsbhPdoPower_WaitWake.c)
 *     UsbhCompletePdoWakeIrp @ 0x14001087C (UsbhCompletePdoWakeIrp.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x140013D04 (UsbhIdleIrp_ReleaseIrp.c)
 *     UsbhPdoDevicePowerState @ 0x1400156F0 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x140016CD0 (UsbhPdoSetD0.c)
 *     UsbhFdoReturnPortStatus @ 0x140017DD0 (UsbhFdoReturnPortStatus.c)
 *     UsbhFdoUrbPdoFilter @ 0x1400187E0 (UsbhFdoUrbPdoFilter.c)
 *     UsbhPdoInternalDeviceControl @ 0x140018B20 (UsbhPdoInternalDeviceControl.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x140019724 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhFdoGetMsDescriptorPdo @ 0x1400357EC (UsbhFdoGetMsDescriptorPdo.c)
 *     UsbhSelectConfigOrInterfaceComplete @ 0x140036A90 (UsbhSelectConfigOrInterfaceComplete.c)
 *     UsbhPdoSystemControl @ 0x140037320 (UsbhPdoSystemControl.c)
 *     UsbhDeleteOrphanPdo @ 0x14003A118 (UsbhDeleteOrphanPdo.c)
 *     UsbhFdoReturnDeviceHandle @ 0x14003B41C (UsbhFdoReturnDeviceHandle.c)
 *     UsbhFdoReturnTtDeviceHandle @ 0x14003B4D4 (UsbhFdoReturnTtDeviceHandle.c)
 *     UsbhFdoCyclePdoPort @ 0x140040084 (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoHandleFreeDumpDataIoctl @ 0x140040208 (UsbhFdoHandleFreeDumpDataIoctl.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x14004026C (UsbhFdoHandleGetDumpDataIoctl.c)
 *     UsbhFdoHandleNotifyForwardProgress @ 0x14004035C (UsbhFdoHandleNotifyForwardProgress.c)
 *     UsbhFdoRecordFailure @ 0x140040444 (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x14004063C (UsbhFdoResetPdoPort.c)
 *     UsbhFdoReturnControllerName @ 0x140040A5C (UsbhFdoReturnControllerName.c)
 *     UsbhFdoReturnDeviceBusInfo @ 0x140040AC0 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x140040B80 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhFdoReturnHubCount @ 0x140040D9C (UsbhFdoReturnHubCount.c)
 *     UsbhFdoReturnHubName @ 0x140040E44 (UsbhFdoReturnHubName.c)
 *     UsbhFdoReturnRootHubPdo @ 0x140040EE8 (UsbhFdoReturnRootHubPdo.c)
 *     UsbhFdoReturnTopologyAddress @ 0x140040FD8 (UsbhFdoReturnTopologyAddress.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x140041094 (UsbhFdoSubmitPdoIdleNotification.c)
 *     UsbhCompleteCanceledPdoWakeIrp @ 0x14004B790 (UsbhCompleteCanceledPdoWakeIrp.c)
 *     UsbhPdoPower_Sequence @ 0x14004BA00 (UsbhPdoPower_Sequence.c)
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x14004BC70 (UsbhPdoUnblockPendedD0IrpWI.c)
 *     UsbhPdoDeviceControl @ 0x14005D200 (UsbhPdoDeviceControl.c)
 *     UsbhPdoSuccess @ 0x14005DC10 (UsbhPdoSuccess.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x140039F64 (UsbhTrapFatal_Dbg.c)
 *     USBHUB_TriggerCallBacks @ 0x14004F3E4 (USBHUB_TriggerCallBacks.c)
 */

void __fastcall UsbhDecPdoIoCount(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  KIRQL v6; // r15
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx
  _QWORD *v9; // r8
  int v10; // eax

  if ( !BugCheckParameter3 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v4 = *(_QWORD *)(BugCheckParameter3 + 64);
  if ( !v4 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, 0LL);
  if ( *(_DWORD *)v4 != 1329877064 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 64));
  v5 = (_QWORD *)(v4 + 1224);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 1216));
  v7 = *(_QWORD **)(v4 + 1224);
  if ( v7 != (_QWORD *)(v4 + 1224) && v7 )
  {
    while ( v7 != v5 )
    {
      v8 = (_QWORD *)*v7;
      if ( v7[2] == BugCheckParameter4 )
      {
        if ( (_QWORD *)v8[1] != v7 || (v9 = (_QWORD *)v7[1], (_QWORD *)*v9 != v7) )
          __fastfail(3u);
        *v9 = v8;
        v8[1] = v9;
        ExFreePoolWithTag(v7 - 1, 0);
        goto LABEL_12;
      }
      v7 = (_QWORD *)*v7;
    }
  }
  v10 = *(_DWORD *)(v4 + 1264);
  if ( !v10 )
  {
    USBHUB_TriggerCallBacks(BugCheckParameter3);
    KeBugCheckEx(0xFEu, 8uLL, 4uLL, BugCheckParameter3, BugCheckParameter4);
  }
  *(_DWORD *)(v4 + 1264) = v10 - 1;
LABEL_12:
  if ( (_QWORD *)*v5 != v5 || *(_DWORD *)(v4 + 1264) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 1216), v6);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 1216), v6);
    KeSetEvent((PRKEVENT)(v4 + 1240), 0, 0);
  }
}
