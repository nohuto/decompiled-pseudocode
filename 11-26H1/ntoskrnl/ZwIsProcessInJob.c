/*
 * XREFs of ZwIsProcessInJob @ 0x1407289A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwIsProcessInJob(HANDLE ProcessHandle, HANDLE JobHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
