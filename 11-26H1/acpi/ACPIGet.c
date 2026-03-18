/*
 * XREFs of ACPIGet @ 0x1400235A0
 * Callers:
 *     CmosGetOpRegionType @ 0x14001BFBC (CmosGetOpRegionType.c)
 *     ACPIDetectDockDevices @ 0x14001CBDC (ACPIDetectDockDevices.c)
 *     ACPIDetectFilterDevices @ 0x14001D41C (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x14001DB6C (ACPIDetectPdoDevices.c)
 *     GetPciAddressWorker @ 0x140022E60 (GetPciAddressWorker.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase1 @ 0x140024D00 (ACPIDevicePowerProcessPhase0DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x140027600 (ACPIDevicePowerProcessPhase5DeviceSubPhase4.c)
 *     IsPciBusAsyncWorker @ 0x140028760 (IsPciBusAsyncWorker.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x140029650 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIThermalLoopEx @ 0x140029C18 (ACPIThermalLoopEx.c)
 *     ACPICMLidWorker @ 0x14002F5A0 (ACPICMLidWorker.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x140035FC0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x140048440 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x140048E10 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x140048F20 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1400496F0 (ACPIBuildProcessDevicePhaseSub.c)
 *     ACPICMLidSetPower @ 0x140049A60 (ACPICMLidSetPower.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x14004C1C0 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x14004F1C0 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     IsPciDeviceWorker @ 0x1400503C0 (IsPciDeviceWorker.c)
 *     ACPIDockIrpRemoveDevice @ 0x140056DB0 (ACPIDockIrpRemoveDevice.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1400589F0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessThermalZoneHrv @ 0x1400591C0 (ACPIBuildProcessThermalZoneHrv.c)
 *     ACPIBuildProcessThermalZoneSub @ 0x140059430 (ACPIBuildProcessThermalZoneSub.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x140059520 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPICMButtonStartWorker @ 0x14005BE90 (ACPICMButtonStartWorker.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x14005D1C0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x14005D320 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     LinkNodepRunSrsWorker @ 0x1400719F0 (LinkNodepRunSrsWorker.c)
 *     ACPIBusAndFilterIrpEject @ 0x1400A8F30 (ACPIBusAndFilterIrpEject.c)
 *     ACPIDockIntfUpdateDeparture @ 0x1400AB3D0 (ACPIDockIntfUpdateDeparture.c)
 *     ACPIDockIrpEject @ 0x1400AB490 (ACPIDockIrpEject.c)
 *     ACPIDockIrpQueryID @ 0x1400ABDF0 (ACPIDockIrpQueryID.c)
 *     ACPIDockIrpStartDevice @ 0x1400AC420 (ACPIDockIrpStartDevice.c)
 *     ACPIProcessorGetInitialApicId @ 0x1400B5E68 (ACPIProcessorGetInitialApicId.c)
 *     AcpiEjectBusNumberTranslator @ 0x1400BB12C (AcpiEjectBusNumberTranslator.c)
 *     TranslateEjectInterface @ 0x1400BB8B8 (TranslateEjectInterface.c)
 *     LinkNodeGetPossibleResources @ 0x1400BC2C8 (LinkNodeGetPossibleResources.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1400C0E70 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1400C1884 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1400C2428 (ACPIDetectCouldExtensionBeInRelation.c)
 *     ACPIThermalWorker @ 0x1400C6DC0 (ACPIThermalWorker.c)
 *     ACPIThermalGetParameter @ 0x1400C7DF4 (ACPIThermalGetParameter.c)
 *     ACPIInitStopDevice @ 0x1400C7F58 (ACPIInitStopDevice.c)
 *     ACPIBusIrpQueryResources @ 0x1400C94D0 (ACPIBusIrpQueryResources.c)
 *     PnpBiosGetDeviceResourceList @ 0x1400CA68C (PnpBiosGetDeviceResourceList.c)
 *     ACPIInternalSetProximityDomain @ 0x1400CA8FC (ACPIInternalSetProximityDomain.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1400CA9C0 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1400CADD4 (ACPIBusIrpQueryInstanceId.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1400CAFC0 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1400CB6B0 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1400CC08C (ACPIBusIrpQueryDeviceId.c)
 *     ACPISystemPowerGetDeviceWake @ 0x1400CCB38 (ACPISystemPowerGetDeviceWake.c)
 *     ACPISystemPowerGetSxD @ 0x1400CD800 (ACPISystemPowerGetSxD.c)
 * Callees:
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 *     AsyncEvalObject @ 0x140009DE0 (AsyncEvalObject.c)
 *     HeapFree @ 0x14000C1E0 (HeapFree.c)
 *     AMLIEvalNameSpaceObject @ 0x14000EC04 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     GetObjectPath @ 0x14002C8B4 (GetObjectPath.c)
 *     _ACPIInternalError @ 0x14004B798 (_ACPIInternalError.c)
 *     Simulator_AllocAndInitTestData @ 0x14005168C (Simulator_AllocAndInitTestData.c)
 *     AMLIDebugger @ 0x140055228 (AMLIDebugger.c)
 *     Simulator_Copy_Arguments @ 0x14006C874 (Simulator_Copy_Arguments.c)
 *     Simulator_Free_Arguments @ 0x14006C93C (Simulator_Free_Arguments.c)
 *     Simulator_TestNotify @ 0x14006CD54 (Simulator_TestNotify.c)
 *     Simulator_TestNotifyRet @ 0x14006CD8C (Simulator_TestNotifyRet.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ACPIGet(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  int v9; // r15d
  __int64 v12; // rsi
  int v13; // ebp
  __int64 v14; // rbx
  int v15; // eax
  __int64 Pool2; // rax
  char *v17; // r13
  KIRQL v18; // dl
  _QWORD *v19; // rax
  _QWORD *v20; // r12
  KIRQL v21; // dl
  __int64 *v22; // rax
  __int64 *i; // rbx
  int v24; // ebx
  void (__fastcall *v25)(__int64, _QWORD, char *, char *); // rax
  unsigned int v26; // ebx
  KIRQL v27; // al
  __int64 v28; // r8
  _QWORD *v29; // rdx
  _OWORD *v31; // rdi
  __int64 v32; // r14
  void *v33; // r15
  __int64 inited; // r12
  __int64 v35; // rbp
  __int64 j; // r13
  __int64 v37; // rcx
  void *ObjectPath; // rax
  struct _KTHREAD *CurrentThread; // rdx
  void *v40; // rbx
  int v41; // eax
  __int64 v42; // [rsp+40h] [rbp-78h] BYREF
  void *v43; // [rsp+48h] [rbp-70h]
  __int128 *v44; // [rsp+50h] [rbp-68h]
  char *v45; // [rsp+58h] [rbp-60h]
  _QWORD *v46; // [rsp+60h] [rbp-58h]
  __int128 v47; // [rsp+68h] [rbp-50h] BYREF
  __int128 v48; // [rsp+78h] [rbp-40h]
  __int64 v49; // [rsp+88h] [rbp-30h]
  unsigned int v50; // [rsp+D0h] [rbp+18h]

  v49 = 0LL;
  v9 = a3 & 0x20000000;
  v44 = 0LL;
  v50 = 0;
  v12 = a1;
  v47 = 0LL;
  v48 = 0LL;
  v13 = a3 & 0x4000000;
  if ( (a3 & 0x4000000) == 0 )
    v12 = *(_QWORD *)(a1 + 760);
  v14 = 0LL;
  if ( !v13 )
    v14 = a1;
  v15 = a3 & 0x1F0000;
  if ( (a3 & 0x1F0000) == 0x10000 )
  {
    v43 = &ACPIGetWorkerForBuffer;
  }
  else
  {
    switch ( v15 )
    {
      case 0x40000:
        v42 = v14;
        v43 = &ACPIGetWorkerForInteger;
        if ( (a3 & 0x800) != 0 )
        {
          v42 = v14;
          if ( !v13 )
          {
            v42 = v14;
            if ( _bittest64((const signed __int64 *)(v14 + 8), 0x39u) )
            {
              v42 = *(_QWORD *)(v14 + 184);
              v12 = *(_QWORD *)(v42 + 760);
            }
          }
        }
        goto LABEL_8;
      case 0x20000:
        v43 = &ACPIGetWorkerForData;
        break;
      case 0x80000:
        v43 = &ACPIGetWorkerForString;
        break;
      case 0x100000:
        v43 = &ACPIGetWorkerForNothing;
        break;
      default:
        return 3221225713LL;
    }
  }
  v42 = v14;
LABEL_8:
  if ( (a3 & 0x3800000) != 0 )
  {
    if ( (a3 & 0x800000) != 0 )
    {
      WORD1(v47) = 1;
      *(_QWORD *)&v48 = a4;
    }
    else
    {
      if ( (a3 & 0x1000000) != 0 )
      {
        WORD1(v47) = 2;
      }
      else
      {
        if ( (a3 & 0x2000000) == 0 )
          ACPIInternalError(0x600BFuLL);
        WORD1(v47) = 3;
      }
      DWORD2(v48) = a5;
      v49 = a4;
    }
    v50 = 1;
    v44 = &v47;
  }
  Pool2 = ExAllocatePool2(64LL, 120LL, 1299211073LL);
  v45 = (char *)Pool2;
  v17 = (char *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)Pool2 = a3;
  *(_DWORD *)(Pool2 + 4) = a2;
  *(_QWORD *)(Pool2 + 24) = v14;
  *(_QWORD *)(Pool2 + 32) = v12;
  *(_QWORD *)(Pool2 + 40) = a6;
  *(_QWORD *)(Pool2 + 48) = a7;
  *(_QWORD *)(Pool2 + 56) = a8;
  *(_QWORD *)(Pool2 + 64) = a9;
  v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink);
  v19 = (_QWORD *)qword_140091238;
  v20 = v17 + 8;
  v46 = v17 + 8;
  if ( *(__int64 **)qword_140091238 != &AcpiGetListEntry )
LABEL_29:
    __fastfail(3u);
  *v20 = &AcpiGetListEntry;
  *((_QWORD *)v17 + 2) = v19;
  *v19 = v20;
  qword_140091238 = (__int64)(v17 + 8);
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink, v18);
  if ( !v13 && (*(_QWORD *)(v14 + 8) & 0x208000000000000LL) == 0x8000000000000LL )
  {
    v24 = -1073741772;
    goto LABEL_19;
  }
  v21 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v22 = (__int64 *)(*(_QWORD *)v12 + 24LL);
  for ( i = (__int64 *)*v22; ; i = (__int64 *)*i )
  {
    if ( v22 == i )
    {
      ExReleaseSpinLockShared(&ACPINamespaceLock, v21);
LABEL_17:
      v12 = 0LL;
LABEL_18:
      v24 = -1073741772;
      goto LABEL_19;
    }
    if ( a2 == *((_DWORD *)i + 10) )
      break;
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v21);
  if ( !i )
    goto LABEL_17;
  v12 = (__int64)(i + 15);
  dword_14008ED38 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)i + 32);
  if ( i == (__int64 *)-120LL )
    goto LABEL_18;
  if ( *(_WORD *)(*(_QWORD *)v12 + 66LL) == 8
    && v42
    && a3 >= 0
    && *(_QWORD *)(v42 + 648)
    && (*(_BYTE *)(v42 + 1008) & 0x40) == 0 )
  {
    v24 = -1073741661;
    goto LABEL_19;
  }
  v31 = v17 + 80;
  if ( !v9 )
  {
    v24 = AMLIEvalNameSpaceObject(i + 15, (__int64)(v17 + 80), v50, (__int64)v44);
    goto LABEL_19;
  }
  v32 = (__int64)v17;
  v33 = v43;
  inited = 0LL;
  dword_14008ED38 = 0;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  v35 = *(_QWORD *)v12;
  if ( g_SimulatorCallbackObject )
  {
    if ( v17 != (char *)-80LL )
    {
      *v31 = 0LL;
      *((_OWORD *)v17 + 6) = 0LL;
      *((_QWORD *)v17 + 14) = 0LL;
    }
    v42 = 0LL;
    inited = Simulator_AllocAndInitTestData();
    if ( inited )
    {
      v24 = Simulator_Copy_Arguments(v50, v44, &v42);
      if ( v24 >= 0 )
      {
        *(_DWORD *)inited = 1;
        v32 = inited;
        *(_DWORD *)(inited + 4) = 2;
        *(_DWORD *)(inited + 8) = 1;
        *(_QWORD *)(inited + 16) = v35;
        *(_QWORD *)(inited + 24) = v31;
        *(_QWORD *)(inited + 32) = v50;
        *(_QWORD *)(inited + 40) = v42;
        *(_QWORD *)(inited + 48) = v33;
        v33 = &Simulator_AsyncEvalObjectCallBack;
        *(_QWORD *)(inited + 56) = v17;
        *(_QWORD *)(inited + 64) = 0LL;
        v24 = Simulator_TestNotify((PVOID)inited);
        if ( v24 >= 0 && *(_QWORD *)(inited + 64) == 1LL )
          v44 = *(__int128 **)(inited + 40);
      }
      if ( !v24 )
        goto LABEL_41;
    }
    else
    {
      v24 = -1073741670;
    }
    j = v12;
  }
  else
  {
LABEL_41:
    if ( (*(_BYTE *)(v35 + 64) & 4) != 0 )
    {
      v24 = -1073741738;
      j = v12;
    }
    else
    {
      if ( v17 != (char *)-80LL )
      {
        *v31 = 0LL;
        *((_OWORD *)v17 + 6) = 0LL;
        *((_QWORD *)v17 + 14) = 0LL;
      }
      for ( j = v12; *(_WORD *)(v35 + 66) == 128; v35 = *(_QWORD *)(v35 + 80) )
        ;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v35 + 112));
      if ( (gDebugger & 8) != 0 )
      {
        ObjectPath = (void *)GetObjectPath(v35);
        CurrentThread = KeGetCurrentThread();
        v40 = ObjectPath;
        if ( ObjectPath )
        {
          PrintDebugMessage(0xBu, CurrentThread, ObjectPath, 0LL, 0LL);
          ExFreePoolWithTag(v40, 0);
        }
        else
        {
          PrintDebugMessage(0xBu, CurrentThread, byte_140075A82, 0LL, 0LL);
        }
      }
      v24 = AsyncEvalObject(v35, (__int64)v31, v50, (__int64)v44, (__int64)v33, v32, 1);
      DereferenceObjectEx(v35);
      if ( v24 == 32772 )
        v24 = 259;
    }
    if ( g_SimulatorCallbackObject && v24 != 259 )
    {
      if ( inited )
      {
        v24 = Simulator_TestNotifyRet((PVOID)inited);
        v41 = *(_DWORD *)(inited + 4);
        if ( v41 == 1 || (unsigned int)(v41 - 2) <= 1 )
          Simulator_Free_Arguments(*(unsigned int *)(inited + 32), *(_QWORD *)(inited + 40));
        ExFreePoolWithTag((PVOID)inited, 0);
      }
      else
      {
        v24 = -1073741823;
      }
    }
  }
  if ( v24 != 259 )
  {
    v17 = v45;
    v20 = v46;
LABEL_19:
    v25 = (void (__fastcall *)(__int64, _QWORD, char *, char *))v43;
    *(_DWORD *)v17 |= 0x10000000u;
    v25(v12, (unsigned int)v24, v17 + 80, v17);
    if ( v12 )
      AMLIDereferenceHandleEx(v12);
    v26 = *((_DWORD *)v17 + 18);
    v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink);
    v28 = *v20;
    if ( *(_QWORD **)(*v20 + 8LL) == v20 )
    {
      v29 = (_QWORD *)v20[1];
      if ( (_QWORD *)*v29 == v20 )
      {
        *v29 = v28;
        *(_QWORD *)(v28 + 8) = v29;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink, v27);
        ExFreePoolWithTag(v17, 0);
        return v26;
      }
    }
    goto LABEL_29;
  }
  dword_14008ED38 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(j + 8), 0xFFFFFFFF) == 1 )
  {
    v37 = *(_QWORD *)j;
    if ( j == *(_QWORD *)j + 120LL )
    {
      DereferenceObjectEx(v37);
    }
    else
    {
      DereferenceObjectEx(v37);
      HeapFree((_QWORD *)j);
    }
  }
  return 259LL;
}
