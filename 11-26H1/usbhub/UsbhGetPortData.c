/*
 * XREFs of UsbhGetPortData @ 0x1400186A0
 * Callers:
 *     UsbhFdoValidateConnectionPdo @ 0x140007C8C (UsbhFdoValidateConnectionPdo.c)
 *     UsbhResetPortData @ 0x1400087E4 (UsbhResetPortData.c)
 *     UsbhSshResumeDownstream @ 0x140008C2C (UsbhSshResumeDownstream.c)
 *     UsbhSetPortData @ 0x14000E8D4 (UsbhSetPortData.c)
 *     UsbhSyncResumePort @ 0x140010E74 (UsbhSyncResumePort.c)
 *     UsbhPCE_Suspend @ 0x140011294 (UsbhPCE_Suspend.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x140019724 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x140024AB8 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhSetSqmEnumerationData @ 0x14002BA80 (UsbhSetSqmEnumerationData.c)
 *     UsbhHubIsr @ 0x14002F9E0 (UsbhHubIsr.c)
 *     UsbhFdoSetD0Cold @ 0x140030750 (UsbhFdoSetD0Cold.c)
 *     UsbhSelectConfigOrInterfaceComplete @ 0x140036A90 (UsbhSelectConfigOrInterfaceComplete.c)
 *     UsbhFdoSetD0Warm @ 0x140037E34 (UsbhFdoSetD0Warm.c)
 *     Usbh_BusPnpStop_PdoEvent @ 0x1400386BC (Usbh_BusPnpStop_PdoEvent.c)
 *     UsbhDisablePortIndicators @ 0x140038C64 (UsbhDisablePortIndicators.c)
 *     UsbhCancelOutOfBandwidthTimer @ 0x14003A44C (UsbhCancelOutOfBandwidthTimer.c)
 *     UsbhGetExtendedHubInformation @ 0x14003C4C4 (UsbhGetExtendedHubInformation.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x14003DBD8 (UsbhSetOutOfBandwidthTimer.c)
 *     UsbhEnablePortIndicators @ 0x14003EF00 (UsbhEnablePortIndicators.c)
 *     UsbhPindicatorWorker @ 0x14003F1C0 (UsbhPindicatorWorker.c)
 *     UsbhAutoOvercurrentResetWorker @ 0x14003F880 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDeviceOvercurrentPopup @ 0x14003F924 (UsbhDeviceOvercurrentPopup.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x14003F9F0 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhOvercurrentResetWorker @ 0x14003FA80 (UsbhOvercurrentResetWorker.c)
 *     UsbhQueueDriverOvercurrent @ 0x14003FCE0 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x14003FE60 (UsbhQueueOvercurrentReset.c)
 *     UsbhFdoRecordFailure @ 0x140040444 (UsbhFdoRecordFailure.c)
 *     UsbhPCE_BusDisconnect @ 0x140043A00 (UsbhPCE_BusDisconnect.c)
 *     UsbhPCE_BusReset @ 0x140043AC0 (UsbhPCE_BusReset.c)
 *     UsbhPCE_HW_Stop @ 0x140043D08 (UsbhPCE_HW_Stop.c)
 *     UsbhPCE_QueueChangeObject @ 0x140043DD8 (UsbhPCE_QueueChangeObject.c)
 *     UsbhPCE_QueueDriverReset @ 0x140043EE4 (UsbhPCE_QueueDriverReset.c)
 *     UsbhPCE_ResumeDone @ 0x140043FCC (UsbhPCE_ResumeDone.c)
 *     UsbhPCE_ResumeTimeout @ 0x14004408C (UsbhPCE_ResumeTimeout.c)
 *     UsbhPCE_SoftDisconnect @ 0x1400441FC (UsbhPCE_SoftDisconnect.c)
 *     UsbhQueueSoftConnectChange @ 0x1400443D0 (UsbhQueueSoftConnectChange.c)
 *     UsbhCycleDevicePort @ 0x1400464FC (UsbhCycleDevicePort.c)
 *     UsbhDeregisterPdo @ 0x1400467AC (UsbhDeregisterPdo.c)
 *     UsbhFinishStart @ 0x140046A70 (UsbhFinishStart.c)
 *     UsbhSoftDisconnectPdo @ 0x1400482F0 (UsbhSoftDisconnectPdo.c)
 *     UsbhSyncResetDeviceInternal @ 0x140048448 (UsbhSyncResetDeviceInternal.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x140048E68 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_BusRemove_PdoEvent @ 0x140049018 (Usbh_BusRemove_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1400493F8 (Usbh_PdoRemove_PdoEvent.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x14004964C (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhResetNotifyCompletion @ 0x14004C544 (UsbhResetNotifyCompletion.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x14004D834 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x14004DEE0 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhDriverNotFoundWorker @ 0x140050050 (UsbhDriverNotFoundWorker.c)
 *     UsbhResetNotifyDownstreamHub @ 0x140051684 (UsbhResetNotifyDownstreamHub.c)
 *     UsbhGetDeviceNodeInfo @ 0x1400552E0 (UsbhGetDeviceNodeInfo.c)
 *     UsbhGetHubNodeInfo @ 0x140055574 (UsbhGetHubNodeInfo.c)
 *     UsbhWmiDoNothing @ 0x1400560F0 (UsbhWmiDoNothing.c)
 *     UsbhWmiEnumerationFailure @ 0x1400562B0 (UsbhWmiEnumerationFailure.c)
 *     UsbhWmiInsufficentBandwidth @ 0x140056330 (UsbhWmiInsufficentBandwidth.c)
 *     UsbhWmiInsufficentPower @ 0x1400563B0 (UsbhWmiInsufficentPower.c)
 *     UsbhNotEnoughBandwidth_Popup @ 0x140056AE0 (UsbhNotEnoughBandwidth_Popup.c)
 *     UsbhNotEnoughPowerPopup @ 0x140056B70 (UsbhNotEnoughPowerPopup.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

__int64 __fastcall UsbhGetPortData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx

  v4 = (unsigned __int16)a2;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      a2 = *(_QWORD *)(a1 + 64);
      if ( a2 )
      {
        a2 = 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(a2 + 880)) & *(_DWORD *)(a2 + 884))
           + *(_QWORD *)(a2 + 888);
        *(_DWORD *)a2 = 1413771367;
        *(_QWORD *)(a2 + 8) = 0LL;
        *(_QWORD *)(a2 + 16) = v4;
        *(_QWORD *)(a2 + 24) = 0LL;
      }
    }
  }
  if ( !(_WORD)v4 )
    return 0LL;
  v6 = FdoExt(a1, a2, a3, a4);
  if ( (unsigned __int16)v4 > *(unsigned __int8 *)(FdoExt(a1, v7, v8, v9) + 2938) )
    return 0LL;
  v10 = *(_QWORD *)(v6 + 3056);
  if ( !v10 )
    return 0LL;
  if ( (UsbhLogMask & 8) != 0 && a1 )
  {
    v11 = *(_QWORD *)(a1 + 64);
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
      *(_DWORD *)v12 = 1044672615;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = v4;
      *(_QWORD *)(v12 + 24) = v10 + 2928 * v4 - 2928;
    }
  }
  return v10 + 2928 * v4 - 2928;
}
