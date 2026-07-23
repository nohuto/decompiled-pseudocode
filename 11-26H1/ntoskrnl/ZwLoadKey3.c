/*
 * XREFs of ZwLoadKey3 @ 0x14072A200
 * Callers:
 *     DifZwLoadKey3Wrapper @ 0x1406ACB90 (DifZwLoadKey3Wrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLoadKey3(
        POBJECT_ATTRIBUTES TargetKey,
        POBJECT_ATTRIBUTES SourceFile,
        ULONG Flags,
        PCM_EXTENDED_PARAMETER ExtendedParameters,
        ULONG ExtendedParameterCount,
        ACCESS_MASK DesiredAccess,
        PHANDLE RootHandle,
        PVOID Reserved)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
