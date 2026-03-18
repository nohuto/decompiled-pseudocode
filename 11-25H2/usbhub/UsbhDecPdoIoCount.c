/*
 * XREFs of UsbhDecPdoIoCount @ 0x14000F830
 * Callers:
 *     UsbhFdoUrbPdoFilter @ 0x140008670 (UsbhFdoUrbPdoFilter.c)
 *     UsbhPdoInternalDeviceControl @ 0x1400089B0 (UsbhPdoInternalDeviceControl.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1400095A4 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhFdoReturnPortStatus @ 0x140009E40 (UsbhFdoReturnPortStatus.c)
 *     UsbhCompletePdoWakeIrp @ 0x14000E4EC (UsbhCompletePdoWakeIrp.c)
 *     UsbhDeletePdo @ 0x14000E690 (UsbhDeletePdo.c)
 *     UsbhPdoDevicePowerState @ 0x14000EBA4 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x1400106D0 (UsbhPdoSetD0.c)
 *     UsbhFdoGetMsDescriptorPdo @ 0x14001107C (UsbhFdoGetMsDescriptorPdo.c)
 *     UsbhPdoPower_WaitWake @ 0x1400161E0 (UsbhPdoPower_WaitWake.c)
 *     UsbhFdoValidateConnectionPdo @ 0x14001C3D0 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x140033E40 (UsbhIdleIrp_ReleaseIrp.c)
 *     UsbhSelectConfigOrInterfaceComplete @ 0x1400385D0 (UsbhSelectConfigOrInterfaceComplete.c)
 *     UsbhPdoSystemControl @ 0x140038C90 (UsbhPdoSystemControl.c)
 *     UsbhDeleteOrphanPdo @ 0x14003A6DC (UsbhDeleteOrphanPdo.c)
 *     UsbhFdoReturnDeviceHandle @ 0x14003B9B4 (UsbhFdoReturnDeviceHandle.c)
 *     UsbhFdoReturnTtDeviceHandle @ 0x14003BA6C (UsbhFdoReturnTtDeviceHandle.c)
 *     UsbhFdoCyclePdoPort @ 0x1400405A0 (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoHandleFreeDumpDataIoctl @ 0x140040708 (UsbhFdoHandleFreeDumpDataIoctl.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x14004076C (UsbhFdoHandleGetDumpDataIoctl.c)
 *     UsbhFdoHandleNotifyForwardProgress @ 0x14004085C (UsbhFdoHandleNotifyForwardProgress.c)
 *     UsbhFdoRecordFailure @ 0x140040944 (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x140040B3C (UsbhFdoResetPdoPort.c)
 *     UsbhFdoReturnControllerName @ 0x140040F3C (UsbhFdoReturnControllerName.c)
 *     UsbhFdoReturnDeviceBusInfo @ 0x140040FA0 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x140041060 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhFdoReturnHubCount @ 0x140041270 (UsbhFdoReturnHubCount.c)
 *     UsbhFdoReturnHubName @ 0x140041318 (UsbhFdoReturnHubName.c)
 *     UsbhFdoReturnRootHubPdo @ 0x1400413B8 (UsbhFdoReturnRootHubPdo.c)
 *     UsbhFdoReturnTopologyAddress @ 0x1400414A8 (UsbhFdoReturnTopologyAddress.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x140041564 (UsbhFdoSubmitPdoIdleNotification.c)
 *     UsbhCompleteCanceledPdoWakeIrp @ 0x14004BBE0 (UsbhCompleteCanceledPdoWakeIrp.c)
 *     UsbhPdoPower_Sequence @ 0x14004BE50 (UsbhPdoPower_Sequence.c)
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x14004C0C0 (UsbhPdoUnblockPendedD0IrpWI.c)
 *     UsbhPdoDeviceControl @ 0x14005CC20 (UsbhPdoDeviceControl.c)
 *     UsbhPdoSuccess @ 0x14005D610 (UsbhPdoSuccess.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x14003A52C (UsbhTrapFatal_Dbg.c)
 *     USBHUB_TriggerCallBacks @ 0x14004EEC4 (USBHUB_TriggerCallBacks.c)
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
