/*
 * XREFs of ZwLoadKeyEx @ 0x14072A220
 * Callers:
 *     DifZwLoadKeyExWrapper @ 0x1406ACD60 (DifZwLoadKeyExWrapper.c)
 *     PiDrvDbLoadHive @ 0x140B210E0 (PiDrvDbLoadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLoadKeyEx(
        POBJECT_ATTRIBUTES TargetKey,
        POBJECT_ATTRIBUTES SourceFile,
        ULONG Flags,
        HANDLE TrustClassKey,
        HANDLE Event,
        ACCESS_MASK DesiredAccess,
        PHANDLE RootHandle,
        PVOID Reserved)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
