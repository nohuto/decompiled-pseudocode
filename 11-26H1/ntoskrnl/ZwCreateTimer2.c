/*
 * XREFs of ZwCreateTimer2 @ 0x140729940
 * Callers:
 *     DifZwCreateTimer2Wrapper @ 0x1406A61D0 (DifZwCreateTimer2Wrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateTimer2(
        PHANDLE TimerHandle,
        PVOID Reserved1,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Attributes,
        ACCESS_MASK DesiredAccess)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle);
}
