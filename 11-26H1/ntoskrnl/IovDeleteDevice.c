/*
 * XREFs of IovDeleteDevice @ 0x140C26E44
 * Callers:
 *     IoDeleteDevice @ 0x140426AC0 (IoDeleteDevice.c)
 * Callees:
 *     VfIoDeleteDevice @ 0x140C366D0 (VfIoDeleteDevice.c)
 */

__int64 __fastcall IovDeleteDevice(ULONG_PTR a1)
{
  return VfIoDeleteDevice(a1);
}
