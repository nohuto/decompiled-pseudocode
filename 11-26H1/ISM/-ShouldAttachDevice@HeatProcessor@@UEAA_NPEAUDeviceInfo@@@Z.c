/*
 * XREFs of ?ShouldAttachDevice@HeatProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x18007E130
 * Callers:
 *     <none>
 * Callees:
 *     ?OnDeviceArrival@HeatProcessor@@IEAAJPEAUDeviceInfo@@@Z @ 0x1801BDF04 (-OnDeviceArrival@HeatProcessor@@IEAAJPEAUDeviceInfo@@@Z.c)
 */

bool __fastcall HeatProcessor::ShouldAttachDevice(HeatProcessor *this, struct DeviceInfo *a2)
{
  return *((_DWORD *)a2 + 1) == 2048
      && (int)HeatProcessor::OnDeviceArrival((HeatProcessor *)((char *)this - 8), a2) >= 0;
}
