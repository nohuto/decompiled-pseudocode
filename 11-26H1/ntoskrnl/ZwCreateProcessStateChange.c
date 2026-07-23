/*
 * XREFs of ZwCreateProcessStateChange @ 0x1407297E0
 * Callers:
 *     DifZwCreateProcessStateChangeWrapper @ 0x1406A4AF0 (DifZwCreateProcessStateChangeWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateProcessStateChange(
        PHANDLE ProcessStateChangeHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        ULONG64 Reserved)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessStateChangeHandle);
}
