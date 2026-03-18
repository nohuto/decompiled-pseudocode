/*
 * XREFs of UsbhException @ 0x140006C1C
 * Callers:
 *     UsbhPdoPnp_QueryInterface @ 0x140002A30 (UsbhPdoPnp_QueryInterface.c)
 *     UsbhHubDispatchPortEvent @ 0x140004D00 (UsbhHubDispatchPortEvent.c)
 *     UsbhHubRunPortChangeQueue @ 0x140005E40 (UsbhHubRunPortChangeQueue.c)
 *     UsbhQueryPortState @ 0x140007140 (UsbhQueryPortState.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1400095A4 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhHubProcessIsr @ 0x14000AC30 (UsbhHubProcessIsr.c)
 *     UsbhPdoSetD0 @ 0x1400106D0 (UsbhPdoSetD0.c)
 *     UsbhHubIsr @ 0x1400113D0 (UsbhHubIsr.c)
 *     UsbhResumeSuspendedPort @ 0x140011AE8 (UsbhResumeSuspendedPort.c)
 *     UsbhCreateDevice @ 0x140012398 (UsbhCreateDevice.c)
 *     UsbhResetPort @ 0x140012B44 (UsbhResetPort.c)
 *     UsbhPortConnect @ 0x140013B30 (UsbhPortConnect.c)
 *     UsbhPdoPnp_StartDevice @ 0x140017090 (UsbhPdoPnp_StartDevice.c)
 *     UsbhGetLanguageIdString @ 0x14001958C (UsbhGetLanguageIdString.c)
 *     UsbhGetProductIdString @ 0x14001A4C4 (UsbhGetProductIdString.c)
 *     UsbhGetSerialNumber @ 0x14001A728 (UsbhGetSerialNumber.c)
 *     UsbhGetDeviceInformation @ 0x14001A9A8 (UsbhGetDeviceInformation.c)
 *     UsbhSetupDevice @ 0x14001ADE8 (UsbhSetupDevice.c)
 *     UsbhReset2Complete @ 0x14001BA40 (UsbhReset2Complete.c)
 *     UsbhDisablePort @ 0x14001C650 (UsbhDisablePort.c)
 *     UsbhSuspendPort @ 0x14001CA88 (UsbhSuspendPort.c)
 *     UsbhInitializeDevice @ 0x14001CFD4 (UsbhInitializeDevice.c)
 *     UsbhIoctlGetHubCaps @ 0x14001EB4C (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x14001EF24 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x14001FB50 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1400202C0 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x140020DC0 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhFdoDeviceControl @ 0x140021D60 (UsbhFdoDeviceControl.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1400220E0 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlValidateParameters @ 0x140023120 (UsbhIoctlValidateParameters.c)
 *     UsbhSshSuspendHub @ 0x1400297BC (UsbhSshSuspendHub.c)
 *     UsbhSetHubRemoteWake @ 0x140029E28 (UsbhSetHubRemoteWake.c)
 *     UsbhSshResumeDownstream @ 0x14002A3C4 (UsbhSshResumeDownstream.c)
 *     UsbhSshResumeUpstream @ 0x14002A798 (UsbhSshResumeUpstream.c)
 *     UsbhFdoSetD0Cold @ 0x14002C4AC (UsbhFdoSetD0Cold.c)
 *     UsbhFdoColdStartPdo @ 0x14002CA60 (UsbhFdoColdStartPdo.c)
 *     UsbhFdoColdStartCheckPort @ 0x14002CFB0 (UsbhFdoColdStartCheckPort.c)
 *     UsbhFdoD0Worker_Action @ 0x14002F4B0 (UsbhFdoD0Worker_Action.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x140030B9C (UsbhFdoPower_PowerFailureEntry.c)
 *     UsbhSyncSuspendPdoPort @ 0x140034ED4 (UsbhSyncSuspendPdoPort.c)
 *     UsbhSyncResumePort @ 0x1400358D0 (UsbhSyncResumePort.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1400370D0 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhFdoSetD0Warm @ 0x140038FD4 (UsbhFdoSetD0Warm.c)
 *     UsbhPdoPnp_EnablePdo @ 0x14003A400 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhConfigureUsbHub @ 0x14003B208 (UsbhConfigureUsbHub.c)
 *     UsbhGetDescriptor @ 0x14003C51C (UsbhGetDescriptor.c)
 *     UsbhGetHubClassDescriptor @ 0x14003CC44 (UsbhGetHubClassDescriptor.c)
 *     UsbhGetHubConfigurationDescriptor @ 0x14003CDDC (UsbhGetHubConfigurationDescriptor.c)
 *     UsbhGetHubDeviceInformation @ 0x14003CF90 (UsbhGetHubDeviceInformation.c)
 *     UsbhGetStatus @ 0x14003D4D0 (UsbhGetStatus.c)
 *     UsbhOutOfBandwidthTimerDpc @ 0x14003DF50 (UsbhOutOfBandwidthTimerDpc.c)
 *     UsbhSetPortPower @ 0x14003E270 (UsbhSetPortPower.c)
 *     UsbhSetPortIndicator @ 0x14003F768 (UsbhSetPortIndicator.c)
 *     UsbhFdoCyclePdoPort @ 0x1400405A0 (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoRecordFailure @ 0x140040944 (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x140040B3C (UsbhFdoResetPdoPort.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x140041564 (UsbhFdoSubmitPdoIdleNotification.c)
 *     UsbhBusSuspend_Action @ 0x14004178C (UsbhBusSuspend_Action.c)
 *     UsbhParseDescriptors @ 0x140041EC0 (UsbhParseDescriptors.c)
 *     UsbhGetMSOS_Descriptor @ 0x140042A78 (UsbhGetMSOS_Descriptor.c)
 *     UsbhGetMsOsContainerID @ 0x140042E74 (UsbhGetMsOsContainerID.c)
 *     UsbhQueueSoftConnectChange @ 0x1400448AC (UsbhQueueSoftConnectChange.c)
 *     UsbhClearTt @ 0x1400467EC (UsbhClearTt.c)
 *     UsbhFinishStart @ 0x140046F2C (UsbhFinishStart.c)
 *     UsbhGetBillboardInfo @ 0x1400474B8 (UsbhGetBillboardInfo.c)
 *     UsbhHubResetIrqPipeWorker @ 0x140047A90 (UsbhHubResetIrqPipeWorker.c)
 *     UsbhPortResumeTimeout @ 0x140047ED8 (UsbhPortResumeTimeout.c)
 *     UsbhQueryHubState @ 0x140048174 (UsbhQueryHubState.c)
 *     UsbhSyncResetDeviceInternal @ 0x1400488F4 (UsbhSyncResetDeviceInternal.c)
 *     UsbhCheckHubPowerStatus @ 0x14004A4CC (UsbhCheckHubPowerStatus.c)
 *     UsbhCompletePdoWakeIrps @ 0x14004A6F0 (UsbhCompletePdoWakeIrps.c)
 *     UsbhPdoSetD0_Finish @ 0x14004BED4 (UsbhPdoSetD0_Finish.c)
 *     UsbhHardReset_Action @ 0x14004C548 (UsbhHardReset_Action.c)
 *     UsbhIoctlCyclePort @ 0x14004D390 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetHubCapsEx @ 0x14004D6AC (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x14004D974 (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x14004DC58 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x14004DEE8 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x14004E304 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x14004E5F8 (UsbhIoctlResetStuckHub.c)
 *     UsbhFdoPnp_QueryPnpDeviceState @ 0x1400500D0 (UsbhFdoPnp_QueryPnpDeviceState.c)
 *     UsbhFdoPnp_StartDevice @ 0x1400504F0 (UsbhFdoPnp_StartDevice.c)
 *     UsbhResetNotificationIrpCompletion @ 0x140050FD0 (UsbhResetNotificationIrpCompletion.c)
 *     UsbhPdoQueryWmiRegInfo @ 0x140055530 (UsbhPdoQueryWmiRegInfo.c)
 *     UsbhBusIfAddDevice @ 0x140056D80 (UsbhBusIfAddDevice.c)
 *     UsbhGetBusInterface @ 0x1400575D4 (UsbhGetBusInterface.c)
 *     UsbhHandleOvercurrent @ 0x140057ABC (UsbhHandleOvercurrent.c)
 *     UsbhHardErrorInvalidData @ 0x140057CF0 (UsbhHardErrorInvalidData.c)
 *     UsbhHardErrorReset1BadEnable @ 0x140057DE0 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhPortResumeFailed @ 0x140058240 (UsbhPortResumeFailed.c)
 *     UsbhReset1DebounceError @ 0x140058690 (UsbhReset1DebounceError.c)
 *     UsbhReset1Timeout @ 0x1400588F0 (UsbhReset1Timeout.c)
 *     UsbhReset1TimeoutBadEnable @ 0x140058B00 (UsbhReset1TimeoutBadEnable.c)
 *     UsbhReset2TimeoutBadEnable @ 0x1400590C0 (UsbhReset2TimeoutBadEnable.c)
 *     UsbhSetEnumerationFailed @ 0x1400591B8 (UsbhSetEnumerationFailed.c)
 *     UsbhCheckDeviceErrata @ 0x14005A610 (UsbhCheckDeviceErrata.c)
 *     UsbhCheckHubErrata @ 0x14005A984 (UsbhCheckHubErrata.c)
 *     UsbhValidateSerialNumberString @ 0x14005C028 (UsbhValidateSerialNumberString.c)
 *     UsbhPdoCreateSymbolicLink @ 0x14005CAB0 (UsbhPdoCreateSymbolicLink.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhEtwWrite @ 0x14000AB60 (UsbhEtwWrite.c)
 *     UsbhExceptionWorker @ 0x14002AE50 (UsbhExceptionWorker.c)
 *     UsbhReferenceListRemove @ 0x14002B02C (UsbhReferenceListRemove.c)
 *     UsbhReferenceListAdd @ 0x14002EFD0 (UsbhReferenceListAdd.c)
 *     UsbhQueueWorkItemEx @ 0x140032140 (UsbhQueueWorkItemEx.c)
 *     UsbhExceptionTrace @ 0x140035D58 (UsbhExceptionTrace.c)
 *     __security_check_cookie @ 0x1400614F0 (__security_check_cookie.c)
 *     memmove @ 0x140061600 (memmove.c)
 */

void __fastcall UsbhException(
        __int64 a1,
        unsigned __int16 a2,
        int a3,
        const void *a4,
        unsigned int a5,
        int a6,
        int a7,
        _BYTE *a8,
        int a9,
        char a10)
{
  __int64 v11; // r13
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int i; // edx
  char *v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int128 *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int16 *v23; // rcx
  int v24; // eax
  __int64 v25; // r12
  unsigned __int16 v26; // si
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int v29; // r14d
  unsigned int v30; // r13d
  __int64 Pool2; // rax
  char *v32; // rbx
  char *v33; // rcx
  unsigned int v34; // ecx
  _OWORD *v35; // rdx
  __int64 v36; // rax
  _OWORD *v37; // rax
  int v38; // eax
  char *v41; // [rsp+C0h] [rbp-50h]
  int v43; // [rsp+ECh] [rbp-24h]
  __int128 v44; // [rsp+F4h] [rbp-1Ch] BYREF
  __int64 v45; // [rsp+104h] [rbp-Ch]

  v11 = a3;
  v12 = FdoExt(a1);
  FdoExt(a1);
  v13 = -1LL;
  if ( (UsbhLogMask & 0x80u) != 0 )
  {
    if ( a1 )
    {
      v14 = *(_QWORD *)(a1 + 64);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
        *(_DWORD *)v15 = 1061451877;
        *(_QWORD *)(v15 + 8) = 0LL;
        *(_QWORD *)(v15 + 16) = 0LL;
        *(_QWORD *)(v15 + 24) = v11;
      }
    }
  }
  v41 = 0LL;
  for ( i = 0; i < 0x8E; ++i )
  {
    v17 = (char *)&HubExceptionTable + 24 * i;
    if ( (_DWORD)v11 == *(_DWORD *)v17 )
    {
      v41 = (char *)&HubExceptionTable + 24 * i;
      goto LABEL_10;
    }
  }
  v17 = 0LL;
LABEL_10:
  v18 = -1LL;
  do
    ++v18;
  while ( *(_BYTE *)(*((_QWORD *)v17 + 1) + v18) );
  v44 = 0LL;
  v45 = 0LL;
  if ( dword_14006F690 )
  {
    v19 = FdoExt(a1);
    v20 = &v44;
    v21 = v19;
    v22 = 5LL;
    v23 = (unsigned __int16 *)(v19 + 5210);
    v43 = *(_WORD *)(v19 + 5208) != 0;
    do
    {
      v24 = *v23;
      *(_DWORD *)v20 = v24;
      if ( v24 )
        ++v43;
      v20 = (__int128 *)((char *)v20 + 4);
      ++v23;
      --v22;
    }
    while ( v22 );
    HIDWORD(v45) = *(_DWORD *)(v21 + 2536);
    UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_EXCEPTION, 0LL);
  }
  v25 = 16LL;
  if ( a10 )
  {
    v38 = *(_DWORD *)(v12 + 2560);
    if ( (v38 & 0x10) != 0 )
      return;
    *(_DWORD *)(v12 + 2560) = v38 | 0x10;
  }
  v26 = a5;
  if ( a5 > 0xFFFF || (unsigned __int16)a5 > 0x1000u )
    v26 = 4096;
  if ( (UsbhLogMask & 0x80u) != 0 )
  {
    if ( a1 )
    {
      v27 = *(_QWORD *)(a1 + 64);
      if ( v27 )
      {
        v28 = *(_QWORD *)(v27 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
        *(_DWORD *)v28 = 829973864;
        *(_QWORD *)(v28 + 16) = a4;
        *(_QWORD *)(v28 + 24) = v26;
        *(_QWORD *)(v28 + 8) = 0LL;
      }
    }
  }
  if ( (*(_DWORD *)(v12 + 2560) & 0x2000) != 0 )
  {
    do
      ++v13;
    while ( a8[v13] );
    v29 = v13 + 1;
    v30 = v29 + v26 + 600;
    Pool2 = ExAllocatePool2(64LL, v30, 1112885333LL);
    v32 = (char *)Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 4) = v30;
      if ( (int)UsbhReferenceListAdd(a1, Pool2, 1381516648LL) >= 0 )
      {
        *(_DWORD *)v32 = 1381516648;
        *((_QWORD *)v32 + 1) = a1;
        *((_WORD *)v32 + 16) = v26;
        if ( v26 )
        {
          *((_QWORD *)v32 + 5) = v32 + 600;
          memmove(v32 + 600, a4, v26);
        }
        v33 = &v32[v26 + 600];
        *((_QWORD *)v32 + 74) = v33;
        memmove(v33, a8, v29);
        *((_DWORD *)v32 + 146) = a9;
        *((_DWORD *)v32 + 6) = a7;
        *((_DWORD *)v32 + 7) = a6;
        *((_DWORD *)v32 + 4) = a3;
        *((_WORD *)v32 + 10) = a2;
        *((_QWORD *)v32 + 8) = MEMORY[0xFFFFF78000000014];
        if ( *(_QWORD *)(v12 + 888) )
        {
          v34 = *(_DWORD *)(v12 + 880);
          v35 = v32 + 72;
          do
          {
            v36 = *(_DWORD *)(v12 + 884) & v34;
            v34 = v36 + 1;
            v37 = (_OWORD *)(*(_QWORD *)(v12 + 888) + 32 * v36);
            *v35 = *v37;
            v35 += 2;
            *(v35 - 1) = v37[1];
            --v25;
          }
          while ( v25 );
        }
        UsbhExceptionTrace(a1, v32, v41);
        if ( !KeGetCurrentIrql() && !*((_QWORD *)v41 + 2) )
        {
          UsbhExceptionWorker(a1, a2, v32);
          return;
        }
        if ( (UsbhQueueWorkItemEx(a1, 1, (unsigned int)UsbhExceptionWorker, (_DWORD)v32, a2, 1230469221, 0LL) & 0xC0000000) != 0xC0000000 )
          return;
        UsbhReferenceListRemove(a1, v32);
      }
      ExFreePoolWithTag(v32, 0);
    }
  }
}
