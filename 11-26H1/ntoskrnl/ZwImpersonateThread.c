/*
 * XREFs of ZwImpersonateThread @ 0x14072A080
 * Callers:
 *     DifZwImpersonateThreadWrapper @ 0x1406AC0A0 (DifZwImpersonateThreadWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwImpersonateThread(
        HANDLE ServerThreadHandle,
        HANDLE ClientThreadHandle,
        PSECURITY_QUALITY_OF_SERVICE SecurityQos)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ServerThreadHandle);
}
