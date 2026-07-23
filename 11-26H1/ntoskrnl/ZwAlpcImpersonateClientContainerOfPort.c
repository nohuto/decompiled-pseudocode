/*
 * XREFs of ZwAlpcImpersonateClientContainerOfPort @ 0x1407290A0
 * Callers:
 *     DifZwAlpcImpersonateClientContainerOfPortWrapper @ 0x14069ED50 (DifZwAlpcImpersonateClientContainerOfPortWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcImpersonateClientContainerOfPort(HANDLE PortHandle, PPORT_MESSAGE Message, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
