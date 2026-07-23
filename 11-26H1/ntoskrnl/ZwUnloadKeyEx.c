/*
 * XREFs of ZwUnloadKeyEx @ 0x14072BB60
 * Callers:
 *     DifZwUnloadKeyExWrapper @ 0x1406C1E50 (DifZwUnloadKeyExWrapper.c)
 *     PiDrvDbUnloadHive @ 0x140B211AC (PiDrvDbUnloadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnloadKeyEx(POBJECT_ATTRIBUTES TargetKey, HANDLE Event)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
