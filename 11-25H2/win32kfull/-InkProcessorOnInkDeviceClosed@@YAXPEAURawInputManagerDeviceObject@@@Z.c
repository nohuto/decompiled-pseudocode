/*
 * XREFs of ?InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402B4B98
 * Callers:
 *     EditionDevicePnpNotification @ 0x14011D320 (EditionDevicePnpNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x1401F5000 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     ?GetInkProcessor@@YAJPEAPEAVInkProcessor@@@Z @ 0x1401BCBF8 (-GetInkProcessor@@YAJPEAPEAVInkProcessor@@@Z.c)
 *     ?OnDeviceClosed@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402EBEDC (-OnDeviceClosed@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 */

void __fastcall InkProcessorOnInkDeviceClosed(struct RawInputManagerDeviceObject *a1, __int64 a2)
{
  struct InkProcessor *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  if ( (int)GetInkProcessor(&v3, a2) >= 0 )
    InkProcessor::OnDeviceClosed(v3, a1);
}
