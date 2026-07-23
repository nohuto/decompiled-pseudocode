/*
 * XREFs of ZwCreateWaitablePort @ 0x140729A20
 * Callers:
 *     DifZwCreateWaitablePortWrapper @ 0x1406A7130 (DifZwCreateWaitablePortWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateWaitablePort(
        PHANDLE PortHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG MaxConnectionInfoLength,
        ULONG MaxMessageLength,
        ULONG MaxPoolUsage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
