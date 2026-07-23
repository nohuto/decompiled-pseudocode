/*
 * XREFs of ZwSetTimerResolution @ 0x14072B820
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x1404DC1EC (ExCleanTimerResolutionRequest.c)
 *     DifZwSetTimerResolutionWrapper @ 0x1406C0110 (DifZwSetTimerResolutionWrapper.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwSetTimerResolution(ULONG DesiredTime, BOOLEAN SetResolution, PULONG ActualTime)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&DesiredTime);
}
