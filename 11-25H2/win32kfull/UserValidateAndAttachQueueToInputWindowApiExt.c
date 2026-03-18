/*
 * XREFs of UserValidateAndAttachQueueToInputWindowApiExt @ 0x140063450
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z @ 0x140063468 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z.c)
 */

int __fastcall UserValidateAndAttachQueueToInputWindowApiExt(HWND a1, struct IInputQueue *a2)
{
  return ValidateAndAttachQueueToInputWindow(a1, a2);
}
