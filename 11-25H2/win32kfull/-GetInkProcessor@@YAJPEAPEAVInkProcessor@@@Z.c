/*
 * XREFs of ?GetInkProcessor@@YAJPEAPEAVInkProcessor@@@Z @ 0x1401BCBF8
 * Callers:
 *     EditionRimDeviceReadNotification @ 0x140272790 (EditionRimDeviceReadNotification.c)
 *     ?InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402B4B98 (-InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402B4BD0 (-InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402B4C08 (-InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetInkProcessor(struct InkProcessor **a1, __int64 a2)
{
  struct InkProcessor *v3; // rdx

  v3 = *(struct InkProcessor **)(W32GetUserSessionState(a1, a2) + 3272);
  *a1 = v3;
  return v3 == 0LL ? 0xC0000001 : 0;
}
