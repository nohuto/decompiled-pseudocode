/*
 * XREFs of ZwOpenThread @ 0x14072A700
 * Callers:
 *     DifZwOpenThreadWrapper @ 0x1406B19B0 (DifZwOpenThreadWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenThread(
        PHANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PCLIENT_ID ClientId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
