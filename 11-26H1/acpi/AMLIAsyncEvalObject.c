/*
 * XREFs of AMLIAsyncEvalObject @ 0x140022260
 * Callers:
 *     ACPIFanLoop @ 0x140017774 (ACPIFanLoop.c)
 *     ACPIDevicePowerProcessPhase3 @ 0x14001AD90 (ACPIDevicePowerProcessPhase3.c)
 *     ACPIIrpDispatchDeviceControl @ 0x140021AD0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x140025630 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1400258B0 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase1 @ 0x140025D50 (ACPIDevicePowerProcessPhase5DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x140026640 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x140026900 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase2 @ 0x140027750 (ACPIDevicePowerProcessPhase1DeviceSubPhase2.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x140027900 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x140027C50 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIThermalLoopEx @ 0x140029C18 (ACPIThermalLoopEx.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x14002D7E0 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x14002F2C0 (LinkNodepRestoreIrqRoutingWorker.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x140031890 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIWakeDisableAsync @ 0x140032438 (ACPIWakeDisableAsync.c)
 *     ACPIWakeEnableDisableAsync @ 0x140032F20 (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x140033570 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1400348C0 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x140035060 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1400355E0 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x140035C00 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     EnableDisableCMOSRegions @ 0x14003DA1C (EnableDisableCMOSRegions.c)
 *     ACPIEcRunQueryMethod @ 0x14003E600 (ACPIEcRunQueryMethod.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x14003FB40 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x140045930 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase4 @ 0x14004A9C0 (ACPIDevicePowerProcessPhase2SystemSubPhase4.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x140058500 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x140058720 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x140058E40 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIInternalEvaluateOST @ 0x1400621FC (ACPIInternalEvaluateOST.c)
 *     LinkNodepRunSrsWorker @ 0x1400719F0 (LinkNodepRunSrsWorker.c)
 *     AcpiFunctionLevelDeviceReset @ 0x1400A92EC (AcpiFunctionLevelDeviceReset.c)
 *     EnableDisableIPMIRegions @ 0x1400B18A0 (EnableDisableIPMIRegions.c)
 *     ACPIRootInitialize @ 0x1400B9B0C (ACPIRootInitialize.c)
 *     RegisterOperationRegionHandler @ 0x1400D4214 (RegisterOperationRegionHandler.c)
 * Callees:
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 *     AsyncEvalObject @ 0x140009DE0 (AsyncEvalObject.c)
 *     GetObjectPath @ 0x14002C8B4 (GetObjectPath.c)
 *     Simulator_AllocAndInitTestData @ 0x14005168C (Simulator_AllocAndInitTestData.c)
 *     AMLIDebugger @ 0x140055228 (AMLIDebugger.c)
 *     Simulator_Copy_Arguments @ 0x14006C874 (Simulator_Copy_Arguments.c)
 *     Simulator_Free_Arguments @ 0x14006C93C (Simulator_Free_Arguments.c)
 *     Simulator_TestNotify @ 0x14006CD54 (Simulator_TestNotify.c)
 *     Simulator_TestNotifyRet @ 0x14006CD8C (Simulator_TestNotifyRet.c)
 */

__int64 __fastcall AMLIAsyncEvalObject(__int64 *a1, __int64 a2, int a3, __int64 a4, void *a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 inited; // r14
  __int64 v11; // rbx
  __int64 v12; // r12
  void *v13; // r15
  unsigned int v14; // edi
  __int64 result; // rax
  __int64 v16; // rax
  bool v17; // zf
  void *ObjectPath; // rax
  struct _KTHREAD *CurrentThread; // rdx
  void *v20; // r13
  int v21; // eax
  __int64 v22; // [rsp+70h] [rbp+8h] BYREF

  v6 = a3;
  inited = 0LL;
  pszDest = 0;
  dword_14008ED38 = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  v11 = *a1;
  if ( g_SimulatorCallbackObject )
  {
    if ( a2 )
    {
      *(_OWORD *)a2 = 0LL;
      *(_OWORD *)(a2 + 16) = 0LL;
      *(_QWORD *)(a2 + 32) = 0LL;
    }
    v22 = 0LL;
    inited = Simulator_AllocAndInitTestData();
    if ( !inited )
      return 3221225626LL;
    result = Simulator_Copy_Arguments((unsigned int)v6, a4, &v22);
    if ( (int)result < 0 )
    {
      v12 = a6;
      v13 = a5;
    }
    else
    {
      v16 = v22;
      *(_DWORD *)inited = 1;
      v12 = inited;
      *(_DWORD *)(inited + 4) = 2;
      *(_DWORD *)(inited + 8) = 1;
      *(_QWORD *)(inited + 16) = v11;
      *(_QWORD *)(inited + 24) = a2;
      *(_QWORD *)(inited + 32) = v6;
      *(_QWORD *)(inited + 40) = v16;
      *(_QWORD *)(inited + 48) = a5;
      *(_QWORD *)(inited + 56) = a6;
      *(_QWORD *)(inited + 64) = 0LL;
      v13 = &Simulator_AsyncEvalObjectCallBack;
      result = Simulator_TestNotify((PVOID)inited);
      v17 = (_DWORD)result == 0;
      if ( (int)result < 0 )
        goto LABEL_29;
      if ( *(_QWORD *)(inited + 64) == 1LL )
        a4 = *(_QWORD *)(inited + 40);
    }
    v17 = (_DWORD)result == 0;
LABEL_29:
    if ( !v17 )
      return result;
    goto LABEL_5;
  }
  v12 = a6;
  v13 = a5;
LABEL_5:
  if ( (*(_BYTE *)(v11 + 64) & 4) != 0 )
  {
    v14 = -1073741738;
  }
  else
  {
    if ( a2 )
    {
      *(_OWORD *)a2 = 0LL;
      *(_OWORD *)(a2 + 16) = 0LL;
      *(_QWORD *)(a2 + 32) = 0LL;
    }
    for ( ; *(_WORD *)(v11 + 66) == 128; v11 = *(_QWORD *)(v11 + 80) )
      ;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 112));
    if ( (gDebugger & 8) != 0 )
    {
      ObjectPath = (void *)GetObjectPath(v11);
      CurrentThread = KeGetCurrentThread();
      v20 = ObjectPath;
      if ( ObjectPath )
      {
        PrintDebugMessage(0xBu, CurrentThread, ObjectPath, 0LL, 0LL);
        ExFreePoolWithTag(v20, 0);
      }
      else
      {
        PrintDebugMessage(0xBu, CurrentThread, byte_140075A82, 0LL, 0LL);
      }
    }
    v14 = AsyncEvalObject(v11, a2, v6, a4, (__int64)v13, v12, 1);
    DereferenceObjectEx(v11);
    if ( v14 == 32772 )
      v14 = 259;
  }
  if ( g_SimulatorCallbackObject && v14 != 259 )
  {
    if ( inited )
    {
      v14 = Simulator_TestNotifyRet((PVOID)inited);
      v21 = *(_DWORD *)(inited + 4);
      if ( v21 == 1 || (unsigned int)(v21 - 2) <= 1 )
        Simulator_Free_Arguments(*(unsigned int *)(inited + 32), *(_QWORD *)(inited + 40));
      ExFreePoolWithTag((PVOID)inited, 0);
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return v14;
}
