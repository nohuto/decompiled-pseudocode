/*
 * XREFs of ??_EInkDevice@@UEAAPEAXI@Z @ 0x1402FB920
 * Callers:
 *     ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x140295910 (-OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?UnlinkAndReleaseInkDevice@InkProcessor@@AEAAXPEAPEAVInkDevice@@@Z @ 0x1402FBBEC (-UnlinkAndReleaseInkDevice@InkProcessor@@AEAAXPEAPEAVInkDevice@@@Z.c)
 *     ??_EInkDevice@@WCA@EAAPEAXI@Z @ 0x1402FE040 (--_EInkDevice@@WCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1InkDevice@@UEAA@XZ @ 0x1402FDFE4 (--1InkDevice@@UEAA@XZ.c)
 */

InkDevice *__fastcall InkDevice::`vector deleting destructor'(InkDevice *this, char a2)
{
  InkDevice::~InkDevice(this);
  if ( (a2 & 1) != 0 && this )
    Win32FreePool(this);
  return this;
}
