/*
 * XREFs of ZwDebugContinue @ 0x140729AA0
 * Callers:
 *     DifZwDebugContinueWrapper @ 0x1406A7690 (DifZwDebugContinueWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDebugContinue(HANDLE DebugObjectHandle, PCLIENT_ID ClientId, NTSTATUS ContinueStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DebugObjectHandle);
}
