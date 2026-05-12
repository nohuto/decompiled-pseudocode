/*
 * XREFs of RaUnitCheckForwardIoOutstanding @ 0x14005AAB0
 * Callers:
 *     RaidUnitCompleteIrpRequest @ 0x140021CC0 (RaidUnitCompleteIrpRequest.c)
 *     RaidInsertDeviceQueue @ 0x1400234A0 (RaidInsertDeviceQueue.c)
 *     RiGetEnqueueReason @ 0x140023E10 (RiGetEnqueueReason.c)
 *     GatewayRegisterForEmptyNotification @ 0x14002ECBC (GatewayRegisterForEmptyNotification.c)
 *     RaidUnitPendingIrpDpcRoutine @ 0x140049A40 (RaidUnitPendingIrpDpcRoutine.c)
 *     RaUnitWaitForForwardIoQuiescence @ 0x14005CF04 (RaUnitWaitForForwardIoQuiescence.c)
 *     GatewayWaitForForwardIoWithTimeout @ 0x1400AEA18 (GatewayWaitForForwardIoWithTimeout.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14004528C (RaCallMiniportUnitControl.c)
 *     Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline @ 0x140097F6C (Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

char __fastcall RaUnitCheckForwardIoOutstanding(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rcx
  __int64 v7; // rcx

  if ( *(_QWORD *)(a1 + 32)
    && RaidIsUnitControlSupported(a1, 31)
    && ((Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline(v3, v2, v4, v5),
         v6 = *(_DWORD **)(a1 + 24),
         *v6 != 1094997074)
      ? (*v6 != 1314275652
       ? (v7 = 0LL)
       : (v7 = (__int64)(v6 + 42)))
      : (v7 = (__int64)(v6 + 94)),
        (int)RaCallMiniportUnitControl(v7) >= 0) )
  {
    return 0;
  }
  else
  {
    return 0;
  }
}
