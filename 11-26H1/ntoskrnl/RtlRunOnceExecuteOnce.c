/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x1409E7CD0
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x140352250 (RtlpHpMetadataAlloc.c)
 *     LdrpInitMuiCrits @ 0x1403DD614 (LdrpInitMuiCrits.c)
 *     ExPoolSetLimit @ 0x1406CBD38 (ExPoolSetLimit.c)
 *     ExpCheckTestsigningEnabled @ 0x14077C8E8 (ExpCheckTestsigningEnabled.c)
 *     SdbGetIndex @ 0x1409E6C78 (SdbGetIndex.c)
 *     ExCheckFullProcessInformationAccess @ 0x1409E78E0 (ExCheckFullProcessInformationAccess.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x1409E7B3C (SdbpGetStringTableItemFromStringRef.c)
 *     RtlpLogCapabilityCheckLatency @ 0x140B2C5E0 (RtlpLogCapabilityCheckLatency.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140B46CC8 (ExpFirmwareAccessAppContainerCheck.c)
 *     ExQueryBootEntropyInformation @ 0x140B6CB9C (ExQueryBootEntropyInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlpRunOnceWaitForInit @ 0x1408092D8 (RtlpRunOnceWaitForInit.c)
 *     RtlRunOnceComplete @ 0x1409E73A0 (RtlRunOnceComplete.c)
 */

NTSTATUS __stdcall RtlRunOnceExecuteOnce(
        PRTL_RUN_ONCE RunOnce,
        PRTL_RUN_ONCE_INIT_FN InitFn,
        PVOID Parameter,
        PVOID *Context)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 Value; // rax
  NTSTATUS v9; // ebx
  signed __int64 v11; // rcx
  signed __int64 v12; // rcx
  NTSTATUS v13; // edi
  PVOID v14; // r8

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  Value = RunOnce->Value;
  if ( (RunOnce->Value & 3) == 2 )
  {
LABEL_2:
    if ( Context )
      *Context = (PVOID)(Value & 0xFFFFFFFFFFFFFFFCuLL);
  }
  else
  {
    do
    {
      while ( 1 )
      {
        v11 = Value & 3;
        if ( (Value & 3) == 0 )
          break;
        if ( v11 != 1 )
        {
          if ( v11 == 3 )
          {
            v13 = -1073741584;
            goto LABEL_10;
          }
          goto LABEL_2;
        }
        Value = RtlpRunOnceWaitForInit(Value, (volatile signed __int64 *)RunOnce);
      }
      v12 = Value;
      Value = _InterlockedCompareExchange64((volatile signed __int64 *)RunOnce, 1LL, Value);
    }
    while ( Value != v12 );
    if ( !(unsigned int)guard_dispatch_icall_no_overrides((__int64)RunOnce, (__int64)Parameter) )
    {
      v9 = -1073741823;
      v13 = RtlRunOnceComplete(RunOnce, 4u, 0LL);
      if ( v13 < 0 )
        goto LABEL_10;
      goto LABEL_5;
    }
    if ( Context )
      v14 = *Context;
    else
      v14 = 0LL;
    v13 = RtlRunOnceComplete(RunOnce, 0, v14);
    if ( v13 < 0 )
    {
LABEL_10:
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), (__int64)InitFn, (__int64)Parameter);
      RtlRaiseStatus(v13);
    }
  }
  v9 = 0;
LABEL_5:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), (__int64)InitFn, (__int64)Parameter);
  return v9;
}
