/*
 * XREFs of AMLIGetNameSpaceObject @ 0x14001B500
 * Callers:
 *     ACPIPowerNodeDiscoverDependencies @ 0x14001A4B4 (ACPIPowerNodeDiscoverDependencies.c)
 *     ACPIDockIsDockDevice @ 0x14001B4BC (ACPIDockIsDockDevice.c)
 *     ACPIIsPowerNodeMissingDependencies @ 0x14001B704 (ACPIIsPowerNodeMissingDependencies.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x140022548 (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIBuildDevicePowerNodes @ 0x14003666C (ACPIBuildDevicePowerNodes.c)
 *     ACPIBuildMissingEjectionRelations @ 0x140039C58 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIGpeBuildEventMasks @ 0x14003D890 (ACPIGpeBuildEventMasks.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x140042A28 (ACPIThermalAcquireCoolingInterfaces.c)
 *     LinkNodeCrackPrt @ 0x140045E80 (LinkNodeCrackPrt.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x14004767C (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x140053384 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIConvertDependenciesToPnpReservations @ 0x140054888 (ACPIConvertDependenciesToPnpReservations.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1400576DC (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x140059AB8 (ACPIBuildWakeEventDeviceContext.c)
 *     AreDependenciesSatisfied @ 0x140059FF8 (AreDependenciesSatisfied.c)
 *     ACPIEcInitOpRegionHandler @ 0x14005FC00 (ACPIEcInitOpRegionHandler.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x140062778 (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     ACPIThermalActivateConstraint @ 0x140069C2C (ACPIThermalActivateConstraint.c)
 *     ACPIThermalGetSensorDevice @ 0x140069E88 (ACPIThermalGetSensorDevice.c)
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1400AFD98 (ExternalRequestBiosNameDeviceAssociation.c)
 *     UnRegisterOperationRegionHandler @ 0x1400B56D4 (UnRegisterOperationRegionHandler.c)
 *     ACPIRootInitialize @ 0x1400B9B0C (ACPIRootInitialize.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1400CFA30 (AcpiGetFullyQualifiedBiosName.c)
 *     RegisterOperationRegionHandler @ 0x1400D4214 (RegisterOperationRegionHandler.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1400D74F4 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     GetNameSpaceObjectNoLock @ 0x140007700 (GetNameSpaceObjectNoLock.c)
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 *     AMLIDebugger @ 0x140055228 (AMLIDebugger.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall AMLIGetNameSpaceObject(_BYTE *Src, __int64 *a2, _QWORD *a3, int a4)
{
  size_t v8; // rbx
  _BYTE *Pool2; // rsi
  KIRQL v10; // di
  __int64 v11; // rdx
  int NameSpaceObjectNoLock; // ebx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v16; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE P[128]; // [rsp+30h] [rbp-C8h] BYREF

  v8 = -1LL;
  do
    ++v8;
  while ( Src[v8] );
  if ( v8 + 1 >= 0x80 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(64LL, v8 + 1, 1768973121LL);
    if ( !Pool2 )
      return 3221225626LL;
  }
  else
  {
    Pool2 = P;
  }
  memmove(Pool2, Src, v8);
  Pool2[v8] = 0;
  v10 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v16 = 0LL;
  dword_14008ED38 = 0;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  if ( *Pool2 )
  {
    if ( !a2 )
    {
      v11 = 0LL;
      goto LABEL_10;
    }
    v11 = *a2;
    if ( (*(_BYTE *)(*a2 + 64) & 4) == 0 )
    {
LABEL_10:
      NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(Pool2, v11, &v16, a4);
      if ( NameSpaceObjectNoLock >= 0 )
      {
        v13 = v16;
        if ( v16 )
        {
          v14 = v16 + 120;
          dword_14008ED38 = 0;
          pszDest = 0;
          if ( (gdwfAMLI & 4) != 0 )
            _InterlockedIncrement((volatile signed __int32 *)(v16 + 128));
          *a3 = v14;
          DereferenceObjectEx(v13);
        }
      }
      if ( NameSpaceObjectNoLock == 32772 )
        NameSpaceObjectNoLock = 259;
      goto LABEL_17;
    }
    NameSpaceObjectNoLock = -1073741738;
  }
  else
  {
    NameSpaceObjectNoLock = -1073741810;
  }
LABEL_17:
  ExReleaseSpinLockShared(&ACPINamespaceLock, v10);
  if ( P != Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)NameSpaceObjectNoLock;
}
