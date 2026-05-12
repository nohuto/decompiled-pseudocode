/*
 * XREFs of StorCheckDpcWatchdogTimerExpire @ 0x140032890
 * Callers:
 *     NvmeCompletionDpcRoutine @ 0x140030E20 (NvmeCompletionDpcRoutine.c)
 *     WaitForNVMeCommandCompleteWithCustomTimeout @ 0x140031CB4 (WaitForNVMeCommandCompleteWithCustomTimeout.c)
 *     NvmeProcessPendingIo @ 0x14003A190 (NvmeProcessPendingIo.c)
 *     StorRestartDeviceCommandQueue @ 0x14003BC0C (StorRestartDeviceCommandQueue.c)
 *     NvmeControllerProcessPendingCommand @ 0x14003F6A0 (NvmeControllerProcessPendingCommand.c)
 *     NvmeControllerEnable @ 0x1400F2B00 (NvmeControllerEnable.c)
 *     NvmeControllerReset @ 0x1400FA490 (NvmeControllerReset.c)
 *     NvmeIoCompletionRedirectDpcRoutine @ 0x14011A2F0 (NvmeIoCompletionRedirectDpcRoutine.c)
 *     NvmeProcessPendingIoInCompletionDpc @ 0x14011B430 (NvmeProcessPendingIoInCompletionDpc.c)
 *     NvmeProcessPendingIoInSpecifiedGroup @ 0x14011D160 (NvmeProcessPendingIoInSpecifiedGroup.c)
 *     StorRefillShadowQueue @ 0x14011E660 (StorRefillShadowQueue.c)
 * Callees:
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

bool __fastcall StorCheckDpcWatchdogTimerExpire(unsigned __int8 a1, unsigned __int8 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1;
  v3 = a2;
  memset(&WatchdogInformation, 0, sizeof(WatchdogInformation));
  if ( KeQueryDpcWatchdogInformation(&WatchdogInformation) < 0 )
    return 0;
  if ( WatchdogInformation.DpcWatchdogLimit
    && 100 * (unsigned __int64)WatchdogInformation.DpcWatchdogCount < v3
                                                                    * (unsigned __int64)WatchdogInformation.DpcWatchdogLimit )
  {
    return 1;
  }
  if ( !WatchdogInformation.DpcTimeLimit )
    return 0;
  return 100 * (unsigned __int64)WatchdogInformation.DpcTimeCount < v2
                                                                  * (unsigned __int64)WatchdogInformation.DpcTimeLimit;
}
