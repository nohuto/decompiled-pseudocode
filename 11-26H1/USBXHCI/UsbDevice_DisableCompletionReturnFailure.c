/*
 * XREFs of UsbDevice_DisableCompletionReturnFailure @ 0x14004E2F0
 * Callers:
 *     <none>
 * Callees:
 *     UsbDevice_DisableCompletion @ 0x14001CA4C (UsbDevice_DisableCompletion.c)
 */

_UNKNOWN **__fastcall UsbDevice_DisableCompletionReturnFailure(__int64 a1, __int64 a2)
{
  return UsbDevice_DisableCompletion(a1, a2, 1);
}
