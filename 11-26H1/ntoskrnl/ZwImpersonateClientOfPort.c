/*
 * XREFs of ZwImpersonateClientOfPort @ 0x1407283A0
 * Callers:
 *     DifZwImpersonateClientOfPortWrapper @ 0x1406ABF30 (DifZwImpersonateClientOfPortWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwImpersonateClientOfPort(HANDLE PortHandle, PPORT_MESSAGE Message)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
