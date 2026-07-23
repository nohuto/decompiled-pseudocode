/*
 * XREFs of HalpIommuInitDiscard @ 0x140CB5E64
 * Callers:
 *     HalpIommuInitSystem @ 0x140BF16E0 (HalpIommuInitSystem.c)
 * Callees:
 *     HalpIommuRegisterBuiltinPlugins @ 0x1405A2738 (HalpIommuRegisterBuiltinPlugins.c)
 *     HalpHvCheckIommuCapability @ 0x140CB5D44 (HalpHvCheckIommuCapability.c)
 */

__int64 __fastcall HalpIommuInitDiscard(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  unsigned int v3; // edx
  ULONG_PTR v4; // rcx
  int v5; // eax

  IommuInterfaceStateChangeCallbackPushLock.InitialStack = 0LL;
  IommuInterfaceStateChangeCallbackPushLock.QuantumTarget = (unsigned __int64)&IommuInterfaceStateChangeCallbackPushLock.SListFaultAddress;
  IommuInterfaceStateChangeCallbackPushLock.SListFaultAddress = &IommuInterfaceStateChangeCallbackPushLock.SListFaultAddress;
  HalpDeviceBlockUnblockPushLock.SListFaultAddress = &HalpDeviceBlockUnblockPushLock.Header.WaitListHead.Blink;
  HalpDeviceBlockUnblockPushLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&HalpDeviceBlockUnblockPushLock.Header.WaitListHead.Blink;
  HalpDeviceBlockUnblockPushLock.WaitListEntry.Flink = (struct _LIST_ENTRY *)&HalpDeviceBlockUnblockPushLock.WaitBlockList;
  HalpDeviceBlockUnblockPushLock.WaitBlockList = (_KWAIT_BLOCK *)&HalpDeviceBlockUnblockPushLock.WaitBlockList;
  IommuInterfaceStateChangeCallbackPushLock.Header.WaitListHead.Blink = &IommuInterfaceStateChangeCallbackPushLock.Header.WaitListHead;
  IommuInterfaceStateChangeCallbackPushLock.Header.WaitListHead.Flink = &IommuInterfaceStateChangeCallbackPushLock.Header.WaitListHead;
  HalpDeviceBlockUnblockPushLock.InitialStack = &HalpDeviceBlockUnblockPushLock.QuantumTarget;
  HalpDeviceBlockUnblockPushLock.QuantumTarget = (unsigned __int64)&HalpDeviceBlockUnblockPushLock.QuantumTarget;
  v2 = (_QWORD *)HalIommuDispatch;
  *(_QWORD *)&HalpDeviceBlockUnblockPushLock.Header.Lock = 0LL;
  HalpDeviceBlockUnblockPushLock.Header.WaitListHead.Flink = 0LL;
  *(_QWORD *)&IommuInterfaceStateChangeCallbackPushLock.Header.Lock = 0LL;
  *(_QWORD *)(HalIommuDispatch + 8) = IommuGetConfiguration;
  v2[2] = IommuGetLibraryContext;
  v2[3] = IommuMapDevice;
  v2[4] = IommuEnableDevicePasid;
  v2[5] = IommuSetAddressSpace;
  v2[6] = IommuDisableDevicePasid;
  v2[7] = IommuUnmapDevice;
  v2[9] = IommuFlushTb;
  v2[10] = IommuFlushAllPasid;
  v2[11] = IommuProcessPageRequestQueue;
  v2[16] = IommuDevicePowerChange;
  v2[17] = IommuBeginDeviceReset;
  v2[18] = IommuFinalizeDeviceReset;
  v2[19] = IommuGetAtsSettings;
  v2[20] = IommuCreateAtsDevice;
  v2[21] = IommuDeleteAtsDevice;
  HalpDeviceBlockUnblockPushLock.KernelStack = &HalpDeviceBlockUnblockPushLock.CurrentRunTime;
  *(_QWORD *)&HalpDeviceBlockUnblockPushLock.CurrentRunTime = &HalpDeviceBlockUnblockPushLock.CurrentRunTime;
  HalpHvParaVirtIommuDomain = 0;
  HalpIommuDmaGuardTableOptIn = 0;
  HalpHvCheckIommuCapability((__int64)IommuDeleteAtsDevice, a2);
  v3 = 0;
  if ( !HalpPrebootMode )
    v3 = HalpIommuRegisterBuiltinPlugins();
  v4 = HalpIommuList;
  if ( (ULONG_PTR *)HalpIommuList == &HalpIommuList )
  {
LABEL_6:
    HalpIommuX2ApicSupport = 0;
  }
  else
  {
    while ( (ULONG_PTR *)v4 != &HalpIommuList )
    {
      v5 = *(_DWORD *)(v4 + 464);
      v4 = *(_QWORD *)v4;
      if ( (v5 & 0x40) == 0 )
        goto LABEL_6;
    }
  }
  return v3;
}
