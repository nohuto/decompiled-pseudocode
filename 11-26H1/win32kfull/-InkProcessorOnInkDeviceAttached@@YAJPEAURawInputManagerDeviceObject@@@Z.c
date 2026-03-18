/*
 * XREFs of ?InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402958D0
 * Callers:
 *     EditionDevicePnpNotification @ 0x14016F940 (EditionDevicePnpNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x140222790 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x140295910 (-OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

__int64 __fastcall InkProcessorOnInkDeviceAttached(struct RawInputManagerDeviceObject *a1, __int64 a2)
{
  InkProcessor *v3; // rcx

  v3 = *(InkProcessor **)(W32GetUserSessionState(a1, a2) + 3272);
  if ( v3 )
    return InkProcessor::OnDeviceAttached(v3, a1);
  else
    return 3221225473LL;
}
