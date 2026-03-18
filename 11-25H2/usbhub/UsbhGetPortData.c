/*
 * XREFs of UsbhGetPortData @ 0x140008540
 * Callers:
 *     UsbhDisablePortIndicators @ 0x1400010C0 (UsbhDisablePortIndicators.c)
 *     Usbh_BusPnpStop_PdoEvent @ 0x1400011A4 (Usbh_BusPnpStop_PdoEvent.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1400095A4 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhResetPortData @ 0x140010110 (UsbhResetPortData.c)
 *     UsbhHubIsr @ 0x1400113D0 (UsbhHubIsr.c)
 *     UsbhSetPortData @ 0x140015D80 (UsbhSetPortData.c)
 *     UsbhFdoValidateConnectionPdo @ 0x14001C3D0 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x14001EF24 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhSshResumeDownstream @ 0x14002A3C4 (UsbhSshResumeDownstream.c)
 *     UsbhFdoSetD0Cold @ 0x14002C4AC (UsbhFdoSetD0Cold.c)
 *     UsbhSetSqmEnumerationData @ 0x14002E990 (UsbhSetSqmEnumerationData.c)
 *     UsbhPCE_Suspend @ 0x140035154 (UsbhPCE_Suspend.c)
 *     UsbhSyncResumePort @ 0x1400358D0 (UsbhSyncResumePort.c)
 *     UsbhSelectConfigOrInterfaceComplete @ 0x1400385D0 (UsbhSelectConfigOrInterfaceComplete.c)
 *     UsbhFdoSetD0Warm @ 0x140038FD4 (UsbhFdoSetD0Warm.c)
 *     UsbhCancelOutOfBandwidthTimer @ 0x14003A9EC (UsbhCancelOutOfBandwidthTimer.c)
 *     UsbhGetExtendedHubInformation @ 0x14003CA4C (UsbhGetExtendedHubInformation.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x14003E134 (UsbhSetOutOfBandwidthTimer.c)
 *     UsbhEnablePortIndicators @ 0x14003F418 (UsbhEnablePortIndicators.c)
 *     UsbhPindicatorWorker @ 0x14003F6D0 (UsbhPindicatorWorker.c)
 *     UsbhAutoOvercurrentResetWorker @ 0x14003FD90 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDeviceOvercurrentPopup @ 0x14003FE34 (UsbhDeviceOvercurrentPopup.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x14003FF00 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhOvercurrentResetWorker @ 0x14003FF90 (UsbhOvercurrentResetWorker.c)
 *     UsbhQueueDriverOvercurrent @ 0x140040200 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x140040380 (UsbhQueueOvercurrentReset.c)
 *     UsbhFdoRecordFailure @ 0x140040944 (UsbhFdoRecordFailure.c)
 *     UsbhPCE_BusDisconnect @ 0x140043EDC (UsbhPCE_BusDisconnect.c)
 *     UsbhPCE_BusReset @ 0x140043F9C (UsbhPCE_BusReset.c)
 *     UsbhPCE_HW_Stop @ 0x1400441E4 (UsbhPCE_HW_Stop.c)
 *     UsbhPCE_QueueChangeObject @ 0x1400442B4 (UsbhPCE_QueueChangeObject.c)
 *     UsbhPCE_QueueDriverReset @ 0x1400443C0 (UsbhPCE_QueueDriverReset.c)
 *     UsbhPCE_ResumeDone @ 0x1400444A8 (UsbhPCE_ResumeDone.c)
 *     UsbhPCE_ResumeTimeout @ 0x140044568 (UsbhPCE_ResumeTimeout.c)
 *     UsbhPCE_SoftDisconnect @ 0x1400446D8 (UsbhPCE_SoftDisconnect.c)
 *     UsbhQueueSoftConnectChange @ 0x1400448AC (UsbhQueueSoftConnectChange.c)
 *     UsbhCycleDevicePort @ 0x1400469BC (UsbhCycleDevicePort.c)
 *     UsbhDeregisterPdo @ 0x140046C6C (UsbhDeregisterPdo.c)
 *     UsbhFinishStart @ 0x140046F2C (UsbhFinishStart.c)
 *     UsbhSoftDisconnectPdo @ 0x1400487A0 (UsbhSoftDisconnectPdo.c)
 *     UsbhSyncResetDeviceInternal @ 0x1400488F4 (UsbhSyncResetDeviceInternal.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x140049308 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1400494A8 (Usbh_BusRemove_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x14004986C (Usbh_PdoRemove_PdoEvent.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x140049AB8 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhResetNotifyCompletion @ 0x14004C970 (UsbhResetNotifyCompletion.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x14004DC58 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x14004E304 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhDriverNotFoundWorker @ 0x14004FB80 (UsbhDriverNotFoundWorker.c)
 *     UsbhResetNotifyDownstreamHub @ 0x140051194 (UsbhResetNotifyDownstreamHub.c)
 *     UsbhGetDeviceNodeInfo @ 0x140054D58 (UsbhGetDeviceNodeInfo.c)
 *     UsbhGetHubNodeInfo @ 0x140054FF4 (UsbhGetHubNodeInfo.c)
 *     UsbhWmiDoNothing @ 0x140055B70 (UsbhWmiDoNothing.c)
 *     UsbhWmiEnumerationFailure @ 0x140055D50 (UsbhWmiEnumerationFailure.c)
 *     UsbhWmiInsufficentBandwidth @ 0x140055DD0 (UsbhWmiInsufficentBandwidth.c)
 *     UsbhWmiInsufficentPower @ 0x140055E50 (UsbhWmiInsufficentPower.c)
 *     UsbhNotEnoughBandwidth_Popup @ 0x140056580 (UsbhNotEnoughBandwidth_Popup.c)
 *     UsbhNotEnoughPowerPopup @ 0x140056610 (UsbhNotEnoughPowerPopup.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 */

__int64 __fastcall UsbhGetPortData(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx

  v2 = a2;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v4 = *(_QWORD *)(a1 + 64);
      if ( v4 )
      {
        v5 = *(_QWORD *)(v4 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v4 + 880)) & *(_DWORD *)(v4 + 884));
        *(_DWORD *)v5 = 1413771367;
        *(_QWORD *)(v5 + 8) = 0LL;
        *(_QWORD *)(v5 + 16) = v2;
        *(_QWORD *)(v5 + 24) = 0LL;
      }
    }
  }
  if ( !(_WORD)v2 )
    return 0LL;
  v6 = FdoExt(a1);
  if ( (unsigned __int16)v2 > *(unsigned __int8 *)(FdoExt(a1) + 2938) )
    return 0LL;
  v7 = *(_QWORD *)(v6 + 3056);
  if ( !v7 )
    return 0LL;
  if ( (UsbhLogMask & 8) != 0 && a1 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
      *(_DWORD *)v9 = 1044672615;
      *(_QWORD *)(v9 + 8) = 0LL;
      *(_QWORD *)(v9 + 16) = v2;
      *(_QWORD *)(v9 + 24) = v7 + 2928 * v2 - 2928;
    }
  }
  return v7 + 2928 * v2 - 2928;
}
