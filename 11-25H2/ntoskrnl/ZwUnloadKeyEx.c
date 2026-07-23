/*
 * XREFs of ZwUnloadKeyEx @ 0x14069ECC0
 * Callers:
 *     PiDrvDbUnloadHive @ 0x140A77940 (PiDrvDbUnloadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnloadKeyEx(POBJECT_ATTRIBUTES TargetKey, HANDLE Event)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
