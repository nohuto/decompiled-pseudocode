/*
 * XREFs of RaDriverUnload @ 0x14004ECA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x14005C1C0 (WPP_SF_q.c)
 *     RaDeleteDriver @ 0x140183DC0 (RaDeleteDriver.c)
 *     WppCleanupKm @ 0x140188030 (WppCleanupKm.c)
 */

__int64 __fastcall RaDriverUnload(PDRIVER_OBJECT DriverObject)
{
  PVOID DriverObjectExtension; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 10LL, &WPP_24b5fd126b0737de4e117b7643a3f5f0_Traceguids, DriverObject);
  }
  DriverObjectExtension = IoGetDriverObjectExtension(DriverObject, DriverEntry);
  RaDeleteDriver(DriverObjectExtension);
  if ( _InterlockedExchangeAdd(&InitializeCount, 0xFFFFFFFF) == 1 )
  {
    if ( StorpControl )
    {
      RtlInitUnicodeString(&DestinationString, L"\\DosDevices\\StorportControl");
      IoDeleteSymbolicLink(&DestinationString);
      IoDeleteDevice(StorpControl);
      StorpControl = 0LL;
    }
    if ( IsWppInitialized )
    {
      WppCleanupKm(v4, v3);
      IsWppInitialized = 0;
    }
    if ( SpPerfUnitReadCounterSet )
    {
      PcwUnregister(SpPerfUnitReadCounterSet);
      SpPerfUnitReadCounterSet = 0LL;
    }
    if ( SpPerfUnitWriteCounterSet )
    {
      PcwUnregister(SpPerfUnitWriteCounterSet);
      SpPerfUnitWriteCounterSet = 0LL;
    }
    if ( SpPerfUnitTransferCounterSet )
    {
      PcwUnregister(SpPerfUnitTransferCounterSet);
      SpPerfUnitTransferCounterSet = 0LL;
    }
    if ( SpPerfUnitQueueCounterSet )
    {
      PcwUnregister(SpPerfUnitQueueCounterSet);
      SpPerfUnitQueueCounterSet = 0LL;
    }
  }
  return 0LL;
}
