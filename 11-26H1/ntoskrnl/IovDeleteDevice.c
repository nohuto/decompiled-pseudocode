/*
 * XREFs of IovDeleteDevice @ 0x140C20E34
 * Callers:
 *     IoDeleteDevice @ 0x140437BA0 (IoDeleteDevice.c)
 * Callees:
 *     VfIoDeleteDevice @ 0x140C306C0 (VfIoDeleteDevice.c)
 */

__int64 __fastcall IovDeleteDevice(ULONG_PTR a1)
{
  return VfIoDeleteDevice(a1);
}
