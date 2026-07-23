/*
 * XREFs of ZwAlpcCreateSecurityContext @ 0x140728FE0
 * Callers:
 *     DifZwAlpcCreateSecurityContextWrapper @ 0x14069EA50 (DifZwAlpcCreateSecurityContextWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcCreateSecurityContext(HANDLE PortHandle, ULONG Flags, PALPC_SECURITY_ATTR SecurityAttribute)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
