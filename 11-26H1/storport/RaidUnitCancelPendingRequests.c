/*
 * XREFs of RaidUnitCancelPendingRequests @ 0x1400A6F5C
 * Callers:
 *     RaUnitDisableDeviceIrp @ 0x14009B0F4 (RaUnitDisableDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x14018EB54 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14004528C (RaCallMiniportUnitControl.c)
 *     RaidRemoveIoQueue @ 0x140057CBC (RaidRemoveIoQueue.c)
 *     RaidCancelIrp @ 0x140093280 (RaidCancelIrp.c)
 *     Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline @ 0x140097F6C (Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline.c)
 *     StorDrainPendingIoGatewayItems @ 0x1400AEED4 (StorDrainPendingIoGatewayItems.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidUnitCancelPendingRequests(_QWORD *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rax
  __int64 v4; // rdi
  _DWORD *v5; // rax

  v1 = (__int64)(a1 + 88);
  v3 = RaidRemoveIoQueue((__int64)(a1 + 88));
  v4 = 0LL;
  while ( v3 )
  {
    RaidCancelIrp((__int64)a1, 8, v3);
    v3 = RaidRemoveIoQueue(v1);
  }
  StorDrainPendingIoGatewayItems(a1, a1[91]);
  if ( a1[4] && RaidIsUnitControlSupported((__int64)a1, 31) )
  {
    Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline();
    v5 = (_DWORD *)a1[3];
    if ( *v5 == 1094997074 )
    {
      v4 = (__int64)(v5 + 94);
    }
    else if ( *v5 == 1314275652 )
    {
      v4 = (__int64)(v5 + 42);
    }
    RaCallMiniportUnitControl(v4);
  }
  return 0LL;
}
