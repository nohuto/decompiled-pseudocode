/*
 * XREFs of ZwAlpcCreateSecurityContext @ 0x14069C160
 * Callers:
 *     DifZwAlpcCreateSecurityContextWrapper @ 0x1406304C0 (DifZwAlpcCreateSecurityContextWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcCreateSecurityContext(HANDLE PortHandle, ULONG Flags, PALPC_SECURITY_ATTR SecurityAttribute)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
