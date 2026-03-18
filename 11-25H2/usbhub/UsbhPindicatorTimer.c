/*
 * XREFs of UsbhPindicatorTimer @ 0x14003F680
 * Callers:
 *     <none>
 * Callees:
 *     UsbhQueueWorkItemEx @ 0x140032140 (UsbhQueueWorkItemEx.c)
 */

_BOOL8 __fastcall UsbhPindicatorTimer(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  return (UsbhQueueWorkItemEx(a2, 1u, (__int64)UsbhPindicatorWorker, a4, a3, 0x646E6950u, 0LL) & 0xC0000000) == -1073741824;
}
