/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x1409D46E0
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x1403542D4 (RtlpHpMetadataAlloc.c)
 *     LdrpInitMuiCrits @ 0x1403E0804 (LdrpInitMuiCrits.c)
 *     ExPoolSetLimit @ 0x1406CFD68 (ExPoolSetLimit.c)
 *     ExpCheckTestsigningEnabled @ 0x14077F3DC (ExpCheckTestsigningEnabled.c)
 *     ExCheckFullProcessInformationAccess @ 0x1409D42F8 (ExCheckFullProcessInformationAccess.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x1409D4554 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbGetIndex @ 0x1409D5FF0 (SdbGetIndex.c)
 *     RtlpLogCapabilityCheckLatency @ 0x140B2E660 (RtlpLogCapabilityCheckLatency.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140B48CF8 (ExpFirmwareAccessAppContainerCheck.c)
 *     ExQueryBootEntropyInformation @ 0x140B6FF6C (ExQueryBootEntropyInformation.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlpRunOnceWaitForInit @ 0x14080ED68 (RtlpRunOnceWaitForInit.c)
 *     RtlRunOnceComplete @ 0x1409D58C0 (RtlRunOnceComplete.c)
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
  int v13; // edi
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
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      RtlRaiseStatus(v13);
    }
  }
  v9 = 0;
LABEL_5:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v9;
}
