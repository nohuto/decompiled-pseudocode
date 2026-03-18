/*
 * XREFs of HvlPhase2Initialize @ 0x1405B8B08
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ExNotifyWithProcessing @ 0x140439330 (ExNotifyWithProcessing.c)
 *     HvlpCheckTscSync @ 0x1404EE8C4 (HvlpCheckTscSync.c)
 *     ExRegisterCallback @ 0x1404F0710 (ExRegisterCallback.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x1405BB934 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlpInitializeHvCrashdumpPhase2 @ 0x1405C0E60 (HvlpInitializeHvCrashdumpPhase2.c)
 *     HvlpInitializeSvmIommuSupport @ 0x1405C0FF4 (HvlpInitializeSvmIommuSupport.c)
 *     HvlpEtwRegister @ 0x1405C1174 (HvlpEtwRegister.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1405C11BC (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x1405C1454 (HvlpLogIommuInitStatus.c)
 *     HvlpLogProcessorStartupFailure @ 0x1405C164C (HvlpLogProcessorStartupFailure.c)
 *     HvlpWriteEventLog @ 0x1405C1714 (HvlpWriteEventLog.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     EtwUnregister @ 0x140A84ED0 (EtwUnregister.c)
 *     ExCreateCallback @ 0x140AFB990 (ExCreateCallback.c)
 *     IoCreateNotificationEvent @ 0x140B00140 (IoCreateNotificationEvent.c)
 *     PoRegisterPowerSettingCallback @ 0x140B05F90 (PoRegisterPowerSettingCallback.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     HvlpDiscoverTopologyComplete @ 0x140CB94E0 (HvlpDiscoverTopologyComplete.c)
 */

NTSTATUS __fastcall HvlPhase2Initialize(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // r12
  struct _EVENT_DATA_DESCRIPTOR *p_UserData; // r8
  const EVENT_DESCRIPTOR *v9; // rcx
  ULONG v10; // edx
  NTSTATUS result; // eax
  __int64 v12; // rcx
  GUID **v13; // rbx
  __int64 v14; // rdi
  UNICODE_STRING EventName; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING v16; // [rsp+48h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+88h] [rbp-80h]
  _QWORD v19[5]; // [rsp+90h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR CallbackObject; // [rsp+B8h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C8h] [rbp-40h] BYREF

  *(_QWORD *)&EventName.Length = 4456514LL;
  EventName.Buffer = L"\\KernelObjects\\HvlWithdrawAllowed";
  v1 = *(_QWORD **)(a1 + 240);
  v16 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v3 = v1[316];
  v4 = v1[317];
  v5 = v1[318];
  v6 = v1[319];
  v7 = v1[320];
  if ( v3 )
  {
    HvlpEtwRegister();
    v18 = v3;
    v19[0] = v4;
    v19[1] = v5;
    v19[2] = v6;
    v19[3] = v7;
    if ( v3 == 35 )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)v19;
      p_UserData = &UserData;
      v10 = 1;
      v9 = &HV_EVENTLOG_BAL_HYPERVISOR_INIT_FAILED;
    }
    else
    {
      if ( v3 != 38 )
      {
LABEL_7:
        EtwUnregister(HvlGlobalSystemEventsHandle);
        HvlGlobalSystemEventsHandle = 0LL;
        goto LABEL_8;
      }
      p_UserData = 0LL;
      v9 = (const EVENT_DESCRIPTOR *)HV_EVENTLOG_BAL_TOO_MANY_RS_MEMORY_RANGES;
      v10 = 0;
    }
    HvlpWriteEventLog(v9, v10, p_UserData);
    goto LABEL_7;
  }
LABEL_8:
  if ( !HvlHypervisorConnected )
    return 0;
  if ( (HvlpFlags & 2) == 0 )
    goto LABEL_15;
  HvlpDiscoverTopologyComplete();
  HvlpSchedulerType = HvlpQueryHypervisorSchedulerType();
  if ( HvlpSchedulerType == 4 )
    HvlpRootSchedulerEnabled = 1;
  if ( !HvlpRootSchedulerEnabled
    || (result = HvlpInitializeSvmIommuSupport(), (int)(result + 0x80000000) < 0)
    || result == -1073741637 )
  {
LABEL_15:
    HvlpInitializeHvCrashdumpPhase2();
    if ( (HvlpRootFlags & 1) == 0 )
      goto LABEL_24;
    HvlpEtwRegister();
    HvlpWriteEventLog(&HV_EVENTLOG_START_SUCCEEDED, 0, 0LL);
    *(_QWORD *)&CallbackObject.Size = 4LL;
    CallbackObject.Ptr = (ULONGLONG)&HvlpSchedulerType;
    HvlpWriteEventLog(&HV_EVENTLOG_SCHEDULER_TYPE, 1u, &CallbackObject);
    HvlpCheckTscSync();
    HvlpLogIommuInitStatus();
    HvlpLogGuestStateScrubbingStatus();
    if ( (unsigned int)HvlpLogicalProcessorCount < HvlpLogicalProcessorRegionsCount )
    {
      v12 = 104LL * (unsigned int)HvlpLogicalProcessorCount;
      if ( !*((_BYTE *)HvlpLogicalProcessorRegions + v12) )
      {
        if ( *(_WORD *)((char *)HvlpLogicalProcessorRegions + v12 + 40) )
          HvlpLogProcessorStartupFailure(*(unsigned int *)((char *)HvlpLogicalProcessorRegions + v12 + 8));
      }
    }
    if ( HvlpMinrootConfigurationError )
      HvlpWriteEventLog(&HV_EVENTLOG_CORE_SCHEDULER_PROCESSOR_CONFIGURATION_WARNING, 0, 0LL);
    RtlInitUnicodeString(&v16, L"\\Callback\\PowerState");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v16;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 80;
    CallbackObject.Ptr = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ExCreateCallback((PCALLBACK_OBJECT *)&CallbackObject, &ObjectAttributes, 0, 1u);
    if ( result >= 0 )
    {
      ExRegisterCallback((PCALLBACK_OBJECT)CallbackObject.Ptr, (PCALLBACK_FUNCTION)HvlpPowerStateCallback, 0LL);
LABEL_24:
      if ( ExCbEnlightenmentState )
        ExNotifyWithProcessing(ExCbEnlightenmentState, 0LL, 0, 0LL);
      if ( (HvlpEnlightenments & 0x400) != 0 )
      {
        v13 = &HvlpPowerSettingList;
        v14 = 6LL;
        do
        {
          PoRegisterPowerSettingCallback(0LL, *v13, HvlpPowerPolicySettingCallback, (PVOID)*((int *)v13 + 2), 0LL);
          v13 += 2;
          --v14;
        }
        while ( v14 );
      }
      VslpReservedTransferLock.AffinityVersion = 0LL;
      *(_QWORD *)&VslpReservedTransferLock.AffinityPrimaryGroup = IoCreateNotificationEvent(
                                                                    &EventName,
                                                                    (PHANDLE)&VslpReservedTransferLock.NpxState);
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 240) + 2552LL) )
      {
        LOBYTE(VslpReservedTransferLock.Affinity) = 1;
        VslpReservedTransferLock.SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)ExAllocatePool2(0x100uLL);
        if ( !VslpReservedTransferLock.SavedApcState.ApcListHead[0].Flink )
          return -1073741670;
        LODWORD(VslpReservedTransferLock.SavedApcState.ApcListHead[0].Flink->Flink) = *(_DWORD *)(*(_QWORD *)(a1 + 240)
                                                                                                + 2552LL);
        memmove(
          &VslpReservedTransferLock.SavedApcState.ApcListHead[0].Flink->Blink,
          *(const void **)(*(_QWORD *)(a1 + 240) + 2544LL),
          8LL * (unsigned int)VslpReservedTransferLock.SavedApcState.ApcListHead[0].Flink->Flink);
        KeResetEvent(*(PRKEVENT *)&VslpReservedTransferLock.AffinityPrimaryGroup);
      }
      return 0;
    }
  }
  return result;
}
