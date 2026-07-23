/*
 * XREFs of ZwOpenKeyEx @ 0x14072A540
 * Callers:
 *     DifZwOpenKeyExWrapper @ 0x1406AFA30 (DifZwOpenKeyExWrapper.c)
 *     _RegRtlOpenKeyTransacted @ 0x1409583B0 (_RegRtlOpenKeyTransacted.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x140976CE0 (DrvDbGetDriverPackageMappedProperty.c)
 *     MfgInitSystem @ 0x140CB19A8 (MfgInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenKeyEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
