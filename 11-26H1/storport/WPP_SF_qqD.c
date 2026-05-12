/*
 * XREFs of WPP_SF_qqD @ 0x14005BAF8
 * Callers:
 *     RaDriverScsiIrp @ 0x140003DF0 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x140004D30 (RaUnitScsiIrp.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x14000EF90 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterDevicePowerDownSrbComplete @ 0x14000F480 (RaidAdapterDevicePowerDownSrbComplete.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x14000F504 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidAdapterSetSystemPowerCompletion @ 0x14000F6F0 (RaidAdapterSetSystemPowerCompletion.c)
 *     RaidAdapterQuerySystemPowerCompletionRoutine @ 0x14000F980 (RaidAdapterQuerySystemPowerCompletionRoutine.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x14000FDD0 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x140010118 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaAdapterStartPowerIo @ 0x1400118E8 (RaAdapterStartPowerIo.c)
 *     RaUnitStartIo @ 0x140013D70 (RaUnitStartIo.c)
 *     RaUnitAsyncError @ 0x140016430 (RaUnitAsyncError.c)
 *     RaidUnitCompleteRequest @ 0x140017760 (RaidUnitCompleteRequest.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1400197D8 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaDriverDeviceControlIrp @ 0x14001CFC0 (RaDriverDeviceControlIrp.c)
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 *     RaDriverIoIrp @ 0x14001F950 (RaDriverIoIrp.c)
 *     RaidUnitCompleteResetRequest @ 0x140024200 (RaidUnitCompleteResetRequest.c)
 *     RaidAdapterPowerIrp @ 0x14002E3C0 (RaidAdapterPowerIrp.c)
 *     RaidAdapterSetDevicePowerIrp @ 0x14002E9E4 (RaidAdapterSetDevicePowerIrp.c)
 *     RaidAdapterPowerDownDevice @ 0x14002EBC0 (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x14002EFF8 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x14002F554 (RaidAdapterSetSystemPowerIrp.c)
 *     RaDriverPnpIrp @ 0x140035490 (RaDriverPnpIrp.c)
 *     RaidAdapterPnpIrp @ 0x1400355D8 (RaidAdapterPnpIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1400364C4 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaUnitPowerIrp @ 0x14003C8D0 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x14003CC5C (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x14003CFDC (RaidUnitSetSystemPowerIrp.c)
 *     RaUnitPnpIrp @ 0x14003FBDC (RaUnitPnpIrp.c)
 *     RaDriverFlushIrp @ 0x140041210 (RaDriverFlushIrp.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x140045360 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaidAdapterPowerDownDeviceCompletion @ 0x14004B660 (RaidAdapterPowerDownDeviceCompletion.c)
 *     RaidAdapterStartDevice @ 0x140068EBC (RaidAdapterStartDevice.c)
 *     RaDriverPowerIrp @ 0x140072930 (RaDriverPowerIrp.c)
 *     RaDriverShutdownIrp @ 0x140072A70 (RaDriverShutdownIrp.c)
 *     RaidAdapterSendPowerToMiniportWorkItemRoutine @ 0x14007F680 (RaidAdapterSendPowerToMiniportWorkItemRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x140080D20 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaUnitRemoveDeviceIrp @ 0x14009EC3C (RaUnitRemoveDeviceIrp.c)
 *     RaUnitStartResetIo @ 0x1400A2224 (RaUnitStartResetIo.c)
 *     RaidUpdateUnitIdentityWorkRoutine @ 0x1400AA530 (RaidUpdateUnitIdentityWorkRoutine.c)
 *     StorUnitStartBypassIo @ 0x1400AB260 (StorUnitStartBypassIo.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x140184FF8 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaDriverCreateIrp @ 0x1401B2C80 (RaDriverCreateIrp.c)
 *     RaDriverCloseIrp @ 0x1401B2D90 (RaDriverCloseIrp.c)
 *     RaDriverSystemControlIrp @ 0x1401B7620 (RaDriverSystemControlIrp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 WPP_SF_qqD(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  __int64 v6; // [rsp+90h] [rbp+28h] BYREF
  va_list va1; // [rsp+90h] [rbp+28h]
  va_list va2; // [rsp+98h] [rbp+30h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v6 = va_arg(va2, _QWORD);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           va2,
           4LL,
           0LL);
}
