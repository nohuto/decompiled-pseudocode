/*
 * XREFs of ZwImpersonateThread @ 0x14069D200
 * Callers:
 *     <none>
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
