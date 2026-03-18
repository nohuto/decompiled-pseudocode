/*
 * XREFs of ?DpiBrightnessInitialize@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x14024E3A0
 * Callers:
 *     DpiFdoInitializeFdo @ 0x140243960 (DpiFdoInitializeFdo.c)
 * Callees:
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall DpiBrightnessInitialize(struct _DEVICE_OBJECT *a1)
{
  _OWORD *DeviceExtension; // rbx

  DeviceExtension = a1->DeviceExtension;
  memset((char *)DeviceExtension + 4520, 0, 0x48uLL);
  memset(DeviceExtension + 287, 0, 0x48uLL);
  memset((char *)DeviceExtension + 4664, 0, 0x58uLL);
  DeviceExtension[297] = 0LL;
  DeviceExtension[298] = 0LL;
  DeviceExtension[299] = 0LL;
  *((_QWORD *)DeviceExtension + 600) = 0LL;
  memset((char *)DeviceExtension + 4808, 0, 0x58uLL);
  return 0LL;
}
