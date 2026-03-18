/*
 * XREFs of ?RemoveRimDevice@VirtualTouchpadProcessor@@AEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x140033CF0
 * Callers:
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@@Z @ 0x14021CE04 (-ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@.c)
 *     ?RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z @ 0x14021DAF8 (-RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z.c)
 * Callees:
 *     RIMIDERemoveInjectionDevice @ 0x1400339A4 (RIMIDERemoveInjectionDevice.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 */

void __fastcall VirtualTouchpadProcessor::RemoveRimDevice(
        VirtualTouchpadProcessor *this,
        struct RawInputManagerDeviceObject *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8

  v2 = *((_QWORD *)a2 + 49);
  RIMLockExclusive(v2 + 104);
  RIMIDERemoveInjectionDevice((__int64)a2);
  RIMUnlockExclusive(v2 + 104, v4, v5);
  ObfDereferenceObject(a2);
}
