/*
 * XREFs of RIMGetVirtualDesktopPhysicalSize @ 0x140085740
 * Callers:
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x14007BDA0 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x14009BAE8 (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?EndInertia@CInertiaManager@@QEAA_NXZ @ 0x1401B0814 (-EndInertia@CInertiaManager@@QEAA_NXZ.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x140207AC4 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     ?GetUnionRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x140085C70 (-GetUnionRegion@Mouse@InputConfig@@SA-AUCInputSpaceRegion@@XZ.c)
 */

__int64 __fastcall RIMGetVirtualDesktopPhysicalSize(__int64 a1)
{
  int v2; // r10d
  int v3; // r9d
  _DWORD v5[5]; // [rsp+20h] [rbp-2D8h] BYREF
  unsigned __int16 v6; // [rsp+34h] [rbp-2C4h]

  *(_OWORD *)a1 = 0LL;
  InputConfig::Mouse::GetUnionRegion(v5);
  v2 = v6;
  v3 = v5[3] - v5[1];
  *(_DWORD *)(a1 + 8) = 2540 * (v5[2] - v5[0]) / v6;
  *(_DWORD *)(a1 + 12) = 2540 * v3 / v2;
  return a1;
}
