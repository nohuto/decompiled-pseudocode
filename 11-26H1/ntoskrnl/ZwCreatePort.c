/*
 * XREFs of ZwCreatePort @ 0x140729780
 * Callers:
 *     DifZwCreatePortWrapper @ 0x1406A45E0 (DifZwCreatePortWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreatePort(
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
