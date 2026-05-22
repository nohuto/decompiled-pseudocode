/*
 * XREFs of ?HasManualTriggerHaptic@CompliantHapticInterface@@SA_NPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x18019DF98
 * Callers:
 *     ?TryAttachHapticMouse@HapticDeviceManager@@QEAAJKAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x180191A20 (-TryAttachHapticMouse@HapticDeviceManager@@QEAAJKAEBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?CheckForHapticTouchpadArrival@PTPProcessor@@AEAAXPEBUDeviceInfo@@@Z @ 0x1801CA22C (-CheckForHapticTouchpadArrival@PTPProcessor@@AEAAXPEBUDeviceInfo@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CompliantHapticInterface::HasManualTriggerHaptic(struct _HIDP_PREPARSED_DATA *a1)
{
  USHORT v2; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  return HidP_GetSpecificValueCaps(HidP_Output, 0xEu, 0, 0x21u, 0LL, &v2, a1) == -1072627705;
}
