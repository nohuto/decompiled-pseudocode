/*
 * XREFs of WPP_RECORDER_SF_Lqss @ 0x140034360
 * Callers:
 *     ACPIDetectDockDevices @ 0x14001CBDC (ACPIDetectDockDevices.c)
 *     ACPIDetectFilterDevices @ 0x14001D41C (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x14001DB6C (ACPIDetectPdoDevices.c)
 *     OSNotifyDeviceWake @ 0x14001EBC8 (OSNotifyDeviceWake.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x140025B40 (ACPIDeviceCompleteGenericPhase.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x140027900 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x140027C50 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckPep @ 0x140027DF0 (ACPIBuildProcessRunMethodPhaseCheckPep.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x1400280E0 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     ACPIBuildProcessRunMethodPhaseCheckBridge @ 0x140028570 (ACPIBuildProcessRunMethodPhaseCheckBridge.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x140029650 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPICMLidWorker @ 0x14002F5A0 (ACPICMLidWorker.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x140032208 (OSNotifyDeviceWakeByGPEEvent.c)
 *     ACPIWakeDisableAsync @ 0x140032438 (ACPIWakeDisableAsync.c)
 *     ACPIDeviceCancelWaitWakeIrpCallBack @ 0x140032AB0 (ACPIDeviceCancelWaitWakeIrpCallBack.c)
 *     ACPIWakeEnableDisableAsync @ 0x140032F20 (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x140033570 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIBuildProcessDevicePhasePep @ 0x1400341B0 (ACPIBuildProcessDevicePhasePep.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1400345A0 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x140034B80 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x140035060 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1400355E0 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x140035770 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1400358A0 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x140035AB0 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x140035FC0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPISystemPowerUpdateDeviceCapabilities @ 0x14004104C (ACPISystemPowerUpdateDeviceCapabilities.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x140041748 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPIInitStartDevice @ 0x1400420EC (ACPIInitStartDevice.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x140046848 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIBuildProcessDevicePhaseSta @ 0x140047240 (ACPIBuildProcessDevicePhaseSta.c)
 *     ACPIBuildProcessDevicePhaseCid @ 0x140047C20 (ACPIBuildProcessDevicePhaseCid.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x140048F20 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x14004C1C0 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIInitDosDeviceName @ 0x14004C538 (ACPIInitDosDeviceName.c)
 *     ACPIBuildProcessDelayedDependencyPhase1 @ 0x14004E580 (ACPIBuildProcessDelayedDependencyPhase1.c)
 *     ACPIInternalSetDeviceInterface @ 0x14004E790 (ACPIInternalSetDeviceInterface.c)
 *     ACPISystemPowerInitializeRootMapping @ 0x14004EBB0 (ACPISystemPowerInitializeRootMapping.c)
 *     ACPIBuildThermalZoneExtension @ 0x140051EE8 (ACPIBuildThermalZoneExtension.c)
 *     ACPIBuildDockExtension @ 0x1400579E0 (ACPIBuildDockExtension.c)
 *     ACPIBuildProcessDelayedDependencyPhase0 @ 0x140058170 (ACPIBuildProcessDelayedDependencyPhase0.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x140058380 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1400588E0 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1400589F0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x140058E40 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildProcessThermalZoneHid @ 0x1400590F0 (ACPIBuildProcessThermalZoneHid.c)
 *     ACPIBuildProcessThermalZonePep @ 0x140059290 (ACPIBuildProcessThermalZonePep.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x140059520 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPIBuildProcessorExtension @ 0x140059694 (ACPIBuildProcessorExtension.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x140059AB8 (ACPIBuildWakeEventDeviceContext.c)
 *     ACPICMButtonStartWorker @ 0x14005BE90 (ACPICMButtonStartWorker.c)
 *     ACPICMButtonWaitWakeComplete @ 0x14005C490 (ACPICMButtonWaitWakeComplete.c)
 *     ACPIDispatchAddDevice @ 0x14005E070 (ACPIDispatchAddDevice.c)
 *     ACPIFanStartDevice @ 0x1400A89C0 (ACPIFanStartDevice.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1400AB740 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIBusIrpQueryBusInformationEIO @ 0x1400ADAE0 (ACPIBusIrpQueryBusInformationEIO.c)
 *     ACPISystemPowerProcessSxD @ 0x1400BA8F4 (ACPISystemPowerProcessSxD.c)
 *     ACPIThermalStartDevice @ 0x1400BAC70 (ACPIThermalStartDevice.c)
 *     ACPIInternalDeviceQueryCapabilities @ 0x1400C0D20 (ACPIInternalDeviceQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1400C0E70 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1400C1504 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1400C69F0 (ACPIBusAndFilterIrpQueryEjectRelations.c)
 *     ACPIInitStopDevice @ 0x1400C7F58 (ACPIInitStopDevice.c)
 *     ACPIBusIrpQueryBusInformation @ 0x1400D3310 (ACPIBusIrpQueryBusInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_Lqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        const char *a8,
        const char *a9)
{
  __int64 v9; // rdi
  const char *v10; // rsi
  unsigned __int64 v12; // r14
  __int64 v13; // rbp
  unsigned int v14; // r12d
  const char *v15; // rbx
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  bool v19; // zf
  __int64 v21; // rax
  __int64 v22; // r9
  const char *v23; // r8
  __int64 v24; // rax
  __int64 v25; // rdx
  const char *v26; // rcx
  int v27; // [rsp+20h] [rbp-88h]
  __int64 v28; // [rsp+B0h] [rbp+8h]
  unsigned __int16 v29; // [rsp+C8h] [rbp+20h]

  v29 = a4;
  v28 = a1;
  v9 = -1LL;
  v10 = a8;
  v12 = (unsigned __int64)a3 >> 16;
  v13 = 5LL;
  v14 = a2;
  v15 = a9;
  v16 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v12 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v16, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v12 + 1) >= a2 )
  {
    if ( a9 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a9[v21] );
      v22 = v21 + 1;
    }
    else
    {
      v22 = 5LL;
    }
    v23 = a9;
    if ( !a9 )
      v23 = "NULL";
    if ( a8 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( a8[v24] );
      v25 = v24 + 1;
    }
    else
    {
      v25 = 5LL;
    }
    v26 = a8;
    if ( !a8 )
      v26 = "NULL";
    pfnWppTraceMessage(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v12),
      43LL,
      a5,
      v29,
      &a6,
      4LL,
      &a7,
      8LL,
      v26,
      v25,
      v23,
      v22,
      0LL);
    a4 = v29;
    a1 = v28;
  }
  if ( v15 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v15[v17] );
    v18 = v17 + 1;
  }
  else
  {
    v18 = 5LL;
  }
  if ( !v15 )
    v15 = "NULL";
  v19 = v10 == 0LL;
  if ( v10 )
  {
    do
      ++v9;
    while ( v10[v9] );
    v13 = v9 + 1;
    v19 = v10 == 0LL;
  }
  if ( v19 )
    v10 = "NULL";
  LOWORD(v27) = a4;
  return WppAutoLogTrace(a1, v14, a3, a5, v27, &a6, 4LL, &a7, 8LL, v10, v13, v15, v18, 0LL);
}
