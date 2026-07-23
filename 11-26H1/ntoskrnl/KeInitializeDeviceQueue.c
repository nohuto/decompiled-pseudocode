/*
 * XREFs of KeInitializeDeviceQueue @ 0x1404E6C40
 * Callers:
 *     HalpDmaAllocateChildAdapterV2 @ 0x140786890 (HalpDmaAllocateChildAdapterV2.c)
 *     IoCreateController @ 0x140798CB0 (IoCreateController.c)
 *     IoCreateDevice @ 0x14091B9C0 (IoCreateDevice.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeDeviceQueue(PKDEVICE_QUEUE DeviceQueue)
{
  *(_DWORD *)&DeviceQueue->Type = 2621460;
  DeviceQueue->DeviceListHead.Blink = &DeviceQueue->DeviceListHead;
  DeviceQueue->DeviceListHead.Flink = &DeviceQueue->DeviceListHead;
  DeviceQueue->Busy = 0;
  DeviceQueue->1 = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C)(unsigned __int8)*(_QWORD *)&DeviceQueue->1;
  DeviceQueue->Lock = 0LL;
}
