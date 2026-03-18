/*
 * XREFs of UsbhException @ 0x14001B7DC
 * Callers:
 *     UsbhSshSuspendHub @ 0x140006848 (UsbhSshSuspendHub.c)
 *     UsbhSetHubRemoteWake @ 0x140006EC8 (UsbhSetHubRemoteWake.c)
 *     UsbhSshResumeDownstream @ 0x140008C2C (UsbhSshResumeDownstream.c)
 *     UsbhSetupDevice @ 0x14000901C (UsbhSetupDevice.c)
 *     UsbhResetPort @ 0x14000A2BC (UsbhResetPort.c)
 *     UsbhReset2Complete @ 0x14000A840 (UsbhReset2Complete.c)
 *     UsbhPortConnect @ 0x14000BF90 (UsbhPortConnect.c)
 *     UsbhPdoPnp_StartDevice @ 0x14000EDC0 (UsbhPdoPnp_StartDevice.c)
 *     UsbhCreateDevice @ 0x14001016C (UsbhCreateDevice.c)
 *     UsbhSyncResumePort @ 0x140010E74 (UsbhSyncResumePort.c)
 *     UsbhSyncSuspendPdoPort @ 0x1400113C4 (UsbhSyncSuspendPdoPort.c)
 *     UsbhPdoPnp_QueryInterface @ 0x1400163A0 (UsbhPdoPnp_QueryInterface.c)
 *     UsbhPdoSetD0 @ 0x140016CD0 (UsbhPdoSetD0.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x140019724 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhQueryPortState @ 0x1400199F0 (UsbhQueryPortState.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x14001A440 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhFdoDeviceControl @ 0x14001BCE0 (UsbhFdoDeviceControl.c)
 *     UsbhHubProcessIsr @ 0x14001C3D0 (UsbhHubProcessIsr.c)
 *     UsbhHubRunPortChangeQueue @ 0x14001DE80 (UsbhHubRunPortChangeQueue.c)
 *     UsbhHubDispatchPortEvent @ 0x14001EC90 (UsbhHubDispatchPortEvent.c)
 *     UsbhSuspendPort @ 0x14002198C (UsbhSuspendPort.c)
 *     UsbhDisablePort @ 0x140024098 (UsbhDisablePort.c)
 *     UsbhIoctlGetHubCaps @ 0x1400246CC (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x140024AB8 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x140025250 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1400258B0 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x140026290 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlValidateParameters @ 0x140027160 (UsbhIoctlValidateParameters.c)
 *     UsbhSshResumeUpstream @ 0x140029894 (UsbhSshResumeUpstream.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x14002A47C (UsbhFdoPower_PowerFailureEntry.c)
 *     UsbhFdoD0Worker_Action @ 0x14002B2F0 (UsbhFdoD0Worker_Action.c)
 *     UsbhGetLanguageIdString @ 0x14002D494 (UsbhGetLanguageIdString.c)
 *     UsbhResumeSuspendedPort @ 0x14002ED10 (UsbhResumeSuspendedPort.c)
 *     UsbhHubIsr @ 0x14002F9E0 (UsbhHubIsr.c)
 *     UsbhFdoSetD0Cold @ 0x140030750 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoColdStartPdo @ 0x140030D10 (UsbhFdoColdStartPdo.c)
 *     UsbhFdoColdStartCheckPort @ 0x140031278 (UsbhFdoColdStartCheckPort.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1400352F0 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhGetProductIdString @ 0x140036108 (UsbhGetProductIdString.c)
 *     UsbhFdoSetD0Warm @ 0x140037E34 (UsbhFdoSetD0Warm.c)
 *     UsbhInitializeDevice @ 0x140038404 (UsbhInitializeDevice.c)
 *     UsbhGetSerialNumber @ 0x1400389E8 (UsbhGetSerialNumber.c)
 *     UsbhGetDeviceInformation @ 0x14003947C (UsbhGetDeviceInformation.c)
 *     UsbhPdoPnp_EnablePdo @ 0x140039E34 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhConfigureUsbHub @ 0x14003AC70 (UsbhConfigureUsbHub.c)
 *     UsbhGetDescriptor @ 0x14003BF94 (UsbhGetDescriptor.c)
 *     UsbhGetHubClassDescriptor @ 0x14003C6BC (UsbhGetHubClassDescriptor.c)
 *     UsbhGetHubConfigurationDescriptor @ 0x14003C858 (UsbhGetHubConfigurationDescriptor.c)
 *     UsbhGetHubDeviceInformation @ 0x14003CA10 (UsbhGetHubDeviceInformation.c)
 *     UsbhGetStatus @ 0x14003CF50 (UsbhGetStatus.c)
 *     UsbhOutOfBandwidthTimerDpc @ 0x14003D9F0 (UsbhOutOfBandwidthTimerDpc.c)
 *     UsbhSetPortPower @ 0x14003DD14 (UsbhSetPortPower.c)
 *     UsbhSetPortIndicator @ 0x14003F258 (UsbhSetPortIndicator.c)
 *     UsbhFdoCyclePdoPort @ 0x140040084 (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoRecordFailure @ 0x140040444 (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x14004063C (UsbhFdoResetPdoPort.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x140041094 (UsbhFdoSubmitPdoIdleNotification.c)
 *     UsbhBusSuspend_Action @ 0x1400412BC (UsbhBusSuspend_Action.c)
 *     UsbhParseDescriptors @ 0x1400419FC (UsbhParseDescriptors.c)
 *     UsbhGetMSOS_Descriptor @ 0x1400425A4 (UsbhGetMSOS_Descriptor.c)
 *     UsbhGetMsOsContainerID @ 0x1400429A0 (UsbhGetMsOsContainerID.c)
 *     UsbhQueueSoftConnectChange @ 0x1400443D0 (UsbhQueueSoftConnectChange.c)
 *     UsbhClearTt @ 0x14004632C (UsbhClearTt.c)
 *     UsbhFinishStart @ 0x140046A70 (UsbhFinishStart.c)
 *     UsbhGetBillboardInfo @ 0x140047008 (UsbhGetBillboardInfo.c)
 *     UsbhHubResetIrqPipeWorker @ 0x1400475E0 (UsbhHubResetIrqPipeWorker.c)
 *     UsbhPortResumeTimeout @ 0x140047A28 (UsbhPortResumeTimeout.c)
 *     UsbhQueryHubState @ 0x140047CC4 (UsbhQueryHubState.c)
 *     UsbhSyncResetDeviceInternal @ 0x140048448 (UsbhSyncResetDeviceInternal.c)
 *     UsbhCheckHubPowerStatus @ 0x14004A07C (UsbhCheckHubPowerStatus.c)
 *     UsbhCompletePdoWakeIrps @ 0x14004A2A4 (UsbhCompletePdoWakeIrps.c)
 *     UsbhPdoSetD0_Finish @ 0x14004BA84 (UsbhPdoSetD0_Finish.c)
 *     UsbhHardReset_Action @ 0x14004C11C (UsbhHardReset_Action.c)
 *     UsbhIoctlCyclePort @ 0x14004CF64 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetHubCapsEx @ 0x14004D280 (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x14004D550 (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x14004D834 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x14004DAC4 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x14004DEE0 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x14004E1D8 (UsbhIoctlResetStuckHub.c)
 *     UsbhFdoPnp_QueryPnpDeviceState @ 0x1400505A0 (UsbhFdoPnp_QueryPnpDeviceState.c)
 *     UsbhFdoPnp_StartDevice @ 0x1400509D0 (UsbhFdoPnp_StartDevice.c)
 *     UsbhResetNotificationIrpCompletion @ 0x1400514C0 (UsbhResetNotificationIrpCompletion.c)
 *     UsbhPdoQueryWmiRegInfo @ 0x140055AA0 (UsbhPdoQueryWmiRegInfo.c)
 *     UsbhBusIfAddDevice @ 0x1400572E0 (UsbhBusIfAddDevice.c)
 *     UsbhGetBusInterface @ 0x140057B34 (UsbhGetBusInterface.c)
 *     UsbhHandleOvercurrent @ 0x14005801C (UsbhHandleOvercurrent.c)
 *     UsbhHardErrorInvalidData @ 0x140058250 (UsbhHardErrorInvalidData.c)
 *     UsbhHardErrorReset1BadEnable @ 0x140058340 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhPortResumeFailed @ 0x1400587A0 (UsbhPortResumeFailed.c)
 *     UsbhReset1DebounceError @ 0x140058BF0 (UsbhReset1DebounceError.c)
 *     UsbhReset1Timeout @ 0x140058E50 (UsbhReset1Timeout.c)
 *     UsbhReset1TimeoutBadEnable @ 0x140059070 (UsbhReset1TimeoutBadEnable.c)
 *     UsbhReset2TimeoutBadEnable @ 0x140059630 (UsbhReset2TimeoutBadEnable.c)
 *     UsbhSetEnumerationFailed @ 0x140059728 (UsbhSetEnumerationFailed.c)
 *     UsbhCheckDeviceErrata @ 0x14005AB8C (UsbhCheckDeviceErrata.c)
 *     UsbhCheckHubErrata @ 0x14005AEFC (UsbhCheckHubErrata.c)
 *     UsbhValidateSerialNumberString @ 0x14005C5F8 (UsbhValidateSerialNumberString.c)
 *     UsbhPdoCreateSymbolicLink @ 0x14005D090 (UsbhPdoCreateSymbolicLink.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhEtwWrite @ 0x14001DA20 (UsbhEtwWrite.c)
 *     UsbhExceptionWorker @ 0x140029470 (UsbhExceptionWorker.c)
 *     UsbhReferenceListRemove @ 0x140029668 (UsbhReferenceListRemove.c)
 *     UsbhReferenceListAdd @ 0x14002C0D4 (UsbhReferenceListAdd.c)
 *     UsbhQueueWorkItemEx @ 0x14002C4D0 (UsbhQueueWorkItemEx.c)
 *     UsbhExceptionTrace @ 0x140033C60 (UsbhExceptionTrace.c)
 *     __security_check_cookie @ 0x140061BD0 (__security_check_cookie.c)
 *     memmove @ 0x140061CC0 (memmove.c)
 */

void UsbhException(
        __int64 a1,
        unsigned __int16 a2,
        int a3,
        const void *a4,
        unsigned int a5,
        int a6,
        int a7,
        _BYTE *a8,
        int a9,
        char a10,
        ...)
{
  __int64 v11; // rsi
  _DWORD *v12; // r14
  __int64 v13; // rbx
  __int64 v14; // rcx
  signed __int32 v15; // eax
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rdx
  char *v19; // r13
  unsigned int i; // edx
  __int64 v21; // rax
  _DWORD *v22; // rax
  __int128 *v23; // rdx
  _DWORD *v24; // r8
  __int64 v25; // r9
  unsigned __int16 *v26; // rcx
  int v27; // eax
  __int64 v28; // r15
  unsigned __int16 v29; // si
  __int64 v30; // rcx
  signed __int32 v31; // eax
  unsigned int v32; // edx
  __int64 v33; // rcx
  __int64 v34; // rdx
  unsigned int v35; // r12d
  __int64 Pool2; // rax
  char *v37; // rbx
  char *v38; // rcx
  unsigned int v39; // eax
  _OWORD *v40; // rdx
  unsigned int v41; // eax
  _OWORD *v42; // rcx
  int v43; // eax
  unsigned int Size; // [rsp+A0h] [rbp-70h]
  int v48; // [rsp+E4h] [rbp-2Ch]
  __int128 v49; // [rsp+ECh] [rbp-24h] BYREF
  __int64 v50; // [rsp+FCh] [rbp-14h]

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
        v15 = _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 880), 0xFFFFFFFF);
        v16 = *(_DWORD *)(v14 + 884);
        v17 = *(_QWORD *)(v14 + 888);
        v18 = 32LL * ((v15 - 1) & v16);
        *(_DWORD *)(v18 + v17) = 1061451877;
        *(_QWORD *)(v18 + v17 + 8) = 0LL;
        *(_QWORD *)(v18 + v17 + 16) = 0LL;
        *(_QWORD *)(v18 + v17 + 24) = v11;
      }
    }
  }
  v19 = 0LL;
  for ( i = 0; i < 0x8E; ++i )
  {
    if ( (_DWORD)v11 == *((_DWORD *)&HubExceptionTable + 6 * i) )
    {
      v19 = (char *)&HubExceptionTable + 24 * i;
      break;
    }
  }
  v21 = -1LL;
  do
    ++v21;
  while ( *(_BYTE *)(*((_QWORD *)v19 + 1) + v21) );
  v49 = 0LL;
  v50 = 0LL;
  if ( dword_1400706F0 )
  {
    v22 = FdoExt(a1);
    v23 = &v49;
    v24 = v22;
    v25 = 5LL;
    v26 = (unsigned __int16 *)v22 + 2605;
    v48 = *((_WORD *)v22 + 2604) != 0;
    do
    {
      v27 = *v26;
      *(_DWORD *)v23 = v27;
      if ( v27 )
        ++v48;
      v23 = (__int128 *)((char *)v23 + 4);
      ++v26;
      --v25;
    }
    while ( v25 );
    HIDWORD(v50) = v24[634];
    UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_EXCEPTION, 0LL);
  }
  v28 = 16LL;
  if ( a10 )
  {
    v43 = v12[640];
    if ( (v43 & 0x10) != 0 )
      return;
    v12[640] = v43 | 0x10;
  }
  v29 = a5;
  if ( a5 > 0xFFFF || (unsigned __int16)a5 > 0x1000u )
    v29 = 4096;
  if ( (UsbhLogMask & 0x80u) != 0 )
  {
    if ( a1 )
    {
      v30 = *(_QWORD *)(a1 + 64);
      if ( v30 )
      {
        v31 = _InterlockedExchangeAdd((volatile signed __int32 *)(v30 + 880), 0xFFFFFFFF);
        v32 = *(_DWORD *)(v30 + 884);
        v33 = *(_QWORD *)(v30 + 888);
        v34 = 32LL * ((v31 - 1) & v32);
        *(_DWORD *)(v34 + v33) = 829973864;
        *(_QWORD *)(v34 + v33 + 16) = a4;
        *(_QWORD *)(v34 + v33 + 24) = v29;
        *(_QWORD *)(v34 + v33 + 8) = 0LL;
      }
    }
  }
  if ( (v12[640] & 0x2000) != 0 )
  {
    do
      ++v13;
    while ( a8[v13] );
    Size = v13 + 1;
    v35 = v29 + v13 + 601;
    Pool2 = ExAllocatePool2(64LL, v35, 1112885333LL);
    v37 = (char *)Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 4) = v35;
      if ( (int)UsbhReferenceListAdd(a1, Pool2, 1381516648LL) >= 0 )
      {
        *(_DWORD *)v37 = 1381516648;
        *((_QWORD *)v37 + 1) = a1;
        *((_WORD *)v37 + 16) = v29;
        if ( v29 )
        {
          *((_QWORD *)v37 + 5) = v37 + 600;
          memmove(v37 + 600, a4, v29);
        }
        v38 = &v37[v29 + 600];
        *((_QWORD *)v37 + 74) = v38;
        memmove(v38, a8, Size);
        *((_DWORD *)v37 + 146) = a9;
        *((_DWORD *)v37 + 6) = a7;
        *((_DWORD *)v37 + 7) = a6;
        *((_DWORD *)v37 + 4) = a3;
        *((_WORD *)v37 + 10) = a2;
        *((_QWORD *)v37 + 8) = MEMORY[0xFFFFF78000000014];
        if ( *((_QWORD *)v12 + 111) )
        {
          v39 = v12[220];
          v40 = v37 + 72;
          do
          {
            v41 = v12[221] & v39;
            v42 = (_OWORD *)(*((_QWORD *)v12 + 111) + 32LL * v41);
            v39 = v41 + 1;
            *v40 = *v42;
            v40 += 2;
            *(v40 - 1) = v42[1];
            --v28;
          }
          while ( v28 );
        }
        UsbhExceptionTrace(a1, v37, v19);
        if ( !KeGetCurrentIrql() && !*((_QWORD *)v19 + 2) )
        {
          UsbhExceptionWorker(a1, a2, v37);
          return;
        }
        if ( (UsbhQueueWorkItemEx(a1, 1, (unsigned int)UsbhExceptionWorker, (_DWORD)v37, a2, 1230469221, 0LL) & 0xC0000000) != 0xC0000000 )
          return;
        UsbhReferenceListRemove(a1, v37);
      }
      ExFreePoolWithTag(v37, 0);
    }
  }
}
