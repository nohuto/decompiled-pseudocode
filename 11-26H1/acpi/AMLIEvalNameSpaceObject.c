/*
 * XREFs of AMLIEvalNameSpaceObject @ 0x14000EC04
 * Callers:
 *     ACPIGet @ 0x1400235A0 (ACPIGet.c)
 *     ACPIIoctlEvalControlMethod @ 0x140023DBC (ACPIIoctlEvalControlMethod.c)
 *     ACPIBuildMissingEjectionRelations @ 0x140039C58 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIInitStartDevice @ 0x1400420EC (ACPIInitStartDevice.c)
 *     LinkNodeCrackPrt @ 0x140045E80 (LinkNodeCrackPrt.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x14004767C (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIInitDosDeviceName @ 0x14004C538 (ACPIInitDosDeviceName.c)
 *     EnableDisableDeviceRegionSpace @ 0x140066FA8 (EnableDisableDeviceRegionSpace.c)
 *     ACPIProcessorContainerEvaluateLpiObject @ 0x140067804 (ACPIProcessorContainerEvaluateLpiObject.c)
 *     ACPIThermalGetSensorDevice @ 0x140069E88 (ACPIThermalGetSensorDevice.c)
 *     Simulator_CallbackWorker @ 0x14006C690 (Simulator_CallbackWorker.c)
 *     ACPIAmliEvaluatePcch @ 0x1400ACDE4 (ACPIAmliEvaluatePcch.c)
 *     ACPIEcGetGpeVector @ 0x1400AEFA4 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1400AF048 (ACPIEcGetUid.c)
 *     ACPIEvaluateSpareDsm @ 0x1400B1EB4 (ACPIEvaluateSpareDsm.c)
 *     ACPIGetUniqueId @ 0x1400B1FE0 (ACPIGetUniqueId.c)
 *     UnRegisterOperationRegionHandler @ 0x1400B56D4 (UnRegisterOperationRegionHandler.c)
 *     ACPIThermalBuildConstraints @ 0x1400BAA20 (ACPIThermalBuildConstraints.c)
 *     LinkNodeWriteStateToHardware @ 0x1400C49DC (LinkNodeWriteStateToHardware.c)
 *     ACPIProcessorDeviceControl @ 0x1400C5FF0 (ACPIProcessorDeviceControl.c)
 *     ACPIInitStopDevice @ 0x1400C7F58 (ACPIInitStopDevice.c)
 *     EnableDisableRegions @ 0x1400C82A0 (EnableDisableRegions.c)
 *     AcpiGetIdleWakeInfo @ 0x1400CCFC0 (AcpiGetIdleWakeInfo.c)
 *     ACPIAmliEvaluateDsm @ 0x1400CD388 (ACPIAmliEvaluateDsm.c)
 *     ACPIAmliEvaluateOsc @ 0x1400CD900 (ACPIAmliEvaluateOsc.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1400D3A90 (LinkNodepAddLinkNodeWorker.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1400D3B78 (ACPIQueryCacheCoherencyAttribute.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1400D74F4 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 *     SyncEvalObject @ 0x14000EE78 (SyncEvalObject.c)
 *     GetObjectPath @ 0x14002C8B4 (GetObjectPath.c)
 *     Simulator_AllocAndInitTestData @ 0x14005168C (Simulator_AllocAndInitTestData.c)
 *     AMLIDebugger @ 0x140055228 (AMLIDebugger.c)
 *     Simulator_Copy_Arguments @ 0x14006C874 (Simulator_Copy_Arguments.c)
 *     Simulator_Free_Arguments @ 0x14006C93C (Simulator_Free_Arguments.c)
 *     Simulator_TestNotify @ 0x14006CD54 (Simulator_TestNotify.c)
 *     Simulator_TestNotifyRet @ 0x14006CD8C (Simulator_TestNotifyRet.c)
 */

__int64 __fastcall AMLIEvalNameSpaceObject(__int64 *a1, __int64 a2, int a3, __int64 a4)
{
  __int64 inited; // rbx
  __int64 v5; // r15
  __int64 v9; // rdi
  unsigned int v10; // esi
  __int64 result; // rax
  bool v12; // zf
  __int64 v13; // rax
  __int64 ObjectPath; // rax
  struct _KTHREAD *CurrentThread; // rdx
  const char *v16; // r8
  void *v17; // rbp
  int v18; // eax
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  inited = 0LL;
  v5 = a3;
  dword_14008ED38 = 0;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  v9 = *a1;
  if ( !g_SimulatorCallbackObject )
    goto LABEL_4;
  if ( a2 )
  {
    *(_OWORD *)a2 = 0LL;
    *(_OWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 32) = 0LL;
  }
  v19 = 0LL;
  inited = Simulator_AllocAndInitTestData();
  if ( !inited )
    return 3221225626LL;
  result = Simulator_Copy_Arguments((unsigned int)v5, a4, &v19);
  v12 = (_DWORD)result == 0;
  if ( (int)result >= 0 )
  {
    v13 = v19;
    *(_DWORD *)inited = 1;
    *(_DWORD *)(inited + 4) = 1;
    *(_DWORD *)(inited + 8) = 1;
    *(_QWORD *)(inited + 16) = v9;
    *(_QWORD *)(inited + 24) = a2;
    *(_QWORD *)(inited + 32) = v5;
    *(_QWORD *)(inited + 40) = v13;
    *(_QWORD *)(inited + 64) = 0LL;
    result = Simulator_TestNotify((PVOID)inited);
    v12 = (_DWORD)result == 0;
    if ( (int)result >= 0 )
    {
      if ( *(_QWORD *)(inited + 64) == 1LL )
        a4 = *(_QWORD *)(inited + 40);
      v12 = (_DWORD)result == 0;
    }
  }
  if ( v12 )
  {
LABEL_4:
    if ( (*(_BYTE *)(v9 + 64) & 4) != 0 )
    {
      v10 = -1073741738;
    }
    else
    {
      if ( a2 )
      {
        *(_OWORD *)a2 = 0LL;
        *(_OWORD *)(a2 + 16) = 0LL;
        *(_QWORD *)(a2 + 32) = 0LL;
      }
      while ( *(_WORD *)(v9 + 66) == 128 )
        v9 = *(_QWORD *)(v9 + 80);
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 112));
      if ( (gDebugger & 8) != 0 )
      {
        ObjectPath = GetObjectPath(v9);
        CurrentThread = KeGetCurrentThread();
        v16 = byte_140075A82;
        v17 = (void *)ObjectPath;
        if ( ObjectPath )
          v16 = (const char *)ObjectPath;
        PrintDebugMessage(0x2Cu, CurrentThread, v16, 0LL, 0LL);
        if ( v17 )
          ExFreePoolWithTag(v17, 0);
      }
      v10 = SyncEvalObject(v9, a2, (unsigned int)v5, a4);
      DereferenceObjectEx(v9);
      if ( v10 == 32772 )
        v10 = 259;
    }
    if ( g_SimulatorCallbackObject )
    {
      if ( inited )
      {
        v10 = Simulator_TestNotifyRet((PVOID)inited);
        v18 = *(_DWORD *)(inited + 4);
        if ( v18 == 1 || (unsigned int)(v18 - 2) <= 1 )
          Simulator_Free_Arguments(*(unsigned int *)(inited + 32), *(_QWORD *)(inited + 40));
        ExFreePoolWithTag((PVOID)inited, 0);
      }
      else
      {
        return (unsigned int)-1073741823;
      }
    }
    return v10;
  }
  return result;
}
