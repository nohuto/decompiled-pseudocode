/*
 * XREFs of ZwSetSystemTime @ 0x14072B7A0
 * Callers:
 *     DifZwSetSystemTimeWrapper @ 0x1406BFB10 (DifZwSetSystemTimeWrapper.c)
 *     ExpTimeZoneInitSiloState @ 0x14083C738 (ExpTimeZoneInitSiloState.c)
 *     ExpTimeZoneWork @ 0x14083C800 (ExpTimeZoneWork.c)
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetSystemTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER PreviousTime)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SystemTime);
}
